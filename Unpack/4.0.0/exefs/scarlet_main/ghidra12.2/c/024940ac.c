/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024940ac; name: FUN_024940ac
 */


void FUN_024940ac(undefined1 param_1 [16],long param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_3 * 0x30);
  puVar1[1] = param_1._8_8_;
  *puVar1 = param_1._0_8_;
  return;
}


