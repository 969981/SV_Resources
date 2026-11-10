/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fed658; name: FUN_02fed658
 */


void FUN_02fed658(long param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong local_58;
  ulong uStack_50;
  undefined1 local_48;
  
  puVar2 = PTR_DAT_047e49c0;
  lVar1 = tpidr_el0;
  if (*(long *)(param_1 + 0x800) == 0) {
    plVar4 = (long *)0x0;
    iVar8 = -1;
    bVar3 = false;
  }
  else {
    iVar7 = *(int *)PTR_DAT_047e49c0;
    lVar9 = (long)iVar7;
    lVar6 = *(long *)(lVar1 + 0x1000b8);
    if (lVar6 == 0) {
      lVar6 = FUN_00e5d3b4();
      *(long *)(lVar1 + 0x1000b8) = lVar6;
      iVar7 = *(int *)puVar2;
      iVar8 = (int)*(undefined8 *)(lVar6 + lVar9 * 8 + 1000);
      if (lVar6 == 0) {
        lVar6 = FUN_00e5d3b4();
        *(long *)(lVar1 + 0x1000b8) = lVar6;
      }
    }
    else {
      iVar8 = (int)*(undefined8 *)(lVar6 + lVar9 * 8 + 1000);
    }
    *(long *)(lVar6 + (long)iVar7 * 8 + 1000) = (long)(iVar8 + 1);
    plVar4 = *(long **)(param_1 + 0x800);
    bVar3 = iVar8 == 0;
  }
  bVar3 = (bool)(bVar3 & plVar4 != (long *)0x0);
  if ((*(char *)(param_1 + 0x999) != '\0') || (bVar3)) {
    local_48 = (undefined1)param_3;
    local_58 = 0x2002000020;
    uStack_50 = param_2;
    if (bVar3) {
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
  if ((long)param_2 < 0) {
    param_2 = param_2 & 0xffffffff;
  }
  else {
    uVar5 = FUN_00dbb6c8(param_1 + 0x960,param_2,&local_58);
    param_2 = local_58 & 0xffffffff;
    if ((uVar5 & 1) == 0) {
      param_2 = 0xffffff;
    }
  }
  FUN_02f3d5a0(param_1,param_2,param_3);
  if (iVar8 != -1) {
    iVar7 = *(int *)puVar2;
    lVar6 = *(long *)(lVar1 + 0x1000b8);
    if (lVar6 == 0) {
      lVar6 = FUN_00e5d3b4();
      *(long *)(lVar1 + 0x1000b8) = lVar6;
    }
    *(long *)(lVar6 + (long)iVar7 * 8 + 1000) = (long)iVar8;
  }
  return;
}


