import React from "react";

const Event = ({ name, location, date, time }) => {
    return (
        <tr className={'Event'}>
            <h2>{name}</h2>
            <p>{location}</p>
            <p>{date} @ {time}</p>
        </tr>
    )
}

export default Event;