/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0e8ec; name: FUN_00c0e8ec
 */


undefined8 FUN_00c0e8ec(long param_1,long *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < *(int *)(param_1 + 0x10)) {
    iVar2 = *(int *)(param_1 + 0x10) - iVar1;
    if (*(int *)(param_1 + 0x14) <= iVar2) {
      iVar2 = *(int *)(param_1 + 0x14);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
    *param_2 = *(long *)(param_1 + 8) + (long)iVar1;
    *param_3 = *(undefined4 *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return uVar3;
}


