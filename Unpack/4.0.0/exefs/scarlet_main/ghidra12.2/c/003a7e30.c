/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a7e30; name: FUN_003a7e30
 */


undefined8 FUN_003a7e30(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN_003f40c0(*(undefined8 *)(param_1 + 0x520),*(undefined8 *)(param_2 + 0x20),
                       *(int *)(param_2 + 8) + 0x400,*(undefined8 *)(param_2 + 0x28));
  if ((int)uVar1 < 0) {
    return 0;
  }
  *(ulong *)(param_2 + 8) = (ulong)uVar1;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x20);
  return 1;
}


