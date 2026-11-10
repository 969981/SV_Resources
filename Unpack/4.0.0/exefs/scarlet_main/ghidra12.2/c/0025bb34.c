/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025bb34; name: FUN_0025bb34
 */


void FUN_0025bb34(undefined8 param_1,ulong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  size_t sVar2;
  char *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  pcVar3 = (char *)*param_3;
  plVar1 = (long *)FUN_01cf7e20();
  param_2[3] = (ulong)plVar1;
  sVar2 = strlen(pcVar3);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar4 = (undefined1 *)((long)param_2 + 1);
    *(char *)param_2 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_0025bbbc;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar4 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
    *param_2 = uVar5 | 1;
    param_2[1] = sVar2;
    param_2[2] = (ulong)puVar4;
LAB_0025bbbc:
    memcpy(puVar4,pcVar3,sVar2);
  }
  puVar4[sVar2] = 0;
  pcVar3 = (char *)*param_4;
  plVar1 = (long *)FUN_01cf7e20();
  param_2[7] = (ulong)plVar1;
  sVar2 = strlen(pcVar3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0025bc70 to 0025bc77 has its CatchHandler @ 0025bc78 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar4 = (undefined1 *)((long)param_2 + 0x21);
    *(char *)(param_2 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_0025bc50;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar4 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
    param_2[4] = uVar5 | 1;
    param_2[5] = sVar2;
    param_2[6] = (ulong)puVar4;
  }
  memcpy(puVar4,pcVar3,sVar2);
LAB_0025bc50:
  puVar4[sVar2] = 0;
  return;
}


