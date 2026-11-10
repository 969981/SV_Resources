/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00121b60; name: FUN_00121b60
 */


undefined8 FUN_00121b60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x100);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x100) = param_2;
  return uVar1;
}


