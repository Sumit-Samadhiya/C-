// fetch('https://jsonplaceholder.typicode.com/posts') // Replace with your URL
//   .then(response => {
//     // Check if the response is successful
//     if (!response.ok) {
//       throw new Error('Network response was not ok');
//     }
//     return response.json(); // Parse the response body as JSON
//   })
//   .then(data => {
//     console.log(data); // Handle the data here
//   })
//   .catch(error => {
//     console.error('There was a problem with the fetch operation:', error);
//   });


  async function fetchData() {
    try {
      const response = await fetch('https://jsonplaceholder.typicode.com/posts');
      if (!response.ok) {
        throw new Error('Failed to fetch data');
      }
      const data = await response.json(); // Parse JSON response
      console.log(data); // Print the data to the console
    } catch (error) {
      console.error('Error:', error); // Handle and log any errors
    }
  }
  
  fetchData();