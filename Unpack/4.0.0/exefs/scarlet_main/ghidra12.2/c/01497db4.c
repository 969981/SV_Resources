/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01497db4; name: FUN_01497db4
 */


undefined8 FUN_01497db4(long param_1)

{
  undefined8 uVar1;
  
  if (*(short *)(param_1 + 0x8a) == 0) {
    return 0;
  }
  uVar1 = FUN_01498af4(*(undefined8 *)(param_1 + (ulong)*(byte *)(param_1 + 0x95) * 8 + 0xb8));
  return uVar1;
}


