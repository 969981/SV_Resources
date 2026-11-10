/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012de734; name: FUN_012de734
 */


void FUN_012de734(long *param_1,int *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_047e6028;
  *(undefined4 *)(param_1 + 6) = 1;
  param_1[2] = 1;
  param_1[3] = (long)(puVar2 + 0xe8);
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  iVar7 = param_2[2];
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (0x3f < iVar7) {
    iVar7 = 0x40;
  }
  *(int *)(param_1 + 9) = iVar7;
  param_1[0x4a] = (long)(param_1 + 0x4c);
  *(undefined4 *)((long)param_1 + 0x25c) = 0x80000040;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6e] = (long)&PTR_LAB_046ab4e0;
  iVar7 = *param_2;
  *(int *)((long)param_1 + 900) = iVar7;
  puVar2 = PTR_DAT_047d1a08;
  if (iVar7 == 0) {
    local_68 = 0x28;
    puVar3 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(puVar3,"BlockingCriticalSection");
    }
    *puVar3 = &PTR_LAB_046ab540;
    nn::os::InitializeMutex((MutexType *)(puVar3 + 1),true,0);
  }
  else if (iVar7 == 1) {
    local_68 = 0x40;
    puVar3 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(puVar3,"SpinningCriticalSection");
    }
    *puVar3 = &PTR_LAB_046ab598;
    *(undefined4 *)(puVar3 + 1) = 0;
  }
  else {
    if (iVar7 != 2) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    local_68 = 0x40;
    puVar3 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(puVar3,"CriticalSection");
    }
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &PTR_LAB_046ab5e0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    nn::os::InitializeMutex((MutexType *)(puVar3 + 2),true,0);
    puVar3[6] = 0;
    puVar3[7] = 0;
  }
  param_1[4] = (long)puVar3;
  local_68 = 0x30;
  plVar4 = (long *)(**(code **)puVar2)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(plVar4,"HandleAllocator");
  }
  nn::os::InitializeMutex((MutexType *)(plVar4 + 2),true,0);
  *plVar4 = 0;
  plVar4[1] = 0;
  local_68 = 0xfc8;
  lVar5 = (**(code **)puVar2)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(lVar5,"Block");
  }
  FUN_0323d260(lVar5);
  *(long *)(lVar5 + 0xfc0) = *plVar4;
  *plVar4 = lVar5;
  *(long *)(lVar5 + 0xfb8) = plVar4[1];
  plVar4[1] = lVar5;
  local_68 = 0xfc8;
  lVar5 = (**(code **)puVar2)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(lVar5,"Block");
  }
  FUN_0323d260(lVar5);
  *(long *)(lVar5 + 0xfc0) = *plVar4;
  *plVar4 = lVar5;
  *(long *)(lVar5 + 0xfb8) = plVar4[1];
  plVar4[1] = lVar5;
  local_68 = 0xfc8;
  lVar5 = (**(code **)puVar2)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(lVar5,"Block");
  }
  FUN_0323d260(lVar5);
  *(long *)(lVar5 + 0xfc0) = *plVar4;
  *plVar4 = lVar5;
  *(long *)(lVar5 + 0xfb8) = plVar4[1];
  plVar4[1] = lVar5;
  local_68 = 0xfc8;
  lVar5 = (**(code **)puVar2)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(lVar5,"Block");
  }
  FUN_0323d260(lVar5);
  *(long *)(lVar5 + 0xfc0) = *plVar4;
  *plVar4 = lVar5;
  *(long *)(lVar5 + 0xfb8) = plVar4[1];
  plVar4[1] = lVar5;
  local_68 = 0xfc8;
  lVar5 = (**(code **)puVar2)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(lVar5,"Block");
  }
  FUN_0323d260(lVar5);
  *(long *)(lVar5 + 0xfc0) = *plVar4;
  *plVar4 = lVar5;
  *(long *)(lVar5 + 0xfb8) = plVar4[1];
  plVar4[1] = lVar5;
  local_68 = 0xfc8;
  lVar5 = (**(code **)puVar2)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(lVar5,"Block");
  }
  FUN_0323d260(lVar5);
  *(long *)(lVar5 + 0xfc0) = *plVar4;
  *plVar4 = lVar5;
  *(long *)(lVar5 + 0xfb8) = plVar4[1];
  plVar4[1] = lVar5;
  local_68 = 0xfc8;
  lVar5 = (**(code **)puVar2)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(lVar5,"Block");
  }
  FUN_0323d260(lVar5);
  *(long *)(lVar5 + 0xfc0) = *plVar4;
  *plVar4 = lVar5;
  *(long *)(lVar5 + 0xfb8) = plVar4[1];
  plVar4[1] = lVar5;
  param_1[5] = (long)plVar4;
  if ((*(uint *)((long)param_1 + 0x44) & 0x7fffff00) == 0) {
    FUN_0323e3e0(param_1 + 7,0x100);
  }
  iVar7 = (int)param_1[9];
  if (0 < iVar7) {
    iVar8 = -1;
    lVar5 = 0;
    do {
      iVar7 = *(int *)((long)param_1 + 900);
      uVar9 = (undefined4)lVar5;
      if (iVar7 == 0) {
        local_68 = 0x178;
        puVar3 = (undefined8 *)(**(code **)puVar2)(0,&local_68,0);
        if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
          (**(code **)(puVar2 + 0x10))(puVar3,"BlockingThreadContext");
        }
        *(undefined4 *)(puVar3 + 1) = uVar9;
        *(undefined4 *)((long)puVar3 + 0xc) = 0;
        *(undefined2 *)(puVar3 + 2) = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        *(undefined1 *)(puVar3 + 5) = 0;
        puVar3[6] = puVar3 + 8;
        *(undefined4 *)(puVar3 + 7) = 0;
        *(undefined4 *)((long)puVar3 + 0x3c) = 0x80000020;
        *puVar3 = &PTR_FUN_046ab628;
        puVar3[0x28] = 0;
        puVar3[0x29] = 0;
        nn::os::InitializeSemaphore((SemaphoreType *)(puVar3 + 0x2a),0,1);
      }
      else {
        if (iVar7 == 1) {
          local_68 = 0x1c0;
          puVar3 = (undefined8 *)(**(code **)puVar2)(0,&local_68,0);
          if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
            (**(code **)(puVar2 + 0x10))(puVar3,"SpinningThreadContext");
          }
          *(undefined4 *)(puVar3 + 1) = uVar9;
          *(undefined4 *)((long)puVar3 + 0xc) = 0;
          *(undefined2 *)(puVar3 + 2) = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          *(undefined1 *)(puVar3 + 5) = 0;
          puVar3[6] = puVar3 + 8;
          *(undefined4 *)(puVar3 + 7) = 0;
          *(undefined4 *)((long)puVar3 + 0x3c) = 0x80000020;
          *puVar3 = &PTR_FUN_046ab690;
          *(undefined4 *)(puVar3 + 0x30) = 0;
        }
        else {
          if (iVar7 != 2) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          local_68 = 0x168;
          puVar3 = (undefined8 *)(**(code **)puVar2)(0,&local_68,0);
          if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
            (**(code **)(puVar2 + 0x10))(puVar3,"AsyncThreadPoolContext");
          }
          uVar6 = *(undefined8 *)(param_2 + 4);
          *(undefined4 *)(puVar3 + 1) = uVar9;
          *(undefined4 *)((long)puVar3 + 0xc) = 0;
          *(undefined2 *)(puVar3 + 2) = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          *(undefined1 *)(puVar3 + 5) = 0;
          puVar3[6] = puVar3 + 8;
          *(undefined4 *)(puVar3 + 7) = 0;
          *(undefined4 *)((long)puVar3 + 0x3c) = 0x80000020;
          *puVar3 = &PTR_LAB_046ab6c8;
          puVar3[0x2a] = 0;
          puVar3[0x2b] = uVar6;
          *(undefined4 *)(puVar3 + 0x2c) = 0xffffffff;
        }
        puVar3[0x28] = 0;
        puVar3[0x29] = 0;
      }
      lVar1 = lVar5 + 1;
      param_1[lVar5 + 10] = (long)puVar3;
      puVar3[0x28] = param_1;
      lVar5 = param_1[0x4b];
      iVar7 = iVar8 + (int)param_1[9];
      iVar8 = iVar8 + -1;
      *(int *)(param_1[0x4a] + (long)(int)lVar5 * 4) = iVar7;
      *(int *)(param_1 + 0x4b) = (int)lVar5 + 1;
      iVar7 = (int)param_1[9];
      lVar5 = lVar1;
    } while (lVar1 < iVar7);
    if (0x3f < iVar7) goto LAB_012dedec;
  }
  memset(param_1 + (long)iVar7 + 10,0,(ulong)(0x3f - iVar7) * 8 + 8);
LAB_012dedec:
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  return;
}


