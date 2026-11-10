/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007eb130; name: FUN_007eb130
 */


void FUN_007eb130(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x720) != 0) {
    FUN_0079468c();
    lVar1 = *(long *)(param_1 + 0x720);
    if (lVar1 != 0) {
      FUN_00794604(lVar1);
      FUN_007bfaa0(lVar1);
      *(undefined8 *)(param_1 + 0x720) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_007e89e8(param_1);
  return;
}


