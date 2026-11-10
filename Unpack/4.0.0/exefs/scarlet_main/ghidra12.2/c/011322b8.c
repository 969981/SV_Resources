/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011322b8; name: FUN_011322b8
 */


undefined8 FUN_011322b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0xe8);
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined8 *)(lVar1 + 0x48);
}


