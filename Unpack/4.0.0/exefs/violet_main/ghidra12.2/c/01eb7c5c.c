/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb7c5c; name: FUN_01eb7c5c
 */


void FUN_01eb7c5c(undefined4 *param_1,char *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  
  cVar2 = *param_2;
  if (cVar2 < -0x40) {
    cVar2 = -0x7c;
  }
  *(char *)(*param_3 + param_3[2]) = cVar2;
  lVar1 = param_3[2];
  param_3[2] = lVar1 + 1;
  if (cVar2 == -0x7c) {
    *(char *)(*param_3 + lVar1 + 1) = *param_2;
    param_3[2] = param_3[2] + 1;
  }
  *param_1 = 0;
  return;
}


