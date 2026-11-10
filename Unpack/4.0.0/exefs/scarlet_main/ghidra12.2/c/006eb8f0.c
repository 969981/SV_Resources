/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006eb8f0; name: FUN_006eb8f0
 */


void FUN_006eb8f0(long param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  void *__dest;
  ulong local_c0;
  size_t local_b8;
  void *local_b0;
  long *local_a8;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  long *plStack_88;
  byte local_80;
  undefined7 uStack_7f;
  char *local_70;
  long *plStack_68;
  byte local_60;
  undefined7 uStack_5f;
  char *local_50;
  long *plStack_48;
  
  FUN_01f72c6c(param_1,0,&DAT_03c886bc,&DAT_03c886bc);
  pbVar10 = *(byte **)(param_2 + 0x10);
  if ((*pbVar10 & 1) == 0) {
    pbVar10 = pbVar10 + 1;
  }
  else {
    pbVar10 = *(byte **)(pbVar10 + 0x10);
  }
  FUN_006fd4e0(&local_a0,pbVar10);
  pcVar1 = (char *)&uStack_7f;
  if ((local_80 & 1) != 0) {
    pcVar1 = local_70;
  }
  sVar5 = strlen(pcVar1);
                    /* try { // try from 006eb96c to 006eb973 has its CatchHandler @ 006ebc84 */
  FUN_01f77cc0(param_1 + 8,pcVar1,sVar5);
  pcVar1 = (char *)&uStack_5f;
  if ((local_60 & 1) != 0) {
    pcVar1 = local_50;
  }
  plVar6 = (long *)FUN_01cf7e20();
  local_a8 = plVar6;
  sVar5 = strlen(pcVar1);
  if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 006ebbd4 to 006ebbdb has its CatchHandler @ 006ebbdc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    local_c0 = CONCAT71(local_c0._1_7_,(char)((int)sVar5 << 1));
    __dest = (void *)((ulong)&local_c0 | 1);
    if (sVar5 == 0) goto LAB_006eba08;
  }
  else {
    uVar9 = sVar5 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar9,1);
    local_c0 = uVar9 | 1;
    local_b8 = sVar5;
    local_b0 = __dest;
  }
  memcpy(__dest,pcVar1,sVar5);
LAB_006eba08:
  *(undefined1 *)((long)__dest + sVar5) = 0;
                    /* try { // try from 006eba10 to 006eba17 has its CatchHandler @ 006ebc80 */
  FUN_01d0e1a8(param_1 + 0x28,&local_c0);
  if ((local_c0 & 1) != 0) {
    (**(code **)(*local_a8 + 0x18))(local_a8,local_b0,local_c0 & 0xfffffffffffffffe,1);
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x58);
  pbVar10 = *(byte **)(param_2 + 0x20);
  if ((*pbVar10 & 1) == 0) {
    pbVar10 = pbVar10 + 1;
  }
  else {
    pbVar10 = *(byte **)(pbVar10 + 0x10);
  }
  sVar5 = strlen((char *)pbVar10);
                    /* try { // try from 006eba6c to 006eba73 has its CatchHandler @ 006ebc7c */
  FUN_01f77cc0(param_1 + 0x70,pbVar10,sVar5);
  pbVar10 = *(byte **)(param_2 + 0x28);
  if ((*pbVar10 & 1) == 0) {
    pbVar8 = pbVar10 + 1;
    uVar9 = (ulong)(*pbVar10 >> 1);
  }
  else {
    uVar9 = *(ulong *)(pbVar10 + 8);
    pbVar8 = *(byte **)(pbVar10 + 0x10);
  }
  FUN_01f7545c(param_1,pbVar8,uVar9);
  iVar4 = *(int *)(param_2 + 0x5c);
  if (4 < iVar4 - 1U) {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0xb0) = iVar4;
  puVar3 = PTR_DAT_047cbe60;
  puVar2 = PTR_DAT_047cbe60;
  if (*(undefined **)(param_2 + 0x30) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_2 + 0x30);
  }
  uVar7 = FUN_0025da00(puVar2);
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  puVar2 = puVar3;
  if (*(undefined **)(param_2 + 0x38) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_2 + 0x38);
  }
  uVar7 = FUN_0025da00(puVar2);
  *(undefined8 *)(param_1 + 0xc0) = uVar7;
  puVar2 = puVar3;
  if (*(undefined **)(param_2 + 0x40) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_2 + 0x40);
  }
  uVar7 = FUN_0025da00(puVar2);
  *(undefined8 *)(param_1 + 200) = uVar7;
  puVar2 = puVar3;
  if (*(undefined **)(param_2 + 0x48) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_2 + 0x48);
  }
  uVar7 = FUN_0025da00(puVar2);
  *(undefined8 *)(param_1 + 0xd0) = uVar7;
  if (*(undefined **)(param_2 + 0x50) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_2 + 0x50);
  }
  uVar7 = FUN_0025da00(puVar3);
  *(undefined8 *)(param_1 + 0xd8) = uVar7;
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0x60);
  uVar7 = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0xe4) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0xf4) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x104) = uVar7;
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) != 0) {
    (**(code **)(*plStack_88 + 0x18))
              (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
  }
  return;
}


