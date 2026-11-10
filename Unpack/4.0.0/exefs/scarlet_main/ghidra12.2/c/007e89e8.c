/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e89e8; name: FUN_007e89e8
 */


void FUN_007e89e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_018dd530(auStack_38);
  FUN_018dd4c8(param_1 + 8,auStack_38);
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


