/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f465fc; name: FUN_00f465fc
 */


void FUN_00f465fc(int *param_1,long param_2,long *param_3)

{
  int local_18 [2];
  
  FUN_00f466e0(local_18);
  if (local_18[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
    param_3[2] = param_3[2] + 1;
    FUN_00f46670(param_1,0xb9,param_2 + 0x90,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


