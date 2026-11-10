/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006eb010; name: FUN_006eb010
 */


void FUN_006eb010(long *param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  long *plVar6;
  byte *pbVar7;
  void *__dest;
  ulong uVar8;
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
  
  *param_1 = (long)(PTR_DAT_047cfc88 + 0x10);
  lVar4 = FUN_01cf7e20();
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = lVar4;
  lVar4 = FUN_01cf7e20();
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = lVar4;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((*pbVar7 & 1) == 0) {
    pbVar7 = pbVar7 + 1;
  }
  else {
    pbVar7 = *(byte **)(pbVar7 + 0x10);
  }
  FUN_006fcd80(&local_a0,pbVar7);
  pcVar1 = (char *)&uStack_7f;
  if ((local_80 & 1) != 0) {
    pcVar1 = local_70;
  }
  sVar5 = strlen(pcVar1);
                    /* try { // try from 006eb0b0 to 006eb0bb has its CatchHandler @ 006eb300 */
  FUN_01f77cc0(param_1 + 1,pcVar1,sVar5);
  pcVar1 = (char *)&uStack_5f;
  if ((local_60 & 1) != 0) {
    pcVar1 = local_50;
  }
  plVar6 = (long *)FUN_01cf7e20();
  local_a8 = plVar6;
  sVar5 = strlen(pcVar1);
  if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 006eb254 to 006eb25b has its CatchHandler @ 006eb25c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    local_c0 = CONCAT71(local_c0._1_7_,(char)((int)sVar5 << 1));
    __dest = (void *)((ulong)&local_c0 | 1);
    if (sVar5 == 0) goto LAB_006eb150;
  }
  else {
    uVar8 = sVar5 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar8,1);
    local_c0 = uVar8 | 1;
    local_b8 = sVar5;
    local_b0 = __dest;
  }
  memcpy(__dest,pcVar1,sVar5);
LAB_006eb150:
  *(undefined1 *)((long)__dest + sVar5) = 0;
                    /* try { // try from 006eb154 to 006eb15f has its CatchHandler @ 006eb2fc */
  FUN_01d0e1a8(param_1 + 5,&local_c0);
  if ((local_c0 & 1) != 0) {
    (**(code **)(*local_a8 + 0x18))(local_a8,local_b0,local_c0 & 0xfffffffffffffffe,1);
  }
  iVar3 = (uint)(*(int *)(param_2 + 0x20) == 2) << 1;
  if (*(int *)(param_2 + 0x20) == 1) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 9) = iVar3;
  puVar2 = PTR_DAT_047cbe60;
  if (*(undefined **)(param_2 + 0x18) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_2 + 0x18);
  }
  lVar4 = FUN_0025da00(puVar2);
  param_1[10] = lVar4;
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


