/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01733218; name: FUN_01733218
 */


undefined8 FUN_01733218(long param_1,int param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_24;
  
  if (**(long **)(param_1 + 0x950) != 0) {
    plVar6 = (long *)(*(code *)**(undefined8 **)(**(long **)(param_1 + 0x950) + 0x28))();
    if (((*PTR_DAT_047dd1f8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047dd1f8), iVar5 != 0)) {
      uVar8 = FUN_02152568();
      *(undefined8 *)PTR_DAT_047dd200 = uVar8;
      __cxa_guard_release(PTR_DAT_047dd1f8);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_047dd200) {
        if (param_2 == 0) {
          return 1;
        }
        uVar8 = FUN_0215de98(param_1);
        return uVar8;
      }
    }
  }
  if (param_2 != 0) {
    if (*(code **)(param_1 + 0x550) == (code *)0x0) {
      return 1;
    }
    uVar7 = (**(code **)(param_1 + 0x550))(param_1 + 0x570);
    if ((uVar7 & 1) == 0) {
      FUN_01733568(*(undefined8 *)(param_1 + 0x880));
      return 0;
    }
    return 1;
  }
  pcVar9 = *(code **)(param_1 + 0x558);
  puVar1 = (undefined8 *)(param_1 + 0x550);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x560) = 0;
    *(undefined8 *)(param_1 + 0x568) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x558) = 0;
    (*pcVar9)(param_1 + 0x570);
  }
  iVar5 = *(int *)(param_1 + 0x8e0);
  if (iVar5 == 1) {
    lVar10 = *(long *)(param_1 + 0x930);
    if (*(int *)(lVar10 + 0x28) == 0) {
      iVar11 = *(int *)(param_1 + 0x8e4) + *(int *)(lVar10 + 0x20) * *(int *)(param_1 + 0x8e8);
    }
    else {
      iVar11 = *(int *)(param_1 + 0x8e8) + *(int *)(lVar10 + 0x24) * *(int *)(param_1 + 0x8e4);
    }
    iVar3 = *(int *)(lVar10 + 0x10);
    iVar11 = iVar11 + *(int *)(lVar10 + 0x14);
LAB_017332ec:
    FUN_01327c88(param_1,iVar11,iVar3);
    FUN_01282188(param_1 + 0xa60);
    return 1;
  }
  if (iVar5 == 2) {
    FUN_01733984(param_1);
    pcVar9 = *(code **)(param_1 + 0x558);
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x560) = 0;
      *(undefined8 *)(param_1 + 0x568) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x558) = 0;
      (*pcVar9)(param_1 + 0x570);
    }
    *(long *)(param_1 + 0x570) = param_1;
    pcVar9 = FUN_017a3b70;
  }
  else {
    if (iVar5 == 3) {
      FUN_01733f88(param_1);
      return 1;
    }
    if (iVar5 != 4) {
      return 1;
    }
    if (*(code **)(param_1 + 0x650) != (code *)0x0) {
      lVar10 = *(long *)(param_1 + 0x930);
      piVar2 = (int *)(lVar10 + 0x20);
      if (*(int *)(lVar10 + 0x28) != 0) {
        piVar2 = (int *)(lVar10 + 0x24);
      }
      local_24 = *(int *)(lVar10 + 0x14) + *piVar2 * *(int *)(lVar10 + 0x10);
      uVar7 = (**(code **)(param_1 + 0x650))(param_1 + 0x670,&local_24,param_1 + 0x8e4);
      if ((uVar7 & 1) == 0) {
        return 1;
      }
    }
    if (*(int *)(param_1 + 0x754) == 2) {
      uVar7 = FUN_0215c4f4(param_1);
      if ((uVar7 & 1) == 0) {
        return 1;
      }
      pcVar9 = *(code **)(param_1 + 0x558);
      if (pcVar9 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x560) = 0;
        *(undefined8 *)(param_1 + 0x568) = 0;
        *puVar1 = 0;
        *(undefined8 *)(param_1 + 0x558) = 0;
        (*pcVar9)(param_1 + 0x570);
      }
      *(long *)(param_1 + 0x570) = param_1;
      pcVar9 = FUN_0215c688;
    }
    else {
      if (*(int *)(param_1 + 0x754) != 1) {
        return 1;
      }
      uVar7 = FUN_0215e0b4(*(undefined8 *)(param_1 + 0x930),param_1 + 0x8e4);
      if ((uVar7 & 1) == 0) {
        lVar10 = *(long *)(param_1 + 0x930);
        iVar5 = *(int *)(lVar10 + 0x28);
        iVar4 = *(int *)(param_1 + 0x8e4);
        if (iVar5 == 0) {
          iVar12 = *(int *)(param_1 + 0x8e8);
          iVar11 = iVar4 + *(int *)(lVar10 + 0x20) * iVar12;
        }
        else {
          iVar12 = *(int *)(param_1 + 0x8e8);
          iVar11 = iVar12 + *(int *)(lVar10 + 0x24) * iVar4;
        }
        iVar11 = iVar11 + *(int *)(lVar10 + 0x14);
        if (iVar11 < 0) {
          return 1;
        }
        iVar3 = *(int *)(lVar10 + 0x10);
        if (iVar3 < *(int *)(lVar10 + 0xc)) {
          iVar14 = *(int *)(lVar10 + 0x20);
          iVar13 = *(int *)(lVar10 + 0x24);
          iVar15 = iVar13 * iVar14 + -1;
        }
        else {
          iVar14 = *(int *)(lVar10 + 0x20);
          iVar13 = *(int *)(lVar10 + 0x24);
          iVar15 = iVar14;
          if (iVar5 != 0) {
            iVar15 = iVar13;
          }
          iVar15 = *(int *)(lVar10 + 8) + ~(iVar15 * *(int *)(lVar10 + 0xc));
        }
        if (iVar15 < iVar11) {
          return 1;
        }
        iVar11 = iVar4 + iVar14 * iVar12;
        if (iVar5 != 0) {
          iVar11 = iVar12 + iVar13 * iVar4;
        }
        iVar11 = iVar11 + *(int *)(lVar10 + 0x14);
        goto LAB_017332ec;
      }
      FUN_0215bbf0(param_1);
      pcVar9 = *(code **)(param_1 + 0x558);
      if (pcVar9 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x560) = 0;
        *(undefined8 *)(param_1 + 0x568) = 0;
        *puVar1 = 0;
        *(undefined8 *)(param_1 + 0x558) = 0;
        (*pcVar9)(param_1 + 0x570);
      }
      pcVar9 = (code *)&LAB_0215c228;
      *(long *)(param_1 + 0x570) = param_1;
    }
  }
  *(code **)(param_1 + 0x578) = pcVar9;
  *(undefined1 **)(param_1 + 0x550) = &LAB_02b34d3c;
  *(undefined1 **)(param_1 + 0x558) = &LAB_02b34d58;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined1 **)(param_1 + 0x560) = &LAB_02b34d5c;
  *(undefined1 **)(param_1 + 0x568) = &LAB_02b34d70;
  return 1;
}


