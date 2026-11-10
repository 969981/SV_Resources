/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215bf24; name: FUN_0215bf24
 */


void FUN_0215bf24(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
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
  
  if (*(int *)(param_1 + 0x9e0) != -1) {
    puVar12 = (undefined8 *)**(long **)(param_1 + 0x8c0);
    puVar3 = (undefined8 *)(*(long **)(param_1 + 0x8c0))[1];
    if ((puVar12 != puVar3) &&
       (*(char *)(puVar12 + 4) != '\0' || *(int *)((long)puVar12 + 0x24) != -1)) {
      puVar9 = puVar12 + 6;
      do {
        puVar12 = puVar9;
        if (puVar3 == puVar12) {
          puVar12 = puVar3;
          goto LAB_0215bfa4;
        }
        puVar9 = puVar12 + 6;
      } while ((*(char *)(puVar12 + 4) != '\0') || (*(int *)((long)puVar12 + 0x24) != -1));
    }
LAB_0215bfa4:
    if ((puVar12 != (undefined8 *)0x0) && (puVar3 != puVar12)) {
      uVar1 = *puVar12;
      uVar4 = puVar12[1];
      uVar2 = puVar12[2];
      plVar5 = (long *)puVar12[3];
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
      plVar8 = local_98;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      uVar11 = plVar8[0x1a];
      uVar10 = (uint)uVar11;
      uVar7 = uVar10 | 1;
      if ((param_2 & 1) == 0) {
        uVar7 = uVar10 & 0xe;
      }
      if (((~uVar10 & 0xf) == 0) != ((uVar7 & 0xf) == 0xf)) {
        (**(code **)(*plVar8 + 0xe0))(plVar8,(uVar7 & 0xf) == 0xf);
        uVar11 = plVar8[0x1a];
      }
      plVar8[0x1a] = uVar11 & 0xfffffffffffffffe | param_2 & 1;
      if (*(long *)(param_1 + 0x150) != 0) {
        local_98 = (long *)*puVar12;
        uStack_90 = puVar12[1];
        uVar6 = *(undefined4 *)(param_1 + 0x9e0);
        local_88 = puVar12[2];
        local_80 = (long *)puVar12[3];
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x18))();
        }
        uVar1 = *puVar12;
        uVar4 = puVar12[1];
        uVar2 = puVar12[2];
        plVar5 = (long *)puVar12[3];
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
        plVar8 = local_38;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        local_78 = (long **)plVar8[0x11];
        lStack_70 = plVar8[0x12];
        local_68 = plVar8[0x13];
        local_60 = (long *)plVar8[0x14];
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x18))();
        }
        local_38 = (long *)CONCAT44(local_38._4_4_,uVar6);
        (**(code **)(param_1 + 0x150))(param_1 + 0x170,&local_38,&local_98,&local_78);
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
    }
  }
  return;
}


