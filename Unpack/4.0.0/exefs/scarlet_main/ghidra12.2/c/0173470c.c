/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173470c; name: FUN_0173470c
 */


void FUN_0173470c(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined8 local_28;
  
  lVar10 = *(long *)(param_1 + 0x930);
  piVar1 = (int *)(lVar10 + 0x20);
  if (*(int *)(lVar10 + 0x28) != 0) {
    piVar1 = (int *)(lVar10 + 0x24);
  }
  puVar9 = (undefined8 *)**(long **)(param_1 + 0x8c0);
  puVar5 = (undefined8 *)(*(long **)(param_1 + 0x8c0))[1];
  if ((puVar9 != puVar5) &&
     (iVar8 = *(int *)(lVar10 + 0x14) + *piVar1 * *(int *)(lVar10 + 0x10),
     *(char *)(puVar9 + 4) != '\0' || *(int *)((long)puVar9 + 0x24) != iVar8)) {
    puVar2 = puVar9 + 6;
    do {
      puVar9 = puVar2;
      if (puVar5 == puVar9) {
        puVar9 = puVar5;
        goto LAB_0173479c;
      }
      puVar2 = puVar9 + 6;
    } while ((*(char *)(puVar9 + 4) != '\0') || (*(int *)((long)puVar9 + 0x24) != iVar8));
  }
LAB_0173479c:
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != puVar9) {
    puVar2 = puVar9;
  }
  uVar3 = *puVar2;
  uVar6 = puVar2[1];
  uVar4 = puVar2[2];
  plVar7 = (long *)puVar2[3];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_68 = &local_28;
  local_28 = 0;
  uStack_60 = uVar3;
  local_58 = uVar6;
  uStack_50 = uVar4;
  local_48 = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  FUN_0116c820(param_1,&local_68,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  uVar3 = local_28;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  FUN_01560aa4(uVar3);
  return;
}


