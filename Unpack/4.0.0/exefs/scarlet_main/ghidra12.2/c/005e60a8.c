/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005e60a8; name: FUN_005e60a8
 */


void FUN_005e60a8(undefined8 param_1,ulong *param_2,undefined8 *param_3,undefined2 *param_4,
                 undefined4 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  undefined2 uVar2;
  long *plVar3;
  size_t sVar4;
  char *__s;
  char *__s_00;
  undefined1 *puVar5;
  ulong uVar6;
  
  __s_00 = (char *)*param_3;
  uVar2 = *param_4;
  uVar1 = *param_5;
  __s = (char *)*param_6;
  plVar3 = (long *)FUN_01cf7e20();
  param_2[3] = (ulong)plVar3;
  sVar4 = strlen(__s_00);
  if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 005e61f0 to 005e61f7 has its CatchHandler @ 005e6214 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    puVar5 = (undefined1 *)((long)param_2 + 1);
    *(char *)param_2 = (char)((int)sVar4 << 1);
    if (sVar4 != 0) goto LAB_005e613c;
  }
  else {
    uVar6 = sVar4 + 0x10 & 0xfffffffffffffff0;
    puVar5 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar6,1);
    *param_2 = uVar6 | 1;
    param_2[1] = sVar4;
    param_2[2] = (ulong)puVar5;
LAB_005e613c:
    memcpy(puVar5,__s_00,sVar4);
  }
  puVar5[sVar4] = 0;
  *(undefined2 *)(param_2 + 4) = uVar2;
  *(undefined4 *)((long)param_2 + 0x24) = uVar1;
  plVar3 = (long *)FUN_01cf7e20();
  param_2[8] = (ulong)plVar3;
  sVar4 = strlen(__s);
  if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 005e61f8 to 005e61ff has its CatchHandler @ 005e6200 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    puVar5 = (undefined1 *)((long)param_2 + 0x29);
    *(char *)(param_2 + 5) = (char)((int)sVar4 << 1);
    if (sVar4 == 0) goto LAB_005e61d4;
  }
  else {
    uVar6 = sVar4 + 0x10 & 0xfffffffffffffff0;
    puVar5 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar6,1);
    param_2[5] = uVar6 | 1;
    param_2[6] = sVar4;
    param_2[7] = (ulong)puVar5;
  }
  memcpy(puVar5,__s,sVar4);
LAB_005e61d4:
  puVar5[sVar4] = 0;
  return;
}


