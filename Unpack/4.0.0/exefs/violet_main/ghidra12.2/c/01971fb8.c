/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01971fb8; name: FUN_01971fb8
 */


void FUN_01971fb8(int *param_1,long param_2,long *param_3)

{
  char cVar1;
  int local_18 [2];
  
  FUN_01972038(local_18);
  if (local_18[0] == 0) {
    cVar1 = *(char *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 1;
    if (cVar1 == -0x44) {
      FUN_0197226c(param_1,param_2 + 0xc,param_3);
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


