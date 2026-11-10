/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0348b9d0; name: FUN_0348b9d0
 */


void FUN_0348b9d0(undefined8 param_1,long param_2,undefined4 param_3,void *param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ulong *puVar4;
  long *plVar5;
  ulong *puVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  ulong local_c0;
  uint local_b8;
  int local_b0 [2];
  char local_a8;
  char local_a0;
  long local_98;
  ulong local_90;
  uint local_88;
  undefined4 local_80 [2];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 local_54;
  
  local_58 = param_3;
  local_54 = (int)param_1;
  local_90 = CONCAT44(local_90._4_4_,DAT_048afe88);
  puVar6 = *(ulong **)(param_2 + 0x20);
  if (puVar6 != (ulong *)0x0) {
    bVar3 = (byte)*puVar6;
    uVar7 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar7 = 1;
    }
    uVar11 = (ulong)uVar7;
    puVar4 = (ulong *)((long)puVar6 + ((ulong)(bVar3 + 4) & 0x1fc));
    puVar9 = puVar6;
    do {
      puVar6 = puVar4;
      puVar9 = (ulong *)((long)puVar9 + 1);
      if (*(byte *)puVar9 == 0) goto LAB_0348ba54;
      uVar11 = uVar11 - 1;
      puVar4 = (ulong *)((long)puVar6 + 4);
    } while (uVar11 != 0);
    puVar6 = (ulong *)0x0;
  }
LAB_0348ba54:
  puVar9 = &local_90;
  if (puVar6 != (ulong *)0x0) {
    puVar9 = puVar6;
  }
  iVar10 = (int)*puVar9;
  memcpy(&local_c0,param_4,0x30);
  if (0 < iVar10) {
    local_98 = 0;
    if (*(char *)((long)param_4 + 0x20) != -1) {
      local_b8 = 0;
    }
    if (1 < iVar10) {
      local_a8 = -1;
      local_a0 = -1;
      local_b0[0] = 0;
      local_b8 = 0;
      if (iVar10 != 2) {
        local_c0 = 0;
      }
    }
  }
  uVar7 = local_b8;
  local_78 = 0xff;
  local_70 = 0xff;
  local_90 = 0;
  local_88 = 0;
  local_80[0] = 0;
  local_68 = 0;
  if (local_c0 != 0) {
    uVar7 = *(uint *)(param_2 + 0x58);
    if (uVar7 == 0) {
      return;
    }
    lVar12 = *(long *)(param_2 + 0x50);
    iVar10 = 0;
    do {
      iVar1 = iVar10 + (uVar7 >> 1);
      lVar13 = (long)iVar1;
      uVar11 = *(ulong *)(lVar12 + (long)iVar1 * 0x30 + 0x28);
      if (uVar11 == local_c0) {
        local_90 = local_c0;
        if (*(char *)(lVar12 + lVar13 * 0x30 + 0x10) != '\0') {
          plVar5 = *(long **)(lVar12 + lVar13 * 0x30 + 8);
          (**(code **)(*plVar5 + 0x10))(param_1,plVar5,param_3);
        }
        if (local_b8 == 0) {
          lVar12 = lVar12 + lVar13 * 0x30;
          puVar14 = (uint *)(lVar12 + 0x20);
          if (*puVar14 == 0) {
            return;
          }
          plVar5 = (long *)(lVar12 + 0x18);
          lVar12 = *plVar5;
          do {
            local_88 = *(undefined4 *)(lVar12 + 0x28);
            FUN_0349193c(lVar12,local_b0,&local_90,local_80,&local_58);
            lVar12 = lVar12 + 0x30;
          } while (lVar12 != *plVar5 + (ulong)*puVar14 * 0x30);
          return;
        }
        uVar7 = *(uint *)(lVar12 + lVar13 * 0x30 + 0x20);
        if (uVar7 == 0) {
          return;
        }
        lVar12 = *(long *)(lVar12 + lVar13 * 0x30 + 0x18);
        iVar10 = 0;
        do {
          iVar1 = iVar10 + (uVar7 >> 1);
          uVar8 = *(uint *)(lVar12 + (long)iVar1 * 0x30 + 0x28);
          if (uVar8 == local_b8) {
            local_88 = local_b8;
            FUN_0349193c(lVar12 + (long)iVar1 * 0x30,local_b0,&local_90,local_80,&local_58);
            return;
          }
          if (uVar8 < local_b8) {
            iVar10 = iVar1 + 1;
          }
          uVar7 = uVar7 - (uVar8 < local_b8) >> 1;
        } while (uVar7 != 0);
        return;
      }
      if (uVar11 < local_c0) {
        iVar10 = iVar1 + 1;
      }
      uVar7 = uVar7 - (uVar11 < local_c0) >> 1;
    } while (uVar7 != 0);
    return;
  }
  if ((((local_b8 == 0) && (local_b0[0] == 0)) && (local_a8 == -1)) &&
     (((local_a0 == -1 && (local_98 == 0)) && (*(char *)(param_2 + 0x48) != '\0')))) {
    (**(code **)(**(long **)(param_2 + 0x40) + 0x10))(param_1,*(long **)(param_2 + 0x40),param_3);
  }
  if (*(int *)(param_2 + 0x58) == 0) {
    return;
  }
  lVar12 = *(long *)(param_2 + 0x50);
  do {
    local_90 = *(ulong *)(lVar12 + 0x28);
    if (*(char *)(lVar12 + 0x10) != '\0') {
      (**(code **)(**(long **)(lVar12 + 8) + 0x10))(param_1,*(long **)(lVar12 + 8),param_3);
    }
    if (uVar7 == 0) {
      if (*(int *)(lVar12 + 0x20) != 0) {
        lVar13 = *(long *)(lVar12 + 0x18);
        do {
          local_88 = *(uint *)(lVar13 + 0x28);
          FUN_0349193c(lVar13,local_b0,&local_90,local_80,&local_58);
          lVar13 = lVar13 + 0x30;
        } while (lVar13 != *(long *)(lVar12 + 0x18) + (ulong)*(uint *)(lVar12 + 0x20) * 0x30);
      }
    }
    else {
      uVar8 = *(uint *)(lVar12 + 0x20);
      if (uVar8 != 0) {
        iVar10 = 0;
        do {
          iVar1 = iVar10 + (uVar8 >> 1);
          uVar2 = *(uint *)(*(long *)(lVar12 + 0x18) + (long)iVar1 * 0x30 + 0x28);
          if (uVar2 == uVar7) {
            local_88 = uVar7;
            FUN_0349193c(*(long *)(lVar12 + 0x18) + (long)iVar1 * 0x30,local_b0,&local_90,local_80,
                         &local_58);
            break;
          }
          if (uVar2 < uVar7) {
            iVar10 = iVar1 + 1;
          }
          uVar8 = uVar8 - (uVar2 < uVar7) >> 1;
        } while (uVar8 != 0);
      }
    }
    lVar12 = lVar12 + 0x30;
    if (lVar12 == *(long *)(param_2 + 0x50) + (ulong)*(uint *)(param_2 + 0x58) * 0x30) {
      return;
    }
  } while( true );
}


