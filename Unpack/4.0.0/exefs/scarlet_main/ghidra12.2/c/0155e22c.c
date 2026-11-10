/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0155e22c; name: FUN_0155e22c
 */


void FUN_0155e22c(long *param_1,int param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  local_90 = param_1;
  FUN_01327aa8(param_1,&local_90);
  if ((param_3 & 1) != 0) {
    FUN_0156128c(param_1);
  }
  lVar9 = param_1[0x126];
  if (*(int *)(lVar9 + 0x28) == 0) {
    iVar10 = *(int *)(lVar9 + 0x20);
  }
  else {
    iVar10 = *(int *)(lVar9 + 0x24);
  }
  iVar7 = 0;
  if (iVar10 != 0) {
    iVar7 = param_2 / iVar10;
  }
  iVar10 = *(int *)(lVar9 + 0x18);
  uVar6 = *(uint *)(lVar9 + 0xc);
  *(undefined1 *)((long)param_1 + 0xb14) = 0;
  uVar8 = iVar7 - iVar10;
  if ((int)uVar6 <= (int)uVar8) {
    uVar8 = uVar6;
  }
  uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  FUN_0155e4ac((float)(int)uVar8,param_1[0x110]);
  *(undefined1 *)((long)param_1 + 0xb14) = 1;
  lVar9 = 0x20;
  if (*(int *)(param_1[0x126] + 0x28) != 0) {
    lVar9 = 0x24;
  }
  FUN_01327c88(param_1,param_2 - *(int *)(param_1[0x126] + lVar9) * uVar8,uVar8);
  puVar11 = *(undefined8 **)param_1[0x118];
  puVar3 = (undefined8 *)((long *)param_1[0x118])[1];
  if (puVar11 != puVar3) {
    do {
      if (((*(char *)(puVar11 + 4) == '\0') &&
          (iVar10 = *(int *)((long)puVar11 + 0x24), iVar10 != -1)) && (param_1[0x2a] != 0)) {
        local_b0 = *puVar11;
        local_a8 = puVar11[1];
        local_a0 = puVar11[2];
        local_98 = (long *)puVar11[3];
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x18))();
        }
        uVar1 = *puVar11;
        uVar4 = puVar11[1];
        uVar2 = puVar11[2];
        plVar5 = (long *)puVar11[3];
        if (plVar5 == (long *)0x0) {
          local_68 = 0;
          local_70 = (long *)0x0;
          local_90 = &local_68;
          uStack_88 = uVar1;
          local_80 = uVar4;
          local_78 = (long *)uVar2;
        }
        else {
          (**(code **)(*plVar5 + 0x18))(plVar5);
          (**(code **)(*plVar5 + 0x18))(plVar5);
          local_68 = 0;
          local_90 = &local_68;
          uStack_88 = uVar1;
          local_80 = uVar4;
          local_78 = (long *)uVar2;
          local_70 = plVar5;
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
        FUN_00f30ef8(param_1,&local_90,0);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        lVar9 = local_68;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        local_90 = *(long **)(lVar9 + 0x88);
        uStack_88 = *(undefined8 *)(lVar9 + 0x90);
        local_80 = *(undefined8 *)(lVar9 + 0x98);
        local_78 = *(long **)(lVar9 + 0xa0);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x18))();
        }
        local_68 = CONCAT44(local_68._4_4_,iVar10);
        (*(code *)param_1[0x2a])(param_1 + 0x2e,&local_68,&local_b0,&local_90);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
      }
      puVar11 = puVar11 + 6;
    } while (puVar3 != puVar11);
  }
  return;
}


