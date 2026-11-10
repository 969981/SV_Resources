/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3f59c; name: FUN_01e3f59c
 */


void FUN_01e3f59c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_50 [16];
  long local_40;
  uint local_38;
  long local_30;
  undefined4 local_28;
  long local_20;
  undefined4 local_18;
  
  uVar3 = param_1[1];
  uVar1 = (uVar3 - *(uint *)(param_2 + 1)) + (ulong)*(uint *)(param_3 + 1) +
          (*param_3 - *param_2) * 8;
  param_1[1] = uVar1;
  if ((uVar3 == 0) || (0x3f < (uVar1 - 1 ^ uVar3 - 1))) {
    uVar2 = 0;
    if (0x40 < uVar1) {
      uVar2 = uVar1 - 1 >> 6;
    }
    *(undefined8 *)(*param_1 + uVar2 * 8) = 0;
  }
  local_20 = *param_2;
  local_18 = (undefined4)param_2[1];
  local_30 = *param_3;
  local_28 = (undefined4)param_3[1];
  local_40 = *param_1 + (uVar3 >> 3 & 0x1ffffffffffffff8);
  local_38 = (uint)uVar3 & 0x3f;
  FUN_01e3fbc0(auStack_50,&local_20,&local_30,&local_40);
  return;
}


