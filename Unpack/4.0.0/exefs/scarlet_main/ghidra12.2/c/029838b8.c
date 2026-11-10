/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029838b8; name: FUN_029838b8
 */


undefined4 FUN_029838b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined2 local_18;
  
  local_18 = 0x103;
  local_20 = param_2;
  FUN_01461214();
  uVar1 = FUN_029838f4();
  FUN_0123ecdc(uVar1,local_28,&local_20);
  return local_28[0];
}


