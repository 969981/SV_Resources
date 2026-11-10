/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f377bc; name: FUN_02f377bc
 */


long FUN_02f377bc(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  char *__s;
  char cVar2;
  bool bVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  void *__dest;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong *local_308;
  ulong local_300;
  undefined4 local_278;
  ulong local_270;
  long lStack_268;
  long *local_260;
  ulong local_258;
  long lStack_250;
  undefined2 local_248;
  ulong local_240;
  long local_238;
  
  uVar12 = param_2[1];
  if (uVar12 == param_2[2]) {
    local_308 = &local_270;
    local_270 = local_270 & 0xffffffffffffff00;
    local_300 = 0x8000020000000001;
    local_278 = 0;
    FUN_031c6c18(&local_308,
                 "Attempted to constrain body 0x0%16llx to itself. Skipping creation of the constraint."
                 ,uVar12);
    FUN_03226c50(0x4c873b15,&local_270,
                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Physics/Physics/Dynamics/World/hknpWorld.cpp"
                 ,0x7cd);
    uVar12 = local_300;
    local_300 = local_300 & 0xffffffff00000000;
    if ((long)uVar12 < 0) {
      return -1;
    }
    if (local_308 == (ulong *)0x0) {
      return -1;
    }
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    return -1;
  }
  lVar14 = *(long *)(param_1 + 0x488);
  if ((~*(uint *)(lVar14 + 0x24) & 0xffffff) == 0) {
    FUN_02f0ca6c(param_1 + 0x760,param_1,lVar14);
    lVar14 = *(long *)(param_1 + 0x488);
    uVar12 = param_2[1];
  }
  if ((long)uVar12 < 0) {
    uVar12 = uVar12 & 0xffffffff;
  }
  else {
    uVar11 = FUN_00dbb6c8(param_1 + 0x960,uVar12,&local_270);
    uVar12 = local_270 & 0xffffffff;
    if ((uVar11 & 1) == 0) {
      uVar12 = 0xffffff;
    }
  }
  uVar11 = param_2[2];
  if ((long)uVar11 < 0) {
    uVar11 = uVar11 & 0xffffffff;
  }
  else {
    uVar10 = FUN_00dbb6c8(param_1 + 0x960,uVar11,&local_270);
    uVar11 = local_270 & 0xffffffff;
    if ((uVar10 & 1) == 0) {
      uVar11 = 0xffffff;
    }
  }
  iVar7 = FUN_02f0cb18(lVar14,param_2,param_3,uVar12,uVar11);
  if (iVar7 == 0x7fffffff) {
    return -1;
  }
  lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x488) + 8) + (long)iVar7 * 0x68 + 0x28);
  if (-1 < lVar14) {
    iVar8 = FUN_031c46dc(param_1 + 0x980,lVar14,iVar7);
    if (iVar8 != 0) {
      FUN_02f0cfec(*(undefined8 *)(param_1 + 0x488),iVar7);
      return -1;
    }
    *(undefined1 *)(param_1 + 0x998) = 1;
  }
  lVar4 = tpidr_el0;
  if (*(long *)(param_1 + 0x800) == 0) {
    bVar6 = false;
    iVar7 = -1;
    bVar5 = false;
  }
  else {
    lVar15 = (long)DAT_0486b380;
    lVar13 = *(long *)(lVar4 + 0x1000b8);
    if (lVar13 == 0) {
      lVar13 = FUN_00e5d3b4();
      *(long *)(lVar4 + 0x1000b8) = lVar13;
      iVar8 = DAT_0486b380;
      iVar7 = (int)*(undefined8 *)(lVar13 + lVar15 * 8 + 1000);
      if (lVar13 == 0) {
        lVar13 = FUN_00e5d3b4();
        *(long *)(lVar4 + 0x1000b8) = lVar13;
      }
    }
    else {
      iVar7 = (int)*(undefined8 *)(lVar13 + lVar15 * 8 + 1000);
      iVar8 = DAT_0486b380;
    }
    *(long *)(lVar13 + (long)iVar8 * 8 + 1000) = (long)(iVar7 + 1);
    bVar5 = *(long *)(param_1 + 0x800) != 0;
    bVar6 = iVar7 == 0;
  }
  if (((bool)(bVar6 & bVar5)) || (*(char *)(param_1 + 0x999) != '\0')) {
    local_270 = 0x2c02000040;
    local_260 = (long *)*param_2;
    if ((local_260 != (long *)0x0) && (local_260[1] != 0)) {
      plVar1 = local_260 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_258 = param_2[1];
    lStack_250 = param_2[2];
    local_248 = (undefined2)param_2[3];
    local_240 = 0;
    __s = (char *)(param_2[4] & 0xfffffffffffffffe);
    lStack_268 = lVar14;
    if (__s != (char *)0x0) {
      sVar9 = strlen(__s);
      sVar9 = (size_t)((int)sVar9 + 1);
      __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar9);
      memcpy(__dest,__s,sVar9);
      local_240 = (ulong)__dest | 1;
    }
    local_238 = param_2[5];
    if ((bool)(bVar6 & bVar5)) {
      (**(code **)(**(long **)(param_1 + 0x800) + 0x20))(*(long **)(param_1 + 0x800),&local_270);
    }
    if ((local_240 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_240 - 1,0);
    }
    if ((local_260 != (long *)0x0) && (local_260[1] != 0)) {
      plVar1 = local_260 + 2;
      do {
        lVar13 = *plVar1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*local_260 + 0x18))();
      }
    }
  }
  FUN_02f37bc8(param_1 + 0x778,param_1,param_2,lVar14);
  if (iVar7 == -1) {
    return lVar14;
  }
  lVar15 = (long)DAT_0486b380;
  lVar13 = *(long *)(lVar4 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar4 + 0x1000b8) = lVar13;
  }
  *(long *)(lVar13 + lVar15 * 8 + 1000) = (long)iVar7;
  return lVar14;
}


