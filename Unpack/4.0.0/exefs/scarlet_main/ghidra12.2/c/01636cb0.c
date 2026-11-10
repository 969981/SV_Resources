/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01636cb0; name: FUN_01636cb0
 */


undefined1 FUN_01636cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  undefined8 uVar1;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  undefined1 local_16;
  
  local_16 = 0;
  local_28 = param_2;
  uStack_20 = param_3;
  local_18 = param_4;
  FUN_01461214();
  uVar1 = FUN_01636cec();
  FUN_01637014(uVar1,local_30,&local_28);
  return local_30[0];
}


