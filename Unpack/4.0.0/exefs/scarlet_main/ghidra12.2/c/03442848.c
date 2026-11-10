/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03442848; name: FUN_03442848
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_03442848(long param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  char local_34 [4];
  
  puVar3 = PTR_DAT_047e2fd0;
  local_34[0] = '\x01';
  plVar8 = (long *)param_2[1];
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8;
    while( true ) {
      plVar9 = (long *)*plVar9;
      param_2[1] = plVar9;
      if ((long *)*param_2 == plVar8) {
        *param_2 = 0;
      }
      if ((*(byte *)((long)plVar8 + 0x14) & 7) == 0) {
        *(byte *)((long)plVar8 + 0x14) = *(byte *)((long)plVar8 + 0x14) & 0xf8 | 2;
        if (*(long *)(param_1 + 0xc0) == 0) {
          *(long **)(param_1 + 0xc0) = plVar8;
          *plVar8 = 0;
        }
        else {
          *plVar8 = *(long *)(param_1 + 0xc0);
          *(long **)(param_1 + 0xc0) = plVar8;
        }
      }
      else {
        pMVar1 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e8);
        nn::os::LockMutex(pMVar1);
        lVar6 = plVar8[1];
        plVar8[1] = 0;
        if ((lVar6 != 0) && (lVar6 != param_1 + 0x78)) {
          (**(code **)(puVar3 + 0x30))(7);
        }
        (**(code **)(puVar3 + 0x30))(7,plVar8);
        nn::os::UnlockMutex(pMVar1);
        lVar6 = *(long *)(param_1 + 0x50);
        nn::os::LockMutex((MutexType *)(lVar6 + 0x1e8));
        *(int *)(lVar6 + 0x21c) = *(int *)(lVar6 + 0x21c) + -1;
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar6 + 0x208));
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x1e8));
      }
      if (plVar9 == (long *)0x0) break;
      plVar8 = (long *)param_2[1];
      if (plVar8 != plVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  plVar8 = *(long **)(param_1 + 0xb8);
  if ((plVar8 != (long *)0x0) && (bVar2 = *(byte *)((long)plVar8 + 0x14), (bVar2 & 7) != 0)) {
    do {
      if ((bVar2 & 7) == 2) {
        plVar9 = *(long **)(param_1 + 0xc0);
        if (plVar9 != (long *)0x0) {
          plVar4 = (long *)*plVar9;
          if (plVar8 == plVar9) {
            *(long **)(param_1 + 0xc0) = (long *)*plVar9;
          }
          else {
            do {
              plVar7 = plVar9;
              plVar9 = plVar4;
              if (plVar9 == (long *)0x0) goto LAB_034429e0;
              plVar4 = (long *)*plVar9;
            } while (plVar8 != plVar9);
            *plVar7 = *plVar9;
          }
        }
      }
      else if (*plVar8 == 0) {
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
      }
      else {
        *(long *)(param_1 + 0xb8) = *plVar8;
      }
LAB_034429e0:
      FUN_0343dc24(param_1,plVar8,1);
      lVar6 = *(long *)(param_1 + 0x50);
      nn::os::LockMutex((MutexType *)(lVar6 + 0x1e8));
      *(int *)(lVar6 + 0x21c) = *(int *)(lVar6 + 0x21c) + -1;
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar6 + 0x208));
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x1e8));
      plVar8 = *(long **)(param_1 + 0xb8);
    } while ((plVar8 != (long *)0x0) && (bVar2 = *(byte *)((long)plVar8 + 0x14), (bVar2 & 7) != 0));
  }
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
    bVar5 = true;
    plVar8 = *(long **)(param_1 + 0xc0);
    do {
      plVar9 = (long *)*plVar8;
      FUN_0344440c(plVar8,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x610),bVar5,local_34);
      bVar5 = local_34[0] == '\0';
      plVar8 = plVar9;
    } while (plVar9 != (long *)0x0);
  }
  return;
}


