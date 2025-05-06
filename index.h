body {
    font-family: Arial, sans-serif;
    background: #f9f9f9;
    text-align: center;
    margin-top: 50px;
    color: #333;
}

h1, h2 {
    color: #005f99;
}

/* Fade-in effect on page load */
.fade-in {
    animation: fadeIn 1.2s ease-in forwards;
    opacity: 0;
}

/* Slide-in form animation */
.slide-in-form {
    display: inline-block;
    text-align: left;
    animation: slideIn 1s ease-out forwards;
    transform: translateX(-50px);
    opacity: 0;
}

input, textarea {
    width: 300px;
    padding: 10px;
    margin: 10px 0;
    border-radius: 5px;
    border: 1px solid #ccc;
}

.btn {
    background-color: #007acc;
    color: white;
    padding: 10px 20px;
    text-decoration: none;
    border: none;
    border-radius: 5px;
    cursor: pointer;
    transition: background-color 0.3s ease, transform 0.2s ease;
}

.btn:hover {
    background-color: #005f99;
    transform: scale(1.05);
}

/* Animations */
@keyframes fadeIn {
    to {
        opacity: 1;
    }
}

@keyframes slideIn {
    to {
        transform: translateX(0);
        opacity: 1;
    }
}
