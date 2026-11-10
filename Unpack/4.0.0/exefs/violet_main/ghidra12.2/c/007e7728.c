/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e7728; name: FUN_007e7728
 */


void FUN_007e7728(undefined8 param_1,long param_2,short *param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  uVar3 = *(ushort *)(param_2 + 0x18);
  if (*(ushort *)(param_2 + 0x1a) != 0) {
    uVar4 = 0;
    do {
      uVar1 = *(int *)(param_2 + 0x14) + uVar4;
      uVar2 = 0;
      if (*(ushort *)(param_2 + 0x10) <= uVar1) {
        uVar2 = (uint)*(ushort *)(param_2 + 0x10);
      }
      if (*(char *)(*(long *)(param_2 + 8) + (ulong)(uVar1 - uVar2) * 0x5b8) == '\0') break;
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar4 < *(ushort *)(param_2 + 0x1a));
  }
  if (uVar3 < *(ushort *)(param_2 + 0x1c)) {
    *param_3 = 0;
    local_28[0] = 0x10408;
  }
  else {
    *param_3 = uVar3 - *(ushort *)(param_2 + 0x1c);
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


