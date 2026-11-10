/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080aee0; name: FUN_0080aee0
 */


void FUN_0080aee0(ulong *param_1,char *param_2,char *param_3,undefined4 param_4,byte param_5)

{
  ulong uVar1;
  size_t sVar2;
  undefined1 *puVar3;
  
  uVar1 = FUN_01cf7e20();
  param_1[3] = uVar1;
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar3 = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_0080af70;
  }
  else {
    uVar1 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar3 = (undefined1 *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1,1);
    *param_1 = uVar1 | 1;
    param_1[1] = sVar2;
    param_1[2] = (ulong)puVar3;
LAB_0080af70:
    memcpy(puVar3,param_2,sVar2);
  }
  puVar3[sVar2] = 0;
  uVar1 = FUN_01cf7e20();
  param_1[7] = uVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    puVar3 = (undefined1 *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_0080affc;
  }
  else {
    uVar1 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar3 = (undefined1 *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],uVar1,1);
    param_1[4] = uVar1 | 1;
    param_1[5] = sVar2;
    param_1[6] = (ulong)puVar3;
  }
  memcpy(puVar3,param_3,sVar2);
LAB_0080affc:
  puVar3[sVar2] = 0;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(byte *)((long)param_1 + 0x44) = param_5 & 1;
  return;
}


