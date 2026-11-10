/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ef656c; name: FUN_02ef656c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ef656c(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  uint uVar21;
  uint uVar23;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar25;
  undefined1 auVar18 [16];
  int iVar22;
  int iVar24;
  int iVar26;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar27;
  undefined1 auVar28 [16];
  undefined4 local_70;
  undefined4 local_6c;
  float local_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 local_18;
  
  (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x38))
            (param_1,param_2,&local_70);
  puVar9 = PTR_DAT_047d1a08;
  plVar13 = (long *)(param_1 + 0x30);
  plVar11 = (long *)0x0;
  if (*plVar13 != 0) {
    plVar11 = (long *)(*plVar13 + (long)plVar13);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar12 = (long)*(int *)(param_1 + 0x38) << 3;
    do {
      plVar10 = (long *)(*plVar11 + (long)plVar11);
      if ((*plVar11 != 0 && plVar10 != (long *)0x0) && ((short)plVar10[3] == -0xf00)) {
        bVar2 = false;
        goto LAB_02ef6658;
      }
      plVar11 = plVar11 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  local_18 = 0x40;
  plVar10 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_18,0);
  if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
    (**(code **)(puVar9 + 0x10))(plVar10,"hknpShapeMassProperties");
  }
  bVar2 = true;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[4] = 0;
  plVar10[5] = 0;
  plVar10[2] = 1;
  plVar10[3] = 0;
  *(undefined2 *)(plVar10 + 3) = 0xf100;
  *plVar10 = (long)(PTR_DAT_047e34e0 + 0x10);
  plVar10[1] = 0xffffffff;
