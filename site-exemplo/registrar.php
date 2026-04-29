<?php
$hostname = "localhost";
$username = "largatixa";
$password = "12345";
$dbname = "largatixa";
$usertable = "aluno";

$key_nome = $_POST["nome"];
$key_id = $_POST["id"];
$key_idade = $_POST["idade"];

$conn = mysqli_connect($hostname, $username, $password) or die("Conection lost");
mysqli_select_db($conn, $dbname);
$query = "INSERT INTO $usertable VALUES ('$key_nome', '$key_idade', '$key_id')";
$result = mysqli_query($conn, $query);
if ($result) {
    echo "ok";
}
else{
    echo "Não houve resultado";
}
?>