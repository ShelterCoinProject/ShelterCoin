
Copyright (c) 2013-2014 ShelterCoin Developers


ShelterCoin 0.3.0 BETA

Copyright (c) 2013-2014 ShelterCoin Developers
Copyright (c) 2013 NovaCoin Developers
Copyright (c) 2011-2012 Bitcoin Developers
Distributed under the MIT/X11 software license, see the accompanying
file license.txt or http://www.opensource.org/licenses/mit-license.php.
This product includes software developed by the OpenSSL Project for use in
the OpenSSL Toolkit (http://www.openssl.org/).  This product includes
cryptographic software written by Eric Young (eay@cryptsoft.com).


Intro
-----
ShelterCoin is a free open source project derived from NovaCoin, with
the goal of providing a long-term energy-efficient scrypt-based crypto-currency.
Built on the foundation of Bitcoin and NovaCoin, innovations such as proof-of-stake
help further advance the field of crypto-currency.

Setup
-----
After completing windows setup then run windows command line (cmd)
  cd daemon
  sheltercoind
You would need to create a configuration file sheltercoin.conf in the default
wallet directory. Grant access to sheltercoind.exe in anti-virus and firewall
applications if necessary.

The software automatically finds other nodes to connect to.  You can
enable Universal Plug and Play (UPnP) with your router/firewall
or forward port 13488 (TCP) to your computer so you can receive
incoming connections.  ShelterCoin works without incoming connections,
but allowing incoming connections helps the ShelterCoin network.

Upgrade
-------
All you existing coins/transactions should be intact with the upgrade.
To upgrade first backup wallet
sheltercoind backupwallet <destination_backup_file>
Then shutdown sheltercoind by
sheltercoind stop
Start up the new sheltercoind.


See the documentation/wiki at the ShelterCoin site:
  http://sheltercoin.cc/
for help and more information.

