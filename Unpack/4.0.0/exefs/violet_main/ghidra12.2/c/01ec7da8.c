/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec7da8; name: FUN_01ec7da8
 */


void FUN_01ec7da8(undefined4 *param_1,ushort *param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  
  uVar1 = *param_2;
  uVar3 = 0xff80;
  if (0xff < uVar1) {
    uVar3 = 0xff81;
  }
  if (0x7f < uVar1) {
    uVar1 = uVar3;
  }
  *(char *)(*param_3 + param_3[2]) = (char)uVar1;
  lVar2 = param_3[2] + 1;
  param_3[2] = lVar2;
  if ((uVar1 & 0xff) == 0x81) {
    *(ushort *)(*param_3 + lVar2) = *param_2;
    lVar2 = 2;
  }
  else {
    if ((uVar1 & 0xff) != 0x80) goto LAB_01ec7df0;
    *(char *)(*param_3 + lVar2) = (char)*param_2;
    lVar2 = 1;
  }
  param_3[2] = param_3[2] + lVar2;
LAB_01ec7df0:
  *param_1 = 0;
  return;
}


