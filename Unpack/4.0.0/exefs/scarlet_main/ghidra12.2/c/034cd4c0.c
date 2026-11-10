/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034cd4c0; name: FUN_034cd4c0
 */


undefined8 FUN_034cd4c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x70);
  if (lVar1 == 0) {
    return 2;
  }
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  *(long *)(param_1 + 8) = param_2;
  return 1;
}


