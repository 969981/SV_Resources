/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f988c; name: FUN_034f988c
 */


ulong FUN_034f988c(long *param_1)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  
  lVar15 = param_1[3];
  if (*(char *)(lVar15 + 0x2bd) < '\0') {
    if (*(short *)(lVar15 + 0x2b8) == 0) {
      fVar16 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x24));
      uVar11 = (**(code **)(*param_1 + 0x110))(param_1);
      fVar16 = (fVar16 * 1000.0) / (float)uVar11;
    }
    else {
      fVar16 = (float)(**(code **)(*param_1 + 0x88))(param_1);
    }
    lVar15 = param_1[3];
    uVar11 = (**(code **)(*param_1 + 0x110))(param_1);
    uVar10 = (ulong)(uint)(int)((float)uVar11 * fVar16 * 0.001 * *(float *)(lVar15 + 0x2b4));
  }
  else {
    uVar9 = (**(code **)(*param_1 + 0x110))(param_1);
    uVar10 = 0;
    if ((ulong)*(uint *)PTR_DAT_047e6fa0 != 0) {
      uVar10 = ((ulong)*(uint *)(lVar15 + 0x2b4) * (uVar9 & 0xffffffff)) /
               (ulong)*(uint *)PTR_DAT_047e6fa0;
    }
  }
  uVar6 = *(ushort *)(param_1[3] + 0x2b8);
  uVar11 = (uint)uVar6;
  uVar14 = *(uint *)(lVar15 + 699);
  uVar4 = *(uint *)((long)param_1 + 0x34);
  uVar5 = *(uint *)(param_1 + 7);
  *(ushort *)((long)param_1 + 0x54) = uVar6;
  if ((uVar6 - 1 != 0) && (uVar8 = (uint)uVar10, uVar5 < uVar8 && uVar4 < uVar5)) {
    uVar1 = (uVar5 - uVar4) + 1;
    uVar7 = 0;
    if (uVar1 != 0) {
      uVar7 = (uVar8 - uVar4) / uVar1;
    }
    uVar12 = (uint)uVar6;
    if ((uVar12 == 0) || (uVar7 < uVar12)) {
      uVar11 = 0;
      if (uVar12 != 0) {
        uVar11 = uVar12 - uVar7;
      }
      *(short *)((long)param_1 + 0x54) = (short)uVar11;
      uVar10 = (ulong)(((uVar8 - uVar4) - uVar7 * uVar1) + uVar4);
    }
    else {
      uVar10 = (ulong)(uVar8 - (uVar6 - 1) * uVar1);
      uVar11 = 1;
      *(undefined2 *)((long)param_1 + 0x54) = 1;
    }
  }
  if (((uVar14 >> 0x18 & 1) != 0) &&
     (uVar9 = (ulong)*(uint *)(param_1 + 8), *(uint *)(param_1 + 8) != 0)) {
    lVar15 = param_1[9];
    uVar14 = 0;
    lVar13 = 0;
    do {
      uVar1 = *(int *)(lVar15 + 4) - (int)uVar10;
      uVar8 = -uVar1;
      if (-1 < (int)uVar1) {
        uVar8 = uVar1;
      }
      lVar3 = lVar15;
      if (lVar13 != 0 && uVar14 <= uVar8) {
        lVar3 = lVar13;
        uVar8 = uVar14;
      }
      uVar14 = uVar8;
      uVar9 = uVar9 - 1;
      lVar15 = lVar15 + 0x10;
      lVar13 = lVar3;
    } while (uVar9 != 0);
    if (lVar3 != 0) {
      uVar14 = *(uint *)(lVar3 + 4);
      uVar10 = (ulong)uVar14;
      if ((((uVar11 & 0xffff) != 1) && (uVar4 <= uVar5 && uVar5 - uVar4 != 0)) && (uVar5 < uVar14))
      {
        uVar5 = (uVar5 - uVar4) + 1;
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = (uVar14 - uVar4) / uVar5;
        }
        uVar1 = uVar11 & 0xffff;
        if ((uVar1 == 0) || (uVar8 < uVar1)) {
          sVar2 = 0;
          if ((uVar11 & 0xffff) != 0) {
            sVar2 = (short)uVar11 - (short)uVar8;
          }
          *(short *)((long)param_1 + 0x54) = sVar2;
          uVar10 = (ulong)(((uVar14 - uVar4) - uVar8 * uVar5) + uVar4);
        }
        else {
          uVar10 = (ulong)(uVar14 - (uVar1 - 1) * uVar5);
          *(undefined2 *)((long)param_1 + 0x54) = 1;
        }
      }
    }
  }
  return uVar10;
}


