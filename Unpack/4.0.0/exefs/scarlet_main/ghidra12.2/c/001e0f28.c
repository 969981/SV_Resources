/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e0f28; name: FUN_001e0f28
 */


undefined8 FUN_001e0f28(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x1138) == 0) {
    lVar1 = FUN_001ec2f8(*(undefined8 *)(param_1 + 0xc18));
    *(long *)(param_1 + 0x1138) = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
  }
  return 0;
}


