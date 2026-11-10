/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086f540; name: FUN_0086f540
 */


undefined4 FUN_0086f540(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0x80040200;
  }
  uVar1 = FUN_02ed42dc(*(long *)(param_1 + 0x18) + 0x18,param_2 << 1);
  return uVar1;
}


