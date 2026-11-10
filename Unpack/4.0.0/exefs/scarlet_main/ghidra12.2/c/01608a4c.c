/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01608a4c; name: FUN_01608a4c
 */


undefined8 FUN_01608a4c(long param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  ulong *puVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long local_100;
  code *local_f8;
  long local_f0;
  long *local_e8;
  undefined1 auStack_e0 [96];
  ulong local_80;
  long local_78;
  long local_70;
  long *local_68;
  
  plVar12 = (long *)*param_2;
  if (((plVar12 != (long *)0x0) && (local_f8 = (code *)plVar12[7], *local_f8 != (code)0x0)) &&
     (local_f0 = plVar12[8], local_f8[local_f0 + -1] == (code)0x2f)) {
    local_100 = plVar12[6];
    (**(code **)(*plVar12 + 0x18))(plVar12);
    local_e8 = plVar12;
    uVar9 = FUN_016096ec(param_1,&local_100);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    puVar6 = PTR_DAT_047d8b70;
    puVar5 = PTR_PTR_047d4508;
    if ((uVar9 & 1) != 0) {
      lVar13 = 0;
      do {
        plVar12 = (long *)((long)param_2 + lVar13 + 0x10);
        if ((*plVar12 != 0) && (**(char **)(*plVar12 + 0x38) != '\0')) {
          FUN_01608eb8(param_1 + 0x98,plVar12);
          local_80 = local_80 & 0xffffffff00000000;
          plVar12 = (long *)*plVar12;
          plVar10 = (long *)puVar5;
          plVar4 = (long *)puVar6;
          if (plVar12 != (long *)0x0) {
            plVar10 = plVar12 + 7;
            plVar4 = plVar12 + 6;
          }
          local_100 = *plVar4;
          local_f8 = (code *)*plVar10;
          if (plVar12 == (long *)0x0) {
            local_f0 = 0;
          }
          else {
            local_f0 = plVar12[8];
            local_e8 = (long *)0x0;
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
          local_e8 = plVar12;
          uVar9 = FUN_01404884(*(undefined8 *)(param_1 + 0x200),&local_100,&local_80);
          if (local_e8 != (long *)0x0) {
            (**(code **)(*local_e8 + 0x20))();
          }
          if ((uVar9 & 1) != 0) {
            FUN_01608ea4(param_1 + 0xd0,&local_80);
          }
        }
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0x100);
      plVar12 = (long *)param_2[1];
      if ((plVar12 != (long *)0x0) && (*(char *)plVar12[7] != '\0')) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
        plVar10 = *(long **)(param_1 + 0x108);
        *(long **)(param_1 + 0x108) = plVar12;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
          plVar12 = *(long **)(param_1 + 0x108);
        }
        puVar2 = (ulong *)puVar6;
        if (plVar12 != (long *)0x0) {
          puVar2 = (ulong *)(plVar12 + 6);
        }
        local_80 = *puVar2;
        plVar10 = (long *)puVar5;
        if (plVar12 != (long *)0x0) {
          plVar10 = plVar12 + 7;
        }
        local_78 = *plVar10;
        if (plVar12 == (long *)0x0) {
          local_70 = 0;
        }
        else {
          local_70 = plVar12[8];
        }
        local_68 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        local_68 = plVar12;
        memset(&local_100,0,0x80);
        pMVar1 = (MutexType *)(*(long *)(param_1 + 0x240) + 0x70);
        nn::os::LockMutex(pMVar1);
        lVar13 = FUN_01478f0c(*(undefined8 *)(param_1 + 0x240),&local_80,0,&local_100,0);
        iVar8 = *(int *)(lVar13 + 0xc);
        nn::os::UnlockMutex(pMVar1);
        if ((iVar8 < 2) &&
           (plVar12 = *(long **)(*(long *)(param_1 + 0x200) + 0x60),
           iVar8 = (**(code **)(*plVar12 + 0xf0))(plVar12,local_78,lVar13 + 8), iVar8 != 1)) {
          FUN_01dacfd8(*(undefined8 *)(param_1 + 0x240),&local_80);
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        pcVar7 = local_f8;
        if (local_f8 != (code *)0x0) {
          local_f0 = 0;
          local_e8 = (long *)0x0;
          local_100 = 0;
          local_f8 = (code *)0x0;
          (*pcVar7)(auStack_e0);
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (bVar3) {
          lVar13 = 0;
          do {
            plVar12 = (long *)((long)param_2 + lVar13 + 0x110);
            if ((*plVar12 != 0) && (**(char **)(*plVar12 + 0x38) != '\0')) {
              FUN_01608eb8(param_1 + 0x60,plVar12);
              plVar12 = (long *)*plVar12;
              plVar10 = (long *)puVar5;
              puVar2 = (ulong *)puVar6;
              if (plVar12 != (long *)0x0) {
                plVar10 = plVar12 + 7;
                puVar2 = (ulong *)(plVar12 + 6);
              }
              local_80 = *puVar2;
              local_78 = *plVar10;
              if (plVar12 == (long *)0x0) {
                local_70 = 0;
              }
              else {
                local_70 = plVar12[8];
                local_68 = (long *)0x0;
                (**(code **)(*plVar12 + 0x18))(plVar12);
              }
              local_68 = plVar12;
              memset(&local_100,0,0x80);
              pMVar1 = (MutexType *)(*(long *)(param_1 + 0x240) + 0x70);
              nn::os::LockMutex(pMVar1);
              lVar11 = FUN_01478f0c(*(undefined8 *)(param_1 + 0x240),&local_80,0,&local_100,0);
              iVar8 = *(int *)(lVar11 + 0xc);
              nn::os::UnlockMutex(pMVar1);
              if ((iVar8 < 2) &&
                 (plVar12 = *(long **)(*(long *)(param_1 + 0x200) + 0x60),
                 iVar8 = (**(code **)(*plVar12 + 0xf0))(plVar12,local_78,lVar11 + 8), iVar8 != 1)) {
                FUN_01dacfd8(*(undefined8 *)(param_1 + 0x240),&local_80);
              }
              pcVar7 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = 0;
                local_e8 = (long *)0x0;
                local_100 = 0;
                local_f8 = (code *)0x0;
                (*pcVar7)(auStack_e0);
              }
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
            }
            lVar13 = lVar13 + 8;
          } while (lVar13 != 0x100);
          return 1;
        }
      }
    }
  }
  return 0;
}


