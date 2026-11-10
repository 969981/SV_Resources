/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dc9d64; name: FUN_00dc9d64
 */


void FUN_00dc9d64(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  ulong *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  char *pcVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  code *pcVar21;
  long *plVar22;
  long *local_88;
  long *local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  
  pcVar17 = *(char **)(param_3 + 8);
  if ((pcVar17 == (char *)0x0) || (*pcVar17 == '\0')) {
    plVar22 = (long *)FUN_00d44228();
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar10 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar10;
    FUN_00cf9884(&local_80,uVar10,pcVar17);
    plVar22 = local_80;
  }
  puVar8 = PTR_DAT_047d8b70;
  uVar15 = *(ulong *)(param_2 + 0x2c0);
  puVar2 = (ulong *)PTR_DAT_047d8b70;
  if (plVar22 != (long *)0x0) {
    puVar2 = (ulong *)(plVar22 + 6);
  }
  if (uVar15 != 0) {
    uVar13 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar11 = *puVar2;
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar15 - 1 & uVar11;
    }
    else if (uVar11 < uVar15) {
      uVar14 = uVar11;
    }
    else {
      uVar14 = 0;
      if (uVar15 != 0) {
        uVar14 = uVar11 / uVar15;
      }
      uVar14 = uVar11 - uVar14 * uVar15;
    }
    plVar16 = *(long **)(*(long *)(param_2 + 0x2b8) + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (uVar11 == plVar16[1]) {
            puVar2 = (ulong *)PTR_DAT_047d8b70;
            if (plVar16[2] != 0) {
              puVar2 = (ulong *)(plVar16[2] + 0x30);
            }
            if (*puVar2 == uVar11) goto LAB_00dc9eac;
          }
          else if ((plVar16[1] & uVar15 - 1) != uVar14) goto LAB_00dca0f4;
          plVar16 = (long *)*plVar16;
          plVar19 = (long *)0x0;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar11 == uVar13) {
            puVar2 = (ulong *)PTR_DAT_047d8b70;
            if (plVar16[2] != 0) {
              puVar2 = (ulong *)(plVar16[2] + 0x30);
            }
            if (*puVar2 == uVar11) goto LAB_00dc9eac;
          }
          else {
            if (uVar15 <= uVar13) {
              uVar6 = 0;
              if (uVar15 != 0) {
                uVar6 = uVar13 / uVar15;
              }
              uVar13 = uVar13 - uVar6 * uVar15;
            }
            if (uVar13 != uVar14) goto LAB_00dca0f4;
          }
          plVar16 = (long *)*plVar16;
          plVar19 = (long *)0x0;
        } while (plVar16 != (long *)0x0);
      }
      goto LAB_00dc9eb0;
    }
  }
LAB_00dca0f4:
  plVar19 = (long *)0x0;
LAB_00dc9eb0:
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  if (plVar19 != (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00d0a71c(param_1,plVar19 + 3);
    return;
  }
  pcVar21 = *(code **)(param_2 + 800);
  if (pcVar21 == (code *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    pcVar17 = strchr(*(char **)(param_3 + 8),0x2e);
    puVar7 = PTR_PTR_047d4508;
    if (pcVar17 == (char *)0x0) {
      lVar20 = *(long *)(param_2 + 0x3a8);
      lVar18 = *(long *)(param_2 + 0x3a0);
      if ((lVar20 != lVar18) && (lVar18 != lVar20)) {
        do {
          FUN_00dca1f8(&local_88,lVar18,param_3);
          plVar16 = local_88;
          plVar22 = (long *)puVar7;
          local_80 = (long *)puVar8;
          if (local_88 != (long *)0x0) {
            plVar22 = local_88 + 7;
            local_80 = local_88 + 6;
          }
          local_80 = (long *)*local_80;
          lStack_78 = *plVar22;
          if (local_88 == (long *)0x0) {
            local_70 = 0;
          }
          else {
            local_70 = local_88[8];
            local_68 = (long *)0x0;
            (**(code **)(*local_88 + 0x18))(local_88);
          }
          local_68 = plVar16;
          (**(code **)(param_2 + 800))(param_1,param_2 + 0x340,&local_80);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
          if (*param_1 != 0) {
            if (*(short *)(*param_1 + 0x1a) != 0) {
              return;
            }
            plVar22 = (long *)*param_1;
            if (plVar22 != (long *)0x0) {
              plVar16 = plVar22 + 3;
              do {
                sVar3 = (short)*plVar16;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar5) {
                  *(short *)plVar16 = sVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar3 == 1) {
                piVar1 = (int *)((long)plVar22 + 0x1c);
                do {
                  iVar9 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
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
                  local_80 = (long *)*plVar22;
                  FUN_00c44438(lVar12 + 0x8040,&local_80);
                }
              }
              else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
          }
          lVar18 = lVar18 + 8;
        } while (lVar18 != lVar20);
        pcVar21 = *(code **)(param_2 + 800);
      }
    }
    (*pcVar21)(param_1,param_2 + 0x340,param_3);
  }
  return;
LAB_00dc9eac:
  plVar19 = plVar16;
  goto LAB_00dc9eb0;
}


