/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018dd1d4; name: FUN_018dd1d4
 */


void FUN_018dd1d4(long param_1)

{
  long lVar1;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_018dd220(&local_8);
  lVar1 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_0284d674(param_1 + 0x58);
  return;
}


