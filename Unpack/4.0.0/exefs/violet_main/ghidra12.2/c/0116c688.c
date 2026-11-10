/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0116c688; name: FUN_0116c688
 */


void FUN_0116c688(long param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long local_48;
  
  puVar7 = (undefined8 *)**(long **)(param_1 + 0x8c0);
  puVar4 = (undefined8 *)(*(long **)(param_1 + 0x8c0))[1];
  if ((puVar7 != puVar4) &&
     (*(char *)(puVar7 + 4) != '\0' || *(int *)((long)puVar7 + 0x24) != param_2)) {
    puVar1 = puVar7 + 6;
    do {
      puVar7 = puVar1;
      if (puVar4 == puVar7) {
        puVar7 = puVar4;
        goto LAB_0116c6f8;
      }
      puVar1 = puVar7 + 6;
    } while ((*(char *)(puVar7 + 4) != '\0') || (*(int *)((long)puVar7 + 0x24) != param_2));
  }
LAB_0116c6f8:
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != puVar7) {
    puVar1 = puVar7;
  }
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  uVar3 = puVar1[2];
  plVar8 = (long *)puVar1[3];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_70 = &local_48;
  local_48 = 0;
  uStack_68 = uVar2;
  local_60 = uVar5;
  local_58 = (long *)uVar3;
  local_50 = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  FUN_0116c820(param_1,&local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  lVar6 = local_48;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  local_70 = *(long **)(lVar6 + 0x88);
  uStack_68 = *(undefined8 *)(lVar6 + 0x90);
  plVar8 = *(long **)(param_1 + 200);
  local_60 = *(undefined8 *)(lVar6 + 0x98);
  local_58 = *(long **)(lVar6 + 0xa0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_70,param_3);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


