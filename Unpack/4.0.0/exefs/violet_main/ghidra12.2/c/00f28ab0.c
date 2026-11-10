/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f28ab0; name: FUN_00f28ab0
 */


void FUN_00f28ab0(undefined8 *param_1,long param_2,long param_3,undefined4 param_4,uint param_5,
                 undefined8 param_6,undefined4 param_7)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  uint *puVar6;
  undefined4 uVar7;
  int *piVar8;
  ushort *puVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *local_98;
  int *local_90;
  undefined8 local_88;
  long *local_80;
  undefined4 local_74;
  int *local_70;
  int *piStack_68;
  undefined8 local_60;
  char *local_58;
  
  if (param_3 == 0) goto LAB_00f28e90;
  lVar3 = FUN_01289558(*(long *)(param_2 + 0x1648) + 0x108,&local_98);
  if ((~param_5 & 0xff) != 0) {
    if (lVar3 == 0) {
LAB_00f28e90:
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      return;
    }
    if (*(char *)(lVar3 + 0x11a) == '\0') {
      local_90 = (int *)0x0;
      local_88 = 0;
      local_98 = (int *)0x0;
    }
    else {
      local_98 = *(int **)(lVar3 + 0x120);
      local_90 = *(int **)(lVar3 + 0x128);
      local_88 = *(undefined8 *)(lVar3 + 0x130);
    }
    local_70 = local_98;
    piStack_68 = local_90;
    local_60 = local_88;
    if (*(long *)(param_2 + 0x7e0) == 0) goto LAB_00f28e90;
    local_58 = (char *)((ulong)local_58 & 0xffffffff00000000);
    local_74 = 0;
    FUN_013457e4(&local_98,*(long *)(param_2 + 0x7e0),param_4,&local_70,param_6,&local_58,&local_74)
    ;
    local_98 = (int *)0x2b43ccf36e7f8220;
    local_90 = (int *)0x3c2ec10;
    local_88 = 0x1d;
    local_80 = (long *)0x0;
    if (((*PTR_DAT_047d4928 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4928), iVar2 != 0)) {
      FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4928);
    }
    lVar3 = *(long *)PTR_DAT_047d4930;
    *(long *)PTR_DAT_047d4938 = lVar3;
    uVar4 = FUN_00fb1cf4(&local_98,lVar3 + 0x198);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if ((uVar4 & 1) != 0) {
      local_74 = 7;
    }
    FUN_01fa8504(param_1,param_2,param_5,param_6,(ulong)local_58 & 0xffffffff,local_74);
    piVar8 = (int *)param_1[1];
    if (piVar8 == (int *)0x0) goto LAB_00f28e90;
    if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
       (uVar4 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar4 == 0)) {
      puVar6 = (uint *)0x0;
    }
    else {
      puVar6 = (uint *)((long)piVar8 + uVar4);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    }
    local_98 = (int *)&DAT_03c2bfb0;
    pvVar5 = bsearch(&local_98,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (pvVar5 == (void *)0x0) goto LAB_00f28e90;
    piVar8 = (int *)param_1[1];
    if (((piVar8 == (int *)0x0) || (*(ushort *)((long)piVar8 - (long)*piVar8) < 7)) ||
       (uVar4 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar4 == 0)) {
LAB_00f28fec:
      *(undefined4 *)(param_3 + 0x40) = 0;
      return;
    }
    puVar6 = (uint *)((long)piVar8 + uVar4);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    local_98 = (int *)0x3c63f10;
    puVar6 = bsearch(&local_98,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar6 == (uint *)0x0) || (piVar8 = (int *)*param_1, piVar8 == (int *)0x0))
    goto LAB_00f28fec;
    piVar12 = (int *)((long)puVar6 + (ulong)*puVar6);
    puVar9 = (ushort *)((long)piVar12 - (long)*piVar12);
    uVar1 = *puVar9;
    if (uVar1 < 7) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = (int *)0x0;
      if ((ulong)puVar9[3] != 0) {
        puVar6 = (uint *)((long)piVar12 + (ulong)puVar9[3]);
        piVar11 = (int *)((long)puVar6 + (ulong)*puVar6);
      }
    }
    if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
       (uVar4 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar4 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (long)*(char *)((long)piVar11 + uVar4) & 0xffffffff;
    }
    if (*(long *)(PTR_DAT_047d5608 + uVar4 * 8) != 4) {
      if ((uVar1 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_00f28fec;
      iVar2 = *(int *)((long)piVar12 + (ulong)puVar9[6]);
      goto LAB_00f28ef4;
    }
    if (uVar1 < 0xb) {
      uVar10 = 0;
LAB_00f28ed0:
      iVar2 = 0;
    }
    else {
      uVar10 = 0;
      if ((ulong)puVar9[5] != 0) {
        uVar10 = (uint)*(ushort *)((long)piVar12 + (ulong)puVar9[5]);
      }
      if ((uVar1 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_00f28ed0;
      iVar2 = *(int *)((long)piVar12 + (ulong)puVar9[6]);
    }
    if ((uVar10 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
       (uVar4 = (ulong)*(ushort *)(((long)piVar8 - (long)*piVar8) + (ulong)uVar10), uVar4 != 0)) {
      iVar2 = *(int *)((long)piVar8 + uVar4);
    }
LAB_00f28ef4:
    *(int *)(param_3 + 0x40) = iVar2;
    if (iVar2 < 6) {
      return;
    }
    *(undefined1 *)(param_3 + 0x50) = 1;
    return;
  }
  if (lVar3 == 0) goto LAB_00f28e90;
  if (*(char *)(lVar3 + 0x11a) == '\0') {
    local_90 = (int *)0x0;
    local_88 = 0;
    local_98 = (int *)0x0;
  }
  else {
    local_98 = *(int **)(lVar3 + 0x120);
    local_90 = *(int **)(lVar3 + 0x128);
    local_88 = *(undefined8 *)(lVar3 + 0x130);
  }
  local_70 = local_98;
  piStack_68 = local_90;
  local_60 = local_88;
  if (*(long *)(param_2 + 0x7e0) == 0) goto LAB_00f28e90;
  FUN_013457e4(&local_98,*(long *)(param_2 + 0x7e0),param_4,&local_70,param_6,0,0);
  if (((local_90 != (int *)0x0) && (6 < *(ushort *)((long)local_90 - (long)*local_90))) &&
     (uVar4 = (ulong)((ushort *)((long)local_90 - (long)*local_90))[3], uVar4 != 0)) {
    puVar6 = (uint *)((long)local_90 + uVar4);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    local_58 = "difficulty";
    puVar6 = bsearch(&local_58,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar6 != (uint *)0x0) && (local_98 != (int *)0x0)) {
      piVar8 = (int *)((long)puVar6 + (ulong)*puVar6);
      puVar9 = (ushort *)((long)piVar8 - (long)*piVar8);
      uVar1 = *puVar9;
      if (uVar1 < 7) {
        piVar12 = (int *)0x0;
      }
      else {
        piVar12 = (int *)0x0;
        if ((ulong)puVar9[3] != 0) {
          puVar6 = (uint *)((long)piVar8 + (ulong)puVar9[3]);
          piVar12 = (int *)((long)puVar6 + (ulong)*puVar6);
        }
      }
      if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
         (uVar4 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar4 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = (long)*(char *)((long)piVar12 + uVar4) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar4 * 8) == 4) {
        if (uVar1 < 0xb) {
          uVar10 = 0;
LAB_00f28f20:
          uVar7 = 0;
        }
        else {
          uVar10 = 0;
          if ((ulong)puVar9[5] != 0) {
            uVar10 = (uint)*(ushort *)((long)piVar8 + (ulong)puVar9[5]);
          }
          if ((uVar1 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_00f28f20;
          uVar7 = *(undefined4 *)((long)piVar8 + (ulong)puVar9[6]);
        }
        if ((uVar10 < *(ushort *)((long)local_98 - (long)*local_98)) &&
           (uVar4 = (ulong)*(ushort *)(((long)local_98 - (long)*local_98) + (ulong)uVar10),
           uVar4 != 0)) {
          uVar7 = *(undefined4 *)((long)local_98 + uVar4);
        }
        goto LAB_00f28f44;
      }
      if ((0xc < uVar1) && ((ulong)puVar9[6] != 0)) {
        uVar7 = *(undefined4 *)((long)piVar8 + (ulong)puVar9[6]);
        goto LAB_00f28f44;
      }
    }
  }
  uVar7 = 0;
LAB_00f28f44:
  *(undefined4 *)(param_3 + 0x40) = uVar7;
  FUN_00f291dc(param_1,param_2,uVar7,param_6,param_7);
  return;
}


