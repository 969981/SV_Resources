/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016125c4; name: FUN_016125c4
 */


void FUN_016125c4(undefined4 *param_1,int *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  if (4 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = *(undefined4 *)((long)param_2 + uVar1);
    }
  }
  *param_1 = uVar3;
  uVar3 = 0;
  if (6 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = *(undefined4 *)((long)param_2 + uVar1);
    }
  }
  param_1[1] = uVar3;
  uVar3 = 0;
  if (8 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = *(undefined4 *)((long)param_2 + uVar1);
    }
  }
  param_1[2] = uVar3;
  if ((10 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar1 != 0)) {
    uVar2 = *(undefined4 *)((long)param_2 + uVar1);
  }
  param_1[3] = uVar2;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xd) ||
     (uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar1 == 0)) {
    uVar3 = 4;
  }
  else {
    uVar3 = *(undefined4 *)((long)param_2 + uVar1);
  }
  param_1[4] = uVar3;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xf) ||
     (uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7], uVar1 == 0)) {
    uVar3 = 4;
  }
  else {
    uVar3 = *(undefined4 *)((long)param_2 + uVar1);
  }
  param_1[5] = uVar3;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x11) {
    uVar3 = 0;
  }
  else {
    uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[8];
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = *(undefined4 *)((long)param_2 + uVar1);
    }
  }
  param_1[6] = uVar3;
  return;
}


