/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02006904; name: FUN_02006904
 */


void FUN_02006904(undefined1 (*param_1) [12])

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_170 [4];
  float local_16c;
  undefined1 local_158;
  ulong local_150;
  ulong uStack_148;
  undefined8 local_118;
  undefined1 auStack_110 [4];
  float local_10c;
  undefined8 local_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_98 [3];
  
  if (*(long *)(param_1[2] + 8) == 0) {
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar15 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar19 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar19;
    lVar19 = *(long *)(lVar19 + 0x70);
    if (lVar19 != 0) {
      local_98[0] = 0;
      local_d8 = 0;
      uStack_148 = *(ulong *)(*param_1 + 8) & 0xffffffff;
      local_150 = *(ulong *)*param_1 & 0xffffffff;
      iVar15 = FUN_01e0395c(&local_150);
      uVar22 = (undefined4)*(undefined8 *)*param_1;
      auVar25._4_12_ = SUB1612(ZEXT816(0),4);
      auVar25._0_4_ = (int)*(undefined8 *)(*param_1 + 8);
      uVar17 = FUN_018250f4(CONCAT44(0x44fa0000,uVar22),uVar22,auVar25,0xc4fa0000,&local_d0,lVar19);
      uVar22 = (undefined4)*(undefined8 *)*param_1;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = *(ulong *)(*param_1 + 8) & 0xffffffff;
      if ((uVar17 & 1) == 0) {
        uVar17 = FUN_02006ef8(CONCAT44(0x44fa0000,uVar22),uVar22,auVar24,0xc4fa0000,auStack_110,
                              lVar19);
        if (((uVar17 & 1) != 0) && (0.0 < local_10c)) {
          if (((*PTR_DAT_047dca08 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047dca08), iVar16 != 0)) {
            FUN_00100190(&LAB_02a7e49c,PTR_DAT_047dca10,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047dca08);
          }
          DAT_0483c008 = *(undefined8 *)PTR_DAT_047dca10;
          lVar18 = FUN_00d7b52c(*(undefined8 *)*param_1);
          if (lVar18 != 0) {
            *(undefined8 *)(lVar18 + 0x28) = 0;
            lVar20 = *(long *)(param_1[2] + 8);
            if (lVar20 == 0) {
              *(long *)(param_1[2] + 8) = lVar18;
            }
            else {
              for (lVar21 = *(long *)(lVar20 + 0x28); lVar21 != 0; lVar21 = *(long *)(lVar21 + 0x28)
                  ) {
                lVar20 = lVar21;
              }
              *(long *)(lVar20 + 0x28) = lVar18;
            }
            uStack_c8 = *(ulong *)(*param_1 + 8) & 0xffffffff;
            local_d0 = *(ulong *)*param_1 & 0xffffffff;
            FUN_02006f7c(lVar18,lVar19,&local_d0,auStack_110,iVar15 == 2,1);
          }
        }
      }
      else {
        uVar17 = FUN_02006ef8(CONCAT44(0x44fa0000,uVar22),uVar22,auVar24,auStack_110,lVar19);
        puVar13 = PTR_DAT_047dca08;
        if (((*PTR_DAT_047dca08 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047dca08), iVar16 != 0)) {
          FUN_00100190(&LAB_02a7e49c,PTR_DAT_047dca10,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047dca08);
        }
        puVar14 = PTR_DAT_047dca10;
        DAT_0483c008 = *(undefined8 *)PTR_DAT_047dca10;
        lVar18 = FUN_00d7b52c(*(undefined8 *)*param_1);
        if (lVar18 != 0) {
          *(undefined8 *)(lVar18 + 0x28) = 0;
          lVar20 = *(long *)(param_1[2] + 8);
          if (lVar20 == 0) {
            *(long *)(param_1[2] + 8) = lVar18;
          }
          else {
            for (lVar21 = *(long *)(lVar20 + 0x28); lVar21 != 0; lVar21 = *(long *)(lVar21 + 0x28))
            {
              lVar20 = lVar21;
            }
            *(long *)(lVar20 + 0x28) = lVar18;
          }
          puVar1 = auStack_110;
          if ((uVar17 & 1) == 0) {
            puVar1 = (undefined1 *)0x0;
          }
          FUN_02006f34(lVar18,lVar19,&local_d0,puVar1,iVar15 == 2,1);
          if (((*PTR_DAT_047d92e0 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d92e0), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d94d8,PTR_DAT_047d92e8,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d92e0);
          }
          lVar20 = *(long *)PTR_DAT_047d92e8;
          *(long *)PTR_DAT_047d92f0 = lVar20;
          lVar20 = *(long *)(lVar20 + 0x28);
          if (lVar20 != 0) {
            local_118 = 0;
            local_158 = 0;
            fVar10 = *(float *)(lVar18 + 4);
            while (fVar11 = fVar10, 1.0 < fVar11 + 2000.0) {
              uVar23 = (undefined4)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
              uVar22 = (undefined4)*(undefined8 *)*param_1;
              auVar2._12_4_ = uVar23;
              auVar2._0_12_ = *param_1;
              auVar3._12_4_ = uVar23;
              auVar3._0_12_ = *param_1;
              auVar25 = NEON_ext(auVar2,auVar3,8,1);
              uVar17 = FUN_02006f68(CONCAT44(fVar11 + -1.0,uVar22),uVar22,auVar25._0_4_,auStack_170,
                                    lVar20);
              fVar10 = -2000.0;
              if ((uVar17 & 1) != 0) {
                uVar23 = (undefined4)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
                uVar22 = (undefined4)*(undefined8 *)*param_1;
                fVar10 = local_16c + 1.0;
                if (fVar11 <= local_16c + 1.0) {
                  fVar10 = fVar11;
                }
                auVar4._12_4_ = uVar23;
                auVar4._0_12_ = *param_1;
                auVar5._12_4_ = uVar23;
                auVar5._0_12_ = *param_1;
                auVar25 = NEON_ext(auVar4,auVar5,8,1);
                uVar17 = FUN_018250f4(CONCAT44(fVar10,uVar22),uVar22,auVar25._0_4_,0xc4fa0000,
                                      &local_d0,lVar19);
                fVar10 = local_16c;
                if ((uVar17 & 1) != 0) {
                  uVar23 = (undefined4)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
                  uVar22 = (undefined4)*(undefined8 *)*param_1;
                  auVar6._12_4_ = uVar23;
                  auVar6._0_12_ = *param_1;
                  auVar7._12_4_ = uVar23;
                  auVar7._0_12_ = *param_1;
                  auVar25 = NEON_ext(auVar6,auVar7,8,1);
                  uVar17 = FUN_018250f4(CONCAT44(*(undefined4 *)((ulong)&local_d0 | 4),uVar22),
                                        uVar22,auVar25._0_4_,fVar11 + -0.1,&local_150,lVar19);
                  if ((uVar17 & 1) != 0) {
                    uVar23 = (undefined4)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
                    uVar22 = (undefined4)*(undefined8 *)*param_1;
                    auVar8._12_4_ = uVar23;
                    auVar8._0_12_ = *param_1;
                    auVar9._12_4_ = uVar23;
                    auVar9._0_12_ = *param_1;
                    auVar25 = NEON_ext(auVar8,auVar9,8,1);
                    uVar17 = FUN_02006ef8(CONCAT44(*(undefined4 *)((ulong)&local_150 | 4),uVar22),
                                          uVar22,auVar25._0_4_,auStack_110,lVar19);
                    if (((*puVar13 & 1) == 0) &&
                       (iVar16 = __cxa_guard_acquire(puVar13), iVar16 != 0)) {
                      FUN_00100190(&LAB_02a7e49c,puVar14,&PTR_LOOP_04483000);
                      __cxa_guard_release(puVar13);
                    }
                    DAT_0483c008 = *(undefined8 *)puVar14;
                    lVar18 = FUN_00d7b52c(*(undefined8 *)*param_1);
                    if (lVar18 != 0) {
                      *(undefined8 *)(lVar18 + 0x28) = 0;
                      lVar21 = *(long *)(param_1[2] + 8);
                      if (lVar21 == 0) {
                        *(long *)(param_1[2] + 8) = lVar18;
                      }
                      else {
                        for (lVar12 = *(long *)(lVar21 + 0x28); lVar12 != 0;
                            lVar12 = *(long *)(lVar12 + 0x28)) {
                          lVar21 = lVar12;
                        }
                        *(long *)(lVar21 + 0x28) = lVar18;
                      }
                      puVar1 = auStack_110;
                      if ((uVar17 & 1) == 0) {
                        puVar1 = (undefined1 *)0x0;
                      }
                      FUN_02006f34(lVar18,lVar19,&local_d0,puVar1,iVar15 == 2,1);
                    }
                  }
                  fVar10 = local_d0._4_4_;
                }
              }
            }
            FUN_012c7df0(&local_118);
          }
        }
      }
      FUN_012c7df0(&local_d8);
      FUN_012c7df0(local_98);
    }
  }
  *(uint *)param_1[2] = *(uint *)param_1[2] & 0xfffffffc | 1;
  return;
}


