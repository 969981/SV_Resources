/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299b310; name: FUN_0299b310
 */


void FUN_0299b310(long param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *local_d0;
  code *local_c8;
  undefined1 auStack_b0 [108];
  int local_44;
  
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  puVar10 = *(undefined8 **)(param_1 + 0x1e8);
  puVar9 = *(undefined8 **)(param_1 + 0x1f0);
  if ((puVar10 != puVar9) && (*(int *)(puVar10 + 4) != param_2)) {
    do {
      puVar6 = puVar10 + 0x16;
      if (puVar9 == puVar6) {
        puVar10 = puVar9;
        break;
      }
      piVar1 = (int *)(puVar10 + 0x1a);
      puVar10 = puVar6;
    } while (*piVar1 != param_2);
  }
  if (puVar9 == puVar10) {
    bVar2 = false;
    goto LAB_0299b508;
  }
  if ((code *)puVar10[9] != (code *)0x0) {
    (*(code *)puVar10[9])(puVar10 + 10,auStack_b0);
    local_d0 = (code *)puVar10[6];
    local_c8 = (code *)puVar10[7];
    pcVar7 = (code *)puVar10[7];
    if (pcVar7 != (code *)0x0) {
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      (*pcVar7)(puVar10 + 10);
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 0x1f0);
  puVar9 = puVar10 + 0x16;
  if (puVar9 == puVar6) {
LAB_0299b3b4:
    pcVar7 = (code *)puVar9[-0xf];
    if (pcVar7 != (code *)0x0) {
      puVar9[-0xe] = 0;
      puVar9[-0xd] = 0;
      puVar9[-0x10] = 0;
      puVar9[-0xf] = 0;
      (*pcVar7)(puVar9 + -0xc);
    }
    if ((long *)puVar9[-0x13] != (long *)0x0) {
      (**(code **)(*(long *)puVar9[-0x13] + 0x20))();
    }
    if (puVar9 + -0x16 != puVar10) {
      pcVar7 = (code *)puVar9[-0x25];
      if (pcVar7 != (code *)0x0) {
        puVar9[-0x23] = 0;
        puVar9[-0x24] = 0;
        puVar9[-0x25] = 0;
        puVar9[-0x26] = 0;
        (*pcVar7)(puVar9 + -0x22);
      }
      if ((long *)puVar9[-0x29] != (long *)0x0) {
        (**(code **)(*(long *)puVar9[-0x29] + 0x20))();
      }
      if (puVar9 + -0x2c != puVar10) {
        do {
          pcVar7 = (code *)puVar9[-0x3b];
          if (pcVar7 != (code *)0x0) {
            puVar9[-0x3a] = 0;
            puVar9[-0x39] = 0;
            puVar9[-0x3c] = 0;
            puVar9[-0x3b] = 0;
            (*pcVar7)(puVar9 + -0x38);
          }
          if ((long *)puVar9[-0x3f] != (long *)0x0) {
            (**(code **)(*(long *)puVar9[-0x3f] + 0x20))();
          }
          puVar9 = puVar9 + -0x16;
        } while (puVar10 + 0x2c != puVar9);
      }
    }
  }
  else {
    do {
      *puVar10 = puVar10[0x16];
      puVar10[1] = puVar10[0x17];
      plVar5 = (long *)puVar10[0x19];
      puVar10[2] = puVar10[0x18];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      plVar4 = (long *)puVar10[3];
      puVar10[3] = plVar5;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar10 + 0x1a);
      *(undefined4 *)((long)puVar10 + 0x24) = *(undefined4 *)((long)puVar10 + 0xd4);
      pcVar7 = (code *)puVar10[7];
      if (pcVar7 != (code *)0x0) {
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        (*pcVar7)(puVar10 + 10);
      }
      if ((code *)puVar10[0x1f] != (code *)0x0) {
        (*(code *)puVar10[0x1f])(puVar10 + 0x20,puVar10 + 10);
        pcVar7 = (code *)puVar10[0x1d];
        puVar10[8] = puVar10[0x1e];
        puVar10[9] = puVar10[0x1f];
        puVar10[6] = puVar10[0x1c];
        puVar10[7] = pcVar7;
        if (pcVar7 != (code *)0x0) {
          puVar10[0x1e] = 0;
          puVar10[0x1f] = 0;
          puVar10[0x1c] = 0;
          puVar10[0x1d] = 0;
          (*pcVar7)(puVar10 + 0x20);
        }
      }
      puVar10 = puVar10 + 0x16;
    } while (puVar6 + -0x16 != puVar10);
    puVar9 = *(undefined8 **)(param_1 + 0x1f0);
    if (puVar9 != puVar10) goto LAB_0299b3b4;
  }
  *(undefined8 **)(param_1 + 0x1f0) = puVar10;
  if (((*(char *)(param_1 + 0x321) != '\0') && (*(undefined8 **)(param_1 + 0x1e8) == puVar10)) &&
     (*(char *)(param_1 + 800) != '\0')) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar8 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar8;
    plVar5 = *(long **)(*(long *)(lVar8 + 0x200) + 0x60);
    (**(code **)(*plVar5 + 0x68))(plVar5,*(undefined8 *)(param_1 + 0x318));
    *(undefined1 *)(param_1 + 800) = 0;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  }
  bVar2 = true;
LAB_0299b508:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  if (local_d0 != (code *)0x0) {
    local_44 = param_2;
    (*local_d0)(auStack_b0,&local_44);
  }
  if (bVar2) {
    for (lVar8 = *(long *)(param_1 + 0x308); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x68)) {
      nn::os::LockMutex((MutexType *)(lVar8 + 0x100));
      iVar3 = *(int *)(lVar8 + 0x120) + -1;
      if (*(int *)(lVar8 + 0x120) < 1) {
        iVar3 = 0;
      }
      *(int *)(lVar8 + 0x120) = iVar3;
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x100));
    }
  }
  if (local_c8 != (code *)0x0) {
    (*local_c8)(auStack_b0);
  }
  return;
}


