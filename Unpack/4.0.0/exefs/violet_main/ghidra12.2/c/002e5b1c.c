/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e5b1c; name: FUN_002e5b1c
 */


void FUN_002e5b1c(ulong *param_1,uint *param_2)

{
  uint uVar1;
  size_t sVar2;
  undefined1 *__dest;
  char *pcVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  
  if (*(long *)(param_2 + 4) == 0) {
    uVar1 = *param_2;
    if (0xd < uVar1) {
      uVar1 = 1;
    }
    pcVar3 = (&PTR_s_no_error_04491598)[uVar1];
    sVar2 = strlen(pcVar3);
    if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar2 < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)sVar2 << 1);
      if (sVar2 == 0) goto LAB_002e5cbc;
    }
    else {
      uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
      param_1[1] = sVar2;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar5 | 1;
    }
    memcpy(__dest,pcVar3,sVar2);
LAB_002e5cbc:
    __dest[sVar2] = 0;
    return;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uVar1 = *param_2;
  if (0xd < uVar1) {
    uVar1 = 1;
  }
  pcVar3 = (&PTR_s_no_error_04491598)[uVar1];
  sVar2 = strlen(pcVar3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 002e5cd8 to 002e5cdf has its CatchHandler @ 002e5ce8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar2 << 1));
    pvVar4 = (void *)((ulong)&local_70 | 1);
    if (sVar2 == 0) goto LAB_002e5c14;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
    local_70 = uVar5 | 1;
    local_68 = sVar2;
    local_60 = pvVar4;
  }
  memcpy(pvVar4,pcVar3,sVar2);
LAB_002e5c14:
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  if ((local_70 & 1) == 0) {
    sVar2 = local_70 >> 1 & 0x7f;
    pvVar4 = (void *)((long)&local_70 + 1);
  }
  else {
    sVar2 = local_68;
    pvVar4 = local_60;
  }
                    /* try { // try from 002e5c30 to 002e5c37 has its CatchHandler @ 002e5cec */
  FUN_0021d540(&local_58,pvVar4,sVar2);
  if ((local_70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_60);
  }
                    /* try { // try from 002e5c50 to 002e5c6f has its CatchHandler @ 002e5d24 */
  FUN_0021d540(&local_58,&DAT_03c4d655,2);
  FUN_0021d540(&local_58,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  param_1[2] = local_48;
  param_1[1] = uStack_50;
  *param_1 = local_58;
  return;
}


