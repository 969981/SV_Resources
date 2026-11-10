/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0304ad58; name: FUN_0304ad58
 */


void FUN_0304ad58(long param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  ushort uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_120 [18];
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  float local_b0;
  undefined4 uStack_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  puVar8 = PTR_DAT_047d19f0;
  iVar9 = *(int *)(param_1 + 0x40);
  if (0 < iVar9) {
    lVar13 = 0;
    puVar1 = PTR_DAT_047ddc10 + 0x10;
    do {
      plVar14 = (long *)(*(long *)(param_1 + 0x38) + lVar13 * 0xb0);
      lVar10 = *plVar14;
      if (lVar10 != 0) {
        lVar11 = *(long *)(lVar10 + 0x30);
        plVar12 = (long *)0x0;
        if (lVar11 != 0) {
          plVar12 = (long *)(lVar11 + lVar10 + 0x30);
        }
        if (*(int *)(lVar10 + 0x38) != 0) {
          lVar10 = (long)*(int *)(lVar10 + 0x38) << 3;
          do {
            lVar11 = *plVar12 + (long)plVar12;
            if ((*plVar12 != 0 && lVar11 != 0) && (*(short *)(lVar11 + 0x18) == -0xf00)) {
              uVar18 = *(undefined8 *)(lVar11 + 0x30);
              auVar19._0_8_ =
                   CONCAT17((char)((ulong)uVar18 >> 0x18),
                            CONCAT16((char)((ulong)uVar18 >> 0x10),
                                     (uint6)((uint)(ushort)uVar18 << 0x10 ^ 0x80000000))) ^
                   0x8000000000000000;
              auVar19._8_2_ = 0;
              auVar19[10] = (undefined1)((ulong)uVar18 >> 0x20);
              auVar19[0xb] = (byte)((ulong)uVar18 >> 0x28) ^ 0x80;
              auVar19._12_2_ = 0;
              auVar19[0xe] = (undefined1)((ulong)uVar18 >> 0x30);
              auVar19[0xf] = (byte)((ulong)uVar18 >> 0x38) ^ 0x80;
              auVar19 = NEON_scvtf(auVar19,4);
              fVar4 = auVar19._0_4_ * 5.086263e-10;
              fVar5 = auVar19._4_4_ * 5.086263e-10;
              fVar6 = auVar19._8_4_ * 5.086263e-10;
              fVar7 = auVar19._12_4_ * 5.086263e-10;
              auVar20._0_4_ = fVar4 * fVar4;
              auVar20._4_4_ = fVar5 * fVar5;
              auVar20._8_4_ = fVar6 * fVar6;
              auVar20._12_4_ = fVar7 * fVar7;
              auVar19 = NEON_ext(auVar20,auVar20,8,1);
              fVar16 = auVar19._0_4_ + auVar19._4_4_;
              fVar15 = auVar20._0_4_ + auVar20._4_4_ + fVar16;
              local_80 = 0.0;
              fStack_7c = 0.0;
              fStack_78 = 0.0;
              fStack_74 = 0.0;
              if (fVar15 != 0.0) {
                fVar15 = SQRT(fVar15);
                fStack_74 = SQRT(auVar20._0_4_ + auVar20._4_4_ + fVar16);
                local_80 = fVar4 / fVar15;
                fStack_7c = fVar5 / fStack_74;
                fStack_78 = fVar6 / fVar15;
                fStack_74 = fVar7 / fStack_74;
              }
              uVar18 = *(undefined8 *)(lVar11 + 0x28);
              uVar17 = (ushort)((ulong)uVar18 >> 0x30);
              auVar2._6_2_ = (short)((ulong)uVar18 >> 0x10);
              auVar2._0_6_ = (uint6)(ushort)uVar18 << 0x10;
              auVar2._8_2_ = 0;
              auVar2._10_2_ = (short)((ulong)uVar18 >> 0x20);
              auVar2._12_2_ = 0;
              auVar2._14_2_ = uVar17;
              auVar19 = NEON_scvtf(auVar2,4);
              fVar4 = (float)((uint)uVar17 << 0x10);
              fVar5 = auVar19._4_4_ * fVar4;
              fVar6 = auVar19._12_4_ * fVar4;
              uStack_88 = CONCAT26((short)((uint)fVar6 >> 0x10),
                                   CONCAT24(SUB42(fVar6,0),auVar19._8_4_ * fVar4));
              local_90 = CONCAT26((short)((uint)fVar5 >> 0x10),
                                  CONCAT24(SUB42(fVar5,0),auVar19._0_4_ * fVar4));
              uVar18 = *(undefined8 *)(lVar11 + 0x20);
              uVar17 = (ushort)((ulong)uVar18 >> 0x30);
              auVar3._6_2_ = (short)((ulong)uVar18 >> 0x10);
              auVar3._0_6_ = (uint6)(ushort)uVar18 << 0x10;
              auVar3._8_2_ = 0;
              auVar3._10_2_ = (short)((ulong)uVar18 >> 0x20);
              auVar3._12_2_ = 0;
              auVar3._14_2_ = uVar17;
              auVar19 = NEON_scvtf(auVar3,4);
              fVar4 = (float)((uint)uVar17 << 0x10);
              fVar5 = auVar19._4_4_ * fVar4;
              fVar6 = auVar19._12_4_ * fVar4;
              uStack_98 = CONCAT26((short)((uint)fVar6 >> 0x10),
                                   CONCAT24(SUB42(fVar6,0),auVar19._8_4_ * fVar4));
              local_a0 = CONCAT26((short)((uint)fVar5 >> 0x10),
                                  CONCAT24(SUB42(fVar5,0),auVar19._0_4_ * fVar4));
              uStack_ac = *(undefined4 *)(lVar11 + 0x38);
              local_b0 = *(float *)(lVar11 + 0x3c);
              if (local_b0 < 0.0) {
                local_d0 = 0xffffffff;
                uStack_c8 = 1;
                local_c0 = 2;
                local_bc = 0xc47a00003fc00000;
                local_d8 = puVar1;
                (**(code **)(*(long *)puVar8 + (ulong)*(byte *)(*plVar14 + 0x18) * 0x200 + 0x38))
                          (*plVar14,&local_d8,local_120);
                local_b0 = local_120[0];
                FUN_02ef67b0(*plVar14,&local_b0);
                iVar9 = *(int *)(param_1 + 0x40);
              }
              break;
            }
            plVar12 = plVar12 + 1;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar9);
  }
  return;
}


