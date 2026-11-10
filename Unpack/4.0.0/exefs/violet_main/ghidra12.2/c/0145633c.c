/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0145633c; name: FUN_0145633c
 */


void FUN_0145633c(long *param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *local_68;
  long *local_48;
  
  puVar5 = (undefined8 *)param_1[0x73];
  param_1[0x73] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar3 = *(int *)(lVar6 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
      *(int *)(lVar6 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar5)(puVar5);
    plVar9 = (long *)param_1[0x74];
    lVar6 = param_1[0x75];
    lVar7 = param_1[0x76];
    uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar4 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar5,lVar6,lVar7);
    }
    else {
      FUN_00c48fe8(plVar9,puVar5,lVar6,lVar7);
    }
    lVar6 = FUN_00c4e600();
    iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_68 = plVar9 + plVar9[600] * 3;
        local_48 = plVar9;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar9;
        plVar2 = plVar9;
        if (plVar9[600] != 0) {
          plVar2 = plVar9 + plVar9[600] * 3;
        }
        if (plVar2 == plVar9) {
          lVar11 = 0;
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          lVar11 = 0;
          plVar10 = plVar9;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar9 + lVar11 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar11 = lVar7;
            }
            plVar10 = plVar10 + 3;
            lVar7 = lVar7 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar9 + lVar11 * 3,plVar9 + lVar7 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar6 + 0x12cc) = 0;
    }
  }
  uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((((uVar4 & 1) != 0) && (*(char *)((long)param_1 + 0x449) == '\0')) && (param_1[0x73] == 0)) {
    lVar6 = param_1[0x6d];
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
    if (((uVar4 & 1) != 0) && (*(char *)((long)param_1 + 0x449) == '\0')) {
      FUN_01f85200(param_1 + 0x30,lVar6 + 0x10);
      *(undefined1 *)(param_1 + 0x89) = 1;
    }
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}


