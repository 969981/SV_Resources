/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a6cb4; name: FUN_034a6cb4
 */


undefined8
FUN_034a6cb4(long param_1,long param_2,undefined8 param_3,long *param_4,float *param_5,long param_6,
            uint param_7,long *param_8)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined2 uVar5;
  uint uVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long *plVar11;
  uint uVar12;
  byte *pbVar13;
  float *pfVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  long local_68;
  long local_60;
  undefined8 uStack_58;
  
  uVar6 = (uint)*(ushort *)(param_2 + 0x8e);
  if ((*(ushort *)(param_2 + 0x8e) >> 9 & 1) == 0) {
    if (((*(uint *)(param_1 + 0xb8) & 0x1f000) == 0) && (*(long *)(param_1 + 0x98) != 0)) {
      uVar12 = 0;
    }
    else {
      uVar5 = FUN_034ad214(param_1,*param_4);
      uVar6 = (uint)*(ushort *)(param_2 + 0x8e);
      uVar12 = 0x200;
      *(undefined2 *)(param_2 + 0x8c) = uVar5;
    }
    uVar6 = uVar6 & 0xfffffdff | uVar12;
    *(short *)(param_2 + 0x8e) = (short)uVar6;
  }
  if (((uVar6 >> 6 & 1) == 0) &&
     (((*(byte *)(param_1 + 0xf1) >> 4 & 1) != 0 || (*(long *)(param_1 + 0x98) == 0)))) {
    uVar6 = uVar6 & 0xffffff9f | *(byte *)(param_1 + 0xf1) & 0x20 | 0x40;
    *(short *)(param_2 + 0x8e) = (short)uVar6;
  }
  if ((((uVar6 >> 7 & 1) == 0) && ((*(uint *)(param_2 + 0x84) >> 1 & 1) != 0)) &&
     (((*(byte *)(param_1 + 0xba) >> 4 & 1) != 0 || (*(long *)(param_1 + 0x98) == 0)))) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffd;
    if ((*(long *)(param_1 + 0x40) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0x40) + 4) >> 5 & 1) == 0)) {
      local_68 = CONCAT44(local_68._4_4_,0x41400000);
      pbVar10 = *(byte **)(param_1 + 0xb0);
      if (pbVar10 != (byte *)0x0) {
        bVar2 = *pbVar10;
        uVar12 = (uint)bVar2;
        if (bVar2 < 2) {
          uVar12 = 1;
        }
        uVar15 = (ulong)uVar12;
        pbVar4 = pbVar10 + ((ulong)(bVar2 + 4) & 0x1fc);
        pbVar13 = pbVar10;
        do {
          pbVar10 = pbVar4;
          pbVar13 = pbVar13 + 1;
          if (*pbVar13 == 0x21) goto LAB_034a6de0;
          uVar15 = uVar15 - 1;
          pbVar4 = pbVar10 + 4;
        } while (uVar15 != 0);
        pbVar10 = (byte *)0x0;
      }
LAB_034a6de0:
      pbVar13 = (byte *)&local_68;
      if (pbVar10 != (byte *)0x0) {
        pbVar13 = pbVar10;
      }
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)pbVar13;
    }
    else {
      lVar16 = *(long *)PTR_DAT_047e6fd8;
      uVar6 = *(uint *)(lVar16 + 0x20);
      uVar19 = 0;
      if (uVar6 != 0) {
        uVar12 = (int)(param_1 + 0x38) + 0x25;
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar12 / uVar6;
        }
        for (plVar11 = *(long **)(*(long *)(lVar16 + 0x18) + (ulong)(uVar12 - uVar3 * uVar6) * 8);
            plVar11 != (long *)0x0; plVar11 = (long *)plVar11[2]) {
          if ((*plVar11 == param_1 + 0x38) && ((int)plVar11[1] == 0x25)) {
            if (*(int *)((long)plVar11 + 0x4c) == 3) {
              uVar19 = FUN_0348209c();
            }
            else {
              uVar19 = FUN_03482338(lVar16,plVar11,param_4);
            }
            break;
          }
        }
      }
      uVar6 = (uint)*(ushort *)(param_2 + 0x8e);
      *(undefined4 *)(param_2 + 0x38) = uVar19;
    }
    uVar6 = uVar6 & 0xfffffe00 | uVar6 & 0x7f | (*(byte *)(param_1 + 0xf1) >> 6 & 1) << 8 | 0x80;
    *(short *)(param_2 + 0x8e) = (short)uVar6;
  }
  if (((uVar6 >> 2 & 1) == 0) &&
     (((*(ulong *)(param_1 + 0xb8) & 0x7f83c00000) != 0 || (*(long *)(param_1 + 0x98) == 0)))) {
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x3c) = 0;
    *(undefined8 *)(param_2 + 0x44) = 0;
    *(undefined8 *)(param_2 + 0x4c) = 0;
    *(undefined8 *)(param_2 + 0x54) = 0;
    if (*(long *)(param_1 + 0xa8) == 0) {
      if ((*(ulong *)(param_1 + 0xb8) & 0x7f83c00000) != 0) {
        *(undefined8 *)(param_2 + 0x74) = 0;
        *(undefined8 *)(param_2 + 0x6c) = 0;
      }
    }
    else {
      *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) | 0x780000;
      *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 0xf0000000;
      *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) | 0xf;
      *(undefined4 *)(param_2 + 0x6c) = **(undefined4 **)(param_1 + 0xa8);
      *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 4);
      *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 8);
      *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0xc);
    }
    uVar6 = uVar6 | 4;
    *(short *)(param_2 + 0x8e) = (short)uVar6;
  }
  if (((uVar6 >> 1 & 1) == 0) &&
     (((*(ulong *)(param_1 + 0xb8) & 0x18000200000) != 0 || (*(long *)(param_1 + 0x98) == 0)))) {
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(ushort *)(param_2 + 0x8e) = (ushort)uVar6 | 2;
    uVar12 = *(uint *)(param_1 + 0xda);
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) | 0x800000;
    uVar6 = uVar6 & 0xfffffffe | 2 | uVar12 >> 0x12 & 1;
    *(short *)(param_2 + 0x8e) = (short)uVar6;
    *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) | 0x30;
  }
  if (((uVar6 >> 3 & 1) == 0) && (*(long *)(param_1 + 0xa0) != 0)) {
    if ((param_7 & 1) == 0) {
      *(undefined8 *)(param_2 + 0x2c) = 0;
      *(undefined4 *)(param_2 + 0x34) = 0;
    }
    uVar6 = uVar6 | 8;
    *(short *)(param_2 + 0x8e) = (short)uVar6;
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) | 0x7000000;
  }
  if (((uVar6 >> 4 & 1) == 0) &&
     (((*(byte *)(param_1 + 0xbb) >> 6 & 1) != 0 || (*(long *)(param_1 + 0x98) == 0)))) {
    *(undefined4 *)(param_2 + 100) = 0;
    *(ushort *)(param_2 + 0x8e) = (ushort)uVar6 | 0x10;
    *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_1 + 0xc0);
    *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) | 0x100;
  }
  FUN_034acd10(param_1,param_2,param_4);
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_034acffc(param_1,*(long *)(param_1 + 0x70),param_3,param_2);
  }
  plVar11 = *(long **)(param_1 + 0x78);
  if (plVar11 != (long *)0x0) {
    plVar7 = (long *)*plVar11;
    uVar6 = *(uint *)(plVar11 + 1);
    if ((uVar6 == 0) || (*plVar7 == *param_4)) {
      plVar11 = plVar7;
    }
    else {
      lVar16 = (ulong)uVar6 * 0x10;
      plVar17 = plVar7;
      do {
        lVar16 = lVar16 + -0x10;
        if (lVar16 == 0) goto LAB_034a7068;
        plVar11 = plVar17 + 2;
        plVar1 = plVar17 + 2;
        plVar17 = plVar11;
      } while (*plVar1 != *param_4);
    }
    if (plVar11 != plVar7 + (ulong)uVar6 * 2) {
      FUN_034acffc(param_1,plVar11[1],param_3,param_2);
    }
  }
