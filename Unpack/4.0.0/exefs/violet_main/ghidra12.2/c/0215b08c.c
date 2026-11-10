/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215b08c; name: FUN_0215b08c
 */


void FUN_0215b08c(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  long **local_78;
  long lStack_70;
  long local_68;
  long *local_60;
  long *local_58;
  long *local_38;
  
  puVar9 = (undefined8 *)**(long **)(param_1 + 0x8c0);
  puVar3 = (undefined8 *)(*(long **)(param_1 + 0x8c0))[1];
  if ((puVar9 != puVar3) &&
     (*(char *)(puVar9 + 4) != '\0' || *(int *)((long)puVar9 + 0x24) != param_2)) {
    puVar7 = puVar9 + 6;
    do {
      puVar9 = puVar7;
      if (puVar3 == puVar9) {
        puVar9 = puVar3;
        goto LAB_0215b100;
      }
      puVar7 = puVar9 + 6;
    } while ((*(char *)(puVar9 + 4) != '\0') || (*(int *)((long)puVar9 + 0x24) != param_2));
  }
LAB_0215b100:
  if (puVar9 != (undefined8 *)0x0 && puVar3 != puVar9) {
    uVar1 = *puVar9;
    uVar4 = puVar9[1];
    uVar2 = puVar9[2];
    plVar5 = (long *)puVar9[3];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    local_78 = &local_98;
    local_98 = (long *)0x0;
    lStack_70 = uVar1;
    local_68 = uVar4;
    local_60 = (long *)uVar2;
    local_58 = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    FUN_0116c820(param_1,&local_78,0);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    plVar6 = local_98;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    uVar8 = plVar6[0x1a];
    if ((~(uint)uVar8 & 0xf) == 0) {
      (**(code **)(*plVar6 + 0xe0))(plVar6,0);
      uVar8 = plVar6[0x1a];
    }
    plVar6[0x1a] = uVar8 & 0xfffffffffffffffe;
    (**(code **)(*plVar6 + 0x138))(plVar6);
    if (*(long *)(param_1 + 0x1d0) != 0) {
      local_98 = (long *)*puVar9;
      uStack_90 = puVar9[1];
      local_88 = puVar9[2];
      local_80 = (long *)puVar9[3];
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x18))();
      }
      uVar1 = *puVar9;
      uVar4 = puVar9[1];
      uVar2 = puVar9[2];
      plVar5 = (long *)puVar9[3];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      local_78 = &local_38;
      local_38 = (long *)0x0;
      lStack_70 = uVar1;
      local_68 = uVar4;
      local_60 = (long *)uVar2;
      local_58 = plVar5;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      FUN_00f30ef8(param_1,&local_78,0);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      plVar6 = local_38;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      local_78 = (long **)plVar6[0x11];
      lStack_70 = plVar6[0x12];
      local_68 = plVar6[0x13];
      local_60 = (long *)plVar6[0x14];
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x18))();
      }
      local_38 = (long *)CONCAT44(local_38._4_4_,param_2);
      (**(code **)(param_1 + 0x1d0))(param_1 + 0x1f0,&local_38,&local_98,&local_78);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
    }
    *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
    *(undefined1 *)(puVar9 + 4) = 1;
  }
  return;
}


