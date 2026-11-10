/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00445b40; name: FUN_00445b40
 */


uint FUN_00445b40(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0043b720(*param_1);
  return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
}


