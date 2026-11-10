/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb21bc; name: FUN_01eb21bc
 */


void FUN_01eb21bc(char *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  
  cVar2 = *param_1;
  if (cVar2 < -0x40) {
    cVar2 = -0x7c;
  }
  *(char *)(*param_2 + param_2[2]) = cVar2;
  lVar1 = param_2[2];
  param_2[2] = lVar1 + 1;
  if (cVar2 == -0x7c) {
    *(char *)(*param_2 + lVar1 + 1) = *param_1;
    param_2[2] = param_2[2] + 1;
  }
  FUN_019438a4(param_1 + 1);
  return;
}


