/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017df8a0; name: FUN_017df8a0
 */


/* WARNING: Removing unreachable block (ram,0x017dfc48) */
/* WARNING: Removing unreachable block (ram,0x017dfc4c) */
/* WARNING: Removing unreachable block (ram,0x017dfc54) */
/* WARNING: Removing unreachable block (ram,0x017dfc5c) */
/* WARNING: Removing unreachable block (ram,0x017dfd5c) */
/* WARNING: Removing unreachable block (ram,0x017dfd64) */
/* WARNING: Removing unreachable block (ram,0x017dfd68) */
/* WARNING: Removing unreachable block (ram,0x017dfd70) */
/* WARNING: Removing unreachable block (ram,0x017dfd78) */
/* WARNING: Removing unreachable block (ram,0x017dfedc) */
/* WARNING: Removing unreachable block (ram,0x017dfeec) */
/* WARNING: Removing unreachable block (ram,0x017dfd80) */
/* WARNING: Removing unreachable block (ram,0x017dfc64) */
/* WARNING: Removing unreachable block (ram,0x017dfc68) */

void FUN_017df8a0(long *param_1,long param_2,uint param_3)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  short sVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  long local_60;
  long local_58;
  undefined8 local_38;
  
  uVar13 = *(ulong *)(param_2 + 0xe8);
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar19 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar14 = (ulong)param_3;
    if (uVar19 < 2) {
      uVar15 = (ulong)((int)uVar13 - 1U & param_3);
    }
    else {
      uVar15 = uVar14;
      if (uVar13 <= uVar14) {
        uVar15 = 0;
        if (uVar13 != 0) {
          uVar15 = uVar14 / uVar13;
        }
        uVar15 = uVar14 - uVar15 * uVar13;
      }
    }
    plVar18 = *(long **)(*(long *)(param_2 + 0xe0) + uVar15 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar18[1] == uVar14) {
            if (*(uint *)(plVar18 + 2) == param_3) goto LAB_017df94c;
          }
          else if ((plVar18[1] & uVar13 - 1) != uVar15) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar18[1];
          if (uVar19 == uVar14) {
            if (*(uint *)(plVar18 + 2) == param_3) goto LAB_017df94c;
          }
          else {
            if (uVar13 <= uVar19) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar19 / uVar13;
              }
              uVar19 = uVar19 - uVar5 * uVar13;
            }
            if (uVar19 != uVar15) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  goto LAB_017df960;
code_r0x017dfa98:
  sVar17 = sVar3;
  if (sVar3 == 0) goto LAB_017df960;
  goto LAB_017dfa6c;
LAB_017df94c:
  FUN_00f53cf4(&local_78,plVar18[3]);
  if ((local_78 != (undefined8 *)0x0) && (*(short *)((long)local_78 + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_78 + 0x1a);
    sVar17 = *(short *)((long)local_78 + 0x1a);
LAB_017dfa6c:
    sVar3 = *psVar2;
    if (sVar3 == sVar17) {
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar16) {
        *psVar2 = sVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_017dfa90;
      bVar16 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_017dfa90:
      bVar16 = false;
    }
    if (!bVar16) goto code_r0x017dfa98;
    lVar11 = local_78[2];
    if (lVar11 != 0) {
      lVar20 = *(long *)(lVar11 + 0x18);
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      FUN_00c43ef0(&local_68,lVar20 + 0x30);
      *param_1 = 0;
      param_1[1] = 0;
      puVar6 = PTR_DAT_047d3908;
      lVar12 = 0;
      if (lVar20 != 0) {
        lVar12 = lVar20 + 0x28;
      }
      if (local_68[2] == lVar12) {
        do {
          lVar12 = local_60;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(&local_60,0x10);
          if (bVar16) {
            local_60 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        puVar8 = PTR_DAT_047d3918;
        puVar7 = PTR_DAT_047d3910;
        uVar10 = *(undefined8 *)PTR_DAT_047d3910;
        *(undefined8 *)PTR_DAT_047d3918 = uVar10;
        FUN_00c44204(&local_58,uVar10,lVar12);
        puVar21 = local_68;
        local_68 = (undefined8 *)0x0;
        if (puVar21 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar21 + 3);
          do {
            sVar17 = *psVar2;
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar16) {
              *psVar2 = sVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar17 == 1) {
            piVar1 = (int *)((long)puVar21 + 0x1c);
            do {
              iVar9 = *piVar1;
              cVar4 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar16) {
                *piVar1 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 != -1) {
              if (((*puVar6 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar20 = *(long *)puVar7;
              *(long *)puVar8 = lVar20;
              local_38 = *puVar21;
              FUN_00c44438(lVar20 + 0x8040,&local_38);
            }
          }
          else if (sVar17 == 0) goto LAB_017df9d4;
        }
        if (local_58 == 0) {
          FUN_0221da50(param_1);
        }
        else {
          puVar21 = (undefined8 *)*param_1;
          *param_1 = 0;
          if (puVar21 != (undefined8 *)0x0) {
            psVar2 = (short *)(puVar21 + 3);
            do {
              sVar17 = *psVar2;
              cVar4 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar16) {
                *psVar2 = sVar17 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar17 == 1) {
              piVar1 = (int *)((long)puVar21 + 0x1c);
              do {
                iVar9 = *piVar1;
                cVar4 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar16) {
                  *piVar1 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar9 != -1) {
                if (((*puVar6 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar20 = *(long *)puVar7;
                *(long *)puVar8 = lVar20;
                local_38 = *puVar21;
                FUN_00c44438(lVar20 + 0x8040,&local_38);
              }
            }
            else if (sVar17 == 0) goto LAB_017df9d4;
          }
          lVar20 = local_58;
          local_58 = 0;
          *param_1 = lVar20;
          param_1[1] = lVar12;
        }
      }
      puVar21 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_68 + 3);
        do {
          sVar17 = *psVar2;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar16) {
            *psVar2 = sVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_68 + 0x1c);
          do {
            iVar9 = *piVar1;
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar16) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_38 = *puVar21;
            FUN_00c44438(lVar12 + 0x8040,&local_38);
          }
        }
        else if (sVar17 == 0) goto LAB_017df9d4;
      }
      lVar12 = *(long *)(lVar11 + 8);
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar17 = *psVar2;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar16) {
          *psVar2 = sVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar17 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
      }
      else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_017df964;
    }
  }
LAB_017df960:
  *param_1 = 0;
  param_1[1] = 0;
LAB_017df964:
  puVar21 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_78 + 3);
    do {
      sVar17 = *psVar2;
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar16) {
        *psVar2 = sVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar17 == 1) {
      piVar1 = (int *)((long)local_78 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar16) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_68 = (undefined8 *)*puVar21;
        FUN_00c44438(lVar11 + 0x8040,&local_68);
      }
    }
    else if (sVar17 == 0) {
LAB_017df9d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


