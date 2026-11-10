/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec2f70; name: FUN_01ec2f70
 */


void FUN_01ec2f70(undefined4 *param_1,char *param_2,long *param_3)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  long lVar5;
  
  cVar2 = *param_2;
  cVar3 = cVar2;
  if (cVar2 < '\0') {
    cVar3 = -0x80;
  }
  *(char *)(*param_3 + param_3[2]) = cVar3;
  lVar5 = param_3[2] + 1;
  param_3[2] = lVar5;
  if (cVar2 < '\0') {
    *(char *)(*param_3 + lVar5) = *param_2;
    lVar5 = param_3[2] + 1;
    param_3[2] = lVar5;
  }
  uVar1 = *(ushort *)(param_2 + 2);
  uVar4 = 0xff80;
  if (0xff < uVar1) {
    uVar4 = 0xff81;
  }
  if (0x7f < uVar1) {
    uVar1 = uVar4;
  }
  *(char *)(*param_3 + lVar5) = (char)uVar1;
  lVar5 = param_3[2] + 1;
  param_3[2] = lVar5;
  if ((uVar1 & 0xff) == 0x81) {
    *(undefined2 *)(*param_3 + lVar5) = *(undefined2 *)(param_2 + 2);
    lVar5 = 2;
  }
  else {
    if ((uVar1 & 0xff) != 0x80) goto LAB_01ec2fdc;
    *(char *)(*param_3 + lVar5) = (char)*(undefined2 *)(param_2 + 2);
    lVar5 = 1;
  }
  param_3[2] = param_3[2] + lVar5;
LAB_01ec2fdc:
  *param_1 = 0;
  return;
}


