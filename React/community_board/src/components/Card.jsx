import React from "react";
import Event from "./Event";
import eventList from "../../data/eventList";

const Card = () => {
  return (
    eventList.map(event => {
      return (
        <div className="card">
          <div className="image">
            <img src={event.picture} alt={event.name} />
          </div>

          <Event
            name={event.name}
            location={event.location}
            date={event.date}
            time={event.time}
          />

          <button className="register-btn">Register</button>
        </div>
      )
    })
  )
}


export default Card;