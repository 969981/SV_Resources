/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014ed314; name: FUN_014ed314
 */


void FUN_014ed314(long param_1,long *param_2,byte param_3)

{
  MutexType *pMVar1;
  bool bVar2;
  undefined8 *puVar3;
  char *pcVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *local_278;
  long *local_270 [4];
  long *local_250;
  long *local_240;
  long lStack_238;
  long local_230;
  long *local_228;
  
  if (param_3 == 0) {
    if (((*PTR_DAT_047d89f8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar11 = *(long *)PTR_DAT_047d8a00;
    *(long *)PTR_DAT_047d8a08 = lVar11;
    param_3 = *(byte *)(lVar11 + 0x2c);
  }
  plVar12 = (long *)PTR_PTR_047d4508;
  puVar3 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    puVar3 = (undefined8 *)(*param_2 + 0x38);
  }
  local_240 = (long *)*puVar3;
  FUN_0110eb84(local_270,&local_240,&DAT_03c886bc,(int)param_2[5]);
  plVar13 = plVar12;
  if (local_270[0] != (long *)0x0) {
    plVar13 = local_270[0] + 7;
  }
  pcVar8 = strrchr((char *)*plVar13,0x2f);
  pcVar4 = (char *)0x0;
  if (pcVar8 != (char *)0x0) {
    pcVar4 = pcVar8 + 1;
  }
  if (*pcVar4 == '\0') {
    plVar13 = (long *)FUN_00d44228();
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar9 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar9;
    FUN_00cf9884(&local_240,uVar9,pcVar4);
    plVar13 = local_240;
  }
  plVar14 = plVar12;
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 7;
  }
  lVar11 = *plVar14;
  if (plVar13 == (long *)0x0) {
    memset(&local_240,0,0x200);
    snprintf((char *)&local_240,0x200,"%s%d",lVar11,(ulong)param_3);
    FUN_00f12608(&local_278,&local_240);
  }
  else {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    memset(&local_240,0,0x200);
    snprintf((char *)&local_240,0x200,"%s%d",lVar11,(ulong)param_3);
    FUN_00f12608(&local_278,&local_240);
    (**(code **)(*plVar13 + 0x20))(plVar13);
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  plVar13 = local_278;
  puVar6 = (ulong *)PTR_DAT_047d8b70;
  if (local_278 != (long *)0x0) {
    plVar12 = local_278 + 7;
    puVar6 = (ulong *)(local_278 + 6);
  }
  local_240 = (long *)*puVar6;
  lStack_238 = *plVar12;
  if (local_278 == (long *)0x0) {
    local_230 = 0;
  }
  else {
    local_230 = local_278[8];
  }
  local_228 = (long *)0x0;
  if (local_278 != (long *)0x0) {
    (**(code **)(*local_278 + 0x18))(local_278);
  }
  local_228 = plVar13;
  pMVar1 = (MutexType *)(param_1 + 0x28);
  uVar10 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
  bVar2 = (uVar10 & 1) == 0;
  if (bVar2) {
    nn::os::LockMutex(pMVar1);
  }
  plVar12 = *(long **)(param_1 + 0x58);
  if (plVar12 != (long *)0x0) {
    uVar10 = (long)plVar12 - ((ulong)plVar12 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      plVar13 = (long *)((long)plVar12 - 1U & (ulong)local_240);
    }
    else if (local_240 < plVar12) {
      plVar13 = local_240;
    }
    else {
      uVar5 = 0;
      if (plVar12 != (long *)0x0) {
        uVar5 = (ulong)local_240 / (ulong)plVar12;
      }
      plVar13 = (long *)((long)local_240 - uVar5 * (long)plVar12);
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x50) + (long)plVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((long *)plVar14[1] == local_240) {
            if ((long *)plVar14[2] == local_240) goto LAB_014ed568;
          }
          else if ((long *)((ulong)plVar14[1] & (long)plVar12 - 1U) != plVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          plVar15 = (long *)plVar14[1];
          if (plVar15 == local_240) {
            if ((long *)plVar14[2] == local_240) goto LAB_014ed568;
          }
          else {
            if (plVar12 <= plVar15) {
              uVar10 = 0;
              if (plVar12 != (long *)0x0) {
                uVar10 = (ulong)plVar15 / (ulong)plVar12;
              }
              plVar15 = (long *)((long)plVar15 - uVar10 * (long)plVar12);
            }
            if (plVar15 != plVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_014ed57c:
  if (bVar2) {
    nn::os::UnlockMutex(pMVar1);
  }
  if (local_228 != (long *)0x0) {
    (**(code **)(*local_228 + 0x20))();
  }
  if (local_278 != (long *)0x0) {
    (**(code **)(*local_278 + 0x20))();
  }
  if (local_250 != (long *)0x0) {
    (**(code **)(*local_250 + 0x20))();
  }
  if (local_270[0] != (long *)0x0) {
    (**(code **)(*local_270[0] + 0x20))();
  }
  return;
LAB_014ed568:
  lVar11 = FUN_011cb3ac((long *)(param_1 + 0x50),&local_240);
  *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + -1;
  goto LAB_014ed57c;
}


