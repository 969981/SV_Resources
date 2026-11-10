/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f2f20; name: FUN_026f2f20
 */


void FUN_026f2f20(undefined4 *param_1,char param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  switch(param_2) {
  case -0x7c:
    lVar1 = (long)*(char *)(*param_4 + param_4[2]);
    lVar2 = param_4[2] + 1;
    break;
  case -0x7b:
    lVar1 = (long)*(short *)(*param_4 + param_4[2]);
    lVar2 = param_4[2] + 2;
    break;
  case -0x7a:
    lVar1 = (long)*(int *)(*param_4 + param_4[2]);
    lVar2 = param_4[2] + 4;
    break;
  case -0x79:
    lVar1 = *(long *)(*param_4 + param_4[2]);
    lVar2 = param_4[2] + 8;
    break;
  default:
    lVar1 = (long)param_2;
    goto LAB_026f2fa0;
  }
  param_4[2] = lVar2;
LAB_026f2fa0:
  *param_3 = lVar1;
  *param_1 = 0;
  return;
}


