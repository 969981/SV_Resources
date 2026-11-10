/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0187a9f0; name: FUN_0187a9f0
 */


undefined4 FUN_0187a9f0(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_0157190c(param_1,6,1);
  lVar2 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar2 - *(long *)(param_1 + 0x38)) < 6) {
    FUN_0157184c(param_1,6);
    lVar2 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x30) = lVar2 + -6;
  uVar1 = *param_2;
  *(undefined2 *)(lVar2 + -2) = *(undefined2 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + -6) = uVar1;
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar1 = FUN_015713f8(param_1,6);
  return uVar1;
}


