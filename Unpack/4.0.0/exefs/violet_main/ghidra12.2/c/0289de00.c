/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289de00; name: FUN_0289de00
 */


void FUN_0289de00(char *param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  
  cVar1 = *param_1;
  cVar2 = cVar1;
  if (cVar1 < '\0') {
    cVar2 = -0x80;
  }
  *(char *)(*param_2 + param_2[2]) = cVar2;
  lVar3 = param_2[2] + 1;
  param_2[2] = lVar3;
  if (cVar1 < '\0') {
    *(char *)(*param_2 + lVar3) = *param_1;
    lVar3 = param_2[2] + 1;
    param_2[2] = lVar3;
  }
  *(undefined1 *)(*param_2 + lVar3) = 0xb9;
  param_2[2] = param_2[2] + 1;
  FUN_00f46670(0xb9,param_1 + 8);
  return;
}


