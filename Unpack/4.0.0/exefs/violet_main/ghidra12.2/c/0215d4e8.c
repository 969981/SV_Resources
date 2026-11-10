/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215d4e8; name: FUN_0215d4e8
 */


undefined8 FUN_0215d4e8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
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
  
  uVar7 = FUN_021545c4(*(undefined8 *)(param_1 + 0x900));
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    FUN_0215bf24(param_1,0);
    FUN_0215d820(param_1);
    puVar10 = (undefined8 *)**(long **)(param_1 + 0x8c0);
    puVar2 = (undefined8 *)(*(long **)(param_1 + 0x8c0))[1];
    if ((puVar10 != puVar2) &&
       (*(char *)(puVar10 + 4) != '\0' ||
        *(int *)((long)puVar10 + 0x24) != *(int *)(param_1 + 0x9e0))) {
      puVar6 = puVar10 + 6;
      do {
        puVar10 = puVar6;
        if (puVar2 == puVar10) {
          puVar10 = puVar2;
          goto LAB_0215d57c;
        }
        puVar6 = puVar10 + 6;
      } while ((*(char *)(puVar10 + 4) != '\0') ||
              (*(int *)((long)puVar10 + 0x24) != *(int *)(param_1 + 0x9e0)));
    }
LAB_0215d57c:
    uVar8 = 1;
    if ((puVar10 != (undefined8 *)0x0) && (puVar2 != puVar10)) {
      if (*(long *)(param_1 + 0x150) != 0) {
        local_98 = (long *)*puVar10;
        uStack_90 = puVar10[1];
        uVar4 = *(undefined4 *)((long)puVar10 + 0x24);
        local_88 = puVar10[2];
        local_80 = (long *)puVar10[3];
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x18))();
        }
        uVar8 = *puVar10;
        uVar3 = puVar10[1];
        uVar1 = puVar10[2];
        plVar9 = (long *)puVar10[3];
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        local_78 = &local_38;
        local_38 = (long *)0x0;
        lStack_70 = uVar8;
        local_68 = uVar3;
        local_60 = (long *)uVar1;
        local_58 = plVar9;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        FUN_00f30ef8(param_1,&local_78,0);
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        plVar5 = local_38;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
        local_78 = (long **)plVar5[0x11];
        lStack_70 = plVar5[0x12];
        local_68 = plVar5[0x13];
        local_60 = (long *)plVar5[0x14];
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x18))();
        }
        local_38 = (long *)CONCAT44(local_38._4_4_,uVar4);
        (**(code **)(param_1 + 0x150))(param_1 + 0x170,&local_38,&local_98,&local_78);
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x20))();
        }
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
      }
      uVar8 = *puVar10;
      uVar3 = puVar10[1];
      uVar1 = puVar10[2];
      plVar9 = (long *)puVar10[3];
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      local_78 = &local_98;
      local_98 = (long *)0x0;
      lStack_70 = uVar8;
      local_68 = uVar3;
      local_60 = (long *)uVar1;
      local_58 = plVar9;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      FUN_0116c820(param_1,&local_78,0);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      plVar5 = local_98;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      (**(code **)(*plVar5 + 0x68))(plVar5,param_1 + 0x9f0);
      local_78 = (long **)plVar5[0x11];
      lStack_70 = plVar5[0x12];
      plVar9 = *(long **)(param_1 + 200);
      local_68 = plVar5[0x13];
      local_60 = (long *)plVar5[0x14];
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x18))();
      }
      (**(code **)(*plVar9 + 0x70))(plVar9,&local_78,1);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      uVar8 = 1;
    }
  }
  return uVar8;
}


