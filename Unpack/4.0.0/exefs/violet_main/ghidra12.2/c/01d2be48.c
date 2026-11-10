/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d2be48; name: FUN_01d2be48
 */


void FUN_01d2be48(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  undefined8 local_18;
  
  if ((*param_3 == '\0') || (*param_3 == '\x01')) {
    local_18 = *(undefined8 *)(param_3 + 8);
  }
  else {
    local_18 = 0;
  }
  FUN_01d32e7c(param_2,*param_1,param_1[1],&local_18);
  return;
}


