/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031fd2bc; name: FUN_031fd2bc
 */


int FUN_031fd2bc(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  ThreadType *pTVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  long *plVar14;
  undefined8 *local_a0 [2];
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong *local_50;
  uint local_48 [2];
  
  plVar14 = (long *)*param_1;
  uVar10 = 0;
  if (param_2 != (ulong *)0x0) {
    puVar13 = param_2;
    do {
      uVar11 = (uint)*puVar13;
      if ((uVar11 >> 0x10 & 1) != 0) {
        uVar10 = CONCAT44(uVar11,uVar11) & 0xffff0000ffff;
        uVar10 = puVar13[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2];
        goto LAB_031fd334;
      }
    } while (((*puVar13 & 1) == 0) && (puVar13 = (ulong *)puVar13[1], puVar13 != (ulong *)0x0));
    uVar10 = 0;
  }
LAB_031fd334:
  local_50 = param_2;
  if (*(char *)(*plVar14 + 3) == '\0') {
    puVar7 = (undefined8 *)FUN_031e1e5c(param_1[2],uVar10,*(char *)(*plVar14 + 4) != '\0');
  }
  else {
    puVar7 = (undefined8 *)FUN_031e1c40();
  }
  if (puVar7 < (undefined8 *)0x2) {
    iVar6 = *(int *)(param_1 + 1);
    uVar11 = (uint)*param_2;
    if ((uVar11 >> 0x11 & 1) == 0) {
      uVar11 = 0;
    }
    else {
      uVar10 = CONCAT44(uVar11,uVar11) & 0x1ffff0001ffff;
      uVar11 = (uint)(ushort)param_2[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                   POPCOUNT((char)(uVar10 >> 8)) +
                                                  POPCOUNT((char)(uVar10 >> 0x10))) + 2];
    }
    if (*(char *)*plVar14 != '\0') {
      FUN_031e1bb4(local_a0,param_2,PTR_DAT_047e5e00);
      if (((ulong)local_90 & 1) != 0) {
        plVar9 = (long *)((ulong)local_90 & 0xfffffffffffffffe);
        plVar1 = plVar9 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      if (local_a0[0] == (undefined8 *)0x0) {
        local_48[0] = FUN_031fb974(plVar14,param_2,uVar11 + iVar6,0,0);
      }
      else {
        local_48[0] = (*(code *)*local_a0[0])(plVar14[1],param_2,uVar11 + iVar6,0,0);
      }
      if ((int)local_48[0] < 0) {
        if (PTR_DAT_047e5e08[0x50] == '\0') {
          return local_48[0];
        }
        local_90 = PTR_DAT_047e5e08;
        local_a0[0] = (undefined8 *)0x0;
        local_88 = 1;
        pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
        local_80 = nn::os::GetThreadId(pTVar8);
        local_78 = 0;
        local_70 = 0;
        pcStack_68 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
        ;
        local_60 = 0xe4;
        uStack_58 = 0;
        FUN_0322c554(local_a0,"HK_RETURN_IF_FAILED({}) returning {}. ",&DAT_046a82a8,
                     "dispatch(fieldDecl.getType(), dstOff + fieldDecl.getOffset(), nullptr, 0)",
                     local_48);
        FUN_0322c554(local_a0,"Failed to compile \'{}\'",PTR_DAT_047e5e10,&local_50);
        FUN_0322c8e0(local_a0);
        if ((local_78 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_78 - 1,0);
        }
        return local_48[0];
      }
    }
  }
  else {
    uVar11 = (uint)*puVar7;
    if ((uVar11 >> 0x11 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      uVar10 = CONCAT44(uVar11,uVar11) & 0x1ffff0001ffff;
      uVar12 = (uint)*(ushort *)
                      ((long)puVar7 +
                      (ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                   POPCOUNT((char)(uVar10 >> 0x10))) * 8 + 0x12);
    }
    if ((((uVar12 & 1) == 0) || (*(char *)(*plVar14 + 1) == '\0')) &&
       (((uVar12 >> 4 & 1) == 0 || (*(char *)(*plVar14 + 2) == '\0')))) {
      uVar12 = (uint)*param_2;
      if ((uVar12 >> 0x11 & 1) == 0) {
        uVar12 = 0;
      }
      else {
        uVar10 = CONCAT44(uVar12,uVar12) & 0x1ffff0001ffff;
        uVar12 = (uint)(ushort)param_2[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                     POPCOUNT((char)(uVar10 >> 8)) +
                                                    POPCOUNT((char)(uVar10 >> 0x10))) + 2];
      }
      iVar6 = *(int *)(param_1 + 1);
      if ((uVar11 >> 0x11 & 1) == 0) {
        uVar11 = 0;
      }
      else {
        uVar10 = CONCAT44(uVar11,uVar11) & 0x1ffff0001ffff;
        uVar11 = (uint)*(ushort *)
                        (puVar7 + (ulong)(byte)(POPCOUNT((char)uVar10) +
                                                POPCOUNT((char)(uVar10 >> 8)) +
                                               POPCOUNT((char)(uVar10 >> 0x10))) + 2);
      }
      iVar2 = *(int *)(param_1 + 3);
      FUN_031e1bb4(local_a0,param_2,PTR_DAT_047e5e00);
      if (((ulong)local_90 & 1) != 0) {
        plVar9 = (long *)((ulong)local_90 & 0xfffffffffffffffe);
        plVar1 = plVar9 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      if (local_a0[0] == (undefined8 *)0x0) {
        iVar6 = FUN_031fb974(plVar14,param_2,iVar6 + uVar12,puVar7,iVar2 + uVar11);
        return iVar6;
      }
      iVar6 = (*(code *)*local_a0[0])(plVar14[1],param_2,iVar6 + uVar12,puVar7,iVar2 + uVar11);
      return iVar6;
    }
  }
  return 0;
}


