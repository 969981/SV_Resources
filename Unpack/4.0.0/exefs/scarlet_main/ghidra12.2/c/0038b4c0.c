/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038b4c0; name: FUN_0038b4c0
 */


undefined1  [16] FUN_0038b4c0(long *param_1)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = *(undefined4 **)(*(long *)(*param_1 + 0x18) + param_1[1] * 0x18);
  auVar2._0_8_ = puVar1 + 1;
  auVar2._8_4_ = *puVar1;
  auVar2._12_4_ = 0;
  return auVar2;
}


