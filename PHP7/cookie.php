<?php
setcookie('id', 32525, time() + 60 * 60 * 12, "", "", "", "");
print_r($_COOKIE);

session_start();
if (isset($_SESSION['page_count'])) {
    $_SESSION['page_count'] += 1;
} else {
    $_SESSION['page_count'] = 1;
}

echo "<br>You are visitor number" . $_SESSION['page_count'];
