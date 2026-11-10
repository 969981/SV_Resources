/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c6e50; name: FUN_034c6e50
 */


void FUN_034c6e50(undefined8 param_1,long param_2,long *param_3,uint param_4,uint param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  uint local_34;
  
  puVar2 = PTR_DAT_047e2fd0;
  plVar6 = *(long **)(param_2 + 0x30);
  local_34 = param_4;
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
    if (plVar6 == (long *)0x0) {
      return;
    }
    *plVar6 = (long)(PTR_DAT_047e6e40 + 0x10);
    plVar6[1] = 0;
    puVar3 = PTR_DAT_047e6958;
    lVar5 = *(long *)(PTR_DAT_047e6958 + 8);
    plVar6[2] = 0;
    plVar6[3] = lVar5;
    plVar7 = (long *)(puVar3 + 0x10);
    if (*(long *)(puVar3 + 0x10) != 0) {
      plVar7 = (long *)(lVar5 + 0x10);
    }
    *plVar7 = (long)plVar6;
    *(long **)(puVar3 + 8) = plVar6;
    *(int *)puVar3 = *(int *)puVar3 + 1;
    puVar3 = PTR_DAT_047e6e48;
    *(undefined2 *)(plVar6 + 0x1c) = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[0xc] = 0;
    plVar6[0xd] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
    plVar6[0x12] = 0;
    plVar6[0x13] = 0;
    plVar6[0x16] = 0;
    plVar6[0x17] = 0;
    plVar6[0x1a] = 0;
    plVar6[0x1b] = 0;
    *(long **)(param_2 + 0x30) = plVar6;
    plVar6[1] = param_2;
    iVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined8 *)(param_2 + 0x78));
    if (iVar4 != 1) {
      (**(code **)*plVar6)(plVar6);
      (**(code **)(puVar2 + 0x30))(4,plVar6);
      *(undefined8 *)(param_2 + 0x30) = 0;
      return;
    }
  }
  if ((param_4 != 0) && ((param_5 & 1) != 0)) {
    if (param_4 < 2) {
      param_4 = 1;
    }
    uVar8 = (ulong)param_4;
    plVar7 = param_3;
    do {
      if (*plVar7 != -1) {
        FUN_034c70dc(param_1);
      }
      uVar8 = uVar8 - 1;
      plVar7 = plVar7 + 2;
    } while (uVar8 != 0);
  }
  FUN_03477cc4(plVar6,param_3,&local_34);
  puVar2 = PTR_DAT_047e2fd0;
  plVar7 = *(long **)(param_2 + 0x28);
  if (plVar7 != (long *)0x0) {
LAB_034c6ed4:
    *(byte *)((long)plVar7 + 0x54) = *(byte *)((long)plVar7 + 0x54) | 1;
    FUN_034c696c(plVar7 + 4,plVar6 + 0x18);
    return;
  }
  plVar7 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x58);
  if (plVar7 != (long *)0x0) {
    *plVar7 = (long)(PTR_DAT_047e72c0 + 0x10);
    plVar7[1] = 0;
    puVar3 = PTR_DAT_047e6f98;
    lVar5 = *(long *)(PTR_DAT_047e6f98 + 8);
    plVar7[2] = 0;
    plVar7[3] = lVar5;
    plVar1 = (long *)(puVar3 + 0x10);
    if (*(long *)(puVar3 + 0x10) != 0) {
      plVar1 = (long *)(lVar5 + 0x10);
    }
    *plVar1 = (long)plVar7;
    *(long **)(puVar3 + 8) = plVar7;
    *(int *)puVar3 = *(int *)puVar3 + 1;
    puVar3 = PTR_DAT_047e72c8;
    plVar7[6] = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    *(undefined2 *)(plVar7 + 7) = 0;
    plVar7[8] = 0;
    plVar7[9] = 0;
    *plVar7 = (long)(puVar3 + 0x10);
    *(byte *)((long)plVar7 + 0x3a) = *(byte *)((long)plVar7 + 0x3a) & 0xf8;
    *(undefined4 *)(plVar7 + 10) = 0x3f800000;
    *(byte *)((long)plVar7 + 0x54) = *(byte *)((long)plVar7 + 0x54) | 1;
    *(long **)(param_2 + 0x28) = plVar7;
    plVar7[1] = param_2;
    iVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(param_2 + 0x78));
    if (iVar4 == 1) goto LAB_034c6ed4;
    (**(code **)*plVar7)(plVar7);
    (**(code **)(puVar2 + 0x30))(4,plVar7);
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  return;
}


