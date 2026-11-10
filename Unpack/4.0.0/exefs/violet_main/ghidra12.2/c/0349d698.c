/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349d698; name: FUN_0349d698
 */


undefined4 FUN_0349d698(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  MutexType *pMVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  long *plVar15;
  ulong uVar16;
  undefined4 uVar17;
  uint *puVar18;
  long *plVar19;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined2 local_78;
  byte local_76;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_67;
  undefined2 local_63;
  
  lVar11 = param_1 + (ulong)param_2 * 0x68;
  plVar2 = (long *)(lVar11 + 0x150);
  uVar16 = (ulong)param_2;
  (**(code **)(*(long *)(lVar11 + 0x150) + 0x28))(plVar2);
  puVar18 = (uint *)(param_1 + uVar16 * 4 + 0x10);
  uVar5 = *puVar18;
  if (uVar5 == 0) {
    if (*(long *)(param_1 + 0x388) == 0) {
      return 1;
    }
    FUN_0347d9fc(&local_e8,*(long *)(param_1 + 0x388) + 0xa0,uVar16);
    plVar15 = local_e8;
  }
  else {
    lVar11 = *(long *)PTR_DAT_047e6f28;
    nn::os::LockMutex((MutexType *)(lVar11 + 0x230));
    uVar4 = *(uint *)(lVar11 + 600);
    if (uVar4 == 0) {
      plVar15 = (long *)0x0;
    }
    else {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar5 / uVar4;
      }
      for (plVar15 = *(long **)(*(long *)(lVar11 + 0x250) + (ulong)(uVar5 - uVar6 * uVar4) * 8);
          plVar15 != (long *)0x0; plVar15 = (long *)plVar15[1]) {
        if (*(uint *)(plVar15 + 2) == uVar5) {
          *(int *)((long)plVar15 + 0x14) = *(int *)((long)plVar15 + 0x14) + 1;
          break;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(lVar11 + 0x230));
  }
  if (plVar15 == (long *)0x0) {
    if (*puVar18 != 0) {
      return 0x58;
    }
    if ((*(long *)(param_1 + 0x388) == 0) ||
       (lVar11 = *(long *)(*(long *)(param_1 + 0x388) + 0xa8), lVar11 == 0)) {
      return 1;
    }
    uVar17 = 0x58;
    if (*(int *)(lVar11 + uVar16 * 8 + 4) == 0) {
      uVar17 = 1;
    }
    return uVar17;
  }
  if (param_2 == 0) {
LAB_0349d874:
    uVar5 = *(uint *)(param_1 + 0x14);
    if (uVar5 == 0) {
      if (*(long *)(param_1 + 0x388) != 0) {
        FUN_0347d9fc(&local_e8,*(long *)(param_1 + 0x388) + 0xa0,1);
        plVar19 = local_e8;
        goto joined_r0x0349d8e4;
      }
    }
    else {
      lVar11 = *(long *)PTR_DAT_047e6f28;
      nn::os::LockMutex((MutexType *)(lVar11 + 0x230));
      uVar4 = *(uint *)(lVar11 + 600);
      if (uVar4 == 0) {
        plVar19 = (long *)0x0;
      }
      else {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar5 / uVar4;
        }
        for (plVar19 = *(long **)(*(long *)(lVar11 + 0x250) + (ulong)(uVar5 - uVar6 * uVar4) * 8);
            plVar19 != (long *)0x0; plVar19 = (long *)plVar19[1]) {
          if (*(uint *)(plVar19 + 2) == uVar5) {
            *(int *)((long)plVar19 + 0x14) = *(int *)((long)plVar19 + 0x14) + 1;
            break;
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x230));
joined_r0x0349d8e4:
      if ((plVar19 != (long *)0x0) &&
         (lVar11 = plVar19[6], lVar7 = plVar15[6], (**(code **)(*plVar19 + 0x18))(plVar19),
         (int)lVar11 == (int)lVar7)) goto LAB_0349daac;
    }
    if (param_2 == 2) {
LAB_0349d9f4:
      uVar5 = *(uint *)(param_1 + 0x1c);
      if (uVar5 == 0) {
        if (*(long *)(param_1 + 0x388) == 0) goto LAB_0349dab4;
        FUN_0347d9fc(&local_e8,*(long *)(param_1 + 0x388) + 0xa0,3);
        plVar19 = local_e8;
      }
      else {
        lVar11 = *(long *)PTR_DAT_047e6f28;
        nn::os::LockMutex((MutexType *)(lVar11 + 0x230));
        uVar4 = *(uint *)(lVar11 + 600);
        if (uVar4 == 0) {
          plVar19 = (long *)0x0;
        }
        else {
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = uVar5 / uVar4;
          }
          for (plVar19 = *(long **)(*(long *)(lVar11 + 0x250) + (ulong)(uVar5 - uVar6 * uVar4) * 8);
              plVar19 != (long *)0x0; plVar19 = (long *)plVar19[1]) {
            if (*(uint *)(plVar19 + 2) == uVar5) {
              *(int *)((long)plVar19 + 0x14) = *(int *)((long)plVar19 + 0x14) + 1;
              break;
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x230));
      }
      if ((plVar19 != (long *)0x0) &&
         (lVar11 = plVar19[6], lVar7 = plVar15[6], (**(code **)(*plVar19 + 0x18))(plVar19),
         (int)lVar11 == (int)lVar7)) goto LAB_0349daac;
    }
    else {
LAB_0349d934:
      uVar5 = *(uint *)(param_1 + 0x18);
      if (uVar5 == 0) {
        if (*(long *)(param_1 + 0x388) != 0) {
          FUN_0347d9fc(&local_e8,*(long *)(param_1 + 0x388) + 0xa0,2);
          plVar19 = local_e8;
          goto joined_r0x0349d9a4;
        }
      }
      else {
        lVar11 = *(long *)PTR_DAT_047e6f28;
        nn::os::LockMutex((MutexType *)(lVar11 + 0x230));
        uVar4 = *(uint *)(lVar11 + 600);
        if (uVar4 == 0) {
          plVar19 = (long *)0x0;
        }
        else {
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = uVar5 / uVar4;
          }
          for (plVar19 = *(long **)(*(long *)(lVar11 + 0x250) + (ulong)(uVar5 - uVar6 * uVar4) * 8);
              plVar19 != (long *)0x0; plVar19 = (long *)plVar19[1]) {
            if (*(uint *)(plVar19 + 2) == uVar5) {
              *(int *)((long)plVar19 + 0x14) = *(int *)((long)plVar19 + 0x14) + 1;
              break;
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x230));
joined_r0x0349d9a4:
        if ((plVar19 != (long *)0x0) &&
           (lVar11 = plVar19[6], lVar7 = plVar15[6], (**(code **)(*plVar19 + 0x18))(plVar19),
           (int)lVar11 == (int)lVar7)) goto LAB_0349daac;
      }
      if (param_2 != 3) goto LAB_0349d9f4;
    }
LAB_0349dab4:
    local_70 = 0;
    local_68 = 1;
    local_67 = 0;
    local_63 = 1;
    piVar12 = *(int **)PTR_DAT_047e6f70;
    uVar5 = *(uint *)(PTR_DAT_047e6f70 + 8);
    if ((uVar5 == 0) || (*piVar12 == (int)plVar15[6])) {
      piVar13 = piVar12;
    }
    else {
      lVar11 = (ulong)uVar5 * 0x20;
      uVar17 = 0x34;
      piVar14 = piVar12;
      do {
        lVar11 = lVar11 + -0x20;
        if (lVar11 == 0) goto LAB_0349dda0;
        piVar13 = piVar14 + 8;
        piVar1 = piVar14 + 8;
        piVar14 = piVar13;
      } while (*piVar1 != (int)plVar15[6]);
    }
    if ((piVar13 == piVar12 + (ulong)uVar5 * 8) ||
       (plVar19 = (long *)(**(code **)(piVar13 + 2))(PTR_PTR_047e71e0), plVar19 == (long *)0x0)) {
      uVar17 = 0x34;
    }
    else {
      (**(code **)(*plVar19 + 0x20))(plVar19,&local_70);
      puVar8 = PTR_DAT_047e7238;
      if (local_67._3_1_ == '\0') {
        (**(code **)(*plVar19 + 0x10))(plVar19,PTR_PTR_047e71e0);
        uVar17 = 4;
      }
      else {
        uStack_7c = *(uint *)(param_1 + 100);
        local_d8 = (long *)0x0;
        uStack_d0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_80 = *(undefined4 *)PTR_DAT_047e6fa0;
        uVar5 = (local_76 & 0xf8) << 0x10 | (uStack_7c & 0xff) << 8 | 0x50020;
        local_c0 = 0;
        local_c8 = 0;
        local_b8 = 0xff;
        local_b0 = 0xff;
        local_78 = (undefined2)uVar5;
        local_76 = (byte)(uVar5 >> 0x10);
        local_e8 = (long *)(PTR_DAT_047e7238 + 0x10);
        local_88 = (long *)0x0;
        local_e0 = 0;
        local_118 = 0;
        local_110 = 0;
        local_108 = 0;
        local_100 = 0xff;
        local_f8 = 0xff;
        local_f0 = 0;
        FUN_0347ff40(&local_e8,plVar15,0,&local_118,0,0);
        local_88 = plVar19;
        iVar10 = (**(code **)(*plVar19 + 0x38))
                           (plVar19,PTR_PTR_047e71e0,param_1 + uVar16 * 0x20 + 0x2f0,local_e0,
                            &local_80,param_1 + 0x118);
        plVar19 = local_88;
        if (iVar10 == 1) {
          local_88 = (long *)0x0;
          (**(code **)(*plVar2 + 0x28))(plVar2);
          plVar9 = local_d8;
          lVar11 = param_1 + uVar16 * 0x68;
          *(undefined8 *)(lVar11 + 0x158) = local_e0;
          *(long **)(lVar11 + 0x160) = local_d8;
          if (local_d8 != (long *)0x0) {
            pMVar3 = (MutexType *)(local_d8 + 0xe);
            nn::os::LockMutex(pMVar3);
            if (plVar9[0x12] == 0) {
              plVar9[0x12] = (long)plVar2;
              *(undefined8 *)(param_1 + uVar16 * 0x68 + 0x1a8) = 0;
            }
            else {
              *(long *)(param_1 + uVar16 * 0x68 + 0x1a8) = plVar9[0x12];
              plVar9[0x12] = (long)plVar2;
            }
            nn::os::UnlockMutex(pMVar3);
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
          local_e0 = 0;
          (*(code *)local_e8[5])(&local_e8);
          *(long **)(param_1 + uVar16 * 0x68 + 0x1b0) = plVar19;
          (**(code **)(*plVar19 + 0x18))(plVar19);
          uVar17 = 1;
          *(uint *)(param_1 + 0xc) =
               (*(uint *)(param_1 + 8) | *(uint *)(param_1 + 0xc)) & 1 << (ulong)(param_2 & 0x1f);
        }
        else {
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x10))(local_88,PTR_PTR_047e71e0);
            local_88 = (long *)0x0;
          }
          FUN_03480ed4(&local_e8);
          uVar17 = 2;
        }
        local_e8 = (long *)(puVar8 + 0x10);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x10))(local_88,PTR_PTR_047e71e0);
          local_88 = (long *)0x0;
        }
        FUN_03480ed4(&local_e8);
        local_e8 = (long *)(PTR_DAT_047e7170 + 0x10);
        FUN_03480ed4(&local_e8);
      }
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x10);
    if (uVar5 == 0) {
      if ((*(long *)(param_1 + 0x388) != 0) &&
         (FUN_0347d9fc(&local_e8,*(long *)(param_1 + 0x388) + 0xa0,0), plVar19 = local_e8,
         local_e8 != (long *)0x0)) goto LAB_0349d84c;
LAB_0349d86c:
      if (param_2 != 1) goto LAB_0349d874;
      goto LAB_0349d934;
    }
    lVar11 = *(long *)PTR_DAT_047e6f28;
    nn::os::LockMutex((MutexType *)(lVar11 + 0x230));
    uVar4 = *(uint *)(lVar11 + 600);
    if (uVar4 == 0) {
      plVar19 = (long *)0x0;
    }
    else {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar5 / uVar4;
      }
      for (plVar19 = *(long **)(*(long *)(lVar11 + 0x250) + (ulong)(uVar5 - uVar6 * uVar4) * 8);
          plVar19 != (long *)0x0; plVar19 = (long *)plVar19[1]) {
        if (*(uint *)(plVar19 + 2) == uVar5) {
          *(int *)((long)plVar19 + 0x14) = *(int *)((long)plVar19 + 0x14) + 1;
          break;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(lVar11 + 0x230));
    if (plVar19 == (long *)0x0) goto LAB_0349d86c;
LAB_0349d84c:
    lVar11 = plVar19[6];
    lVar7 = plVar15[6];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if ((int)lVar11 != (int)lVar7) goto LAB_0349d86c;
LAB_0349daac:
    uVar17 = 9;
  }
LAB_0349dda0:
  (**(code **)(*plVar15 + 0x18))(plVar15);
  return uVar17;
}


