/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b8088; name: FUN_034b8088
 */


undefined1  [16] FUN_034b8088(long *param_1,long param_2,void *param_3)

{
  uint uVar1;
  MutexType *pMVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined1 auStack_80 [48];
  uint local_48;
  undefined4 local_44;
  
  uVar3 = *(uint *)(param_1 + 4);
  uVar12 = 0;
  if (uVar3 == 0) {
    return ZEXT816(0);
  }
  uVar1 = (int)param_2 + 0x3c;
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = uVar1 / uVar3;
  }
  plVar8 = *(long **)(param_1[3] + (ulong)(uVar1 - uVar4 * uVar3) * 8);
  while( true ) {
    if (plVar8 == (long *)0x0) {
      return ZEXT816(0);
    }
    if ((*plVar8 == param_2) && ((int)plVar8[1] == 0x3c)) break;
    plVar8 = (long *)plVar8[2];
  }
  if ((int)plVar8[0xb] == 0) {
    return ZEXT816(0);
  }
  memcpy(auStack_80,param_3,0x30);
  puVar5 = PTR_DAT_047e6f28;
  lVar10 = plVar8[10];
  uVar3 = *(uint *)(lVar10 + 4);
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar3 / uVar1;
    }
    for (puVar7 = *(uint **)(*param_1 + (ulong)(uVar3 - uVar4 * uVar1) * 8); puVar7 != (uint *)0x0;
        puVar7 = *(uint **)(puVar7 + 2)) {
      if (*puVar7 == uVar3) {
        puVar7 = (uint *)FUN_034825d4(puVar7 + 8,auStack_80);
        if (puVar7 == (uint *)0x0) goto LAB_034b8210;
        local_48 = *puVar7;
        goto LAB_034b82c4;
      }
    }
  }
  if (((int)plVar8[9] != 1) && (((int)plVar8[1] == 7 || ((int)plVar8[1] == 0)))) {
    lVar9 = *(long *)PTR_DAT_047e6f28;
    pMVar2 = (MutexType *)(lVar9 + 0x188);
    nn::os::LockMutex(pMVar2);
    uVar1 = *(uint *)(lVar9 + 0x1b0);
    if (uVar1 != 0) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar3 / uVar1;
      }
      for (plVar8 = *(long **)(*(long *)(lVar9 + 0x1a8) + (ulong)(uVar3 - uVar4 * uVar1) * 8);
          plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
        if (*(uint *)(plVar8 + 2) == uVar3) {
          *(int *)((long)plVar8 + 0x14) = *(int *)((long)plVar8 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar2);
          uVar6 = (**(code **)(*plVar8 + 0x38))(plVar8);
          (**(code **)(*plVar8 + 0x18))(plVar8);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar12;
          if ((uVar6 & 1) != 0) {
            return auVar11 << 0x40;
          }
          goto LAB_034b81c8;
        }
      }
    }
    nn::os::UnlockMutex(pMVar2);
  }
LAB_034b81c8:
  lVar9 = *(long *)puVar5;
  pMVar2 = (MutexType *)(lVar9 + 0x188);
  nn::os::LockMutex(pMVar2);
  uVar1 = *(uint *)(lVar9 + 0x1b0);
  if (uVar1 != 0) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar3 / uVar1;
    }
    for (plVar8 = *(long **)(*(long *)(lVar9 + 0x1a8) + (ulong)(uVar3 - uVar4 * uVar1) * 8);
        plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
      if (*(uint *)(plVar8 + 2) == uVar3) {
        *(int *)((long)plVar8 + 0x14) = *(int *)((long)plVar8 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar2);
        uVar12 = FUN_0348d8a8(plVar8,auStack_80,&local_48);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        if ((uVar12 & 1) != 0) goto LAB_034b82c4;
        goto LAB_034b8210;
      }
    }
  }
  nn::os::UnlockMutex(pMVar2);
LAB_034b8210:
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    uVar1 = *(uint *)(lVar10 + 4);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar1 / uVar3;
    }
    puVar7 = *(uint **)(*param_1 + (ulong)(uVar1 - uVar4 * uVar3) * 8);
    if (puVar7 != (uint *)0x0) {
      local_48 = 0;
      do {
        if (*puVar7 == uVar1) {
          local_48 = puVar7[4];
          break;
        }
        puVar7 = *(uint **)(puVar7 + 2);
      } while (puVar7 != (uint *)0x0);
      goto LAB_034b82c4;
    }
  }
  local_48 = 0;
LAB_034b82c4:
  local_44 = *(undefined4 *)(lVar10 + 0x18);
  auVar11 = FUN_03447dcc(local_48,lVar10 + 8,&local_44);
  *(undefined4 *)(lVar10 + 0x18) = local_44;
  return auVar11;
}


