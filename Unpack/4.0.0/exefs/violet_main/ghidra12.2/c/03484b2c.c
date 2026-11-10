/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03484b2c; name: FUN_03484b2c
 */


int FUN_03484b2c(long *param_1,uint *param_2,undefined4 param_3)

{
  MutexType *pMVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_64;
  uint *local_48;
  
  local_64 = param_3;
  local_48 = param_2;
  iVar8 = (**(code **)(*param_1 + 0x88))();
  if (iVar8 == 5) {
    local_48 = param_2 + 1;
    iVar8 = FUN_034ae500(param_1,&local_48,&local_64,0);
    if (iVar8 == 1) {
      puVar9 = local_48 + 1;
      uVar4 = *local_48;
      uVar10 = (ulong)uVar4;
      local_48 = puVar9;
      if (uVar4 != 0) {
        if (uVar4 == 1) {
          param_1[0x20] = (long)(param_1 + 0x1f);
        }
        else {
          lVar11 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar10 << 3,1);
          param_1[0x20] = lVar11;
          if (lVar11 == 0) {
            return 0x34;
          }
        }
        *(uint *)((long)param_1 + 0x10c) = uVar4;
        do {
          uVar4 = *local_48;
          local_48 = local_48 + 1;
          iVar8 = (**(code **)(*param_1 + 0x58))(param_1,uVar4);
          if (iVar8 != 0xf && iVar8 != 1) {
            return iVar8;
          }
          uVar4 = (int)uVar10 - 1;
          uVar10 = (ulong)uVar4;
        } while (uVar4 != 0);
        if (iVar8 != 1) {
          return iVar8;
        }
      }
      puVar7 = PTR_DAT_047e6f28;
      puVar6 = PTR_DAT_047e2fd0;
      uVar4 = *local_48;
      if (uVar4 == 0) {
        iVar8 = 1;
        local_48 = local_48 + 1;
      }
      else {
        uVar14 = 0;
        iVar8 = 1;
        local_48 = local_48 + 1;
        do {
          lVar11 = *(long *)puVar7;
          pMVar1 = (MutexType *)(lVar11 + 0x118);
          uVar13 = *local_48;
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(lVar11 + 0x140);
          if (uVar3 != 0) {
            uVar5 = 0;
            if (uVar3 != 0) {
              uVar5 = uVar13 / uVar3;
            }
            for (plVar12 = *(long **)(*(long *)(lVar11 + 0x138) +
                                     (ulong)(uVar13 - uVar5 * uVar3) * 8); plVar12 != (long *)0x0;
                plVar12 = (long *)plVar12[1]) {
              if (*(uint *)(plVar12 + 2) == uVar13) {
                *(int *)((long)plVar12 + 0x14) = *(int *)((long)plVar12 + 0x14) + 1;
                nn::os::UnlockMutex(pMVar1);
                FUN_034889bc(plVar12,param_1);
                goto LAB_03484d24;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
          plVar12 = (long *)FUN_034874e8(uVar13);
          if (plVar12 == (long *)0x0) {
            iVar8 = 2;
            break;
          }
          FUN_034889bc(plVar12,param_1);
          iVar8 = FUN_03487f38(plVar12,&local_48,&local_64);
          if (iVar8 != 1) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
            break;
          }
LAB_03484d24:
          uVar3 = *(uint *)(param_1 + 0x25);
          uVar13 = *(uint *)((long)param_1 + 300);
          if (uVar3 < uVar13) {
LAB_03484d64:
            if (uVar13 <= uVar3) goto LAB_03484d88;
            uVar13 = *(uint *)(param_1 + 0x25);
            *(uint *)(param_1 + 0x25) = uVar13 + 1;
            if (param_1[0x24] == 0) goto LAB_03484d88;
            *(long **)(param_1[0x24] + (ulong)uVar13 * 8) = plVar12;
          }
          else {
            iVar2 = uVar13 + (uVar13 >> 1);
            if (uVar13 == 0) {
              iVar2 = 1;
            }
            uVar13 = iVar2 + uVar13;
            lVar11 = (**(code **)(puVar6 + 0x20))(0,param_1[0x24],(ulong)uVar13 << 3);
            if (lVar11 != 0) {
              param_1[0x24] = lVar11;
              *(uint *)((long)param_1 + 300) = uVar13;
              goto LAB_03484d64;
            }
LAB_03484d88:
            (**(code **)(*plVar12 + 0x18))(plVar12);
            iVar8 = 2;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar4);
      }
      *(bool *)(param_1 + 0x27) = (char)*local_48 != '\0';
    }
  }
  else {
    (**(code **)(*param_1 + 0x88))(param_1);
    iVar8 = 0x5b;
  }
  return iVar8;
}


