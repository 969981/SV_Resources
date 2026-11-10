/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024da10; name: FUN_0024da10
 */


uint FUN_0024da10(uint param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  char *pcVar8;
  void *pvVar9;
  uint uVar10;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long *local_48;
  
  pcVar8 = *(char **)PTR_PTR_047cbc98;
  plVar2 = (long *)FUN_01cf7e20();
  local_48 = plVar2;
  sVar3 = strlen(pcVar8);
  if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 0024dc80 to 0024dc87 has its CatchHandler @ 0024dc94 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar3 << 1));
    pvVar9 = (void *)((ulong)&local_60 | 1);
    if (sVar3 != 0) goto LAB_0024daa8;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar9 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar6,1);
    local_60 = uVar6 | 1;
    local_58 = sVar3;
    local_50 = pvVar9;
LAB_0024daa8:
    memcpy(pvVar9,pcVar8,sVar3);
  }
  *(undefined1 *)((long)pvVar9 + sVar3) = 0;
                    /* try { // try from 0024dabc to 0024dac7 has its CatchHandler @ 0024dca0 */
  lVar4 = FUN_01f785ec(param_2,&local_60);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  if (param_2 + 8 != lVar4) {
    if ((*(byte *)(lVar4 + 0x40) & 1) == 0) {
      if (*(byte *)(lVar4 + 0x40) < 2) {
        return 0;
      }
      puVar7 = (uint *)(lVar4 + 0x41);
    }
    else {
      if (*(long *)(lVar4 + 0x48) == 0) {
        return 0;
      }
      puVar7 = *(uint **)(lVar4 + 0x50);
    }
    return *puVar7;
  }
  if (param_1 < 0x11) {
    uVar10 = *(uint *)(&DAT_03cc70f4 + (long)(int)param_1 * 4);
  }
  else {
    uVar10 = 0x30141;
  }
  pcVar8 = *(char **)PTR_PTR_047cc170;
  plVar2 = (long *)FUN_01cf7e20();
  local_48 = plVar2;
  sVar3 = strlen(pcVar8);
  if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 0024dc88 to 0024dc8f has its CatchHandler @ 0024dc90 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar3 << 1));
    pvVar9 = (void *)((ulong)&local_60 | 1);
    if (sVar3 == 0) goto LAB_0024dbe0;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar9 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar6,1);
    local_60 = uVar6 | 1;
    local_58 = sVar3;
    local_50 = pvVar9;
  }
  memcpy(pvVar9,pcVar8,sVar3);
LAB_0024dbe0:
  *(undefined1 *)((long)pvVar9 + sVar3) = 0;
                    /* try { // try from 0024dbe4 to 0024dbef has its CatchHandler @ 0024dc9c */
  lVar5 = FUN_01f785ec(param_2,&local_60);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  if (lVar4 != lVar5) {
    if ((*(byte *)(lVar5 + 0x40) & 1) == 0) {
      pcVar8 = (char *)(lVar5 + 0x41);
    }
    else {
      pcVar8 = *(char **)(lVar5 + 0x50);
    }
    uVar6 = strtoul(pcVar8,(char **)0x0,10);
    iVar1 = 0;
    if (uVar6 < 0x100) {
      iVar1 = (int)uVar6 << 9;
    }
    uVar10 = iVar1 + uVar10 & 0xfffffe00 | uVar10 & 0x141;
  }
  return uVar10;
}


