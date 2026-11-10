/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02984690; name: FUN_02984690
 */


undefined1 FUN_02984690(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_8 [8];
  
  local_28 = param_3;
  local_30 = FUN_014813f4();
  FUN_01461214(param_1);
  uVar1 = FUN_029846dc();
  FUN_016333f0(uVar1,local_8,&local_30);
  return local_8[0];
}


