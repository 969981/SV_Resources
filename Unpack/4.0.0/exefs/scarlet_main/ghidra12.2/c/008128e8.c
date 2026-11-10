/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008128e8; name: FUN_008128e8
 */


void FUN_008128e8(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  FUN_0284e338(param_1);
  FUN_0284e360(param_1,uVar1);
  *(short *)(param_1 + 0x18) = (short)*(undefined4 *)(param_2 + 0xc);
  return;
}


