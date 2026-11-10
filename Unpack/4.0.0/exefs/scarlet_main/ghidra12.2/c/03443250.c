/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03443250; name: FUN_03443250
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_03443250(long param_1,undefined8 *param_2,byte param_3)

{
  MutexType *pMVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  byte local_44 [4];
  
  puVar7 = PTR_DAT_047e2fd0;
  local_44[0] = param_3 & 1;
  plVar15 = (long *)param_2[1];
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15;
    while( true ) {
      plVar16 = (long *)*plVar16;
      param_2[1] = plVar16;
      if ((long *)*param_2 == plVar15) {
        *param_2 = 0;
      }
      if ((*(byte *)((long)plVar15 + 0x14) & 7) == 0) {
        *(byte *)((long)plVar15 + 0x14) = *(byte *)((long)plVar15 + 0x14) & 0xf8 | 2;
        lVar14 = *(long *)plVar15[1];
        uVar4 = *(uint *)((long *)plVar15[1] + 3);
        uVar5 = *(uint *)(param_1 + 0x90);
        uVar2 = lVar14 + (ulong)*(uint *)(plVar15 + 2);
        iVar10 = *(uint *)(plVar15 + 2) - uVar4;
        if (uVar2 < uVar5 && (ulong)uVar5 < lVar14 + (ulong)uVar4) {
          iVar10 = (int)uVar2 - uVar5;
        }
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar10;
        *(undefined4 *)(plVar15 + 2) = *(undefined4 *)(plVar15[1] + 0x18);
        if (*(long *)(param_1 + 0xd8) == 0) {
          *(long **)(param_1 + 0xd8) = plVar15;
          *plVar15 = 0;
        }
        else {
          *plVar15 = *(long *)(param_1 + 0xd8);
          *(long **)(param_1 + 0xd8) = plVar15;
        }
      }
      else {
        pMVar1 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e8);
        nn::os::LockMutex(pMVar1);
        lVar14 = *(long *)plVar15[1];
        uVar13 = (ulong)*(uint *)(param_1 + 0x90);
        uVar4 = *(uint *)((long *)plVar15[1] + 3);
        uVar2 = lVar14 + (ulong)*(uint *)(plVar15 + 2);
        uVar3 = lVar14 + (ulong)uVar4;
        if ((uVar13 > uVar2 && uVar13 <= uVar3) && (uVar13 <= uVar2 || uVar3 != uVar13)) {
          iVar10 = (int)uVar2 - *(uint *)(param_1 + 0x90);
        }
        else {
          iVar10 = *(uint *)(plVar15 + 2) - uVar4;
        }
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar10;
        lVar11 = *(long *)(param_1 + 0x50);
        lVar14 = plVar15[1];
        plVar15[1] = 0;
        if (lVar14 != 0) {
          FUN_03440670(lVar11 + 0x2a8);
        }
        (**(code **)(puVar7 + 0x30))(7,plVar15);
        nn::os::UnlockMutex(pMVar1);
        lVar14 = *(long *)(param_1 + 0x50);
        nn::os::LockMutex((MutexType *)(lVar14 + 0x1e8));
        *(int *)(lVar14 + 0x21c) = *(int *)(lVar14 + 0x21c) + -1;
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar14 + 0x208));
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x1e8));
      }
      if (plVar16 == (long *)0x0) break;
      plVar15 = (long *)param_2[1];
      if (plVar15 != plVar16) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  plVar15 = *(long **)(param_1 + 0xd0);
  if ((plVar15 != (long *)0x0) && (bVar6 = *(byte *)((long)plVar15 + 0x14), (bVar6 & 7) != 0)) {
    do {
      if ((bVar6 & 7) == 2) {
        plVar16 = *(long **)(param_1 + 0xd8);
        if (plVar16 != (long *)0x0) {
          plVar8 = (long *)*plVar16;
          if (plVar15 == plVar16) {
            *(long **)(param_1 + 0xd8) = (long *)*plVar16;
          }
          else {
            do {
              plVar12 = plVar16;
              plVar16 = plVar8;
              if (plVar16 == (long *)0x0) goto LAB_03443460;
              plVar8 = (long *)*plVar16;
            } while (plVar15 != plVar16);
            *plVar12 = *plVar16;
          }
        }
      }
      else if (*plVar15 == 0) {
        *(undefined8 *)(param_1 + 200) = 0;
        *(undefined8 *)(param_1 + 0xd0) = 0;
      }
      else {
        *(long *)(param_1 + 0xd0) = *plVar15;
      }
LAB_03443460:
      FUN_0343fbcc(param_1,plVar15,1);
      lVar14 = *(long *)(param_1 + 0x50);
      nn::os::LockMutex((MutexType *)(lVar14 + 0x1e8));
      *(int *)(lVar14 + 0x21c) = *(int *)(lVar14 + 0x21c) + -1;
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar14 + 0x208));
      nn::os::UnlockMutex((MutexType *)(lVar14 + 0x1e8));
      plVar15 = *(long **)(param_1 + 0xd0);
    } while ((plVar15 != (long *)0x0) && (bVar6 = *(byte *)((long)plVar15 + 0x14), (bVar6 & 7) != 0)
            );
  }
  if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
    bVar9 = true;
    plVar15 = *(long **)(param_1 + 0xd8);
    do {
      plVar16 = (long *)*plVar15;
      FUN_0344440c(plVar15,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x610),bVar9,local_44);
      bVar9 = local_44[0] == 0;
      plVar15 = plVar16;
    } while (plVar16 != (long *)0x0);
  }
  return;
}


