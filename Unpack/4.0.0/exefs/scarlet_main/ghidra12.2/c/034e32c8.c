/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e32c8; name: FUN_034e32c8
 */


void FUN_034e32c8(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  MutexType *pMVar13;
  undefined4 local_2f8 [2];
  long local_2f0;
  undefined8 local_2e8;
  undefined4 *local_2e0;
  int *local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined1 auStack_2c0 [72];
  undefined4 local_278;
  undefined8 local_274;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined2 local_260 [2];
  char local_25b;
  undefined1 auStack_250 [112];
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined4 local_1bc;
  long local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined1 auStack_190 [256];
  undefined1 *local_90;
  ulong local_88;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 local_73;
  undefined5 uStack_70;
  byte local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  byte local_54 [4];
  
  pMVar13 = *(MutexType **)PTR_DAT_047e6f28;
  nn::os::LockMutex(pMVar13);
  uVar8 = *(uint *)(pMVar13 + 0x28);
  if (uVar8 != 0) {
    uVar1 = 0;
    if (uVar8 != 0) {
      uVar1 = param_2 / uVar8;
    }
    for (lVar9 = *(long *)(*(long *)(pMVar13 + 0x20) + (ulong)(param_2 - uVar1 * uVar8) * 8);
        lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
      if (*(uint *)(lVar9 + 0x10) == param_2) {
        plVar11 = (long *)(lVar9 + -8);
        *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar13);
        local_58 = 0;
        plVar10 = *(long **)(param_1 + 0x178);
        uVar6 = 0;
        if (plVar10 != (long *)0x0) goto LAB_034e3384;
        goto LAB_034e33a0;
      }
    }
  }
  nn::os::UnlockMutex(pMVar13);
  return;
  while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
LAB_034e3384:
    if (*(uint *)(plVar10 + 1) == param_2) {
      uVar6 = (undefined4)plVar10[2];
      goto LAB_034e33a0;
    }
  }
  uVar6 = 0;
LAB_034e33a0:
  _local_60 = CONCAT44(4,uVar6);
  local_2d8 = (int *)0x0;
  memcpy(auStack_2c0,(void *)(param_3 + 0x28),0x48);
  local_268 = 0;
  uStack_264 = 0;
  local_260[0] = 0xff00;
  local_90 = (undefined1 *)0x0;
  local_88 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  memset(auStack_250,0,0x70);
  local_1d4 = 0;
  local_1cc = 0;
  local_1c4 = 0;
  local_1dc = 0;
  local_2e0 = &local_60;
  local_1bc = 0;
  local_1b0 = local_1b0 & 0xffffffff00000000;
  local_1e0 = 0x3f800000;
  local_198 = 0;
  local_80 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uStack_70 = 0;
  local_2f8[0] = 0;
  uStack_78 = 0;
  local_73 = 0;
  local_68 = 3;
  local_2e8 = *(undefined8 *)(param_3 + 0x20);
  local_2d0 = *(undefined8 *)(param_3 + 0x10);
  local_2c4 = *(undefined4 *)(param_3 + 0x1c);
  local_2c8 = *(undefined4 *)(param_3 + 0x18);
  local_2d8 = *(int **)(param_3 + 8);
  if (local_2d8 == (int *)0x0) {
    cVar7 = '\0';
    bVar4 = false;
  }
  else {
    *local_2d8 = *local_2d8 + 1;
    bVar4 = (char)local_260[0] == -0x70;
    cVar7 = (char)local_260[0];
  }
  local_278 = *(undefined4 *)(param_3 + 0x70);
  local_274 = 0;
  uStack_26c = 0;
  local_268 = 0;
  local_2f0 = lVar9;
  if ((bVar4) && (local_25b != '\0')) {
    local_54[0] = 1;
    if ((cVar7 == '\0') || (lVar9 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(lVar9 + 0x10);
    }
    iVar5 = FUN_034a7e5c(plVar11,local_260,uVar6,local_54,local_2e8,local_2c4);
    if (iVar5 != 1) goto LAB_034e352c;
    local_68 = local_68 & 0xfe | local_54[0];
  }
  iVar5 = FUN_034a9828(plVar11,local_2f8);
  if (iVar5 == 1) {
    (**(code **)(*plVar11 + 0x240))(plVar11,local_2f8);
  }
LAB_034e352c:
  (**(code **)(*plVar11 + 0x30))(plVar11);
  puVar2 = PTR_DAT_047e2fd0;
  if (local_1b8 != 0) {
    local_1b0 = local_1b0 & 0xffffffff00000000;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    local_1b8 = 0;
    local_1b0 = local_1b0 & 0xffffffff;
  }
  if (local_90 != (undefined1 *)0x0) {
    local_88 = local_88 & 0xffffffff00000000;
    if (auStack_190 != local_90) {
      (**(code **)(puVar2 + 0x30))(0);
    }
    local_90 = (undefined1 *)0x0;
    local_88 = local_88 & 0xffffffff;
  }
  piVar3 = local_2d8;
  if ((local_2d8 != (int *)0x0) && (iVar5 = *local_2d8, *local_2d8 = iVar5 + -1, iVar5 + -1 == 0)) {
    uVar8 = local_2d8[1];
    if (uVar8 != 0) {
      uVar12 = 0;
      plVar10 = (long *)(local_2d8 + 4);
      do {
        if (*plVar10 != 0) {
          (**(code **)(puVar2 + 0x30))(0);
          uVar8 = piVar3[1];
        }
        uVar12 = uVar12 + 1;
        plVar10 = plVar10 + 4;
      } while (uVar12 < uVar8);
    }
    (**(code **)(puVar2 + 0x30))(0,piVar3);
  }
  return;
}


