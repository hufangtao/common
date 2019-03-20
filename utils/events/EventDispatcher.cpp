#if false
#include "EventDispatcher.h"

EventDispatcher::EventDispatcher(/* args */)
{
    eventMap = new std::map<std::string, std::unordered_set<EventCallBack, EventCallBackHash>*>();
}

EventDispatcher::~EventDispatcher()
{
}

void EventDispatcher::On(std::string type, EventCallBack callback)
{
    std::unordered_set<EventCallBack, EventCallBackHash>* callbackSet = nullptr;
    if(eventMap->count(type) > 0){
        callbackSet = (*eventMap)[type];
    }else{
        callbackSet = new std::unordered_set<EventCallBack, EventCallBackHash>();
        (*eventMap)[type] = callbackSet;
    }
    callbackSet->insert(callback);
}

void EventDispatcher::Off(std::string type, EventCallBack callback)
{

}

bool EventDispatcher::HasEventListener(std::string type)
{

}

void EventDispatcher::Emit(std::string type, EventCallBack callback)
{

}

#endif