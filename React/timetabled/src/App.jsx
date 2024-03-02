import './App.css';
import Calendar from './components/Calendar';

const App = () => {

  return (
    <div className="App">
      <h1>Your Timetable</h1>
      <h2>Take a look at your weekly schedule</h2>
      <Calendar event/>
    </div>
  )
}

export default App