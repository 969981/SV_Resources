/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b0fa18; name: FUN_00b0fa18
 */


void FUN_00b0fa18(int *param_1,ushort *param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  undefined8 local_38;
  int local_18 [2];
  
  *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
  param_3[2] = param_3[2] + 1;
  local_38 = 4;
  FUN_0111b0ac(local_18,&local_38);
  if (local_18[0] != 0) {
    *param_1 = local_18[0];
    return;
  }
  uVar1 = *param_2;
  uVar3 = 0xff84;
  if (uVar1 != (short)(char)uVar1) {
    uVar3 = 0xff85;
  }
  if (0xbf < (ushort)(uVar1 + 0x40)) {
    uVar1 = uVar3;
  }
  *(char *)(*param_3 + param_3[2]) = (char)uVar1;
  lVar2 = param_3[2] + 1;
  param_3[2] = lVar2;
  if ((uVar1 & 0xff) == 0x85) {
    *(ushort *)(*param_3 + lVar2) = *param_2;
    lVar2 = 2;
  }
  else {
    if ((uVar1 & 0xff) != 0x84) goto LAB_00b0faf8;
    *(char *)(*param_3 + lVar2) = (char)*param_2;
    lVar2 = 1;
  }
  lVar2 = param_3[2] + lVar2;
  param_3[2] = lVar2;
LAB_00b0faf8:
  *(undefined1 *)(*param_3 + lVar2) = 0x88;
  lVar2 = param_3[2];
  param_3[2] = lVar2 + 1;
  *(undefined4 *)(*param_3 + lVar2 + 1) = *(undefined4 *)(param_2 + 2);
  param_3[2] = param_3[2] + 4;
  FUN_01e63170(&local_38,param_2 + 4,param_3);
  if ((int)local_38 == 0) {
    FUN_01e63170(param_1,param_2 + 6,param_3);
  }
  else {
    *param_1 = (int)local_38;
  }
  return;
}