LAB_034a7068:
  *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xf807ffff;
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffff;
  *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) & 0xfffffec0;
  if ((param_5 != (float *)0x0) && (pbVar10 = *(byte **)(param_1 + 0xe0), pbVar10 != (byte *)0x0)) {
    bVar2 = *pbVar10;
    uVar6 = (uint)bVar2;
    uVar15 = 0;
    if (bVar2 < 2) {
      uVar6 = 1;
    }
    pfVar14 = (float *)(pbVar10 + ((ulong)(bVar2 + 4) & 0x1fc));
    do {
      if (pbVar10[uVar15 + 1] == 0) {
        fVar18 = *pfVar14;
        fVar20 = pfVar14[1];
        if (fVar20 - fVar18 == 0.0) {
          fVar20 = 0.0;
        }
        else {
          lVar16 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
          *(long *)PTR_DAT_047e7068 = lVar16;
          fVar20 = (fVar20 - fVar18) * 4.656613e-10 * (float)(uint)((ulong)lVar16 >> 0x21);
          fVar18 = *pfVar14;
        }
        *param_5 = fVar20 + fVar18 + *param_5;
        pbVar10 = *(byte **)(param_1 + 0xe0);
        if (pbVar10 == (byte *)0x0) goto joined_r0x034a7540;
        bVar2 = *pbVar10;
        break;
      }
      uVar15 = uVar15 + 1;
      pfVar14 = pfVar14 + 2;
    } while (uVar6 != uVar15);
    uVar12 = (uint)bVar2;
    uVar15 = 0;
    uVar6 = uVar12;
    if (uVar12 < 2) {
      uVar6 = 1;
    }
    pfVar14 = (float *)(pbVar10 + ((ulong)(uVar12 + 4) & 0x1fc));
    do {
      if (pbVar10[uVar15 + 1] == 2) {
        fVar18 = *pfVar14;
        fVar20 = pfVar14[1];
        if (fVar20 - fVar18 == 0.0) {
          fVar20 = 0.0;
        }
        else {
          lVar16 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
          *(long *)PTR_DAT_047e7068 = lVar16;
          fVar20 = (fVar20 - fVar18) * 4.656613e-10 * (float)(uint)((ulong)lVar16 >> 0x21);
          fVar18 = *pfVar14;
        }
        param_5[2] = fVar20 + fVar18 + param_5[2];
        pbVar10 = *(byte **)(param_1 + 0xe0);
        if (pbVar10 == (byte *)0x0) goto joined_r0x034a7540;
        uVar12 = (uint)*pbVar10;
        break;
      }
      uVar15 = uVar15 + 1;
      pfVar14 = pfVar14 + 2;
    } while (uVar6 != uVar15);
    uVar15 = 0;
    uVar6 = uVar12;
    if (uVar12 < 2) {
      uVar6 = 1;
    }
    pfVar14 = (float *)(pbVar10 + ((ulong)(uVar12 + 4) & 0x1fc));
    do {
      if (pbVar10[uVar15 + 1] == 3) {
        fVar18 = *pfVar14;
        fVar20 = pfVar14[1];
        if (fVar20 - fVar18 == 0.0) {
          fVar20 = 0.0;
        }
        else {
          lVar16 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
          *(long *)PTR_DAT_047e7068 = lVar16;
          fVar20 = (fVar20 - fVar18) * 4.656613e-10 * (float)(uint)((ulong)lVar16 >> 0x21);
          fVar18 = *pfVar14;
        }
        param_5[3] = fVar20 + fVar18 + param_5[3];
        pbVar10 = *(byte **)(param_1 + 0xe0);
        if (pbVar10 == (byte *)0x0) goto joined_r0x034a7540;
        uVar12 = (uint)*pbVar10;
        break;
      }
      uVar15 = uVar15 + 1;
      pfVar14 = pfVar14 + 2;
    } while (uVar6 != uVar15);
    uVar15 = 0;
    uVar6 = uVar12;
    if (uVar12 < 2) {
      uVar6 = 1;
    }
    pfVar14 = (float *)(pbVar10 + ((ulong)(uVar12 + 4) & 0x1fc));
    do {
      if (pbVar10[uVar15 + 1] == 4) {
        fVar18 = *pfVar14;
        fVar20 = pfVar14[1];
        if (fVar20 - fVar18 == 0.0) {
          fVar20 = 0.0;
        }
        else {
          lVar16 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
          *(long *)PTR_DAT_047e7068 = lVar16;
          fVar20 = (fVar20 - fVar18) * 4.656613e-10 * (float)(uint)((ulong)lVar16 >> 0x21);
          fVar18 = *pfVar14;
        }
        param_5[4] = fVar20 + fVar18 + param_5[4];
        pbVar10 = *(byte **)(param_1 + 0xe0);
        if (pbVar10 == (byte *)0x0) goto joined_r0x034a7540;
        uVar12 = (uint)*pbVar10;
        break;
      }
      uVar15 = uVar15 + 1;
      pfVar14 = pfVar14 + 2;
    } while (uVar6 != uVar15);
    uVar6 = uVar12;
    if (uVar12 < 2) {
      uVar6 = 1;
    }
    uVar15 = (ulong)uVar6;
    pfVar14 = (float *)(pbVar10 + ((ulong)(uVar12 + 4) & 0x1fc));
    do {
      pbVar10 = pbVar10 + 1;
      if (*pbVar10 == 6) {
        fVar18 = *pfVar14;
        fVar20 = pfVar14[1];
        if (fVar20 - fVar18 == 0.0) {
          fVar20 = 0.0;
        }
        else {
          lVar16 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
          *(long *)PTR_DAT_047e7068 = lVar16;
          fVar20 = (fVar20 - fVar18) * 4.656613e-10 * (float)(uint)((ulong)lVar16 >> 0x21);
          fVar18 = *pfVar14;
        }
        param_5[1] = fVar20 + fVar18 + param_5[1];
        break;
      }
      pfVar14 = pfVar14 + 2;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
joined_r0x034a7540:
  if (((param_6 != 0) && (*(long *)(param_1 + 0x40) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x40) + 0x20) != '\0')) {
    local_68 = param_1 + 0x38;
    uStack_58 = 2;
    local_60 = param_1;
    FUN_03497db4(*(undefined8 *)PTR_DAT_047e7048,&local_68,param_6);
  }
  if (((param_7 & 1) == 0) || (plVar11 = *(long **)(param_1 + 0xa0), plVar11 == (long *)0x0)) {
    plVar11 = *(long **)(param_1 + 0x98);
    if ((plVar11 == (long *)0x0) || (plVar11 == param_8)) goto LAB_034a747c;
    param_7 = param_7 & 1;
    pcVar8 = *(code **)(*plVar11 + 0x150);
  }
  else {
    plVar7 = *(long **)(param_1 + 0x98);
    if ((plVar7 != (long *)0x0) && (plVar7 != param_8)) {
      (**(code **)(*plVar7 + 0x150))(plVar7,param_2,param_3,param_4,param_5,param_6,0,param_8);
      plVar11 = *(long **)(param_1 + 0xa0);
    }
    pcVar8 = *(code **)(*plVar11 + 0x150);
    param_7 = 0;
  }
  (*pcVar8)(plVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_034a747c:
  puVar9 = *(undefined8 **)(param_1 + 0xe8);
  if ((puVar9 != (undefined8 *)0x0) && (*(uint *)(puVar9 + 1) != 0)) {
    lVar16 = (ulong)*(uint *)(puVar9 + 1) << 3;
    puVar9 = (undefined8 *)*puVar9;
    do {
      FUN_034877c4(*puVar9,param_1,param_2,param_3,param_4,param_6);
      lVar16 = lVar16 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar16 != 0);
  }
  return 1;
}


