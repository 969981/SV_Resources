/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079c0a0; name: FUN_0079c0a0
 */


undefined8 FUN_0079c0a0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00796784(param_1 + 0xb8);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00796784(param_1 + 0x98);
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_007967e8(param_1 + 0x98,param_1 + 0xb8);
      return uVar2;
    }
  }
  return 0;
}


