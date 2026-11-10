/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0107b5d8; name: FUN_0107b5d8
 */


long FUN_0107b5d8(undefined8 *param_1,short param_2,char param_3,uint param_4,long param_5)

{
  ushort uVar1;
  ulong uVar2;
  undefined2 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  long lStack_58;
  
  lVar4 = FUN_0107ba54(*(undefined8 *)(param_5 + 8),*(undefined2 *)(param_5 + 0x14));
  if ((*(char *)(param_5 + 0x3f) != '\0') && (*(char *)(param_5 + 0x40) == '\0')) {
    return lVar4;
  }
  if (*(char *)(param_5 + 0x42) != '\0') {
    return lVar4;
  }
  if ((param_3 != '\b') && (*(char *)(param_5 + 0x28) != param_3)) {
    return lVar4;
  }
  uVar1 = *(ushort *)(param_5 + 0x3c);
  if ((uVar1 != 0) &&
     (*(uint *)(param_1 + 0x10) < (uint)uVar1 || *(uint *)(param_1 + 0x10) == (uint)uVar1)) {
    return lVar4;
  }
  if (*(char *)(param_5 + 0x44) == '\0') {
    return lVar4;
  }
  if ((param_2 == 0x95) && (uVar8 = FUN_0107c230(param_5), (uVar8 & 1) == 0)) {
    return lVar4;
  }
  uVar8 = (ulong)*(byte *)(param_5 + 0x3e);
  if (uVar8 == 0) {
    return lVar4;
  }
  puVar13 = (undefined8 *)(*(long *)(param_5 + 0x20) + 8);
  while (*(short *)(puVar13 + -1) != param_2) {
    puVar13 = puVar13 + 2;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) {
      return lVar4;
    }
  }
  if ((param_4 & 1) != 0) {
    if (*(int *)(param_5 + 0x38) == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)FUN_01021c94(*(undefined8 *)(param_1[1] + 0x30));
      if ((*(char *)(param_5 + 0x28) == '\x04') && (plVar5 != (long *)0x0)) {
        uVar8 = (**(code **)(*plVar5 + 0x220))(plVar5,0x10);
        if ((uVar8 & 1) != 0) {
          return lVar4;
        }
        uVar8 = (**(code **)(*plVar5 + 0x438))(plVar5);
        if ((uVar8 & 1) != 0) {
          return lVar4;
        }
        uVar8 = (**(code **)(*plVar5 + 0x5b0))(plVar5);
        if ((uVar8 & 1) != 0) {
          FUN_0107bb74(param_5);
          uVar8 = thunk_FUN_021faa24();
          if ((uVar8 & 1) != 0) {
            return lVar4;
          }
        }
      }
    }
    if ((param_2 != 0xd7) && (*(char *)(param_5 + 0x28) == '\x05')) {
      uVar6 = FUN_0158253c(param_1[1]);
      uVar8 = FUN_01582544(uVar6,5);
      if ((uVar8 & 1) != 0) {
        return lVar4;
      }
      if (plVar5 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar5 + 0x220))(plVar5,0x13);
        if ((uVar8 & 1) != 0) {
          return lVar4;
        }
        uVar8 = (**(code **)(*plVar5 + 0x510))(plVar5,9);
        if ((uVar8 & 1) != 0) {
          return lVar4;
        }
      }
    }
    lVar12 = *(long *)(param_1[1] + 0xd0);
    uVar1 = *(ushort *)(lVar12 + 0x70);
    uVar8 = (ulong)uVar1;
    if ((uVar8 != 0xee) && (uVar9 = *(ulong *)(lVar12 + 0x10), uVar9 != 0)) {
      uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = (int)uVar9 - 1 & uVar8;
      }
      else {
        uVar11 = uVar8;
        if (uVar9 <= uVar8) {
          uVar11 = 0;
          if (uVar9 != 0) {
            uVar11 = uVar8 / uVar9;
          }
          uVar11 = uVar8 - uVar11 * uVar9;
        }
      }
      plVar5 = *(long **)(*(long *)(lVar12 + 8) + uVar11 * 8);
      if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar5[1] == uVar8) {
              if (*(ushort *)(plVar5 + 2) == uVar1) goto LAB_0107b7b0;
            }
            else if ((plVar5[1] & uVar9 - 1) != uVar11) break;
            plVar5 = (long *)*plVar5;
          } while (plVar5 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar5[1];
            if (uVar10 == uVar8) {
              if (*(ushort *)(plVar5 + 2) == uVar1) goto LAB_0107b7b0;
            }
            else {
              if (uVar9 <= uVar10) {
                uVar2 = 0;
                if (uVar9 != 0) {
                  uVar2 = uVar10 / uVar9;
                }
                uVar10 = uVar10 - uVar2 * uVar9;
              }
              if (uVar10 != uVar11) break;
            }
            plVar5 = (long *)*plVar5;
          } while (plVar5 != (long *)0x0);
        }
      }
    }
  }
