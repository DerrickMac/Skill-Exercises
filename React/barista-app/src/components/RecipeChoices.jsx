import React, { Component, useEffect, useState } from "react";

const RecipeChoices = ({ handleChange, label, choices, checked }) => {
    return (
      <div className="radio-buttons">
        {choices &&
          choices.map((choice) => (
            <li key={choice}>
              <input
                type="text"
                name={label}
                value={currentVal}
                placeholder="Guess the ingredient..."
                onChange={handleChange}
                className = "textbox"
              />
                {choice}
            </li>
          ))}
      </div>
    );
};

export default RecipeChoices;