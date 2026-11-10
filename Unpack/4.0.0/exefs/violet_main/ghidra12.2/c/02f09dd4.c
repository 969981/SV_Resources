/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f09dd4; name: FUN_02f09dd4
 */


void FUN_02f09dd4(float param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  ushort uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_3 == (undefined8 *)0x0) {
    lVar4 = *(long *)(param_2 + 0x30);
    iVar2 = *(int *)(param_2 + 0x38);
    plVar5 = (long *)0x0;
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + param_2 + 0x30);
    }
    lVar4 = (long)iVar2 << 3;
    if (iVar2 != 0) {
      lVar6 = lVar4;
      plVar7 = plVar5;
      do {
        lVar1 = *plVar7 + (long)plVar7;
        if ((*plVar7 != 0 && lVar1 != 0) && (*(short *)(lVar1 + 0x18) == -0xf00)) {
          uVar12 = *(undefined8 *)(lVar1 + 0x30);
          auVar13._0_8_ =
               CONCAT17((char)((ulong)uVar12 >> 0x18),
                        CONCAT16((char)((ulong)uVar12 >> 0x10),
                                 (uint6)(ushort)((ushort)uVar12 ^ 0x8000) << 0x10)) ^
               0x8000000000000000;
          auVar13._8_2_ = 0;
          auVar13[10] = (undefined1)((ulong)uVar12 >> 0x20);
          auVar13[0xb] = (byte)((ulong)uVar12 >> 0x28) ^ 0x80;
          auVar13._12_2_ = 0;
          auVar13[0xe] = (undefined1)((ulong)uVar12 >> 0x30);
          auVar13[0xf] = (byte)((ulong)uVar12 >> 0x38) ^ 0x80;
          auVar13 = NEON_scvtf(auVar13,4);
          fVar18 = auVar13._0_4_ * 5.086263e-10;
          fVar20 = auVar13._4_4_ * 5.086263e-10;
          fVar21 = auVar13._8_4_ * 5.086263e-10;
          fVar22 = auVar13._12_4_ * 5.086263e-10;
          auVar14._0_4_ = fVar18 * fVar18;
          auVar14._4_4_ = fVar20 * fVar20;
          auVar14._8_4_ = fVar21 * fVar21;
          auVar14._12_4_ = fVar22 * fVar22;
          auVar13 = NEON_ext(auVar14,auVar14,8,1);
          fVar9 = auVar13._0_4_ + auVar13._4_4_;
          fVar8 = auVar14._0_4_ + auVar14._4_4_ + fVar9;
          fVar11 = 0.0;
          fVar16 = 0.0;
          fVar17 = 0.0;
          fVar15 = 0.0;
          if (fVar8 != 0.0) {
            fVar8 = SQRT(fVar8);
            fVar15 = SQRT(auVar14._0_4_ + auVar14._4_4_ + fVar9);
            fVar11 = fVar18 / fVar8;
            fVar16 = fVar20 / fVar15;
            fVar17 = fVar21 / fVar8;
            fVar15 = fVar22 / fVar15;
          }
          uVar12 = *(undefined8 *)(lVar1 + 0x28);
          auVar19._0_6_ = (uint6)(ushort)uVar12 << 0x10;
          auVar19._6_2_ = (short)((ulong)uVar12 >> 0x10);
          auVar19._8_2_ = 0;
          auVar19._10_2_ = (short)((ulong)uVar12 >> 0x20);
          auVar19._12_2_ = 0;
          auVar19._14_2_ = (short)((ulong)uVar12 >> 0x30);
          auVar13 = NEON_scvtf(auVar19,4);
          fVar8 = auVar19._12_4_;
          param_4[10] = auVar13._8_4_ * fVar8;
          param_4[0xb] = auVar13._12_4_ * fVar8;
          param_4[8] = auVar13._0_4_ * fVar8;
          param_4[9] = auVar13._4_4_ * fVar8;
          uVar12 = *(undefined8 *)(lVar1 + 0x20);
          uVar10 = (ushort)((ulong)uVar12 >> 0x30);
          auVar3._6_2_ = (short)((ulong)uVar12 >> 0x10);
          auVar3._0_6_ = (uint6)(ushort)uVar12 << 0x10;
          auVar3._8_2_ = 0;
          auVar3._10_2_ = (short)((ulong)uVar12 >> 0x20);
          auVar3._12_2_ = 0;
          auVar3._14_2_ = uVar10;
          auVar13 = NEON_scvtf(auVar3,4);
          fVar8 = (float)((uint)uVar10 << 0x10);
          fVar9 = auVar13._4_4_ * fVar8;
          fVar18 = auVar13._12_4_ * fVar8;
          *(ulong *)(param_4 + 6) =
               CONCAT26((short)((uint)fVar18 >> 0x10),
                        CONCAT24(SUB42(fVar18,0),auVar13._8_4_ * fVar8));
          *(ulong *)(param_4 + 4) =
               CONCAT26((short)((uint)fVar9 >> 0x10),CONCAT24(SUB42(fVar9,0),auVar13._0_4_ * fVar8))
          ;
          *param_4 = *(undefined4 *)(lVar1 + 0x3c);
          param_4[1] = *(undefined4 *)(lVar1 + 0x38);
          param_4[0xe] = fVar17;
          param_4[0xf] = fVar15;
          param_4[0xc] = fVar11;
          param_4[0xd] = fVar16;
          goto LAB_02f0a0ac;
        }
        plVar7 = plVar7 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    local_80 = 1;
    local_90 = PTR_DAT_047ddc10 + 0x10;
    uStack_88 = 0xffffffff;
    uStack_74 = 0x3fc00000;
    uStack_70 = 0xc47a0000;
    local_78 = 0;
    if (iVar2 != 0) {
      do {
        lVar6 = *plVar5 + (long)plVar5;
        if ((*plVar5 != 0 && lVar6 != 0) && (*(short *)(lVar6 + 0x18) == -0xefd)) {
          uStack_70 = *(undefined4 *)(lVar6 + 0x40);
          local_78 = (undefined4)*(undefined8 *)(lVar6 + 0x38);
          uStack_74 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x38) >> 0x20);
          break;
        }
        plVar5 = plVar5 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_2 + 0x18) * 0x200 + 0x38))
              (param_2,&local_90,param_4);
  }
  else {
    *param_4 = *(undefined4 *)((long)param_3 + 0xc);
    param_4[1] = 0x3f800000;
    uVar12 = *param_3;
    *(ulong *)(param_4 + 6) = param_3[1] & 0xffffffff;
    *(undefined8 *)(param_4 + 4) = uVar12;
    uVar12 = param_3[4];
    *(ulong *)(param_4 + 10) = param_3[5] & 0xffffffff;
    *(undefined8 *)(param_4 + 8) = uVar12;
    uVar12 = param_3[2];
    *(undefined8 *)(param_4 + 0xe) = param_3[3];
    *(undefined8 *)(param_4 + 0xc) = uVar12;
    if (param_1 < 0.0) {
      lVar4 = *(long *)(param_2 + 0x30);
      plVar5 = (long *)0x0;
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + param_2 + 0x30);
      }
      iVar2 = *(int *)(param_2 + 0x38);
      lVar4 = (long)iVar2 << 3;
      if (iVar2 != 0) {
        lVar6 = lVar4;
        plVar7 = plVar5;
        do {
          lVar1 = *plVar7 + (long)plVar7;
          if ((*plVar7 != 0 && lVar1 != 0) && (*(short *)(lVar1 + 0x18) == -0xf00)) {
            param_1 = *(float *)(lVar1 + 0x38);
            goto LAB_02f0a0ac;
          }
          plVar7 = plVar7 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      local_38 = 1;
      local_48 = PTR_DAT_047ddc10 + 0x10;
      uStack_40 = 0xffffffff;
      uStack_2c = 0x3fc00000;
      uStack_28 = 0xc47a0000;
      local_30 = 0;
      if (iVar2 != 0) {
        do {
          lVar6 = *plVar5 + (long)plVar5;
          if ((*plVar5 != 0 && lVar6 != 0) && (*(short *)(lVar6 + 0x18) == -0xefd)) {
            uStack_28 = *(undefined4 *)(lVar6 + 0x40);
            local_30 = (undefined4)*(undefined8 *)(lVar6 + 0x38);
            uStack_2c = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x38) >> 0x20);
            break;
          }
          plVar5 = plVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
      (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_2 + 0x18) * 0x200 + 0x38))
                (param_2,&local_48,&local_90);
      param_1 = local_90._4_4_;
    }
  }
LAB_02f0a0ac:
  if (0.0 <= param_1) {
    if (0.0 < param_1) {
      fVar8 = param_1 / (float)param_4[1];
      *(ulong *)(param_4 + 10) =
           CONCAT26((short)((uint)((float)param_4[0xb] * fVar8) >> 0x10),
                    CONCAT24(SUB42((float)param_4[0xb] * fVar8,0),(float)param_4[10] * fVar8));
      *(ulong *)(param_4 + 8) =
           CONCAT26((short)((uint)((float)param_4[9] * fVar8) >> 0x10),
                    CONCAT24(SUB42((float)param_4[9] * fVar8,0),(float)param_4[8] * fVar8));
    }
    param_4[1] = param_1;
  }
  return;
}


