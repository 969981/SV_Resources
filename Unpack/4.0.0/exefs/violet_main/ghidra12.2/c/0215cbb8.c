/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215cbb8; name: FUN_0215cbb8
 */


undefined8 FUN_0215cbb8(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *local_98;
  long lStack_90;
  long local_88;
  long *local_80;
  long **local_78;
  long lStack_70;
  long local_68;
  long *local_60;
  long *local_58;
  long *local_38;
  
  uVar12 = FUN_021545c4(*(undefined8 *)(param_1 + 0x900));
  if ((uVar12 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    FUN_0215bf24(param_1,0);
    FUN_0215d1b0(param_1);
    lVar14 = *(long *)(param_1 + 0x930);
    piVar1 = (int *)(lVar14 + 0x20);
    if (*(int *)(lVar14 + 0x28) != 0) {
      piVar1 = (int *)(lVar14 + 0x24);
    }
    iVar10 = *(int *)(lVar14 + 0x14) + *piVar1 * *(int *)(lVar14 + 0x10);
    plVar15 = (long *)**(long **)(param_1 + 0x8c0);
    plVar5 = (long *)(*(long **)(param_1 + 0x8c0))[1];
    if ((plVar15 != plVar5) &&
       ((char)plVar15[4] != '\0' || *(int *)((long)plVar15 + 0x24) != iVar10)) {
      plVar2 = plVar15 + 6;
      do {
        plVar15 = plVar2;
        if (plVar5 == plVar15) {
          plVar15 = plVar5;
          goto LAB_0215cc6c;
        }
        plVar2 = plVar15 + 6;
      } while (((char)plVar15[4] != '\0') || (*(int *)((long)plVar15 + 0x24) != iVar10));
    }
LAB_0215cc6c:
    *(undefined1 *)(param_1 + 0xb3d) = 1;
    plVar2 = (long *)0x0;
    if (plVar5 != plVar15) {
      plVar2 = plVar15;
    }
    *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(param_1 + 0x9e0);
    *(int *)(param_1 + 0xb44) = iVar10;
    if (*(code **)(param_1 + 0x350) != (code *)0x0) {
      local_78 = (long **)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0x9e0));
      local_98 = (long *)CONCAT44(local_98._4_4_,iVar10);
      (**(code **)(param_1 + 0x350))(param_1 + 0x370,&local_78,&local_98);
    }
    if (*(long *)(param_1 + 0x150) != 0) {
      local_98 = (long *)*plVar2;
      lStack_90 = plVar2[1];
      local_88 = plVar2[2];
      local_80 = (long *)plVar2[3];
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x18))();
      }
      lVar14 = *plVar2;
      lVar6 = plVar2[1];
      lVar3 = plVar2[2];
      plVar15 = (long *)plVar2[3];
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      local_78 = &local_38;
      local_38 = (long *)0x0;
      lStack_70 = lVar14;
      local_68 = lVar6;
      local_60 = (long *)lVar3;
      local_58 = plVar15;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      FUN_00f30ef8(param_1,&local_78,0);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      plVar5 = local_38;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      local_78 = (long **)plVar5[0x11];
      lStack_70 = plVar5[0x12];
      local_68 = plVar5[0x13];
      local_60 = (long *)plVar5[0x14];
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x18))();
      }
      local_38 = (long *)CONCAT44(local_38._4_4_,iVar10);
      (**(code **)(param_1 + 0x150))(param_1 + 0x170,&local_38,&local_98,&local_78);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
    }
    lVar14 = *plVar2;
    lVar3 = plVar2[1];
    plVar15 = (long *)plVar2[2];
    plVar5 = (long *)plVar2[3];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    local_78 = &local_98;
    local_98 = (long *)0x0;
    lStack_70 = lVar14;
    local_68 = lVar3;
    local_60 = plVar15;
    local_58 = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    FUN_0116c820(param_1,&local_78,0);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    plVar15 = local_98;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    (**(code **)(*plVar15 + 0x68))(plVar15,param_1 + 0x9f0);
    puVar16 = (undefined8 *)**(long **)(param_1 + 0x8c0);
    puVar7 = (undefined8 *)(*(long **)(param_1 + 0x8c0))[1];
    if ((puVar16 != puVar7) &&
       ((*(char *)(puVar16 + 4) != '\0' ||
        (*(int *)((long)puVar16 + 0x24) != *(int *)(param_1 + 0x9e0))))) {
      puVar11 = puVar16 + 6;
      do {
        puVar16 = puVar11;
        if (puVar7 == puVar16) {
          puVar16 = puVar7;
          goto LAB_0215ce78;
        }
        puVar11 = puVar16 + 6;
      } while ((*(char *)(puVar16 + 4) != '\0') ||
              (*(int *)((long)puVar16 + 0x24) != *(int *)(param_1 + 0x9e0)));
    }
LAB_0215ce78:
    uVar13 = 1;
    if ((puVar16 != (undefined8 *)0x0) && (puVar7 != puVar16)) {
      if (*(long *)(param_1 + 0x150) != 0) {
        local_98 = (long *)*puVar16;
        lStack_90 = puVar16[1];
        uVar9 = *(undefined4 *)((long)puVar16 + 0x24);
        local_88 = puVar16[2];
        local_80 = (long *)puVar16[3];
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x18))();
        }
        uVar13 = *puVar16;
        uVar8 = puVar16[1];
        uVar4 = puVar16[2];
        plVar15 = (long *)puVar16[3];
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
        local_78 = &local_38;
        local_38 = (long *)0x0;
        lStack_70 = uVar13;
        local_68 = uVar8;
        local_60 = (long *)uVar4;
        local_58 = plVar15;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
        FUN_00f30ef8(param_1,&local_78,0);
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        plVar5 = local_38;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x20))(plVar15);
        }
        local_78 = (long **)plVar5[0x11];
        lStack_70 = plVar5[0x12];
        local_68 = plVar5[0x13];
        local_60 = (long *)plVar5[0x14];
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x18))();
        }
        local_38 = (long *)CONCAT44(local_38._4_4_,uVar9);
        (**(code **)(param_1 + 0x150))(param_1 + 0x170,&local_38,&local_98,&local_78);
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x20))();
        }
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x20))(plVar15);
        }
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
      }
      uVar13 = *puVar16;
      uVar8 = puVar16[1];
      uVar4 = puVar16[2];
      plVar15 = (long *)puVar16[3];
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      local_78 = &local_98;
      local_98 = (long *)0x0;
      lStack_70 = uVar13;
      local_68 = uVar8;
      local_60 = (long *)uVar4;
      local_58 = plVar15;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      FUN_0116c820(param_1,&local_78,0);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      plVar5 = local_98;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      (**(code **)(*plVar5 + 0x68))(plVar5,param_1 + 0xa00);
      local_78 = (long **)plVar5[0x11];
      lStack_70 = plVar5[0x12];
      plVar15 = *(long **)(param_1 + 200);
      local_68 = plVar5[0x13];
      local_60 = (long *)plVar5[0x14];
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x18))();
      }
      (**(code **)(*plVar15 + 0x70))(plVar15,&local_78,1);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      uVar13 = 1;
    }
  }
  return uVar13;
}


