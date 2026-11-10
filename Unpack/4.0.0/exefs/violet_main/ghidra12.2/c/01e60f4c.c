/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e60f4c; name: FUN_01e60f4c
 */


void FUN_01e60f4c(int *param_1,long param_2,long *param_3)

{
  int local_38 [2];
  
  *(undefined1 *)(*param_3 + param_3[2]) = 0xbc;
  param_3[2] = param_3[2] + 1;
  FUN_01e60ff0(local_38,0xbc,param_2,param_3);
  if (local_38[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = 0xbc;
    param_3[2] = param_3[2] + 1;
    FUN_01e61074(param_1,0xbc,param_2 + 0x814,param_3);
  }
  else {
    *param_1 = local_38[0];
  }
  return;
}


