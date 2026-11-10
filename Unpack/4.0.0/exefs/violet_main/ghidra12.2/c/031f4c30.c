/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f4c30; name: FUN_031f4c30
 */


undefined4 FUN_031f4c30(long param_1,ulong *param_2,ulong *param_3)

{
  int *piVar1;
  ThreadType *pTVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  ulong *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_c0 [2];
  ulong *local_b0;
  ulong *puStack_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70 [2];
  ulong local_68;
  
  lVar5 = tpidr_el0;
  lVar4 = *(long *)(lVar5 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar4;
  }
  lVar5 = ((long)param_3 - (long)param_2) * 0x20000000 >> 0x20;
  uVar11 = lVar5 * 4;
  lVar4 = *(long *)(*(long *)(lVar4 + 0x3d0) + 0x10);
  local_68 = uVar11;
  if ((*(long *)(lVar4 + 8) == 0) && (lVar4 != 0)) {
    local_c0[0] = uVar11 + 0x3f & 0xffffffffffffffc0;
    if (local_c0[0] <= *(ulong *)(lVar4 + 0x28)) {
      piVar1 = *(int **)(lVar4 + 0x38);
      if (local_c0[0] + (long)piVar1 <= *(ulong *)(lVar4 + 0x40)) {
        *(ulong *)(lVar4 + 0x38) = local_c0[0] + (long)piVar1;
        goto LAB_031f4d2c;
      }
    }
    piVar1 = (int *)FUN_031cf3b4(lVar4,local_c0);
  }
  else {
    piVar1 = (int *)(**(code **)PTR_DAT_047d1a08)(1,&local_68,0x40);
    lVar4 = 0;
  }
LAB_031f4d2c:
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  if (param_2 != param_3) {
    lVar6 = 0;
    puVar8 = param_2;
    do {
      local_68 = *puVar8;
      if ((int)*(uint *)(param_1 + 0x68) < 1) {
LAB_031f4e5c:
        local_70[0] = 0x80040200;
        if (DAT_04884ce8 != '\0') {
          local_c0[0] = 0;
          local_b0 = &DAT_04884c98;
          puStack_a8 = (ulong *)0x1;
          pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
          local_a0 = nn::os::GetThreadId(pTVar2);
          local_90 = 0;
          pcStack_88 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
          ;
          local_98 = 0;
          local_80 = 0x119;
          uStack_78 = 0;
          FUN_0322c554(local_c0,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e5dc0,"idx < 0",
                       local_70);
          FUN_0322c554(local_c0,"Cannot remove type \'{}\' from registry (not present)",
                       &DAT_046a7e88,&local_68);
          FUN_0322c8e0(local_c0);
          if ((local_98 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_98 - 1,0);
          }
        }
        goto LAB_031f4f08;
      }
      uVar10 = 0;
      while (*(ulong *)(*(long *)(param_1 + 0x60) + uVar10 * 8) != local_68) {
        uVar10 = uVar10 + 1;
        if (*(uint *)(param_1 + 0x68) == uVar10) goto LAB_031f4e5c;
      }
      local_70[0] = 0x80040200;
      if ((int)uVar10 < 0) goto LAB_031f4e5c;
      puVar8 = puVar8 + 1;
      piVar1[lVar6] = (int)uVar10;
      lVar6 = lVar6 + 1;
    } while (puVar8 != param_3);
    puVar8 = param_2;
    do {
      local_c0[0] = *puVar8;
      lVar6 = FUN_0321e944(param_1 + 0x90,local_c0);
      if (lVar6 != 0) {
        FUN_032258b8(param_1 + 0x90,lVar6);
      }
      puVar8 = puVar8 + 1;
    } while (param_3 != puVar8);
  }
  iVar3 = (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (1 < iVar3) {
    FUN_031f98e0(piVar1,0,iVar3 + -1);
  }
  lVar5 = lVar5 << 2;
  if (lVar5 != 0) {
    piVar7 = piVar1;
    do {
      lVar6 = (long)*(int *)(param_1 + 0x68) + -1;
      iVar3 = *piVar7;
      iVar9 = (int)lVar6;
      *(int *)(param_1 + 0x68) = iVar9;
      if (iVar9 != iVar3) {
        *(undefined8 *)(*(long *)(param_1 + 0x60) + (long)iVar3 * 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar6 * 8);
      }
      piVar7 = piVar7 + 1;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  local_a0 = 0;
  local_98 = 0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_b0 = param_2;
  puStack_a8 = param_3;
  FUN_031f4b48(param_1,local_c0);
  local_70[0] = 0;
LAB_031f4f08:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  if (lVar4 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,piVar1,uVar11);
    return local_70[0];
  }
  uVar11 = uVar11 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar4 + 0x28) < uVar11) || (*(long *)(lVar4 + 0x38) != uVar11 + (long)piVar1)) {
    if (piVar1 == (int *)0x0) {
      return local_70[0];
    }
    if (*(ulong *)(lVar4 + 0x28) < uVar11 + 0x40) {
      *(int *)(*(long *)(lVar4 + 0x30) + 0x20) = *(int *)(*(long *)(lVar4 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar4 + 0x10) + 0x18))
                (*(long **)(lVar4 + 0x10),(long)piVar1 - (long)piVar1[-1],uVar11 + 0x44);
      return local_70[0];
    }
    if (*(long *)(lVar4 + 0x38) != uVar11 + (long)piVar1) {
      FUN_031cf778(lVar4,piVar1);
      return local_70[0];
    }
    *(int **)(lVar4 + 0x38) = piVar1;
  }
  else {
    *(int **)(lVar4 + 0x38) = piVar1;
    if (*(int **)(lVar4 + 0x48) != piVar1) {
      return local_70[0];
    }
  }
  FUN_031cf578(lVar4);
  return local_70[0];
}


