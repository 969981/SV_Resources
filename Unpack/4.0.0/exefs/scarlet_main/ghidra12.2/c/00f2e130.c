/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f2e130; name: FUN_00f2e130
 */


void FUN_00f2e130(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 6)) {
    FUN_00f2f518(param_1,param_2);
    return;
  }
  uVar16 = param_1[4];
  lVar19 = param_1[1] - *param_1 >> 6;
  uVar12 = param_2 + lVar19;
  if (0x7ffffffffffffffe < uVar16) {
    uVar16 = 0x7fffffffffffffff;
  }
  if (uVar16 < uVar12) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar13 = param_1[2] - *param_1;
  uVar14 = lVar13 >> 5;
  if (uVar12 <= uVar14) {
    uVar12 = uVar14;
  }
  if (uVar16 >> 1 <= (ulong)(lVar13 >> 6)) {
    uVar12 = uVar16;
  }
  if (uVar12 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 << 6,8);
    if (lVar13 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  puVar8 = PTR_DAT_047dd330;
  lVar19 = lVar13 + lVar19 * 0x40;
  lVar4 = lVar19 + param_2 * 0x40;
  lVar18 = param_2 << 6;
  puVar20 = (undefined8 *)(lVar19 + 8);
  puVar1 = PTR_DAT_047dd330 + 0x10;
  do {
    lVar21 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      puVar20[5] = 0;
      puVar20[6] = 0;
      puVar20[3] = 0;
      puVar20[4] = 0;
      puVar20[1] = 0;
      puVar20[2] = 0;
      puVar20[-1] = puVar1;
      *puVar20 = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00f2e594;
      *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar21;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      puVar20[5] = 0;
      puVar20[6] = 0;
      puVar20[3] = 0;
      puVar20[4] = 0;
      puVar20[1] = 0;
      puVar20[2] = 0;
      puVar20[-1] = puVar8 + 0x10;
      *puVar20 = 0;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    lVar18 = lVar18 + -0x40;
    puVar20 = puVar20 + 8;
  } while (lVar18 != 0);
  lVar18 = *param_1;
  lVar21 = param_1[1];
  if (lVar21 == lVar18) {
    lVar21 = lVar18;
  }
  else {
    puVar1 = PTR_DAT_047dd4d8 + 0x10;
    do {
      lVar10 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        *(undefined8 *)(lVar19 + -0x38) = 0;
        *(undefined8 *)(lVar19 + -0x30) = 0;
        *(undefined8 *)(lVar19 + -0x28) = 0;
        *(undefined8 *)(lVar19 + -0x20) = 0;
        *(undefined8 *)(lVar19 + -0x18) = 0;
        *(undefined **)(lVar19 + -0x40) = puVar1;
        *(undefined8 *)(lVar19 + -0x10) = 0;
        *(undefined8 *)(lVar19 + -8) = 0;
        FUN_00f2ebbc((undefined8 *)(lVar19 + -0x38),lVar21 + -0x38);
        plVar17 = *(long **)(lVar19 + -0x28);
        *(undefined8 *)(lVar19 + -0x28) = 0;
        if (plVar17 != (long *)0x0) {
          lVar10 = plVar17[6];
          psVar3 = (short *)(lVar10 + 0x1a);
          do {
            sVar5 = *psVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar7) {
              *psVar3 = sVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar5 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar17 + 0x50))();
          }
          else if (sVar5 == 0) goto LAB_00f2e4b4;
        }
        uVar15 = *(undefined8 *)(lVar21 + -0x28);
        *(undefined8 *)(lVar21 + -0x28) = 0;
        *(undefined8 *)(lVar19 + -0x28) = uVar15;
        FUN_00ecc978(lVar19 + -0x20,lVar21 + -0x20);
        FUN_00eccc4c(lVar19 + -0x10,lVar21 + -0x10);
        *(undefined **)(lVar19 + -0x40) = puVar8 + 0x10;
      }
      else {
        if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_00f2e594:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar10;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        *(undefined8 *)(lVar19 + -0x38) = 0;
        puVar2 = PTR_DAT_047dd4d8 + 0x10;
        *(undefined8 *)(lVar19 + -0x30) = 0;
        *(undefined8 *)(lVar19 + -0x28) = 0;
        *(undefined **)(lVar19 + -0x40) = puVar2;
        *(undefined8 *)(lVar19 + -0x20) = 0;
        *(undefined8 *)(lVar19 + -0x18) = 0;
        *(undefined8 *)(lVar19 + -0x10) = 0;
        *(undefined8 *)(lVar19 + -8) = 0;
        FUN_00f2ebbc((undefined8 *)(lVar19 + -0x38),lVar21 + -0x38);
        plVar17 = *(long **)(lVar19 + -0x28);
        *(undefined8 *)(lVar19 + -0x28) = 0;
        if (plVar17 != (long *)0x0) {
          lVar10 = plVar17[6];
          psVar3 = (short *)(lVar10 + 0x1a);
          do {
            sVar5 = *psVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar7) {
              *psVar3 = sVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar5 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar17 + 0x50))();
          }
          else if (sVar5 == 0) {
LAB_00f2e4b4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        uVar15 = *(undefined8 *)(lVar21 + -0x28);
        *(undefined8 *)(lVar21 + -0x28) = 0;
        *(undefined8 *)(lVar19 + -0x28) = uVar15;
        FUN_00ecc978(lVar19 + -0x20,lVar21 + -0x20);
        FUN_00eccc4c(lVar19 + -0x10,lVar21 + -0x10);
        *(undefined **)(lVar19 + -0x40) = puVar8 + 0x10;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      }
      lVar21 = lVar21 + -0x40;
      lVar19 = lVar19 + -0x40;
    } while (lVar21 != lVar18);
    lVar18 = *param_1;
    lVar21 = param_1[1];
  }
  *param_1 = lVar19;
  param_1[1] = lVar4;
  lVar19 = param_1[2];
  param_1[2] = lVar13 + uVar12 * 0x40;
  if ((lVar21 != lVar18) && (FUN_00faeeac(lVar21 + -0x40), lVar21 + -0x40 != lVar18)) {
    do {
      FUN_00faeeac(lVar21 + -0x80);
      lVar21 = lVar21 + -0x40;
    } while (lVar18 + 0x40 != lVar21);
  }
  if (lVar18 == 0) {
    return;
  }
  plVar17 = (long *)param_1[3];
  uVar12 = (**(code **)(*plVar17 + 0xf8))(plVar17);
  if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00f2e408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar18,lVar19 - lVar18,8);
    return;
  }
  FUN_00c48fe8(plVar17,lVar18,lVar19 - lVar18,8);
  return;
}


