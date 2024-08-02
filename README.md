# Ballz-Out
Lesovoz style keyboard that fits a Hubris case that has a trackball or trackpad option &amp; EVQ roller encoder. ~~Closed Source.~~ 

Open sourced except my custom designed trackball holder which I spend a lot of time designing it which I will only upload as STL.
I will only upload gerber files since I use EasyEDA to design so converting to pcb file will cause the file to be inaccurate.

Hubris case file you can find in Rain's repo which I don't have the link with right now. No mods on the Hubris case.

Custom switch plate will need to be printed in order to secure the Ballz Out PCB.

No more Group Buys.

Ballz Out is compatible with the following existing cases:

-Campsite

-Campsite+Coriander

-Hubris

-Pomelo

-Carpool

-Barca

-Coriander

~~Currently the PCB is being printed by JLCPCB and will be tested.~~ PCB tested and working after long delay from faulty RP2040 chip. ~~Mini Group/Interest Check will start after Discord channel has been approved in the 40% channel.~~ The channel name is "ballz-out".  I will tweak the switch a little bit to adjust for the EVQ encoder and necessary spacing for the trackball and trackpad. I will have to build another prototype since my only working prototype was sold to my donor. 2nd prototype almost ready. Waiting for the bottom late but everything is working.

To Do:

-Plant to add extra tabs on the switch plate for more case compatibility.

~~-Parse and integrate the working QMK Ieneko42c source code into the Ballz Out. Source files are located in Temp Dump folder for this repo https://github.com/protieusz/Ballz-Out/tree/main/Temp%20Dump.~~
Trackpad code is borrowed from Darakuneko and the only modification I did for the QMK is to replace his matrix layout with mine. The rest are the same.

As for the trackball QMK code, I borrowed from aki27's code and the same thing, matrix was modded and some VIAL statements was removed or else it will not compliled. No real support for QMK will be giving. It is best to ask the QMK discord channel for any specifics to QMK coding.

Working Prototype:

