/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0144ed48; name: FUN_0144ed48
 */


int FUN_0144ed48(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x19);
  if (*(byte *)(param_1 + 0x19) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 != 0xff) {
      uVar1 = uVar1 - *(int *)(param_1 + 0x10);
    }
  }
  return uVar1 + *(int *)(param_1 + 0x10);
}


