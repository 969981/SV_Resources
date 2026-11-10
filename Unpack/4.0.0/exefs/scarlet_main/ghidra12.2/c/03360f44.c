/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03360f44; name: FUN_03360f44
 */


uint FUN_03360f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0x1c) == 3) && (*(long *)(param_1 + 0x10) != 0)) {
    iVar1 = FUN_033609b8(*(long *)(param_1 + 0x10),param_2,param_3);
    uVar2 = iVar1 >> 0x1f & 0x80040200;
  }
  else {
    uVar2 = 0;
  }
  uVar3 = uVar2;
  if ((((0 < *(int *)(param_1 + 0x18)) && (*(uint *)(param_1 + 0x1c) < 6)) &&
      ((1 << (ulong)(*(uint *)(param_1 + 0x1c) & 0x1f) & 0x32U) != 0)) &&
     (*(long *)(param_1 + 0x10) != 0)) {
    iVar1 = FUN_03360f44(*(long *)(param_1 + 0x10),param_2,param_3);
    uVar3 = 0x80040200;
    if (-1 < iVar1) {
      uVar3 = uVar2;
    }
  }
  return uVar3;
}


