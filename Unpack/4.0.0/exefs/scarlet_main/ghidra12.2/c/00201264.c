/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00201264; name: FUN_00201264
 */


void FUN_00201264(ulong *param_1,char *param_2,char *param_3,char *param_4,long *param_5)

{
  long *plVar1;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  
  plVar1 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar1;
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00201440 to 00201447 has its CatchHandler @ 00201498 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar5 = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_002012f8;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar5 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *param_1 = uVar4 | 1;
    param_1[1] = sVar2;
    param_1[2] = (ulong)puVar5;
LAB_002012f8:
    memcpy(puVar5,param_2,sVar2);
  }
  puVar5[sVar2] = 0;
  plVar1 = (long *)FUN_01cf7e20();
  param_1[7] = (ulong)plVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00201448 to 0020144f has its CatchHandler @ 00201484 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar5 = (undefined1 *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_0020137c;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar5 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    param_1[4] = uVar4 | 1;
    param_1[5] = sVar2;
    param_1[6] = (ulong)puVar5;
LAB_0020137c:
    memcpy(puVar5,param_3,sVar2);
  }
  puVar5[sVar2] = 0;
  plVar1 = (long *)FUN_01cf7e20();
  param_1[0xb] = (ulong)plVar1;
  sVar2 = strlen(param_4);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00201450 to 00201457 has its CatchHandler @ 00201458 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar5 = (undefined1 *)((long)param_1 + 0x41);
    *(char *)(param_1 + 8) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_0020140c;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar5 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    param_1[8] = uVar4 | 1;
    param_1[9] = sVar2;
    param_1[10] = (ulong)puVar5;
  }
  memcpy(puVar5,param_4,sVar2);
LAB_0020140c:
  puVar5[sVar2] = 0;
  lVar3 = std::chrono::steady_clock::now();
  param_1[0xc] = lVar3 + *param_5 * 1000000000;
  return;
}