![IMG_1650](https://github.com/protieusz/Ballz-Out/assets/118025702/32779549-f539-49be-83ae-a4ec2f79cf23)
![IMG_1651](https://github.com/protieusz/Ballz-Out/assets/118025702/cf03f009-7ebf-4c02-b558-e295ed6efd3a)
![IMG_1814](https://github.com/protieusz/Ballz-Out/assets/118025702/9abd7f5a-b4e9-4d8a-ad41-53076c739817)
![IMG_1813](https://github.com/protieusz/Ballz-Out/assets/118025702/badf661d-647a-4999-970f-3485a686419b)
![IMG_1812](https://github.com/protieusz/Ballz-Out/assets/118025702/6539ae16-083b-4210-bdff-edde115fea35)
![IMG_1811](https://github.com/protieusz/Ballz-Out/assets/118025702/ff49e702-946b-4144-8ba3-b1c72922cf55)
![IMG_1800](https://github.com/protieusz/Ballz-Out/assets/118025702/b048941f-f3cc-4f89-a0d9-9518c01ff4dd)
![IMG_1799](https://github.com/protieusz/Ballz-Out/assets/118025702/76598653-a8f1-44dc-ab74-d8b18aa23081)
![IMG_1798](https://github.com/protieusz/Ballz-Out/assets/118025702/2648f0c2-966c-451c-89ea-9bdf3757208a)
![IMG_1797](https://github.com/protieusz/Ballz-Out/assets/118025702/fb5c6672-7866-4884-8068-8f194dfb0a31)
![IMG_1796](https://github.com/protieusz/Ballz-Out/assets/118025702/f324cb69-407f-4f80-a55c-947bc568d4da)
![IMG_1794](https://github.com/protieusz/Ballz-Out/assets/118025702/a1a0d8a8-0a6b-412b-b366-6008da15d6df)
![IMG_1793](https://github.com/protieusz/Ballz-Out/assets/118025702/ccf52850-eba1-4089-849d-cc08ec9a9382)
![IMG_1792](https://github.com/protieusz/Ballz-Out/assets/118025702/aa1fb60d-d894-4544-bd7f-70c27e73d4aa)
![IMG_1791](https://github.com/protieusz/Ballz-Out/assets/118025702/448a6c9e-99f6-4308-87b9-e1879f923fc7)
![IMG_1772](https://github.com/protieusz/Ballz-Out/assets/118025702/22b20402-eb0c-42f5-a29a-e28e664eda50)
![IMG_1771](https://github.com/protieusz/Ballz-Out/assets/118025702/c47d2318-8af5-478e-82ef-4da1adafdf78)
![IMG_1672](https://github.com/protieusz/Ballz-Out/assets/118025702/df1fc1af-48cf-44ab-a335-4eb25d608196)
![IMG_1653](https://github.com/protieusz/Ballz-Out/assets/118025702/c939ecd1-be98-439d-94f7-f6b7347615f8)
![IMG_1655](https://github.com/protieusz/Ballz-Out/assets/118025702/b59ce32c-25e9-4a77-9a56-1f6c9d5ea539)
![IMG_1648](https://github.com/protieusz/Ballz-Out/assets/118025702/411ffaa2-b5ae-4819-b4b3-ac4e406c8abc)
![IMG_1652](https://github.com/protieusz/Ballz-Out/assets/118025702/050c3853-9f9c-4616-8215-1fa2860b9968)

Wire Bodgle For Fault GPIO Pin For A Column:

![IMG_1668](https://github.com/protieusz/Ballz-Out/assets/118025702/0a4f4543-5440-49e6-8e85-1129ad16716f)
![Photo on 2024-03-22 at 4 39 PM](https://github.com/protieusz/Ballz-Out/assets/118025702/f9da303f-1288-4dd2-a167-6f9fc58b95d1)
![IMG_1632](https://github.com/protieusz/Ballz-Out/assets/118025702/f33e5492-967f-4525-be48-31630afc528c)
![IMG_1631](https://github.com/protieusz/Ballz-Out/assets/118025702/7ecd355c-7ea3-4f66-98f6-2318eba78236)
![IMG_1633](https://github.com/protieusz/Ballz-Out/assets/118025702/39764262-fc08-4bee-bba8-89ffc3d65393)
![IMG_1634](https://github.com/protieusz/Ballz-Out/assets/118025702/446da990-b034-48ca-b546-7007bbb61848)
![IMG_1635](https://github.com/protieusz/Ballz-Out/assets/118025702/f74bda77-2523-40b1-9912-03759be2a50d)
![IMG_1644](https://github.com/protieusz/Ballz-Out/assets/118025702/acc139de-b13a-4b46-bb60-832bef5334da)
![IMG_1645](https://github.com/protieusz/Ballz-Out/assets/118025702/2358186b-e90f-4490-89a9-236421a3ccc1)
![IMG_1640](https://github.com/protieusz/Ballz-Out/assets/118025702/04f0988f-8383-4241-a041-ac87b3f946dd)
![IMG_1639](https://github.com/protieusz/Ballz-Out/assets/118025702/de55daf1-0eee-405a-8a79-cfdf083abb53)
![IMG_1637](https://github.com/protieusz/Ballz-Out/assets/118025702/34dd5bb1-5035-4016-97f4-c2ff5b879dfe)
![IMG_1638](https://github.com/protieusz/Ballz-Out/assets/118025702/34eacc8c-d2e1-4db7-95b5-59634fdc7648)
![IMG_1647](https://github.com/protieusz/Ballz-Out/assets/118025702/6f776c4d-bcb6-4b44-bf32-20350e4fe21e)
![IMG_1646](https://github.com/protieusz/Ballz-Out/assets/118025702/b80c30f8-9010-4360-b027-f14dab55752b)
![IMG_1630](https://github.com/protieusz/Ballz-Out/assets/118025702/cdee2701-13ce-4655-9404-482148cf224d)


Keycaps Test Fit:
![IMG_1301](https://github.com/protieusz/Ballz-Out/assets/118025702/bacbc90f-e1cc-4e21-8ffa-28cb20a52bc3)

Fusion360 Render:
PMW3360 Trackball 25mm or 34mm Option (Rev 1):
![Screenshot_2024-02-10_at_8 09 13_PM](https://github.com/protieusz/Ballz-Out/assets/118025702/fe92e8e0-9049-476c-9f06-80e3f1eec463)

Azoteq 65mm Trackpad Option (Will update holes in the pcb for Rev 2):
![Screenshot 2024-02-16 at 2 21 30 PM](https://github.com/protieusz/Ballz-Out/assets/118025702/6c5ab7b0-dd8e-4585-ac55-fddb323556e9)
![Screenshot 2024-02-16 at 2 26 19 PM](https://github.com/protieusz/Ballz-Out/assets/118025702/b44fde47-bf9f-4f38-9682-bb7266888b7d)
![Screenshot 2024-02-16 at 2 48 38 PM](https://github.com/protieusz/Ballz-Out/assets/118025702/a7b2fbdd-ff51-4fa1-879b-42811fc7c0d5)

Azoteq 43mm Trackpad Option (Rev 1):
![Screenshot 2024-02-15 at 4 02 42 PM](https://github.com/protieusz/Ballz-Out/assets/118025702/0e538794-eb53-4cb7-a64f-9023dce7c48b)
![Screenshot_2024-02-11_at_9 34 55_AM](https://github.com/protieusz/Ballz-Out/assets/118025702/d3e99c8f-680d-4f5f-8e0f-143cf2533b4a)
![Screenshot_2024-02-09_at_5 31 40_PM](https://github.com/protieusz/Ballz-Out/assets/118025702/076e73bc-e690-4911-bd33-ddfa665fd289)
Finalized Switch Plate
![Screenshot_2024-02-13_at_12 13 51_PM](https://github.com/protieusz/Ballz-Out/assets/118025702/86dd53f0-d727-44ac-b7d2-4d87e77ccaf2)

![Screenshot 2024-02-12 at 2 20 39 PM](https://github.com/protieusz/Ballz-Out/assets/118025702/4b9ae559-9d78-4be6-8e31-c78eb86e725c)
![Screenshot 2024-02-12 at 2 20 53 PM](https://github.com/protieusz/Ballz-Out/assets/118025702/d5c51d1e-fef9-4cc8-a82d-ce4e52b62f9b)
![Screenshot 2024-02-12 at 2 21 07 PM](https://github.com/protieusz/Ballz-Out/assets/118025702/6b3092fd-bca5-45f2-8c52-fb422e54180a)
![Screenshot 2024-02-12 at 2 21 23 PM](https://github.com/protieusz/Ballz-Out/assets/118025702/65317684-42ec-42ef-abf8-a8250d710944)
![Screenshot 2024-02-12 at 2 21 48 PM](https://github.com/protieusz/Ballz-Out/assets/118025702/4ee158a7-02da-4bf0-bb80-0734f6e5903e)
![Screenshot 2024-02-12 at 2 22 00 PM](https://github.com/protieusz/Ballz-Out/assets/118025702/7df2f1e4-7759-47ee-b9fb-5aecf03cfbf5)

# License

MIT licensed.
