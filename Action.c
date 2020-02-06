Action()
{

	web_add_header("X-P2P-PeerDist", 
		"Version=1.1");

	web_add_header("X-P2P-PeerDistEx", 
		"MinContentInformation=1.0, MaxContentInformation=1.0");

	web_url("blazedemo.com", 
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/img/glyphicons-halflings.png", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	lr_think_time(12);

	web_submit_form("reserve.php", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=fromPort", "Value=Portland", ENDITEM, 
		"Name=toPort", "Value=Dublin", ENDITEM, 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_submit_form("purchase.php", 
		"Ordinal=3", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		LAST);

	return 0;
}