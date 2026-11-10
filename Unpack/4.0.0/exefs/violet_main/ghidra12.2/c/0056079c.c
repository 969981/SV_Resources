/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056079c; name: FUN_0056079c
 */


void FUN_0056079c(byte *param_1,byte param_2,char *param_3,char *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,char *param_8)

{
  long *plVar1;
  size_t sVar2;
  ulong uVar3;
  byte *pbVar4;
  
  *param_1 = param_2 & 1;
  plVar1 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x20) = plVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00560984 to 0056098b has its CatchHandler @ 005609dc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pbVar4 = param_1 + 9;
    param_1[8] = (byte)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_00560848;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pbVar4 = (byte *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 8) = uVar3 | 1;
    *(size_t *)(param_1 + 0x10) = sVar2;
    *(byte **)(param_1 + 0x18) = pbVar4;
LAB_00560848:
    memcpy(pbVar4,param_3,sVar2);
  }
  pbVar4[sVar2] = 0;
  plVar1 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x40) = plVar1;
  sVar2 = strlen(param_4);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0056098c to 00560993 has its CatchHandler @ 005609c8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pbVar4 = param_1 + 0x29;
    param_1[0x28] = (byte)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_005608cc;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pbVar4 = (byte *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 0x28) = uVar3 | 1;
    *(size_t *)(param_1 + 0x30) = sVar2;
    *(byte **)(param_1 + 0x38) = pbVar4;
LAB_005608cc:
    memcpy(pbVar4,param_4,sVar2);
  }
  pbVar4[sVar2] = 0;
  *(undefined4 *)(param_1 + 0x48) = param_5;
  *(undefined4 *)(param_1 + 0x4c) = param_6;
  *(undefined4 *)(param_1 + 0x50) = param_7;
  plVar1 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x70) = plVar1;
  sVar2 = strlen(param_8);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00560994 to 0056099b has its CatchHandler @ 0056099c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pbVar4 = param_1 + 0x59;
    param_1[0x58] = (byte)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_00560964;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pbVar4 = (byte *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 0x58) = uVar3 | 1;
    *(size_t *)(param_1 + 0x60) = sVar2;
    *(byte **)(param_1 + 0x68) = pbVar4;
  }
  memcpy(pbVar4,param_8,sVar2);
LAB_00560964:
  pbVar4[sVar2] = 0;
  return;
}