LAB_02ef6658:
  puVar9 = PTR_DAT_047e34e8;
  uVar8 = _UNK_03caad08;
  uVar7 = _DAT_03caad00;
  auVar17._8_2_ = 0;
  auVar17._0_8_ =
       CONCAT17((char)((uint)(fStack_5c * 1.0000163) >> 0x18),
                CONCAT16((char)((uint)(fStack_5c * 1.0000163) >> 0x10),
                         (uint6)((((ushort)((uint)(local_60 * 1.0000163) >> 0x10) & 0xff80) & 0x7fff
                                 ) << 0x10))) & 0x7f80ffffffffffff;
  auVar17[10] = (byte)((uint)(fStack_58 * 1.0000163) >> 0x10) & 0x80;
  auVar17[0xb] = (byte)((uint)(fStack_58 * 1.0000163) >> 0x18) & 0x7f;
  auVar17._12_2_ = 0;
  auVar17[0xe] = 0x80;
  auVar17[0xf] = 0x28;
  iVar22 = NEON_fmaxnmv(auVar17,4);
  iVar24 = iVar22 + -0x4e800000;
  iVar26 = iVar22 + -0x4e800000;
  iVar4 = iVar22 + -0x4e800000;
  auVar15._0_4_ = (int)(float)(((int)local_60 - iVar22) + 0x4e800000);
  auVar15._4_4_ = (int)(float)(((int)fStack_5c - iVar22) + 0x4e800000);
  auVar15._8_4_ = (int)(float)(((int)fStack_58 - iVar22) + 0x4e800000);
  auVar15._12_4_ = (int)(float)((iStack_54 - iVar22) + 0x4e800000);
  auVar3[4] = (char)iVar24;
  auVar3._0_4_ = iVar22 + -0x4e800000;
  auVar3[5] = (char)((uint)iVar24 >> 8);
  auVar3[6] = (char)((uint)iVar24 >> 0x10);
  auVar3[7] = (char)((uint)iVar24 >> 0x18);
  auVar3[8] = (char)iVar26;
  auVar3[9] = (char)((uint)iVar26 >> 8);
  auVar3[10] = (char)((uint)iVar26 >> 0x10);
  auVar3[0xb] = (char)((uint)iVar26 >> 0x18);
  auVar3[0xc] = (char)iVar4;
  auVar3[0xd] = (char)((uint)iVar4 >> 8);
  auVar3[0xe] = (char)((uint)iVar4 >> 0x10);
  auVar3[0xf] = (char)((uint)iVar4 >> 0x18);
  auVar15 = auVar15 ^ (auVar15 ^ auVar3) & ~*(undefined1 (*) [16])(PTR_DAT_047e34e8 + 0x70);
  iVar22 = (int)_DAT_03caba80;
  auVar16._0_4_ = auVar15._0_4_ + iVar22;
  iVar24 = (int)((ulong)_DAT_03caba80 >> 0x20);
  auVar16._4_4_ = auVar15._4_4_ + iVar24;
  iVar26 = (int)_UNK_03caba88;
  auVar16._8_4_ = auVar15._8_4_ + iVar26;
  iVar4 = (int)((ulong)_UNK_03caba88 >> 0x20);
  auVar16._12_4_ = auVar15._12_4_ + iVar4;
  auVar5._8_8_ = _UNK_03caad08;
  auVar5._0_8_ = _DAT_03caad00;
  auVar17 = a64_TBL(ZEXT816(0),auVar16,auVar5);
  plVar10[4] = auVar17._0_8_;
  auVar28._0_8_ =
       CONCAT17((char)((uint)(fStack_4c * 1.0000163) >> 0x18),
                CONCAT16((char)((uint)(fStack_4c * 1.0000163) >> 0x10),
                         (uint6)((((ushort)((uint)(local_50 * 1.0000163) >> 0x10) & 0xff80) & 0x7fff
                                 ) << 0x10))) & 0x7f80ffffffffffff;
  auVar28._8_2_ = 0;
  auVar28[10] = (byte)((uint)(fStack_48 * 1.0000163) >> 0x10) & 0x80;
  auVar28[0xb] = (byte)((uint)(fStack_48 * 1.0000163) >> 0x18) & 0x7f;
  auVar28._12_2_ = 0;
  auVar28[0xe] = 0x80;
  auVar28[0xf] = 0x28;
  iVar27 = NEON_fmaxnmv(auVar28,4);
  uVar14 = (uint)(float)(((int)local_50 - iVar27) + 0x4e800000);
  uVar21 = (uint)(float)(((int)fStack_4c - iVar27) + 0x4e800000);
  uVar23 = (uint)(float)(((int)fStack_48 - iVar27) + 0x4e800000);
  uVar25 = (uint)(float)((iStack_44 - iVar27) + 0x4e800000);
  auVar18._0_4_ = (uVar14 ^ (uVar14 ^ iVar27 + 0xb1800000U) & ~*(uint *)(puVar9 + 0x70)) + iVar22;
  auVar18._4_4_ = (uVar21 ^ (uVar21 ^ iVar27 + 0xb1800000U) & ~*(uint *)(puVar9 + 0x74)) + iVar24;
  auVar18._8_4_ = (uVar23 ^ (uVar23 ^ iVar27 + 0xb1800000U) & ~*(uint *)(puVar9 + 0x78)) + iVar26;
  auVar18._12_4_ =
       (uVar25 ^ (uVar25 ^ iVar27 + 0xb1800000U) &
                 ~(uint)((ulong)*(undefined8 *)(puVar9 + 0x78) >> 0x20)) + iVar4;
  auVar6._8_8_ = uVar8;
  auVar6._0_8_ = uVar7;
  auVar17 = a64_TBL(ZEXT816(0),auVar18,auVar6);
  plVar10[5] = auVar17._0_8_;
  iVar22 = (int)(fStack_3c * 1.96608e+09);
  iVar24 = (int)(fStack_38 * 1.96608e+09);
  iVar26 = (int)(fStack_34 * 1.96608e+09);
  auVar19._0_8_ =
       CONCAT17((char)((uint)iVar22 >> 0x18),
                CONCAT16((char)((uint)iVar22 >> 0x10),
                         CONCAT15((char)((uint)iVar22 >> 8),
                                  CONCAT14((char)iVar22,(int)(local_40 * 1.96608e+09))))) ^
       0x8000800080008000;
  auVar19[8] = (undefined1)iVar24;
  auVar19[9] = (byte)((uint)iVar24 >> 8) ^ 0x80;
  auVar19[10] = (undefined1)((uint)iVar24 >> 0x10);
  auVar19[0xb] = (byte)((uint)iVar24 >> 0x18) ^ 0x80;
  auVar19[0xc] = (undefined1)iVar26;
  auVar19[0xd] = (byte)((uint)iVar26 >> 8) ^ 0x80;
  auVar19[0xe] = (undefined1)((uint)iVar26 >> 0x10);
  auVar19[0xf] = (byte)((uint)iVar26 >> 0x18) ^ 0x80;
  auVar17 = NEON_ext(auVar19,auVar19,8,1);
  auVar20._0_8_ =
       CONCAT26(auVar17._6_2_,
                CONCAT24(auVar17._2_2_,
                         CONCAT22((short)(auVar19._0_8_ >> 0x30),(short)(auVar19._0_8_ >> 0x10))));
  auVar20._8_8_ = 0;
  plVar10[6] = auVar20._0_8_;
  *(undefined4 *)(plVar10 + 7) = local_6c;
  *(undefined4 *)((long)plVar10 + 0x3c) = local_70;
  FUN_02f03430(auVar20,auVar17,plVar13,plVar10);
  if ((bVar2) && (plVar10[1] != 0)) {
    plVar11 = plVar10 + 2;
    do {
      lVar12 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  return;
}


