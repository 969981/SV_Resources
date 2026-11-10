/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0169bc78; name: FUN_0169bc78
 */


long FUN_0169bc78(undefined8 *param_1,undefined8 param_2,char *param_3,byte param_4)

{
  int iVar1;
  byte local_1c [4];
  undefined8 local_18;
  
  if ((*param_3 == '\x01') || (*param_3 == '\0')) {
    local_18 = *(undefined8 *)(param_3 + 8);
  }
  else {
    local_18 = 0;
  }
  local_1c[0] = param_4 & 1;
  iVar1 = FUN_0169bcd8(param_2,*param_1,param_1[1],&local_18,local_1c);
  return (long)iVar1;
}


