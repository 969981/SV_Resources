/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b0c834; name: FUN_01b0c834
 */


long FUN_01b0c834(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  local_18[0] = param_4;
  local_14[0] = param_3;
  iVar1 = FUN_01b0d8dc(param_2,*param_1,param_1[1],local_14,local_18);
  return (long)iVar1;
}


