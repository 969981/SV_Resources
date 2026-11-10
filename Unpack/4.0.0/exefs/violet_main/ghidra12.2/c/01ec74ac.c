/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec74ac; name: FUN_01ec74ac
 */


void FUN_01ec74ac(int *param_1,long param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  undefined8 local_38;
  int local_18 [2];
  
  local_38 = 3;
  FUN_0111b0ac(local_18,&local_38,param_3);
  if (local_18[0] == 0) {
    FUN_01ec7584(&local_38,param_2,param_3);
    if ((int)local_38 == 0) {
      cVar1 = *(char *)(param_2 + 2);
      cVar2 = cVar1;
      if (cVar1 < '\0') {
        cVar2 = -0x80;
      }
      *(char *)(*param_3 + param_3[2]) = cVar2;
      lVar3 = param_3[2];
      param_3[2] = lVar3 + 1;
      if (cVar1 < '\0') {
        *(undefined1 *)(*param_3 + lVar3 + 1) = *(undefined1 *)(param_2 + 2);
        param_3[2] = param_3[2] + 1;
      }
      FUN_0111b0ac(param_1,param_2 + 8,param_3);
    }
    else {
      *param_1 = (int)local_38;
    }
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


