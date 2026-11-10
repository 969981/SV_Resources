/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0107276c; name: FUN_0107276c
 */


bool FUN_0107276c(long param_1,long param_2,byte param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *local_248;
  char acStack_240 [512];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  if (param_3 == 0) {
    if (((*PTR_DAT_047d89f8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar5 = *(long *)PTR_DAT_047d8a00;
    *(long *)PTR_DAT_047d8a08 = lVar5;
    param_3 = *(byte *)(lVar5 + 0x2c);
  }
  memset(acStack_240,0,0x200);
  snprintf(acStack_240,0x200,"%s%d",*(undefined8 *)(param_2 + 8),(ulong)param_3);
  FUN_00f12608(&local_248,acStack_240);
  plVar3 = local_248;
  puVar1 = (ulong *)PTR_DAT_047d8b70;
  if (local_248 != (long *)0x0) {
    puVar1 = (ulong *)(local_248 + 6);
  }
  uVar11 = *puVar1;
  if (local_248 != (long *)0x0) {
    (**(code **)(*local_248 + 0x18))(local_248);
  }
  uVar6 = *(ulong *)(param_1 + 0x58);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & uVar11;
    }
    else if (uVar11 < uVar6) {
      uVar8 = uVar11;
    }
    else {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar11 / uVar6;
      }
      uVar8 = uVar11 - uVar8 * uVar6;
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x50) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == uVar11) {
            if (plVar9[2] == uVar11) goto LAB_01072930;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) goto LAB_010728e0;
          plVar9 = (long *)*plVar9;
          plVar10 = (long *)0x0;
        } while (plVar9 != (long *)0x0);
        goto LAB_01072934;
      }
      do {
        uVar7 = plVar9[1];
        if (uVar7 == uVar11) {
          if (plVar9[2] == uVar11) goto LAB_01072930;
        }
        else {
          if (uVar6 <= uVar7) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar7 / uVar6;
            }
            uVar7 = uVar7 - uVar2 * uVar6;
          }
          if (uVar7 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
LAB_010728e0:
  plVar10 = (long *)0x0;
LAB_01072934:
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (local_248 != (long *)0x0) {
    (**(code **)(*local_248 + 0x20))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return plVar10 != (long *)0x0;
LAB_01072930:
  plVar10 = plVar9;
  goto LAB_01072934;
}


