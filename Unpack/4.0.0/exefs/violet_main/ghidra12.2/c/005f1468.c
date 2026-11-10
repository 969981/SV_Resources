/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f1468; name: FUN_005f1468
 */


void FUN_005f1468(ulong *param_1,char *param_2,char *param_3,undefined4 param_4,undefined4 *param_5)

{
  long *plVar1;
  size_t sVar2;
  undefined1 *puVar3;
  ulong uVar4;
  
  plVar1 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar1;
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 005f15d8 to 005f15df has its CatchHandler @ 005f15fc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar3 = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_005f14fc;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar3 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *param_1 = uVar4 | 1;
    param_1[1] = sVar2;
    param_1[2] = (ulong)puVar3;
LAB_005f14fc:
    memcpy(puVar3,param_2,sVar2);
  }
  puVar3[sVar2] = 0;
  plVar1 = (long *)FUN_01cf7e20();
  param_1[7] = (ulong)plVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 005f15e0 to 005f15e7 has its CatchHandler @ 005f15e8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar3 = (undefined1 *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_005f158c;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar3 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    param_1[4] = uVar4 | 1;
    param_1[5] = sVar2;
    param_1[6] = (ulong)puVar3;
  }
  memcpy(puVar3,param_3,sVar2);
LAB_005f158c:
  puVar3[sVar2] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  uVar4 = DAT_03cb5498;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)((long)param_1 + 0x44) = *param_5;
  param_1[9] = uVar4;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}


