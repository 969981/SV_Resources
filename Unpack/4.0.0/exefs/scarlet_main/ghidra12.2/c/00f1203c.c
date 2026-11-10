/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f1203c; name: FUN_00f1203c
 */


void FUN_00f1203c(long *param_1,long param_2,long param_3,long *param_4,byte param_5)

{
  int *piVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  ulong uVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  long local_260;
  long lStack_258;
  long local_250;
  long *local_248;
  long *local_48;
  
  if (param_5 == 0) {
    if (((*PTR_DAT_047d89f8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar10 = *(long *)PTR_DAT_047d8a00;
    *(long *)PTR_DAT_047d8a08 = lVar10;
    param_5 = *(byte *)(lVar10 + 0x2c);
  }
  nn::os::LockMutex((MutexType *)(param_2 + 0x28));
  lVar10 = FUN_00f124d8(&local_260,*(undefined8 *)(param_2 + 8),PTR_DAT_047dadc0);
  *param_1 = lVar10;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  memset(&local_260,0,0x200);
  snprintf((char *)&local_260,0x200,"%s%d",*(undefined8 *)(param_3 + 8),(ulong)param_5);
  FUN_00f12608(&local_48,&local_260);
  plVar9 = local_48;
  puVar6 = PTR_DAT_047d8b70;
  puVar2 = (ulong *)PTR_DAT_047d8b70;
  if (local_48 != (long *)0x0) {
    puVar2 = (ulong *)(local_48 + 6);
  }
  uVar18 = *puVar2;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))(local_48);
  }
  uVar11 = *(ulong *)(param_2 + 0x58);
  plVar12 = (long *)(param_2 + 0x50);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar15 = uVar11 - 1 & uVar18;
    }
    else if (uVar18 < uVar11) {
      uVar15 = uVar18;
    }
    else {
      uVar15 = 0;
      if (uVar11 != 0) {
        uVar15 = uVar18 / uVar11;
      }
      uVar15 = uVar18 - uVar15 * uVar11;
    }
    plVar16 = *(long **)(*plVar12 + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == uVar18) {
            if (plVar16[2] == uVar18) goto LAB_00f121d4;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar15) goto LAB_00f123c0;
          plVar16 = (long *)*plVar16;
          plVar14 = (long *)0x0;
        } while (plVar16 != (long *)0x0);
        goto LAB_00f121d8;
      }
      do {
        uVar13 = plVar16[1];
        if (uVar13 == uVar18) {
          if (plVar16[2] == uVar18) goto LAB_00f121d4;
        }
        else {
          if (uVar11 <= uVar13) {
            uVar5 = 0;
            if (uVar11 != 0) {
              uVar5 = uVar13 / uVar11;
            }
            uVar13 = uVar13 - uVar5 * uVar11;
          }
          if (uVar13 != uVar15) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
LAB_00f123c0:
  plVar14 = (long *)0x0;
LAB_00f121d8:
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  plVar16 = local_48;
  plVar9 = (long *)PTR_PTR_047d4508;
  if (plVar14 != (long *)0x0) {
    plVar14 = (long *)puVar6;
    if (local_48 != (long *)0x0) {
      plVar14 = local_48 + 6;
    }
    local_260 = *plVar14;
    plVar14 = (long *)PTR_PTR_047d4508;
    if (local_48 != (long *)0x0) {
      plVar14 = local_48 + 7;
    }
    lStack_258 = *plVar14;
    if (local_48 == (long *)0x0) {
      local_250 = 0;
    }
    else {
      local_250 = local_48[8];
    }
    local_248 = (long *)0x0;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))(local_48);
    }
    local_248 = plVar16;
    plVar16 = (long *)FUN_00f12718(plVar12,&local_260);
    lVar10 = *(long *)(*plVar16 + 0x88);
    if (lVar10 != 0) {
      plVar14 = *(long **)(lVar10 + 0x210);
      if (plVar14 != *(long **)(lVar10 + 0x218)) {
        uVar17 = 0;
        do {
          plVar3 = (long *)puVar6;
          if (*plVar14 != 0) {
            plVar3 = (long *)(*plVar14 + 0x30);
          }
          if (*plVar3 == *param_4) {
            bVar7 = uVar17 < *(ushort *)(*(long *)(*plVar16 + 0x68) + 2);
            goto LAB_00f12294;
          }
          plVar14 = plVar14 + 1;
          uVar17 = uVar17 + 1;
        } while (*(long **)(lVar10 + 0x218) != plVar14);
      }
    }
    bVar7 = false;
LAB_00f12294:
    if (local_248 != (long *)0x0) {
      (**(code **)(*local_248 + 0x20))();
    }
    plVar16 = local_48;
    if (bVar7) {
      plVar14 = (long *)puVar6;
      if (local_48 != (long *)0x0) {
        plVar9 = local_48 + 7;
        plVar14 = local_48 + 6;
      }
      local_260 = *plVar14;
      lStack_258 = *plVar9;
      if (local_48 == (long *)0x0) {
        local_250 = 0;
      }
      else {
        local_250 = local_48[8];
      }
      local_248 = (long *)0x0;
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x18))(local_48);
      }
      local_248 = plVar16;
      plVar9 = (long *)FUN_00f12718(plVar12,&local_260);
      lVar10 = *(long *)(*plVar9 + 0x88);
      if (lVar10 != 0) {
        plVar12 = *(long **)(lVar10 + 0x210);
        if (plVar12 != *(long **)(lVar10 + 0x218)) {
          iVar8 = 0;
          do {
            plVar16 = (long *)puVar6;
            if (*plVar12 != 0) {
              plVar16 = (long *)(*plVar12 + 0x30);
            }
            if (*plVar16 == *param_4) {
              FUN_00e388b8(*plVar9,iVar8,*param_1);
              break;
            }
            plVar12 = plVar12 + 1;
            iVar8 = iVar8 + 1;
          } while (*(long **)(lVar10 + 0x218) != plVar12);
        }
      }
      if (local_248 != (long *)0x0) {
        (**(code **)(*local_248 + 0x20))();
      }
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x28));
  return;
LAB_00f121d4:
  plVar14 = plVar16;
  goto LAB_00f121d8;
}


