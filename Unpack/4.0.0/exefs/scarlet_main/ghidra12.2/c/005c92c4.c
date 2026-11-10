/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005c92c4; name: FUN_005c92c4
 */


void FUN_005c92c4(ulong *param_1,char *param_2,char *param_3,undefined4 param_4,ulong param_5,
                 ulong param_6,char *param_7,char *param_8,char *param_9)

{
  long *plVar1;
  size_t sVar2;
  ulong uVar3;
  undefined1 *puVar4;
  
  plVar1 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar1;
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 005c95b0 to 005c95b7 has its CatchHandler @ 005c96ac */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar4 = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_005c9368;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar4 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *param_1 = uVar3 | 1;
    param_1[1] = sVar2;
    param_1[2] = (ulong)puVar4;
LAB_005c9368:
    memcpy(puVar4,param_2,sVar2);
  }
  puVar4[sVar2] = 0;
  plVar1 = (long *)FUN_01cf7e20();
  param_1[7] = (ulong)plVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 005c95b8 to 005c95bf has its CatchHandler @ 005c9698 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar4 = (undefined1 *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_005c93ec;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar4 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    param_1[4] = uVar3 | 1;
    param_1[5] = sVar2;
    param_1[6] = (ulong)puVar4;
LAB_005c93ec:
    memcpy(puVar4,param_3,sVar2);
  }
  puVar4[sVar2] = 0;
  *(undefined4 *)(param_1 + 8) = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  plVar1 = (long *)FUN_01cf7e20();
  param_1[0xe] = (ulong)plVar1;
  sVar2 = strlen(param_7);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 005c95c0 to 005c95c7 has its CatchHandler @ 005c9660 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar4 = (undefined1 *)((long)param_1 + 0x59);
    *(char *)(param_1 + 0xb) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_005c9478;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar4 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    param_1[0xb] = uVar3 | 1;
    param_1[0xc] = sVar2;
    param_1[0xd] = (ulong)puVar4;
LAB_005c9478:
    memcpy(puVar4,param_7,sVar2);
  }
  puVar4[sVar2] = 0;
  plVar1 = (long *)FUN_01cf7e20();
  param_1[0x12] = (ulong)plVar1;
  sVar2 = strlen(param_8);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 005c95c8 to 005c95cf has its CatchHandler @ 005c962c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar4 = (undefined1 *)((long)param_1 + 0x79);
    *(char *)(param_1 + 0xf) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_005c9500;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar4 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    param_1[0xf] = uVar3 | 1;
    param_1[0x10] = sVar2;
    param_1[0x11] = (ulong)puVar4;
LAB_005c9500:
    memcpy(puVar4,param_8,sVar2);
  }
  puVar4[sVar2] = 0;
  plVar1 = (long *)FUN_01cf7e20();
  param_1[0x16] = (ulong)plVar1;
  sVar2 = strlen(param_9);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 005c95d0 to 005c95d7 has its CatchHandler @ 005c95d8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar4 = (undefined1 *)((long)param_1 + 0x99);
    *(char *)(param_1 + 0x13) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_005c9590;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar4 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    param_1[0x13] = uVar3 | 1;
    param_1[0x14] = sVar2;
    param_1[0x15] = (ulong)puVar4;
  }
  memcpy(puVar4,param_9,sVar2);
LAB_005c9590:
  puVar4[sVar2] = 0;
  return;
}


