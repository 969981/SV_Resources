/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02988dd8; name: FUN_02988dd8
 */


undefined1 FUN_02988dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_18 = 0;
  local_30[0] = 0;
  local_28 = param_2;
  uStack_20 = param_3;
  FUN_01461214();
  uVar1 = FUN_0123fd24();
  FUN_01241994(uVar1,local_30,&local_28);
  return local_30[0];
}


