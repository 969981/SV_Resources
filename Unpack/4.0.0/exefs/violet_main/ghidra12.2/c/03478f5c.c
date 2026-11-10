/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03478f5c; name: FUN_03478f5c
 */


undefined4
FUN_03478f5c(int *param_1,undefined4 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined1 local_30 [4];
  undefined8 local_2c;
  
  if (*param_1 == (int)param_4) {
    local_30[0] = 0;
    local_2c = 0;
    if ((int)param_4 == 0) {
      lVar4 = *(long *)(param_1 + 2);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else if (*(char *)((long)param_1 + 0x12) == '\0') {
      lVar4 = FUN_03479074(param_1,*(undefined8 *)(param_1 + 2),param_3,param_4,param_2,param_6,
                           param_7);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      lVar4 = FUN_034789a0(param_1,param_3,param_4 & 0xffffffff,param_2,param_2,local_30);
      if (lVar4 == 0) {
        return 0;
      }
    }
    uVar1 = *(ushort *)(param_1 + 4);
    uVar2 = *(ushort *)(lVar4 + 10);
    if ((uVar1 < 100) || (uVar2 < 100)) {
      lVar5 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
      *(long *)PTR_DAT_047e7068 = lVar5;
      uVar3 = *(undefined4 *)(lVar4 + 4);
      if ((uint)(ushort)(uVar2 * uVar1) <=
          (uint)(int)((double)(uint)((ulong)lVar5 >> 0x21) * 4.656612875245797e-06)) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = *(undefined4 *)(lVar4 + 4);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


