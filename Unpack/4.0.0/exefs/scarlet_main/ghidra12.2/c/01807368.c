/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01807368; name: FUN_01807368
 */


undefined1  [16] FUN_01807368(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_2 + 0x10);
  FUN_018073a4((long)*param_3 + (ulong)*(uint *)*param_3);
  auVar2._0_8_ = (ulong)(lVar1 != 0) << 1;
  auVar2._8_8_ = lVar1;
  return auVar2;
}


