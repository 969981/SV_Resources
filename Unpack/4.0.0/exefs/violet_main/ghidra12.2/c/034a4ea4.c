/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a4ea4; name: FUN_034a4ea4
 */


void FUN_034a4ea4(long param_1,void *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  ushort uVar6;
  bool bVar7;
  long *plVar8;
  ushort uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 *local_d8;
  ulong local_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  uint uStack_9c;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  
  if ((*(ushort *)(param_1 + 0x1b0) >> 6 & 1) == 0) {
    lVar11 = *(long *)(param_1 + 0x188);
    do {
      lVar17 = *(long *)(lVar11 + 0xa0);
      if (lVar17 != 0) goto LAB_034a4ef0;
      lVar11 = *(long *)(lVar11 + 0x98);
    } while (lVar11 != 0);
  }
  lVar17 = 0;
LAB_034a4ef0:
  if (((param_2 == (void *)0x0) || (lVar17 != *(long *)((long)param_2 + 0x1d0))) ||
     ((*(ushort *)(param_1 + 0x1b0) >> 6 & 1) != 0)) {
    memset((void *)(param_1 + 0x78),0,0x68);
    *(ushort *)(param_1 + 0x106) = *(ushort *)(param_1 + 0x106) & 0xfc00;
    uVar14 = (ulong)*(uint *)(param_1 + 0x1f8);
    *(undefined2 *)(param_1 + 0x104) = 0;
    *(undefined8 *)(param_1 + 0xe4) = 0;
    *(undefined8 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
    if (*(uint *)(param_1 + 0x1f8) != 0) {
      puVar18 = *(undefined8 **)(param_1 + 0x1f0);
      puVar15 = puVar18 + uVar14 * 3;
      puVar13 = puVar18;
      do {
        uVar23 = (uint)uVar14;
        if ((*(byte *)(puVar13 + 1) >> 1 & 1) == 0) {
          if (1 < uVar23) {
            uVar21 = puVar15[-3];
            uVar12 = puVar15[-1];
            puVar13[1] = puVar15[-2];
            puVar13[2] = uVar12;
            *puVar13 = uVar21;
            uVar23 = *(uint *)(param_1 + 0x1f8);
            puVar18 = *(undefined8 **)(param_1 + 0x1f0);
          }
          uVar14 = (ulong)(uVar23 - 1);
          *(uint *)(param_1 + 0x1f8) = uVar23 - 1;
        }
        else {
          puVar13 = puVar13 + 3;
        }
        puVar15 = puVar18 + uVar14 * 3;
      } while (puVar15 != puVar13);
    }
    if (lVar17 != 0) {
      local_1d8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 0xff;
      local_1b8 = 0xff;
      local_1b0 = 0;
      uVar14 = FUN_03471aac(lVar17);
      if ((uVar14 & 1) == 0) {
        *(undefined8 *)(param_1 + 0xfc) = 0;
        *(undefined4 *)(param_1 + 0xf8) = 0x7000020;
        FUN_03471ba0(lVar17,(void *)(param_1 + 0x78),&local_1d8);
        fVar22 = *(float *)(param_1 + 0x88);
        *(undefined4 *)(param_1 + 0x88) = 0;
        *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xa4) + fVar22;
      }
      plVar20 = (long *)0x0;
      bVar7 = true;
      goto LAB_034a50c8;
    }
    uVar9 = *(ushort *)(param_1 + 0x1b0);
    if ((uVar9 >> 6 & 1) != 0) goto LAB_034a5524;
    plVar20 = (long *)0x0;
    bVar7 = true;
  }
  else {
    plVar20 = *(long **)((long)param_2 + 0x1c8);
    bVar7 = lVar17 == 0;
    memcpy((void *)(param_1 + 0x78),param_2,0x90);
    uVar21 = *(undefined8 *)((long)param_2 + 0xa0);
    uVar12 = *(undefined8 *)((long)param_2 + 0xa8);
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)((long)param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0x208) = uVar12;
    *(undefined8 *)(param_1 + 0x200) = uVar21;
    uVar23 = *(uint *)((long)param_2 + 0x98);
    if (uVar23 != 0) {
      if ((*(uint *)(param_1 + 0x1f8) <= uVar23) && (*(uint *)(param_1 + 0x1fc) < uVar23)) {
        uVar5 = *(uint *)(param_1 + 0x1fc) + (uVar23 - *(uint *)(param_1 + 0x1f8));
        lVar11 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                           (0,*(undefined8 *)(param_1 + 0x1f0),(ulong)uVar5 * 0x18);
        if (lVar11 == 0) goto LAB_034a50c8;
        *(long *)(param_1 + 0x1f0) = lVar11;
        *(uint *)(param_1 + 0x1fc) = uVar5;
      }
      uVar5 = uVar23;
      if (uVar23 < 2) {
        uVar5 = 1;
      }
      lVar11 = 0;
      *(uint *)(param_1 + 0x1f8) = uVar23;
      do {
        puVar13 = (undefined8 *)(*(long *)((long)param_2 + 0x90) + lVar11);
        uVar21 = *puVar13;
        uVar12 = puVar13[2];
        puVar18 = (undefined8 *)(*(long *)(param_1 + 0x1f0) + lVar11);
        lVar11 = lVar11 + 0x18;
        puVar18[1] = puVar13[1];
        puVar18[2] = uVar12;
        *puVar18 = uVar21;
      } while ((ulong)uVar5 * 0x18 != lVar11);
    }
LAB_034a50c8:
    uVar9 = *(ushort *)(param_1 + 0x1b0);
    if ((uVar9 >> 6 & 1) != 0) goto LAB_034a5524;
    if (lVar17 != 0) {
      FUN_03471aac(lVar17);
    }
  }
  fVar22 = *(float *)(param_1 + 0x88);
  lVar11 = param_1 + 0x28;
  lVar17 = *(long *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xa4) + fVar22;
  lVar10 = *(long *)(param_1 + 0x188);
  do {
    lVar16 = lVar10;
    lVar10 = *(long *)(lVar16 + 0x98);
  } while (*(long *)(lVar16 + 0x98) != 0 && (*(ulong *)(lVar16 + 0xb8) & 0x20020000ffe) == 0);
  FUN_034b0b6c(lVar16,lVar11,param_1 + 0x118);
  if (lVar17 != 0) {
    FUN_034b0f60(lVar16,lVar11,lVar17 + 4);
  }
  if (*(long *)(param_1 + 0x250) != 0) {
    FUN_0350c6bc();
  }
  uVar6 = *(ushort *)(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 300) = 0x42ca0000;
  *(undefined8 *)(param_1 + 0xf8) = 0x20000005d;
  *(undefined4 *)(param_1 + 0x100) = 0;
  if ((uVar6 >> 7 & 1) == 0) {
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  plVar8 = *(long **)(param_1 + 0x188);
  puVar13 = (undefined8 *)0x0;
  if (param_2 != (void *)0x0) {
    puVar13 = (undefined8 *)((long)param_2 + 0xb8);
  }
  if (plVar20 != plVar8) {
    puVar18 = puVar13;
    if ((uVar6 & 4) != 0) {
      puVar18 = &local_1d8;
    }
    *(ushort *)(param_1 + 0x106) = *(ushort *)(param_1 + 0x106) & 0xfd21;
    lVar17 = param_1 + 0x200;
    if ((uVar6 & 2) != 0) {
      lVar17 = 0;
    }
    (**(code **)(*plVar8 + 0x150))
              (plVar8,param_1 + 0x78,param_1 + 0x1f0,lVar11,lVar17,puVar18,bVar7,plVar20);
  }
  *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x200);
  *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x208);
  uVar23 = *(uint *)(param_1 + 0x1f8);
  *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x20c);
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x210);
  if (uVar23 == 0) {
    fVar22 = 1.0;
  }
  else {
    uVar14 = (ulong)uVar23 * 0x18 - 0x18;
    lVar10 = *(long *)(param_1 + 0x1f0);
    uVar5 = ((uint)(uVar14 / 0x18) & 0xfffffff) + 1;
    lVar17 = lVar10;
    if ((uVar5 & 3) == 0) {
      fVar22 = 1.0;
    }
    else {
      fVar22 = 1.0;
      lVar16 = -((ulong)uVar5 & 3);
      do {
        pfVar1 = (float *)(lVar17 + 0x10);
        lVar17 = lVar17 + 0x18;
        fVar22 = *pfVar1 * fVar22;
        bVar7 = lVar16 != -1;
        lVar16 = lVar16 + 1;
      } while (bVar7);
    }
    if (0x47 < uVar14) {
      do {
        pfVar1 = (float *)(lVar17 + 0x10);
        pfVar2 = (float *)(lVar17 + 0x28);
        pfVar3 = (float *)(lVar17 + 0x40);
        pfVar4 = (float *)(lVar17 + 0x58);
        lVar17 = lVar17 + 0x60;
        fVar22 = *pfVar4 * *pfVar1 * fVar22 * *pfVar2 * *pfVar3;
      } while (lVar10 + (ulong)uVar23 * 0x18 != lVar17);
    }
  }
  fVar24 = *(float *)(param_1 + 0x268) * fVar22 * *(float *)(param_1 + 0x26c);
  *(ushort *)(param_1 + 0x1b0) = *(ushort *)(param_1 + 0x1b0) & 0xffef;
  fVar22 = fVar24;
  if (fVar24 <= 0.0) {
    fVar22 = 0.0;
  }
  *(float *)(param_1 + 0xe0) = fVar22;
  fVar22 = (float)FUN_034ad5d0(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x28));
  if ((fVar22 != *(float *)(param_1 + 0x2cc)) || (fVar24 != *(float *)(param_1 + 0x2d0))) {
    *(float *)(param_1 + 0x2cc) = fVar22;
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    *(float *)(param_1 + 0x2d0) = fVar24;
    fVar22 = (float)NEON_fminnm(fVar22,0x42c80000);
    if (*(float *)(param_1 + 0x2c0) != fVar22) {
      if (*(int *)(param_1 + 0x310) != 0) {
        puVar18 = *(undefined8 **)(param_1 + 0x308);
        fVar24 = 50.0;
        if ((((uint)fVar22 ^ 0xffffffff) & 0x7f800000) != 0) {
          fVar24 = fVar22;
        }
        do {
          puVar15 = puVar18 + 1;
          local_c8 = param_1;
          FUN_034aa24c(*puVar18,*(undefined8 *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c8),
                       CONCAT44(*(undefined4 *)(param_1 + 0x2c4),fVar24),
                       *(undefined4 *)(param_1 + 0x2c8),&local_c8);
          puVar18 = puVar15;
        } while (puVar15 !=
                 (undefined8 *)(*(long *)(param_1 + 0x308) + (ulong)*(uint *)(param_1 + 0x310) * 8))
        ;
      }
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
      uVar23 = NEON_fminnm(fVar22,0x42c80000);
      if ((~uVar23 & 0x7f800000) != 0) {
        *(uint *)(param_1 + 0x2c0) = uVar23;
      }
    }
  }
  uVar9 = *(ushort *)(param_1 + 0x1b0);
  if ((uVar9 >> 2 & 1) != 0) {
    plVar20 = *(long **)(param_1 + 0x68);
    if (plVar20 != (long *)0x0) {
      while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
        *(undefined4 *)(plVar20 + 3) = 0;
      }
    }
    puVar18 = puVar13;
    if ((uVar6 & 4) != 0) {
      puVar18 = &local_1d8;
    }
    if (*(uint *)(puVar18 + 0x21) != 0) {
      local_b8 = *(undefined4 *)(param_1 + 0x2f4);
      local_b0 = *(undefined8 *)(param_1 + 0x2f8);
      local_c8 = *(long *)(param_1 + 0x28);
      uStack_c0 = *(undefined8 *)(param_1 + 0x2ec);
      local_a8 = *(undefined4 *)(param_1 + 0x38);
      uStack_a4 = *(undefined4 *)(param_1 + 0x228);
      local_98 = param_1;
      uVar23 = 1;
      if ((uVar9 & 2) != 0) {
        uVar23 = 2;
      }
      local_a0 = *(undefined4 *)(param_1 + 0x2d8);
      uStack_9c = uVar23 & *(int *)(param_1 + 699) >> 0x1f;
      lVar17 = *(long *)PTR_DAT_047e7048;
      if ((uVar6 & 4) != 0) {
        puVar13 = &local_1d8;
      }
      lVar10 = puVar13[0x20];
      lVar16 = lVar10 + (ulong)*(uint *)(puVar18 + 0x21) * 0x20;
      do {
        uVar23 = *(uint *)(*(long **)(lVar10 + 0x18) + 1);
        if (uVar23 != 0) {
          lVar19 = (ulong)uVar23 << 3;
          puVar13 = (undefined8 *)**(long **)(lVar10 + 0x18);
          do {
            uVar21 = *puVar13;
            FUN_0348bdb4(uVar21,lVar10,&local_c8,*(undefined8 *)(lVar17 + 0x18),param_1 + 0x68);
            local_88 = *(undefined8 *)(lVar10 + 8);
            _local_80 = CONCAT44(*(undefined4 *)(lVar10 + 0x14),3);
            local_90 = uVar21;
            FUN_03497f00(lVar17,&local_90,&local_c8,param_1 + 0x68);
            lVar19 = lVar19 + -8;
            puVar13 = puVar13 + 1;
          } while (lVar19 != 0);
        }
        lVar10 = lVar10 + 0x20;
      } while (lVar10 != lVar16);
    }
    FUN_034b10d8(*(undefined8 *)(param_1 + 0x188),lVar11,param_1 + 0x118,param_1 + 0x140);
    uVar9 = *(ushort *)(param_1 + 0x1b0) & 0xfffb;
    *(ushort *)(param_1 + 0x1b0) = uVar9;
  }
  if (local_d8 != (undefined8 *)0x0) {
    local_d0 = local_d0 & 0xffffffff00000000;
    if (&local_1d8 != local_d8) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      uVar9 = *(ushort *)(param_1 + 0x1b0);
    }
    local_d8 = (undefined8 *)0x0;
    local_d0 = local_d0 & 0xffffffff;
  }
LAB_034a5524:
  *(ushort *)(param_1 + 0x1b0) = uVar9 | 3;
  if (*(long **)(param_1 + 400) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 400) + 0x20))();
  }
  return;
}


