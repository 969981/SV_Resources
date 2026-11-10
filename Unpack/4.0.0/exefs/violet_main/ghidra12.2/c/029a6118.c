/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a6118; name: FUN_029a6118
 */


void FUN_029a6118(long param_1,byte param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long local_110;
  long lStack_108;
  long local_100;
  long *local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long *local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x460));
  if (*(byte *)(param_1 + 0x3c) == (param_2 & 1)) goto LAB_029a6268;
  *(byte *)(param_1 + 0x3c) = param_2 & 1;
  if ((param_2 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      if (((*PTR_DAT_047d8c28 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0)) {
        local_b0 = FUN_00d44228();
        puVar1 = PTR_DAT_047d8c30;
        FUN_00d1e764(PTR_DAT_047d8c30,&local_b0);
        FUN_00100190(PTR_LAB_047d9240,puVar1,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c28);
      }
      plVar8 = *(long **)PTR_DAT_047d8c30;
    }
    else {
      plVar8 = *(long **)(*(long *)(param_1 + 0x30) + 0x18);
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    plVar4 = *(long **)(param_1 + 0x40);
    *(long **)(param_1 + 0x40) = plVar8;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    goto LAB_029a6268;
  }
  for (plVar8 = *(long **)(param_1 + 0xb0);
      (plVar8 != *(long **)(param_1 + 0xb8) && (lVar9 = *plVar8, *(int *)(lVar9 + 0x20) < 1));
      plVar8 = plVar8 + 1) {
    if ((*(char *)(lVar9 + 0x24) != '\0') && (*(char *)(lVar9 + 0x25) == '\0')) goto LAB_029a61d0;
  }
  lVar9 = 0;
LAB_029a61d0:
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 == 0) {
    if (lVar9 == 0) goto LAB_029a6268;
    FUN_0159bf78(&local_b0,param_1 + 0x188,0,lVar9,0,0);
    FUN_015eb3a0(lVar9,&local_b0);
  }
  else {
    if (((*(char *)(lVar7 + 0x25) == '\0') || (*(int *)(lVar7 + 0x28) != 3)) ||
       (*(long *)(lVar7 + 0x58) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)(*(long *)(lVar7 + 0x58) + 0x4c) == 0;
    }
    FUN_0159bf78(auStack_70,param_1 + 0x188,lVar7,lVar9,0,bVar2);
    plVar4 = (long *)PTR_DAT_047d8b70;
    plVar8 = (long *)PTR_PTR_047d4508;
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    if (*(char *)((long)puVar5 + 0x24) == '\0') {
      FUN_015eb400(puVar5,auStack_70,0);
      if (lVar9 == 0) goto LAB_029a62c8;
    }
    else {
      if ((lVar9 == 0) || (*(int *)(lVar9 + 8) <= *(int *)(puVar5 + 1))) {
        plVar10 = *(long **)(param_1 + 0x40);
        plVar12 = (long *)PTR_DAT_047d8b70;
        if (plVar10 != (long *)0x0) {
          plVar12 = plVar10 + 6;
        }
        plVar13 = (long *)PTR_DAT_047d8b70;
        if (puVar5[3] != 0) {
          plVar13 = (long *)(puVar5[3] + 0x30);
        }
        if (*plVar12 != *plVar13) {
          plVar13 = (long *)*puVar5;
          plVar12 = (long *)PTR_DAT_047d8b70;
          if (plVar13 != (long *)0x0) {
            plVar12 = plVar13 + 6;
          }
          local_b0 = *plVar12;
          plVar12 = (long *)PTR_PTR_047d4508;
          if (plVar13 != (long *)0x0) {
            plVar12 = plVar13 + 7;
          }
          lStack_a8 = *plVar12;
          if (plVar13 == (long *)0x0) {
            local_a0 = 0;
          }
          else {
            local_a0 = plVar13[8];
          }
          local_98 = (long *)0x0;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x18))(plVar13);
            plVar10 = *(long **)(param_1 + 0x40);
          }
          plVar12 = plVar4;
          if (plVar10 != (long *)0x0) {
            plVar12 = plVar10 + 6;
          }
          local_d0 = *plVar12;
          plVar12 = plVar8;
          if (plVar10 != (long *)0x0) {
            plVar12 = plVar10 + 7;
          }
          lStack_c8 = *plVar12;
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
          puVar5 = *(undefined8 **)(param_1 + 0x30);
          plVar11 = (long *)*puVar5;
          plVar12 = plVar8;
          plVar13 = plVar4;
          if (plVar11 != (long *)0x0) {
            plVar12 = plVar11 + 7;
            plVar13 = plVar11 + 6;
          }
          local_f0 = *plVar13;
          lStack_e8 = *plVar12;
          if (plVar11 == (long *)0x0) {
            local_e0 = 0;
          }
          else {
            local_e0 = plVar11[8];
          }
          local_d8 = (long *)0x0;
          local_b8 = plVar10;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
            puVar5 = *(undefined8 **)(param_1 + 0x30);
          }
          plVar12 = (long *)puVar5[3];
          if (plVar12 != (long *)0x0) {
            plVar8 = plVar12 + 7;
            plVar4 = plVar12 + 6;
          }
          local_110 = *plVar4;
          lStack_108 = *plVar8;
          if (plVar12 == (long *)0x0) {
            local_100 = 0;
          }
          else {
            local_100 = plVar12[8];
          }
          local_f8 = (long *)0x0;
          local_d8 = plVar11;
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
          local_f8 = plVar12;
          FUN_014f70b0(auStack_90,param_1 + 0x188,&local_b0,&local_d0,&local_f0,&local_110,0,0);
          if (local_f8 != (long *)0x0) {
            (**(code **)(*local_f8 + 0x20))();
          }
          if (local_d8 != (long *)0x0) {
            (**(code **)(*local_d8 + 0x20))();
          }
          if (local_b8 != (long *)0x0) {
            (**(code **)(*local_b8 + 0x20))();
          }
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          FUN_015eb400(*(undefined8 *)(param_1 + 0x30),auStack_90,0);
          uVar6 = FUN_0159bdf0(*(undefined8 *)(param_1 + 0x30),auStack_90,0);
          if ((uVar6 & 1) == 0) {
            *(undefined8 *)(param_1 + 0x30) = 0;
          }
        }
        goto LAB_029a6268;
      }
      FUN_0159d18c(puVar5,auStack_70);
    }
    if (*(int *)(param_1 + 0x38) < 1) {
      uVar6 = FUN_0159bdf0(lVar9,auStack_70,0);
      if ((uVar6 & 1) == 0) {
        lVar9 = 0;
      }
    }
    else {
      FUN_0159bdb4(lVar9,0);
    }
  }
LAB_029a62c8:
  *(long *)(param_1 + 0x30) = lVar9;
LAB_029a6268:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x460));
  return;
}


