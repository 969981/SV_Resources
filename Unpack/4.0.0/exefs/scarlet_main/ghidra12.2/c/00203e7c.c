/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00203e7c; name: FUN_00203e7c
 */


void FUN_00203e7c(ulong *param_1,char *param_2,char *param_3)

{
  long *plVar1;
  size_t sVar2;
  undefined1 *puVar3;
  ulong uVar4;
  
  plVar1 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar1;
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00203fac to 00203fb3 has its CatchHandler @ 00203fd0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar3 = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_00203f04;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar3 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *param_1 = uVar4 | 1;
    param_1[1] = sVar2;
    param_1[2] = (ulong)puVar3;
LAB_00203f04:
    memcpy(puVar3,param_2,sVar2);
  }
  puVar3[sVar2] = 0;
  plVar1 = (long *)FUN_01cf7e20();
  param_1[7] = (ulong)plVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00203fb4 to 00203fbb has its CatchHandler @ 00203fbc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar3 = (undefined1 *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_00203f94;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar3 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    param_1[4] = uVar4 | 1;
    param_1[5] = sVar2;
    param_1[6] = (ulong)puVar3;
  }
  memcpy(puVar3,param_3,sVar2);
LAB_00203f94:
  puVar3[sVar2] = 0;
  return;
}