LAB_0107b7d0:
  *(undefined1 *)(param_5 + 0x3f) = 1;
  local_a0 = *param_1;
  uStack_98 = param_1[1];
  local_90 = (long *)param_1[2];
  local_88 = param_1[3];
  local_80 = param_1[4];
  uStack_78 = param_1[5];
  local_70 = param_1[6];
  local_60 = param_1[0xf];
  puStack_68 = param_1;
  lStack_58 = param_5;
  (*(code *)*puVar13)(&local_a0,*(undefined4 *)(param_5 + 0x34));
  if (*(char *)(param_5 + 0x40) == '\0') {
    *(undefined1 *)(param_5 + 0x3f) = 0;
  }
  else {
    FUN_0107c238(param_5);
  }
  if (*(char *)(param_5 + 0x41) != '\0') {
    while ((lVar4 != 0 && (*(char *)(lVar4 + 0x44) == '\0'))) {
      lVar4 = FUN_0107ba54(*(undefined8 *)(param_5 + 8),*(undefined2 *)(param_5 + 0x14));
    }
    if (*(char *)(param_5 + 0x44) != '\0') {
      if (*(char *)(param_5 + 0x3f) == '\0') {
        FUN_014608e0(*(undefined8 *)(param_1[1] + 0xd0),param_5);
      }
      else {
        FUN_01460cdc(param_5,1);
      }
    }
  }
  return lVar4;
LAB_0107b7b0:
  plVar5 = plVar5 + 3;
  do {
    lVar12 = plVar5[3];
    if ((((short)lVar12 != 0) && (*(char *)((long)plVar5 + 0x42) == '\0')) &&
       ((((char)plVar5[5] != '\x04' ||
         (plVar7 = (long *)FUN_01079790(*(undefined8 *)(param_1[1] + 0x30),(int)plVar5[7]),
         plVar7 == (long *)0x0)) ||
        ((uVar8 = (**(code **)(*plVar7 + 0x220))(plVar7,0x10), (uVar8 & 1) == 0 &&
         (uVar8 = (**(code **)(*plVar7 + 0x438))(plVar7), (uVar8 & 1) == 0)))))) {
      local_a0 = *param_1;
      uStack_98 = param_1[1];
      local_88._0_3_ = CONCAT12(*(undefined1 *)(param_5 + 0x28),param_2);
      local_90 = plVar5;
      uVar3 = FUN_0107bb74(param_5);
      local_88._0_6_ = CONCAT24(uVar3,(undefined4)local_88);
      local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(param_5 + 0x34));
      uVar8 = FUN_01080294((short)lVar12,&local_a0);
      if ((uVar8 & 1) != 0) {
        return lVar4;
      }
    }
    plVar5 = (long *)FUN_0107ba54(plVar5[1],*(undefined2 *)((long)plVar5 + 0x14));
  } while (plVar5 != (long *)0x0);
  goto LAB_0107b7d0;
}


