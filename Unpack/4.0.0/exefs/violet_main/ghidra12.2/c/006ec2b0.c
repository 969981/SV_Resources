/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006ec2b0; name: FUN_006ec2b0
 */


void FUN_006ec2b0(long param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  byte bVar4;
  size_t sVar5;
  byte *pbVar6;
  byte local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  long *plStack_48;
  byte local_40;
  undefined7 uStack_3f;
  char *local_30;
  long *plStack_28;
  
  FUN_01f76a4c(param_1,0,0,&DAT_03c886bc);
  iVar3 = *(int *)(param_2 + 0x7c);
  if (2 < iVar3 - 1U) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 8) = iVar3;
  pbVar6 = *(byte **)(param_2 + 0x18);
  if ((*pbVar6 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  sVar5 = strlen((char *)pbVar6);
                    /* try { // try from 006ec318 to 006ec31f has its CatchHandler @ 006ec918 */
  FUN_01f77cc0(param_1 + 0x10,pbVar6,sVar5);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x78);
  pbVar6 = *(byte **)(param_2 + 0x20);
  if ((*pbVar6 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  sVar5 = strlen((char *)pbVar6);
                    /* try { // try from 006ec350 to 006ec357 has its CatchHandler @ 006ec914 */
  FUN_01f77cc0(param_1 + 0x38,pbVar6,sVar5);
  pbVar6 = *(byte **)(param_2 + 0x28);
  if ((*pbVar6 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  FUN_006fc1b0(&local_60,pbVar6);
  pcVar1 = (char *)&uStack_3f;
  if ((local_40 & 1) != 0) {
    pcVar1 = local_30;
  }
  sVar5 = strlen(pcVar1);
                    /* try { // try from 006ec3a0 to 006ec3a7 has its CatchHandler @ 006ec910 */
  FUN_01f77cc0(param_1 + 0x58,pcVar1,sVar5);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) == 0) {
    pbVar6 = *(byte **)(param_2 + 0x30);
    bVar4 = *pbVar6;
  }
  else {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
    pbVar6 = *(byte **)(param_2 + 0x30);
    bVar4 = *pbVar6;
  }
  if ((bVar4 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  FUN_006fc1b0(&local_60,pbVar6);
  pcVar1 = (char *)&uStack_3f;
  if ((local_40 & 1) != 0) {
    pcVar1 = local_30;
  }
  sVar5 = strlen(pcVar1);
                    /* try { // try from 006ec44c to 006ec453 has its CatchHandler @ 006ec90c */
  FUN_01f77cc0(param_1 + 0x78,pcVar1,sVar5);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) == 0) {
    pbVar6 = *(byte **)(param_2 + 0x38);
    bVar4 = *pbVar6;
  }
  else {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
    pbVar6 = *(byte **)(param_2 + 0x38);
    bVar4 = *pbVar6;
  }
  if ((bVar4 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  FUN_006fc1b0(&local_60,pbVar6);
  pcVar1 = (char *)&uStack_3f;
  if ((local_40 & 1) != 0) {
    pcVar1 = local_30;
  }
  sVar5 = strlen(pcVar1);
                    /* try { // try from 006ec4f8 to 006ec4ff has its CatchHandler @ 006ec908 */
  FUN_01f77cc0(param_1 + 0x98,pcVar1,sVar5);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) == 0) {
    pbVar6 = *(byte **)(param_2 + 0x40);
    bVar4 = *pbVar6;
  }
  else {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
    pbVar6 = *(byte **)(param_2 + 0x40);
    bVar4 = *pbVar6;
  }
  if ((bVar4 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  FUN_006fc1b0(&local_60,pbVar6);
  pcVar1 = (char *)&uStack_3f;
  if ((local_40 & 1) != 0) {
    pcVar1 = local_30;
  }
  sVar5 = strlen(pcVar1);
                    /* try { // try from 006ec5a4 to 006ec5ab has its CatchHandler @ 006ec904 */
  FUN_01f77cc0(param_1 + 0xb8,pcVar1,sVar5);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) == 0) {
    pbVar6 = *(byte **)(param_2 + 0x48);
    bVar4 = *pbVar6;
  }
  else {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
    pbVar6 = *(byte **)(param_2 + 0x48);
    bVar4 = *pbVar6;
  }
  if ((bVar4 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  FUN_006fc1b0(&local_60,pbVar6);
  pcVar1 = (char *)&uStack_3f;
  if ((local_40 & 1) != 0) {
    pcVar1 = local_30;
  }
  sVar5 = strlen(pcVar1);
                    /* try { // try from 006ec650 to 006ec657 has its CatchHandler @ 006ec900 */
  FUN_01f77cc0(param_1 + 0xd8,pcVar1,sVar5);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) == 0) {
    pbVar6 = *(byte **)(param_2 + 0x50);
    bVar4 = *pbVar6;
  }
  else {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
    pbVar6 = *(byte **)(param_2 + 0x50);
    bVar4 = *pbVar6;
  }
  if ((bVar4 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  FUN_006fc1b0(&local_60,pbVar6);
  pcVar1 = (char *)&uStack_3f;
  if ((local_40 & 1) != 0) {
    pcVar1 = local_30;
  }
  sVar5 = strlen(pcVar1);
                    /* try { // try from 006ec6fc to 006ec703 has its CatchHandler @ 006ec8fc */
  FUN_01f77cc0(param_1 + 0xf8,pcVar1,sVar5);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) == 0) {
    pbVar6 = *(byte **)(param_2 + 0x58);
    bVar4 = *pbVar6;
  }
  else {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
    pbVar6 = *(byte **)(param_2 + 0x58);
    bVar4 = *pbVar6;
  }
  if ((bVar4 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  FUN_006fc1b0(&local_60,pbVar6);
  pcVar1 = (char *)&uStack_3f;
  if ((local_40 & 1) != 0) {
    pcVar1 = local_30;
  }
  sVar5 = strlen(pcVar1);
                    /* try { // try from 006ec7a8 to 006ec7af has its CatchHandler @ 006ec8f8 */
  FUN_01f77cc0(param_1 + 0x118,pcVar1,sVar5);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) == 0) {
    pbVar6 = *(byte **)(param_2 + 0x60);
    bVar4 = *pbVar6;
  }
  else {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
    pbVar6 = *(byte **)(param_2 + 0x60);
    bVar4 = *pbVar6;
  }
  if ((bVar4 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  FUN_006fc1b0(&local_60,pbVar6);
  pcVar1 = (char *)&uStack_3f;
  if ((local_40 & 1) != 0) {
    pcVar1 = local_30;
  }
  sVar5 = strlen(pcVar1);
                    /* try { // try from 006ec854 to 006ec85b has its CatchHandler @ 006ec8f4 */
  FUN_01f77cc0(param_1 + 0x138,pcVar1,sVar5);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  puVar2 = PTR_DAT_047cfec0;
  if (*(undefined **)(param_2 + 0x68) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_2 + 0x68);
  }
                    /* try { // try from 006ec8b8 to 006ec8bf has its CatchHandler @ 006ec8e0 */
  FUN_00718908(&local_60,puVar2);
  *(undefined8 *)(param_1 + 0x160) = local_50;
  FUN_00718978(&local_60);
  return;
}


