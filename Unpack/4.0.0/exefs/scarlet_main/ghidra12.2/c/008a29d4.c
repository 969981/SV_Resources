/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a29d4; name: FUN_008a29d4
 */


void FUN_008a29d4(long param_1,long param_2,byte param_3,int param_4,ulong param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined2 param_10)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  byte bVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ushort local_48;
  ushort local_46;
  
  bVar2 = *(byte *)(param_1 + 0x49);
  if ((bVar2 >> 1 & 1) == 0) {
    *(byte *)(param_2 + 0x18d) = *(byte *)(param_1 + 0x14) & 3;
  }
  *(undefined1 *)(param_2 + 0x18b) = 0;
  bVar4 = *(byte *)(param_1 + 0x48) >> 4;
  if (bVar4 == 0xf) {
    *(ushort *)(param_1 + 0x4a) = (short)param_4 + (*(ushort *)(param_1 + 0x4a) / 3) * 3;
    lVar7 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0xb8);
    }
    *(ushort *)(param_1 + 0x4a) = (ushort)bVar4 + (short)param_4 * 0xe;
    lVar7 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  }
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar7 + (ulong)*(uint *)(param_1 + 0x30);
  }
  if (param_4 == 1) {
    lVar8 = 0;
    if (lVar7 != 0) {
      lVar8 = lVar7 + (ulong)*(uint *)(param_1 + 0x30);
    }
    *(undefined8 *)(lVar8 + 0x1d0) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x1d8) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x200) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x1e0) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x1e8) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x208) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x1f0) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x1f8) = 0x437f0000437f0000;
  }
  *(undefined8 *)(lVar9 + 0xd0) = 0x3b8080813b808081;
  *(undefined4 *)(lVar9 + 0xd8) = 0x3b808081;
  *(float *)(lVar9 + 0xdc) = (float)param_3 * 1.5378702e-05;
  FUN_00892ec0(param_2,lVar9);
  if ((param_5 & 1) != 0) {
    *(undefined4 *)(lVar9 + 0x22c) = 0;
  }
  FUN_008a2d8c(param_1,param_2,param_6,param_7);
  if (((*(byte *)(param_1 + 0x14) & 3) != 0) && ('\0' < *(char *)(param_2 + 0x18d))) {
    lVar7 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    if (lVar7 == 0) {
      lVar7 = 0;
      plVar5 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    }
    else {
      lVar7 = lVar7 + (ulong)*(uint *)(param_1 + 0x30);
      plVar5 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(&local_48);
      fVar3 = (float)NEON_ucvtf((uint)local_48);
      *(float *)(lVar7 + 0x1c0) = 1.0 / fVar3;
      *(undefined8 *)(lVar7 + 0x1c8) = 0;
      fVar3 = (float)NEON_ucvtf((uint)local_46);
      *(float *)(lVar7 + 0x1c4) = 1.0 / fVar3;
    }
  }
  if ((bVar2 >> 1 & 1) == 0) {
    FUN_008a30ac(param_1,param_2,param_9,param_10,param_7,param_8);
  }
  uVar6 = *(uint *)(param_1 + 0x14);
  if ((uVar6 & 0xc0000) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    lVar9 = 0;
    uVar10 = 0;
    lVar7 = (long)(int)((uVar1 >> 4 & 0x1c) + (uVar1 >> 8 & 0xc) + (uVar1 >> 0xc & 8) +
                        (uVar1 >> 0xc & 1) * 0xc + (uVar1 >> 0x10 & 1) * 0x1c +
                        (uVar1 >> 0xc & 0x10) * (uVar1 >> 6 & 7) + (uVar1 >> 0x11 & 1) * 0x74 +
                        ((uVar1 & 3) * 0x10 + (uVar1 & 0x30) | uVar1 >> 6 & 8) +
                       ((uVar1 >> 0xd & 3) + (uVar1 >> 2 & 3)) * 0x14) + *(long *)(param_1 + 0x18) +
            0x18;
    do {
      if (*(long *)(lVar7 + lVar9) != 0) {
        uVar6 = *(uint *)(param_1 + 0x10);
        FUN_008c79dc((short)*(undefined4 *)
                             (*(long *)(param_1 + 0x18) +
                              (long)(int)((uVar6 >> 4 & 0x1c) + (uVar6 >> 8 & 0xc) +
                                          (uVar6 >> 0xc & 8) + (uVar6 >> 0xc & 1) * 0xc +
                                          (uVar6 >> 0x10 & 1) * 0x1c +
                                          (uVar6 >> 0xc & 0x10) * (uVar6 >> 6 & 7) +
                                          (uVar6 >> 0x11 & 1) * 0x74 +
                                          ((uVar6 & 3) * 0x10 + (uVar6 & 0x30) | uVar6 >> 6 & 8) +
                                         ((uVar6 >> 0xd & 3) + (uVar6 >> 2 & 3)) * 0x14) + lVar9));
        lVar8 = *(long *)(lVar7 + lVar9);
        *(byte *)(lVar8 + 0x158) = *(byte *)(lVar8 + 0x158) | 2;
        uVar6 = *(uint *)(param_1 + 0x14);
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x20;
    } while (uVar10 < (uVar6 >> 0x12 & 3));
  }
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf0 | *(byte *)(param_2 + 0x18d) & 0xf;
  return;
}


