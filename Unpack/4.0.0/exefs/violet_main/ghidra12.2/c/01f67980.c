/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f67980; name: FUN_01f67980
 */


void FUN_01f67980(undefined4 *param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_2 + 0x9f8);
  uVar4 = 0xffffff81;
  if (0xffff < uVar2) {
    uVar4 = 0xffffff82;
  }
  uVar1 = 0x80;
  if (0xff < uVar2) {
    uVar1 = uVar4;
  }
  if (uVar2 < 0x80) {
    uVar1 = uVar2;
  }
  lVar3 = FUN_0111b030(uVar1);
  if ((ulong)param_3[1] < lVar3 + param_3[2] + 0x9fcU) {
    *param_1 = 0xd;
    return;
  }
  *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
  param_3[2] = param_3[2] + 1;
  FUN_01f68fd4(param_1,param_2,param_3);
  return;
}


