/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c682d0; name: FUN_01c682d0
 */


void FUN_01c682d0(byte param_1)

{
  long lVar1;
  
  if ((param_1 < 2) && (lVar1 = FUN_01ea1620(), lVar1 != 0)) {
    FUN_01ea16d8((int)lVar1,param_1);
    return;
  }
  return;
}


