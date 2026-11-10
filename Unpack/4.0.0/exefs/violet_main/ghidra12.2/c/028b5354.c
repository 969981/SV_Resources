/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b5354; name: FUN_028b5354
 */


void FUN_028b5354(int *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  if (4 < *(ushort *)((long)param_1 - (long)*param_1)) {
    uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2];
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = *(undefined4 *)((long)param_1 + uVar1);
    }
  }
  *param_2 = uVar3;
  uVar3 = 0;
  if (6 < *(ushort *)((long)param_1 - (long)*param_1)) {
    uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3];
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = *(undefined4 *)((long)param_1 + uVar1);
    }
  }
  param_2[1] = uVar3;
  uVar3 = 0;
  if (8 < *(ushort *)((long)param_1 - (long)*param_1)) {
    uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4];
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = *(undefined4 *)((long)param_1 + uVar1);
    }
  }
  param_2[2] = uVar3;
  if ((10 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5], uVar1 != 0)) {
    uVar2 = *(undefined4 *)((long)param_1 + uVar1);
  }
  param_2[3] = uVar2;
  return;
}


