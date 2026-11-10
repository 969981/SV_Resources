/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03469170; name: FUN_03469170
 */


int FUN_03469170(long param_1,uint *param_2)

{
  MutexType *pMVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  void *__dest;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  ulong local_88;
  undefined4 local_80;
  undefined8 local_78;
  byte local_70;
  undefined4 local_6c;
  
  uVar10 = param_2[2];
  if ((uVar10 == 0) || ((param_2[3] & 0x7e) == 4)) {
    return 1;
  }
  pMVar1 = (MutexType *)(param_1 + 0x68);
  nn::os::LockMutex(pMVar1);
  uVar3 = *param_2;
  uVar4 = *(uint *)(param_1 + 0x98);
  if (uVar4 == 0) {
LAB_03469220:
    FUN_03469838(param_1 + 0x88);
    uVar4 = *(uint *)(param_1 + 0x98);
    if (uVar4 != 0) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar3 / uVar4;
      }
      uVar12 = (ulong)(uVar3 - uVar5 * uVar4);
      plVar9 = *(long **)(*(long *)(param_1 + 0x90) + uVar12 * 8);
      goto joined_r0x03469240;
    }
  }
  else {
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = uVar3 / uVar4;
    }
    uVar12 = (ulong)(uVar3 - uVar5 * uVar4);
    plVar9 = *(long **)(*(long *)(param_1 + 0x90) + uVar12 * 8);
    if (plVar9 != (long *)0x0) {
      plVar11 = plVar9;
      do {
        if (*(uint *)(plVar11 + 1) == uVar3) {
          plVar9 = plVar11 + 2;
          *(int *)(plVar11 + 6) = (int)plVar11[6] + 1;
          if (*plVar9 == 0) goto LAB_034692e4;
          iVar6 = 1;
          goto LAB_03469594;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xa0));
    if (0.9 < fVar13 / (float)uVar4) goto LAB_03469220;
joined_r0x03469240:
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (*(uint *)(plVar9 + 1) == uVar3) {
        plVar9 = plVar9 + 2;
        goto LAB_034692e0;
      }
    }
    puVar8 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x38);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = *(undefined8 *)(*(long *)(param_1 + 0x90) + uVar12 * 8);
      *(uint *)(puVar8 + 1) = uVar3;
      plVar9 = puVar8 + 2;
      *plVar9 = 0;
      puVar8[3] = 0xffffffff00000000;
      puVar8[4] = 0;
      puVar8[5] = 0;
      *(undefined4 *)(puVar8 + 6) = 1;
      *(undefined8 **)(*(long *)(param_1 + 0x90) + uVar12 * 8) = puVar8;
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
LAB_034692e0:
      *(uint *)((long)plVar9 + 0x24) = uVar3;
LAB_034692e4:
      uVar2 = 0x60000003;
      if (*(short *)((long)param_2 + 0x1a) != 3) {
        uVar2 = 0x20000003;
      }
      if ((int)plVar9[3] == 0) {
        __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(uVar2,uVar10,0x10);
        if (__dest == (void *)0x0) goto LAB_03469438;
        nn::os::UnlockMutex(pMVar1);
        puVar8 = (undefined8 *)(param_1 + 8);
        *puVar8 = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        uVar3 = param_2[1];
        if (param_2[6] >> 0x10 == 0) {
          local_6c = 0xffffffff;
          local_88 = 0;
          local_70 = 1;
          local_78 = 0;
          local_80 = 0;
          iVar6 = (**(code **)(**(long **)PTR_DAT_047e2fc8 + 0x28))
                            (*(long **)PTR_DAT_047e2fc8,uVar3,&local_88,0,param_1 + 0x48,1);
          if (iVar6 != 1) {
            local_70 = 0;
            iVar6 = (**(code **)(**(long **)PTR_DAT_047e2fc8 + 0x28))
                              (*(long **)PTR_DAT_047e2fc8,uVar3,&local_88,0,param_1 + 0x48,1);
            if (iVar6 != 1) goto LAB_034694e0;
          }
LAB_034694d0:
          iVar6 = FUN_0346ceac(puVar8,0);
        }
        else {
          uVar4 = param_2[3];
          local_88 = (ulong)(param_2[6] >> 0x10) << 0x20;
          local_78 = 0;
          local_70 = (byte)uVar4 & 1;
          local_6c = 0xffffffff;
          local_80 = 0;
          iVar6 = (**(code **)(**(long **)PTR_DAT_047e2fc8 + 0x28))
                            (*(long **)PTR_DAT_047e2fc8,uVar3,&local_88,0,param_1 + 0x48,1);
          if ((((ushort)uVar4 & 1) != 0) && (iVar6 != 1)) {
            local_70 = 0;
            iVar6 = (**(code **)(**(long **)PTR_DAT_047e2fc8 + 0x28))
                              (*(long **)PTR_DAT_047e2fc8,uVar3,&local_88,0,param_1 + 0x48,1);
          }
          if (iVar6 == 1) goto LAB_034694d0;
        }
LAB_034694e0:
        if (iVar6 == 1) {
          local_88 = local_88 & 0xffffffff00000000;
          iVar7 = FUN_0346d17c(puVar8,__dest,param_2[2],&local_88);
          iVar6 = 1;
          if (param_2[2] != (uint)local_88) {
            iVar6 = 2;
          }
          if (iVar7 != 1) {
            iVar6 = iVar7;
          }
        }
        if (*(long **)(param_1 + 0x48) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x48) + 0x58))();
          (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
          *(undefined8 *)(param_1 + 0x48) = 0;
        }
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *puVar8 = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        nn::os::LockMutex(pMVar1);
        if (iVar6 != 1) {
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(uVar2,__dest);
          goto LAB_03469588;
        }
      }
      else {
        uVar10 = *(uint *)(plVar9[2] + 8);
        __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(uVar2,(ulong)uVar10,0x10);
        if (__dest == (void *)0x0) {
LAB_03469438:
          iVar6 = 0x34;
LAB_03469588:
          FUN_034686fc(param_1,plVar9);
          goto LAB_03469594;
        }
        memcpy(__dest,*(void **)plVar9[2],(ulong)uVar10);
      }
      *plVar9 = (long)__dest;
      iVar6 = 1;
      *(uint *)(plVar9 + 1) = uVar10;
      *(undefined4 *)((long)plVar9 + 0xc) = uVar2;
      goto LAB_03469594;
    }
  }
  iVar6 = 2;
LAB_03469594:
  nn::os::UnlockMutex(pMVar1);
  return iVar6;
}


