/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e62368; name: FUN_01e62368
 */


void FUN_01e62368(undefined4 *param_1,char param_2,int *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == -0x7a) {
    iVar1 = *(int *)(*param_4 + param_4[2]);
    lVar2 = param_4[2] + 4;
  }
  else if (param_2 == -0x7b) {
    iVar1 = (int)*(short *)(*param_4 + param_4[2]);
    lVar2 = param_4[2] + 2;
  }
  else {
    if (param_2 != -0x7c) {
      iVar1 = (int)param_2;
      goto LAB_01e623c0;
    }
    iVar1 = (int)*(char *)(*param_4 + param_4[2]);
    lVar2 = param_4[2] + 1;
  }
  param_4[2] = lVar2;
LAB_01e623c0:
  *param_3 = iVar1;
  *param_1 = 0;
  return;
}


