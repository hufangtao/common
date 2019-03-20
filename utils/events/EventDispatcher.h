#ifndef EVENTDISPATCHER_H
#define EVENTDISPATCHER_H

#include <map>
#include <unordered_set>
#include <functional>
#include "google/protobuf/message.h"

#define EventCallBack std::function< void(std::string, google::protobuf::Message* ) >

class EventCallBackHash{
    public:
    std::size_t operator()(const EventCallBack& callback) const{
        return std::hash<std::string>()(callback.target_type().name());
    }
};

class EventDispatcher
{
private:
    /* data */
    std::map<std::string, std::unordered_set<EventCallBack, EventCallBackHash>* >* eventMap;

public:
    EventDispatcher(/* args */);
    ~EventDispatcher();


    void On(std::string type, EventCallBack callback);
    void Off(std::string type, EventCallBack callback);
    bool HasEventListener(std::string type);
    void Emit(std::string type, EventCallBack callback);
};

#endif