/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e60d84; name: FUN_01e60d84
 */


void FUN_01e60d84(int *param_1,long param_2,long *param_3)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  undefined8 local_38;
  int local_18 [2];
  
  uVar2 = *(ushort *)(param_2 + 0x914);
  uVar4 = 0xffffff80;
  if (0xff < uVar2) {
    uVar4 = 0xffffff81;
  }
  uVar1 = (uint)uVar2;
  if (0x7f < uVar2) {
    uVar1 = uVar4;
  }
  lVar3 = FUN_0111b030(uVar1);
  if ((ulong)param_3[1] < lVar3 + param_3[2] + 0x91eU) {
    *param_1 = 0xd;
    return;
  }
  *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
  param_3[2] = param_3[2] + 1;
  local_38 = 3;
  FUN_0111b0ac(local_18,&local_38,param_3);
  if (local_18[0] == 0) {
    FUN_01e60e8c(param_1,param_2,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


