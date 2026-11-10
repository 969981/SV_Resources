/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03502058; name: FUN_03502058
 */


void FUN_03502058(long param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined4 local_60;
  int iStack_5c;
  ushort local_58;
  undefined1 local_56;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  long *local_40 [2];
  
  plVar6 = *(long **)(param_1 + 0x178);
  if (plVar6 != (long *)0x0) {
    plVar8 = (long *)plVar6[0xc];
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,PTR_PTR_047e71e0);
      *(undefined8 *)(*(long *)(param_1 + 0x178) + 0x60) = 0;
      plVar6 = *(long **)(param_1 + 0x178);
    }
    (**(code **)(*plVar6 + 0x28))();
    *(undefined4 *)(*(long *)(param_1 + 0x178) + 0x68) = 0xffffffff;
  }
  local_40[0] = (long *)0x0;
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  FUN_03474a5c(*(long *)(param_1 + 0x60),local_40);
  if (local_40[0] == (long *)0x0) {
    return;
  }
  *(int *)(*(long *)(param_1 + 0x178) + 0x68) = (int)local_40[0][6];
  if (local_40[0][7] == 0) goto LAB_03502304;
  local_50 = 0;
  local_48 = 1;
  local_47 = 0;
  local_43 = 1;
  lVar7 = FUN_0347ff40(*(undefined8 *)(param_1 + 0x178),local_40[0],0,*(long *)(param_1 + 8) + 0x10,
                       *(long *)(param_1 + 8) + 0x50,1);
  puVar3 = PTR_DAT_047e6f70;
  if (lVar7 == 0) {
LAB_035022b0:
    plVar6 = *(long **)(param_1 + 0x178);
    if (plVar6 != (long *)0x0) {
      plVar8 = (long *)plVar6[0xc];
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,PTR_PTR_047e71e0);
        *(undefined8 *)(*(long *)(param_1 + 0x178) + 0x60) = 0;
        plVar6 = *(long **)(param_1 + 0x178);
      }
      (**(code **)(*plVar6 + 0x28))();
      *(undefined4 *)(*(long *)(param_1 + 0x178) + 0x68) = 0xffffffff;
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x178);
    *(undefined8 *)(lVar7 + 0x60) = 0;
    puVar4 = PTR_PTR_047e71e0;
    piVar9 = *(int **)puVar3;
    uVar2 = *(uint *)(puVar3 + 8);
    if ((uVar2 == 0) || (*piVar9 == *(int *)(lVar7 + 0x68))) {
      piVar10 = piVar9;
    }
    else {
      lVar11 = (ulong)uVar2 * 0x20;
      piVar12 = piVar9;
      do {
        lVar11 = lVar11 + -0x20;
        if (lVar11 == 0) goto LAB_035022b0;
        piVar10 = piVar12 + 8;
        piVar1 = piVar12 + 8;
        piVar12 = piVar10;
      } while (*piVar1 != *(int *)(lVar7 + 0x68));
    }
    if (piVar10 == piVar9 + (ulong)uVar2 * 8) goto LAB_035022b0;
    plVar6 = (long *)(**(code **)(piVar10 + 2))(PTR_PTR_047e71e0);
    *(long **)(lVar7 + 0x60) = plVar6;
    if (plVar6 == (long *)0x0) goto LAB_035022b0;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
    lVar7 = *(long *)(param_1 + 0x178);
    iVar5 = 0;
    if ((int)local_50 != 6) {
      iVar5 = 10;
    }
    if (local_50._4_4_ != 0x7e501) {
      iVar5 = 0x2e;
    }
    if (iVar5 != 0) {
      if (iVar5 == 0x2e) {
        if (((*(uint *)(lVar7 + 0x68) & 0xfff0) == 0x10a0) &&
           (puVar13 = *(undefined8 **)(lVar7 + 0x60), puVar13 != (undefined8 *)0x0)) {
          (**(code **)*puVar13)(puVar13);
          (**(code **)(*(long *)puVar4 + 0x18))(puVar4,puVar13);
          lVar7 = *(long *)(param_1 + 0x178);
        }
        *(undefined8 *)(lVar7 + 0x60) = 0;
      }
      goto LAB_035022b0;
    }
    local_60 = *(undefined4 *)PTR_DAT_047e6fa0;
    iStack_5c = *(int *)(param_1 + 0x158);
    local_58 = (ushort)(iStack_5c << 8) | 0x20;
    local_56 = 5;
    iVar5 = (**(code **)(**(long **)(lVar7 + 0x60) + 0x38))
                      (*(long **)(lVar7 + 0x60),PTR_PTR_047e71e0,param_1 + 0x90,
                       *(undefined8 *)(lVar7 + 8),&local_60);
    if ((iVar5 != 1) ||
       (iVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x178) + 0x60) + 0x18))(), iVar5 != 1))
    goto LAB_035022b0;
  }
  if (local_40[0] == (long *)0x0) {
    return;
  }
LAB_03502304:
  (**(code **)(*local_40[0] + 0x18))(local_40[0]);
  return;
}


