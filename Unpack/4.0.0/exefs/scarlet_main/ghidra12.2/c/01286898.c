/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01286898; name: FUN_01286898
 */


void FUN_01286898(long *param_1,long param_2,long param_3,byte param_4)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *local_258;
  long local_250;
  long lStack_248;
  long local_240;
  long *local_238;
  
  if (param_4 == 0) {
    if (((*PTR_DAT_047d89f8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar9 = *(long *)PTR_DAT_047d8a00;
    *(long *)PTR_DAT_047d8a08 = lVar9;
    param_4 = *(byte *)(lVar9 + 0x2c);
  }
  nn::os::LockMutex((MutexType *)(param_2 + 0x28));
  memset(&local_250,0,0x200);
  snprintf((char *)&local_250,0x200,"%s%d",*(undefined8 *)(param_3 + 8),(ulong)param_4);
  FUN_00f12608(&local_258,&local_250);
  plVar6 = local_258;
  plVar8 = (long *)PTR_DAT_047d8b70;
  puVar2 = (ulong *)PTR_DAT_047d8b70;
  if (local_258 != (long *)0x0) {
    puVar2 = (ulong *)(local_258 + 6);
  }
  uVar15 = *puVar2;
  if (local_258 != (long *)0x0) {
    (**(code **)(*local_258 + 0x18))(local_258);
  }
  uVar10 = *(ulong *)(param_2 + 0x58);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar15;
    }
    else if (uVar15 < uVar10) {
      uVar12 = uVar15;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar15 / uVar10;
      }
      uVar12 = uVar15 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(param_2 + 0x50) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar15) {
            if (plVar13[2] == uVar15) goto LAB_012869f0;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) goto LAB_01286ad8;
          plVar13 = (long *)*plVar13;
          plVar14 = (long *)0x0;
        } while (plVar13 != (long *)0x0);
        goto LAB_012869f4;
      }
      do {
        uVar11 = plVar13[1];
        if (uVar11 == uVar15) {
          if (plVar13[2] == uVar15) goto LAB_012869f0;
        }
        else {
          if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar5 * uVar10;
          }
          if (uVar11 != uVar12) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_01286ad8:
  plVar14 = (long *)0x0;
LAB_012869f4:
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  plVar6 = local_258;
  if (plVar14 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    if (local_258 != (long *)0x0) {
      plVar8 = local_258 + 6;
    }
    local_250 = *plVar8;
    plVar8 = (long *)PTR_PTR_047d4508;
    if (local_258 != (long *)0x0) {
      plVar8 = local_258 + 7;
    }
    lStack_248 = *plVar8;
    if (local_258 == (long *)0x0) {
      local_240 = 0;
    }
    else {
      local_240 = local_258[8];
    }
    local_238 = (long *)0x0;
    if (local_258 != (long *)0x0) {
      (**(code **)(*local_258 + 0x18))(local_258);
    }
    local_238 = plVar6;
    plVar8 = (long *)FUN_00f12718((long *)(param_2 + 0x50),&local_250);
    lVar9 = *plVar8;
    *param_1 = lVar9;
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x28);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (local_238 != (long *)0x0) {
      (**(code **)(*local_238 + 0x20))();
    }
  }
  if (local_258 != (long *)0x0) {
    (**(code **)(*local_258 + 0x20))();
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x28));
  return;
LAB_012869f0:
  plVar14 = plVar13;
  goto LAB_012869f4;
}


