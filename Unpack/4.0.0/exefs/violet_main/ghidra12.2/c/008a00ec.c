/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a00ec; name: FUN_008a00ec
 */


undefined8
FUN_008a00ec(long param_1,int param_2,int param_3,int param_4,int param_5,ulong param_6,int param_7,
            uint param_8,int param_9,byte param_10,byte param_11,byte param_12,int param_13,
            int param_14)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar1 = (uint)param_6 & 1;
  if ((((((int)(uVar5 & 3) < param_2) || ((int)(uVar5 >> 2 & 3) < param_3)) ||
       ((int)(uVar5 >> 4 & 3) < param_4)) ||
      ((((int)(uVar5 >> 6 & 7) < param_5 || ((uVar5 >> 9 & 1) < uVar1)) ||
       (((int)(uVar5 >> 10 & 3) < param_7 ||
        (((uVar5 >> 0xc & 1) < (param_8 & 1) || ((int)(uVar5 >> 0xd & 3) < param_9)))))))) ||
     (((uVar5 >> 0xf & 1) < (param_10 & 1) ||
      (((((uVar5 >> 0x10 & 1) < (param_11 & 1) || ((uVar5 >> 0x11 & 1) < (param_12 & 1))) ||
        ((int)(uVar5 >> 0x12 & 3) < param_13)) || ((int)(uVar5 >> 0x14 & 3) < param_14)))))) {
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_00896e98();
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffc00000;
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
    }
    lVar7 = 0xc;
    if ((param_8 & 1) == 0) {
      lVar7 = 0;
    }
    bVar6 = (param_11 & 1) == 0;
    lVar2 = (long)param_5;
    if (bVar6) {
      lVar2 = 0;
    }
    lVar3 = 0x1c;
    if (bVar6) {
      lVar3 = 0;
    }
    lVar4 = 0x74;
    if ((param_12 & 1) == 0) {
      lVar4 = 0;
    }
    lVar7 = FUN_00896e78(lVar7 + ((long)param_5 + (long)param_7) * 4 +
                         ((long)param_9 + (long)param_3) * 0x14 + lVar3 +
                         (((ulong)param_10 & 1) + (param_6 & 1)) * 8 + lVar4 +
                         ((long)param_4 + (long)param_2 + lVar2) * 0x10 + (long)param_13 * 0x20 +
                         (long)param_14 * 0x58 + (ulong)(0 < param_14) * 0x10);
    *(long *)(param_1 + 0x18) = lVar7;
    if (lVar7 == 0) {
      return 0;
    }
    FUN_008a207c(param_1,param_2,param_3,param_4,param_5,uVar1,param_7,param_8 & 1,param_9,
                 param_10 & 1,param_11 & 1,param_12 & 1,param_13,param_14);
  }
  return 1;
}


