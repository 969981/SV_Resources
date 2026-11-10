/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215c6e0; name: FUN_0215c6e0
 */


void FUN_0215c6e0(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined4 local_94;
  undefined1 local_90 [16];
  long *local_78;
  undefined1 local_70 [16];
  long local_60;
  long *local_58;
  long *local_50;
  long *local_28;
  
  puVar8 = (undefined8 *)**(long **)(param_1 + 0x8c0);
  puVar4 = (undefined8 *)(*(long **)(param_1 + 0x8c0))[1];
  if ((puVar8 != puVar4) && (*(char *)(puVar8 + 4) != '\0' || *(int *)((long)puVar8 + 0x24) != -1))
  {
    puVar2 = puVar8 + 6;
    do {
      puVar8 = puVar2;
      if (puVar4 == puVar8) {
        puVar8 = puVar4;
        goto LAB_0215c74c;
      }
      puVar2 = puVar8 + 6;
    } while ((*(char *)(puVar8 + 4) != '\0') || (*(int *)((long)puVar8 + 0x24) != -1));
  }
LAB_0215c74c:
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != puVar8) {
    puVar2 = puVar8;
  }
  uVar11 = *puVar2;
  uVar5 = puVar2[1];
  uVar3 = puVar2[2];
  plVar10 = (long *)puVar2[3];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_70._0_8_ = local_90;
  local_90._0_8_ = (long *)0x0;
  local_70._8_8_ = uVar11;
  local_60 = uVar5;
  local_58 = (long *)uVar3;
  local_50 = plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  FUN_0116c820(param_1,local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  uVar11 = local_90._0_8_;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  local_28 = (long *)uVar11;
  lVar9 = *(long *)(param_1 + 0x930);
  piVar1 = (int *)(lVar9 + 0x20);
  if (*(int *)(lVar9 + 0x28) != 0) {
    piVar1 = (int *)(lVar9 + 0x24);
  }
  puVar8 = (undefined8 *)**(long **)(param_1 + 0x8c0);
  puVar4 = (undefined8 *)(*(long **)(param_1 + 0x8c0))[1];
  if ((puVar8 != puVar4) &&
     ((iVar7 = *(int *)(lVar9 + 0x14) + *piVar1 * *(int *)(lVar9 + 0x10),
      *(char *)(puVar8 + 4) != '\0' || (*(int *)((long)puVar8 + 0x24) != iVar7)))) {
    puVar2 = puVar8 + 6;
    do {
      puVar8 = puVar2;
      if (puVar4 == puVar8) {
        puVar8 = puVar4;
        goto LAB_0215c840;
      }
      puVar2 = puVar8 + 6;
    } while ((*(char *)(puVar8 + 4) != '\0') || (*(int *)((long)puVar8 + 0x24) != iVar7));
  }
LAB_0215c840:
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != puVar8) {
    puVar2 = puVar8;
  }
  uVar11 = *puVar2;
  uVar5 = puVar2[1];
  uVar3 = puVar2[2];
  plVar10 = (long *)puVar2[3];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_70._0_8_ = local_90;
  local_90._0_8_ = (long *)0x0;
  local_70._8_8_ = uVar11;
  local_60 = uVar5;
  local_58 = (long *)uVar3;
  local_50 = plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  FUN_0116c820(param_1,local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  uVar11 = local_90._0_8_;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  local_70._0_8_ = *(long *)(uVar11 + 0x88);
  plVar10 = *(long **)(param_1 + 200);
  local_78 = (long *)uVar11;
  local_70._8_8_ = *(long *)(uVar11 + 0x90);
  local_60 = *(long *)(uVar11 + 0x98);
  local_58 = *(long **)(uVar11 + 0xa0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  (**(code **)(*plVar10 + 0xe8))(plVar10,param_1 + 0x758,local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  plVar10 = local_78;
  auVar12 = (**(code **)(*local_78 + 0x70))(local_78);
  *(undefined1 (*) [16])(param_1 + 0x9f0) = auVar12;
  uVar11 = *(undefined8 *)(param_1 + 0x900);
  local_70 = (**(code **)(*local_28 + 0x70))();
  local_90 = (**(code **)(*plVar10 + 0x70))(plVar10);
  local_94 = 2;
  FUN_0215404c(uVar11,&local_28,local_70,local_90,&DAT_03d61e94,&local_94);
  uVar6 = *(undefined4 *)(param_1 + 0x9e0);
  auVar12 = (**(code **)(*plVar10 + 0x70))(plVar10);
  local_90 = auVar12;
  FUN_0215ca88(param_1,uVar6,local_90,param_1 + 0xa00,local_70);
  uVar11 = *(undefined8 *)(param_1 + 0x900);
  auVar12 = (**(code **)(*plVar10 + 0x70))(plVar10);
  local_94 = 2;
  local_90 = auVar12;
  FUN_02154adc(uVar11,&local_78,local_90,local_70,&DAT_03d61e94,&local_94);
  return;
}


