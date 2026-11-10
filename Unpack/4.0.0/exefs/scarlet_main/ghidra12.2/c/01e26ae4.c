/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e26ae4; name: FUN_01e26ae4
 */


void FUN_01e26ae4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  *(ulong *)(param_2 + 8) = (ulong)*(byte *)(param_2 + 0x10);
  uVar1 = FUN_01e26b54();
  FUN_01e26d14(param_1,param_2,uVar1);
  return;
}


