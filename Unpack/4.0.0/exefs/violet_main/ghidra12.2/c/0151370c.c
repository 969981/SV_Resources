/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0151370c; name: FUN_0151370c
 */


void FUN_0151370c(long *param_1,long param_2,long param_3,uint param_4,byte param_5)

{
  int *piVar1;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long local_260;
  long lStack_258;
  long local_250;
  long *local_248;
  long *local_48;
  
  if (param_5 == 0) {
    if (((*PTR_DAT_047d89f8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar12 = *(long *)PTR_DAT_047d8a00;
    *(long *)PTR_DAT_047d8a08 = lVar12;
    param_5 = *(byte *)(lVar12 + 0x2c);
  }
  nn::os::LockMutex((MutexType *)(param_2 + 0x28));
  lVar12 = FUN_00f124d8(&local_260,*(undefined8 *)(param_2 + 8),PTR_DAT_047dadc0);
  *param_1 = lVar12;
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x28);
    do {
      iVar10 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar10 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == -1) {
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
  plVar4 = local_48;
  plVar9 = (long *)PTR_DAT_047d8b70;
  puVar3 = (ulong *)PTR_DAT_047d8b70;
  if (local_48 != (long *)0x0) {
    puVar3 = (ulong *)(local_48 + 6);
  }
  uVar18 = *puVar3;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))(local_48);
  }
  uVar13 = *(ulong *)(param_2 + 0x58);
  plVar2 = (long *)(param_2 + 0x50);
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & uVar18;
    }
    else if (uVar18 < uVar13) {
      uVar15 = uVar18;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar18 / uVar13;
      }
      uVar15 = uVar18 - uVar15 * uVar13;
    }
    plVar16 = *(long **)(*plVar2 + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == uVar18) {
            if (plVar16[2] == uVar18) goto LAB_015138a4;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar15) goto LAB_015139ec;
          plVar16 = (long *)*plVar16;
          plVar17 = (long *)0x0;
        } while (plVar16 != (long *)0x0);
        goto LAB_015138a8;
      }
      do {
        uVar14 = plVar16[1];
        if (uVar14 == uVar18) {
          if (plVar16[2] == uVar18) goto LAB_015138a4;
        }
        else {
          if (uVar13 <= uVar14) {
            uVar8 = 0;
            if (uVar13 != 0) {
              uVar8 = uVar14 / uVar13;
            }
            uVar14 = uVar14 - uVar8 * uVar13;
          }
          if (uVar14 != uVar15) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
LAB_015139ec:
  plVar17 = (long *)0x0;
LAB_015138a8:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  plVar16 = local_48;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (plVar17 != (long *)0x0) {
    plVar17 = plVar9;
    if (local_48 != (long *)0x0) {
      plVar17 = local_48 + 6;
    }
    local_260 = *plVar17;
    plVar17 = (long *)PTR_PTR_047d4508;
    if (local_48 != (long *)0x0) {
      plVar17 = local_48 + 7;
    }
    lStack_258 = *plVar17;
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
    plVar16 = (long *)FUN_00f12718(plVar2,&local_260);
    uVar5 = *(ushort *)(*(long *)(*plVar16 + 0x68) + 2);
    if (local_248 != (long *)0x0) {
      (**(code **)(*local_248 + 0x20))();
    }
    plVar16 = local_48;
    if (param_4 < uVar5) {
      if (local_48 != (long *)0x0) {
        plVar4 = local_48 + 7;
        plVar9 = local_48 + 6;
      }
      local_260 = *plVar9;
      lStack_258 = *plVar4;
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
      puVar11 = (undefined8 *)FUN_00f12718(plVar2,&local_260);
      FUN_00e388b8(*puVar11,param_4,*param_1);
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
LAB_015138a4:
  plVar17 = plVar16;
  goto LAB_015138a8;
}


