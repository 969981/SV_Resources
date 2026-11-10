/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03482338; name: FUN_03482338
 */


float FUN_03482338(long *param_1,long param_2,void *param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_a0 [48];
  uint local_48;
  undefined4 local_44;
  
  puVar5 = PTR_DAT_047e6f28;
  if (*(int *)(param_2 + 0x58) == 0) {
    fVar12 = 0.0;
  }
  else {
    lVar10 = *(long *)(param_2 + 0x50);
    fVar12 = 0.0;
    do {
      memcpy(auStack_a0,param_3,0x30);
      uVar2 = *(uint *)(lVar10 + 4);
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (puVar7 = *(uint **)(*param_1 + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 2)) {
          if (*puVar7 == uVar2) {
            puVar7 = (uint *)FUN_034825d4(puVar7 + 8,auStack_a0);
            if (puVar7 == (uint *)0x0) goto LAB_03482478;
            local_48 = *puVar7;
            goto LAB_03482528;
          }
        }
      }
      if ((*(int *)(param_2 + 0x48) != 1) &&
         ((*(int *)(param_2 + 8) == 7 || (*(int *)(param_2 + 8) == 0)))) {
        lVar8 = *(long *)puVar5;
        pMVar1 = (MutexType *)(lVar8 + 0x188);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(lVar8 + 0x1b0);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          for (plVar9 = *(long **)(*(long *)(lVar8 + 0x1a8) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
              plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
            if (*(uint *)(plVar9 + 2) == uVar2) {
              *(int *)((long)plVar9 + 0x14) = *(int *)((long)plVar9 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar1);
              uVar6 = (**(code **)(*plVar9 + 0x38))(plVar9);
              (**(code **)(*plVar9 + 0x18))(plVar9);
              if ((uVar6 & 1) == 0) goto LAB_03482430;
              local_48 = 0x3f800000;
              goto LAB_03482548;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
      }
LAB_03482430:
      lVar8 = *(long *)puVar5;
      pMVar1 = (MutexType *)(lVar8 + 0x188);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(lVar8 + 0x1b0);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (plVar9 = *(long **)(*(long *)(lVar8 + 0x1a8) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
          if (*(uint *)(plVar9 + 2) == uVar2) {
            *(int *)((long)plVar9 + 0x14) = *(int *)((long)plVar9 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            uVar6 = FUN_0348d8a8(plVar9,auStack_a0,&local_48);
            (**(code **)(*plVar9 + 0x18))(plVar9);
            if ((uVar6 & 1) != 0) goto LAB_03482528;
            goto LAB_03482478;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
LAB_03482478:
      uVar2 = *(uint *)(param_1 + 1);
      local_48 = 0;
      if (uVar2 != 0) {
        uVar3 = *(uint *)(lVar10 + 4);
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        local_48 = 0;
        puVar7 = *(uint **)(*param_1 + (ulong)(uVar3 - uVar4 * uVar2) * 8);
        if (puVar7 != (uint *)0x0) {
          do {
            if (*puVar7 == uVar3) {
              local_48 = puVar7[4];
              goto LAB_03482528;
            }
            puVar7 = *(uint **)(puVar7 + 2);
          } while (puVar7 != (uint *)0x0);
          local_48 = 0;
        }
      }
LAB_03482528:
      local_44 = *(undefined4 *)(lVar10 + 0x18);
      fVar11 = (float)FUN_03447dcc(local_48,lVar10 + 8,&local_44);
      fVar12 = fVar11 + fVar12;
      *(undefined4 *)(lVar10 + 0x18) = local_44;
LAB_03482548:
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != *(long *)(param_2 + 0x50) + (ulong)*(uint *)(param_2 + 0x58) * 0x20);
  }
  return fVar12;
}


