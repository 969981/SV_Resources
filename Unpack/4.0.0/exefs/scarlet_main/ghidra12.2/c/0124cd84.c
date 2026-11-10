/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124cd84; name: FUN_0124cd84
 */


void FUN_0124cd84(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  
  bVar1 = FUN_0124cde0(param_1,*param_3,*(undefined1 *)(param_3 + 1));
  *param_2 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    FUN_0297fef4(param_1,*param_3);
    return;
  }
  return;
}


