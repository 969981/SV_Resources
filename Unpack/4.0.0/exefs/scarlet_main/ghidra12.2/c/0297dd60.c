/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297dd60; name: FUN_0297dd60
 */


undefined1 FUN_0297dd60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined2 local_18;
  
  local_18 = 0x100;
  local_20 = param_2;
  FUN_01461214();
  uVar1 = FUN_0297e238();
  FUN_0297e240(uVar1,local_28,&local_20);
  return local_28[0];
}


