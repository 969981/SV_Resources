/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ecaf8; name: FUN_028ecaf8
 */


undefined1  [16] FUN_028ecaf8(long *param_1)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  short sVar14;
  undefined8 *puVar15;
  undefined8 extraout_d0;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 extraout_var;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 *local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined8 local_38;
  
  auVar16 = (**(code **)(*param_1 + 0xb8))();
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x70))(param_1);
  uVar19 = puVar11[3];
  uVar18 = puVar11[2];
  fVar27 = auVar16._0_4_;
  uVar21 = puVar11[5];
  uVar20 = puVar11[4];
  uVar23 = puVar11[7];
  uVar22 = puVar11[6];
  fVar28 = auVar16._4_4_;
  fVar29 = auVar16._8_4_;
  fVar30 = auVar16._12_4_;
  fVar24 = (float)*puVar11 * fVar27 + (float)uVar18 * fVar28 + (float)uVar20 * fVar29 +
           (float)uVar22 * fVar30;
  fVar25 = (float)((ulong)*puVar11 >> 0x20) * fVar27 + (float)((ulong)uVar18 >> 0x20) * fVar28 +
           (float)((ulong)uVar20 >> 0x20) * fVar29 + (float)((ulong)uVar22 >> 0x20) * fVar30;
  auVar7._4_4_ = fVar25;
  auVar7._0_4_ = fVar24;
  fVar26 = (float)puVar11[1] * fVar27 + (float)uVar19 * fVar28 + (float)uVar21 * fVar29 +
           (float)uVar23 * fVar30;
  fVar27 = (float)((ulong)puVar11[1] >> 0x20) * fVar27 + (float)((ulong)uVar19 >> 0x20) * fVar28 +
           (float)((ulong)uVar21 >> 0x20) * fVar29 + (float)((ulong)uVar23 >> 0x20) * fVar30;
  auVar7._12_4_ = fVar27;
  auVar7._8_4_ = fVar26;
  lVar12 = param_1[0x73];
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  auVar16 = FUN_00c43ef0(&local_50,lVar12 + 0x1b8);
  puVar11 = local_50;
  local_40 = *(long **)(lVar12 + 0x1c8);
  if (local_50 == (undefined8 *)0x0) {
    return auVar7;
  }
  if (*(short *)((long)local_50 + 0x1a) != 0) {
    if (local_50 == (undefined8 *)0x0) {
      return auVar7;
    }
    sVar14 = *(short *)((long)local_50 + 0x1a);
    if (sVar14 != 0) {
      puVar15 = (undefined8 *)local_50[1];
      if ((*PTR_DAT_047d39b0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(PTR_DAT_047d39b0);
        puVar8 = PTR_DAT_047d39c8;
        auVar16._8_8_ = extraout_var;
        auVar16._0_8_ = extraout_d0;
        if (iVar10 != 0) {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar10 != 0)) {
            *(undefined8 *)puVar8 = 0;
            __cxa_guard_release(PTR_DAT_047d39c0);
          }
          *(undefined **)PTR_DAT_047d39b8 = puVar8;
          auVar16 = __cxa_guard_release(PTR_DAT_047d39b0);
        }
      }
      plVar9 = local_40;
      if (puVar15 != (undefined8 *)0x0) {
        psVar2 = (short *)((long)puVar11 + 0x1a);
        bVar6 = true;
        do {
          if (puVar15 == (undefined8 *)PTR_DAT_047d39b8) {
            bVar6 = true;
            goto LAB_028ecd44;
          }
          puVar15 = (undefined8 *)*puVar15;
        } while (puVar15 != (undefined8 *)0x0);
        goto LAB_028ecbd0;
      }
    }
  }
LAB_028ecbcc:
  bVar6 = true;
  goto LAB_028ecbd0;
  while (sVar14 = sVar3, sVar3 != 0) {
LAB_028ecd44:
    sVar3 = *psVar2;
    if (sVar3 == sVar14) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_028ecd68;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_028ecd68:
      bVar5 = false;
    }
    if (bVar5) {
      lVar12 = puVar11[2];
      if (lVar12 == 0) goto LAB_028ecbcc;
      plVar13 = (long *)(lVar12 + -8);
      if (local_40 == (long *)0x0) {
        auVar16 = (**(code **)(*plVar13 + 0x18))(plVar13);
        goto LAB_028ecbcc;
      }
      (**(code **)(*local_40 + 0x10))(local_40);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      auVar17 = (**(code **)(*plVar9 + 0x40))(plVar9);
      auVar16._4_4_ =
           auVar17._4_4_ * fVar24 + (float)((ulong)uVar18 >> 0x20) * fVar25 +
           (float)((ulong)uVar20 >> 0x20) * fVar26 + (float)((ulong)uVar22 >> 0x20) * fVar27;
      auVar16._0_4_ =
           auVar17._0_4_ * fVar24 + (float)uVar18 * fVar25 + (float)uVar20 * fVar26 +
           (float)uVar22 * fVar27;
      auVar16._12_4_ =
           auVar17._12_4_ * fVar24 + (float)((ulong)uVar19 >> 0x20) * fVar25 +
           (float)((ulong)uVar21 >> 0x20) * fVar26 + (float)((ulong)uVar23 >> 0x20) * fVar27;
      auVar16._8_4_ =
           auVar17._8_4_ * fVar24 + (float)uVar19 * fVar25 + (float)uVar21 * fVar26 +
           (float)uVar23 * fVar27;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      bVar6 = false;
      break;
    }
  }
LAB_028ecbd0:
  puVar11 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_50 + 3);
    do {
      sVar14 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar14 == 1) {
      piVar1 = (int *)((long)local_50 + 0x1c);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_38 = *puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_38);
      }
    }
    else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (bVar6) {
    return auVar7;
  }
  return auVar16;
}


