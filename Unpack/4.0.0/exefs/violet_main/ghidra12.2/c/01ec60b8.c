/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec60b8; name: FUN_01ec60b8
 */


void FUN_01ec60b8(int *param_1,long param_2,long *param_3)

{
  char cVar1;
  int local_18 [2];
  
  FUN_01ec6138(local_18);
  if (local_18[0] == 0) {
    cVar1 = *(char *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 1;
    if (cVar1 == -0x46) {
      FUN_01ec61c4(param_1,param_2 + 0x2a,param_3);
    }
    else {
      *param_1 = 1;
    }
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


