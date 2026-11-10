/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f6d58; name: FUN_014f6d58
 */


void FUN_014f6d58(long param_1,ulong *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  undefined1 auStack_70 [32];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x460));
  plVar4 = (long *)PTR_DAT_047d8b70;
  plVar1 = (long *)PTR_PTR_047d4508;
  uVar7 = *(ulong *)(param_1 + 0x50);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar6;
    }
    else if (uVar6 < uVar7) {
      uVar9 = uVar6;
    }
    else {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uVar6 / uVar7;
      }
      uVar9 = uVar6 - uVar9 * uVar7;
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x48) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_014f6e80;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_014f6e80;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar2 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_014f6fcc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x460));
  return;
LAB_014f6e80:
  puVar11 = (undefined8 *)plVar10[3];
  plVar12 = (long *)*puVar11;
  plVar10 = (long *)PTR_DAT_047d8b70;
  if (plVar12 != (long *)0x0) {
    plVar10 = plVar12 + 6;
  }
  local_90 = *plVar10;
  plVar10 = (long *)PTR_PTR_047d4508;
  if (plVar12 != (long *)0x0) {
    plVar10 = plVar12 + 7;
  }
  lStack_88 = *plVar10;
  if (plVar12 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = plVar12[8];
  }
  local_78 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar13 = (long *)puVar11[3];
  plVar10 = plVar1;
  plVar3 = plVar4;
  if (plVar13 != (long *)0x0) {
    plVar10 = plVar13 + 7;
    plVar3 = plVar13 + 6;
  }
  local_b0 = *plVar3;
  lStack_a8 = *plVar10;
  if (plVar13 == (long *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = plVar13[8];
  }
  local_98 = (long *)0x0;
  local_78 = plVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar10 = (long *)*puVar11;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 7;
    plVar4 = plVar10 + 6;
  }
  local_d0 = *plVar4;
  lStack_c8 = *plVar1;
  if (plVar10 == (long *)0x0) {
    local_c0 = 0;
  }
  else {
    local_c0 = plVar10[8];
  }
  local_b8 = (long *)0x0;
  local_98 = plVar13;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if (((*(char *)((long)puVar11 + 0x25) == '\0') || (*(int *)(puVar11 + 5) != 3)) ||
     (puVar11[0xb] == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = *(int *)(puVar11[0xb] + 0x4c) == 0;
  }
  local_b8 = plVar10;
  FUN_014f70b0(auStack_70,param_1 + 0x188,&local_90,&local_b0,&local_d0,param_3,0,bVar5);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  puVar14 = *(undefined8 **)(param_1 + 0x30);
  FUN_014f79a0(puVar11,param_3,auStack_70);
  if (((puVar11 == puVar14) && (*(char *)((long)puVar11 + 0x25) == '\0')) &&
     ((*(int *)(param_1 + 0x38) < 1 &&
      (uVar7 = FUN_0159bdf0(puVar11,auStack_70,0), (uVar7 & 1) == 0)))) {
    FUN_015eb400(puVar11,auStack_70,0);
  }
  goto LAB_014f6fcc;
}


