/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0106b348; name: FUN_0106b348
 */


void FUN_0106b348(long *param_1,undefined1 *param_2,undefined8 param_3)

{
  ulong uVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  undefined8 local_68;
  
  puVar21 = (undefined1 *)param_1[1];
  if (puVar21 < (undefined1 *)param_1[2]) {
    lVar20 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      *puVar21 = *param_2;
      *(undefined8 *)(puVar21 + 8) = 0;
      *(undefined8 *)(puVar21 + 0x10) = 0;
      FUN_00ca1a48(puVar21 + 8,param_3);
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_0106b868:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar20;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *puVar21 = *param_2;
      *(undefined8 *)(puVar21 + 8) = 0;
      *(undefined8 *)(puVar21 + 0x10) = 0;
      FUN_00ca1a48(puVar21 + 8,param_3);
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar21 + 0x18);
  }
  else {
    uVar17 = param_1[4];
    lVar20 = (long)puVar21 - *param_1 >> 3;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    uVar1 = lVar20 * -0x5555555555555555 + 1;
    if (uVar17 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = param_1[2] - *param_1 >> 3;
    uVar16 = lVar11 * 0x5555555555555556;
    if (uVar1 <= uVar16) {
      uVar1 = uVar16;
    }
    if (uVar17 >> 1 <= (ulong)(lVar11 * -0x5555555555555555)) {
      uVar1 = uVar17;
    }
    if (uVar1 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x18,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar21 = (undefined1 *)(lVar11 + lVar20 * 8);
    lVar22 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 == 0) {
      *puVar21 = *param_2;
      lVar20 = lVar11 + lVar20 * 8;
      puVar13 = (undefined8 *)(lVar20 + 8);
      *puVar13 = 0;
      *(undefined8 *)(lVar20 + 0x10) = 0;
      FUN_00ca1a48(puVar13,param_3);
    }
    else {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0106b868;
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar22;
      lVar20 = lVar11 + lVar20 * 8;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *puVar21 = *param_2;
      puVar13 = (undefined8 *)(lVar20 + 8);
      *puVar13 = 0;
      *(undefined8 *)(lVar20 + 0x10) = 0;
      FUN_00ca1a48(puVar13,param_3);
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    lVar20 = *param_1;
    lVar22 = param_1[1];
    if (lVar22 == lVar20) {
      puVar15 = puVar21;
      lVar22 = lVar20;
    }
    else {
      lVar12 = 0;
      do {
        lVar23 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar14 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar14 == 0) {
          uVar5 = *(undefined1 *)(lVar22 + lVar12 + -0x18);
          *(undefined8 *)(puVar21 + lVar12 + -0x10) = 0;
          *(undefined8 *)(puVar21 + lVar12 + -8) = 0;
          puVar21[lVar12 + -0x18] = uVar5;
          FUN_00ca1ea4(puVar21 + lVar12 + -0x10,lVar22 + lVar12 + -0x10);
        }
        else {
          if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_0106b868;
          *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar23;
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
          uVar5 = *(undefined1 *)(lVar22 + lVar12 + -0x18);
          *(undefined8 *)(puVar21 + lVar12 + -0x10) = 0;
          *(undefined8 *)(puVar21 + lVar12 + -8) = 0;
          puVar21[lVar12 + -0x18] = uVar5;
          FUN_00ca1ea4(puVar21 + lVar12 + -0x10,lVar22 + lVar12 + -0x10);
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar20 - lVar22 != lVar12);
      lVar20 = *param_1;
      puVar15 = puVar21 + lVar12;
      lVar22 = param_1[1];
    }
    lVar12 = param_1[2];
    *param_1 = (long)puVar15;
    param_1[1] = (long)(puVar21 + 0x18);
    param_1[2] = lVar11 + uVar1 * 0x18;
    puVar9 = PTR_LAB_047d3de8;
    puVar8 = PTR_DAT_047d3908;
    if (lVar22 != lVar20) {
      plVar19 = (long *)PTR_DAT_047d3910;
      plVar18 = (long *)PTR_DAT_047d3918;
      do {
        puVar13 = *(undefined8 **)(lVar22 + -0x10);
        if (puVar13 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar13 + 3);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)puVar13 + 0x1c);
            do {
              iVar10 = *piVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 != -1) {
              if (((*puVar8 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(puVar8), plVar19 = (long *)PTR_DAT_047d3910,
                 plVar18 = (long *)PTR_DAT_047d3918, iVar10 != 0)) {
                FUN_00100190(puVar9,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar8);
                plVar19 = (long *)PTR_DAT_047d3910;
                plVar18 = (long *)PTR_DAT_047d3918;
              }
              lVar11 = *plVar19;
              *plVar18 = lVar11;
              local_68 = *puVar13;
              FUN_00c44438(lVar11 + 0x8040,&local_68);
            }
          }
          else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != lVar20);
    }
    if (lVar20 != 0) {
      plVar19 = (long *)param_1[3];
      uVar17 = (**(code **)(*plVar19 + 0xf8))(plVar19);
      if (((uVar17 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar20,lVar12 - lVar20,8);
      }
      else {
        FUN_00c48fe8(plVar19,lVar20,lVar12 - lVar20,8);
      }
    }
  }
  return;
}


