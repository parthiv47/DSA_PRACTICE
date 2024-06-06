import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  const styles = {
    homepage: {
      background: 'linear-gradient(rgba(0, 0, 0, 0.5), rgba(0, 0, 0, 0.5)), url("path/to/your/background/image.jpg") no-repeat center center/cover',
      color: 'white',
      height: '100vh',
      display: 'flex',
      flexDirection: 'column',
    },
    header: {
      display: 'flex',
      justifyContent: 'space-between',
      padding: '20px',
      background: 'rgba(0, 0, 0, 0.5)',
    },
    logo: {
      fontSize: '24px',
      fontWeight: 'bold',
    },
    nav: {
      display: 'flex',
      alignItems: 'center',
    },
    navLink: {
      margin: '0 15px',
      color: 'white',
      textDecoration: 'none',
    },
    contactInfo: {
      textAlign: 'right',
    },
    mainContent: {
      textAlign: 'center',
      margin: 'auto',
    },
    mainHeading: {
      fontSize: '36px',
      marginBottom: '20px',
    },
    subHeading: {
      marginBottom: '40px',
    },
    buttons: {
      display: 'flex',
      justifyContent: 'center',
      gap: '20px',
    },
    button: {
      padding: '10px 20px',
      fontSize: '16px',
      border: 'none',
      cursor: 'pointer',
    },
    calculateButton: {
      backgroundColor: 'orange',
      color: 'white',
    },
    servicesButton: {
      backgroundColor: 'transparent',
      color: 'white',
      border: '1px solid white',
    },
  };

  return (
    <div style={styles.homepage}>
      <header style={styles.header}>
        <div style={styles.logo}>REFIT</div>
        <nav style={styles.nav}>
          <a href="#services" style={styles.navLink}>Services</a>
          <a href="#portfolio" style={styles.navLink}>Portfolio</a>
          <a href="#prices" style={styles.navLink}>Prices</a>
          <a href="#contacts" style={styles.navLink}>Contacts</a>
        </nav>
        <div style={styles.contactInfo}>
          <span>+123 356 653 78</span><br/>
          <span>Mon.–Sat. / 9 a.m.–9 p.m.</span>
        </div>
      </header>
      <main style={styles.mainContent}>
        <h1 style={styles.mainHeading}>Home renovation services with 5 years guarantee</h1>
        <p style={styles.subHeading}>We realise renovations of houses, flats, and offices</p>
        <div style={styles.buttons}>
          <button style={{ ...styles.button, ...styles.calculateButton }}>Calculate your project</button>
          <button style={{ ...styles.button, ...styles.servicesButton }}>Our services</button>
        </div>
      </main>
    </div>
  );
}

export default App
