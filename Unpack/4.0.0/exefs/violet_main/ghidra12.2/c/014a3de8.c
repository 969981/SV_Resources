/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014a3de8; name: FUN_014a3de8
 */


void FUN_014a3de8(long param_1,uint param_2,ulong param_3)

{
  long *plVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  
  puVar5 = PTR_DAT_047d8b70;
  puVar4 = PTR_PTR_047d4508;
  if (5 < param_2) {
    return;
  }
  puVar12 = (undefined1 *)(param_1 + 0x68b0);
  switch(param_2) {
  case 0:
    if ((param_3 & 1) != 0) {
      return;
    }
    puVar12 = (undefined1 *)(param_1 + 0x68bc);
    lVar7 = 0x1e;
    puVar13 = (undefined8 *)(param_1 + 0x6920);
    goto LAB_014a3fa4;
  case 1:
    if ((param_3 & 1) == 0) {
      lVar7 = 0;
      do {
        uVar11 = (ulong)*(byte *)(param_1 + 0x68da + lVar7);
        local_c0 = 0xad82c50d4eb10ab6;
        pcStack_b8 = "N_poke_chach_00";
        local_b0 = 0xf;
        uStack_a8 = 0;
        FUN_014a41b8(param_1,uVar11,&local_c0);
        plVar8 = *(long **)(param_1 + 0x6cd0);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x58))(plVar8);
        }
        plVar9 = *(long **)(param_1 + uVar11 * 0x98 + 0x30);
        plVar1 = (long *)puVar4;
        plVar10 = (long *)PTR_DAT_047d8b70;
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 7;
          plVar10 = plVar9 + 6;
        }
        local_80 = *plVar10;
        lStack_78 = *plVar1;
        if (plVar9 == (long *)0x0) {
          local_70 = 0;
        }
        else {
          local_70 = plVar9[8];
          local_68 = (long *)0x0;
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        local_68 = plVar9;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x58))(plVar8);
          lVar6 = FUN_00c8c7b4(plVar8[0x2e],&local_80);
          (**(code **)(*plVar8 + 0x60))(plVar8);
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
          }
        }
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x60))(plVar8);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x1e);
    }
    break;
  case 3:
    if ((param_3 & 1) != 0) {
      return;
    }
    lVar7 = 0x6b00;
    goto LAB_014a3f84;
  case 4:
    if ((param_3 & 1) == 0) {
      lVar7 = 0;
      do {
        bVar3 = *(byte *)(param_1 + 0x68b6 + lVar7);
        plVar8 = *(long **)(param_1 + 0x6cd0);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x58))(plVar8);
        }
        plVar9 = *(long **)(param_1 + (ulong)bVar3 * 0x98 + 0x30);
        plVar1 = (long *)puVar4;
        plVar10 = (long *)puVar5;
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 7;
          plVar10 = plVar9 + 6;
        }
        local_80 = *plVar10;
        lStack_78 = *plVar1;
        if (plVar9 == (long *)0x0) {
          local_70 = 0;
        }
        else {
          local_70 = plVar9[8];
          local_68 = (long *)0x0;
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        local_68 = plVar9;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x58))(plVar8);
          lVar6 = FUN_00c8c7b4(plVar8[0x2e],&local_80);
          (**(code **)(*plVar8 + 0x60))(plVar8);
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
          }
        }
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x60))(plVar8);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 6);
    }
    break;
  case 5:
    if ((param_3 & 1) != 0) {
      return;
    }
    puVar12 = (undefined1 *)(param_1 + 0x68f8);
    lVar7 = 0x6b30;
LAB_014a3f84:
    puVar13 = (undefined8 *)(param_1 + lVar7);
    lVar7 = 6;
LAB_014a3fa4:
    do {
      plVar10 = (long *)*puVar13;
      plVar8 = (long *)puVar4;
      plVar1 = (long *)puVar5;
      if (plVar10 != (long *)0x0) {
        plVar8 = plVar10 + 7;
        plVar1 = plVar10 + 6;
      }
      uVar2 = *puVar12;
      local_a0 = *plVar1;
      lStack_98 = *plVar8;
      if (plVar10 == (long *)0x0) {
        local_90 = 0;
        local_88 = (long *)0x0;
        FUN_014a41b8(param_1,uVar2,&local_a0);
      }
      else {
        local_90 = plVar10[8];
        (**(code **)(*plVar10 + 0x18))(plVar10);
        local_88 = plVar10;
        FUN_014a41b8(param_1,uVar2,&local_a0);
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      puVar13 = puVar13 + 1;
      lVar7 = lVar7 + -1;
      puVar12 = puVar12 + 1;
    } while (lVar7 != 0);
  }
  return;
}


