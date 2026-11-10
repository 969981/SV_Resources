/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016948f8; name: FUN_016948f8
 */


void FUN_016948f8(int *param_1,char *param_2,long *param_3)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  long lVar5;
  undefined8 local_38;
  int local_18 [2];
  
  *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
  param_3[2] = param_3[2] + 1;
  local_38 = 2;
  FUN_0111b0ac(local_18,&local_38);
  if (local_18[0] != 0) {
    *param_1 = local_18[0];
    return;
  }
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
    lVar5 = param_3[2] + 2;
  }
  else {
    if ((uVar1 & 0xff) != 0x80) goto LAB_016949bc;
    *(char *)(*param_3 + lVar5) = (char)*(undefined2 *)(param_2 + 2);
    lVar5 = param_3[2] + 1;
  }
  param_3[2] = lVar5;
LAB_016949bc:
  *param_1 = 0;
  return;
}


