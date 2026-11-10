/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015568c4; name: FUN_015568c4
 */


void FUN_015568c4(long *param_1,undefined8 param_2)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  ushort *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 local_bc;
  int *local_b8;
  int *local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  char *local_80;
  char *local_78;
  undefined8 local_70;
  long *local_68;
  
  lVar6 = *param_1;
  if (((*(long *)(lVar6 + 0x120) == 0) || ((*(byte *)(*(long *)(lVar6 + 0x120) + 0x1e8) & 1) != 0))
     && ((*(long *)(lVar6 + 0xe0) == 0 || ((*(byte *)(*(long *)(lVar6 + 0xe0) + 0x1e8) & 1) != 0))))
  {
    local_a0 = *(undefined8 *)(lVar6 + 0xc0);
    local_98 = *(undefined8 *)(lVar6 + 200);
    uStack_90 = *(undefined8 *)(lVar6 + 0xd0);
  }
  else {
    local_98 = 0;
    uStack_90 = 0;
    local_a0 = 0;
  }
  local_80 = &DAT_fbec41851566601b;
  local_78 = "values";
  local_70 = 6;
  local_68 = (long *)0x0;
  piVar4 = (int *)FUN_00efa07c(&local_a0,&local_80);
  if (piVar4 == (int *)0x0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *piVar4;
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (iVar14 != 0) {
    iVar11 = 0;
    do {
      local_68 = (long *)0x0;
      local_80 = &DAT_fbec41851566601b;
      local_78 = "values";
      local_70 = 6;
      FUN_00e90ee0(&local_b8,&local_a0,&local_80,iVar11);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_68 = (long *)0x0;
      local_80 = (char *)0x7ef45b5852ab1156;
      local_78 = "State";
      local_70 = 5;
      piVar4 = (int *)FUN_00d27b5c(&local_b8,&local_80);
      if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
         (uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar7 == 0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)((long)piVar4 + uVar7);
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_bc = uVar12;
      if (((local_b0 == (int *)0x0) || (*(ushort *)((long)local_b0 - (long)*local_b0) < 7)) ||
         (uVar7 = (ulong)((ushort *)((long)local_b0 - (long)*local_b0))[3], uVar7 == 0)) {
LAB_01556c60:
        uVar12 = 0;
      }
      else {
        puVar5 = (uint *)((long)local_b0 + uVar7);
        puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
        local_80 = "Priority";
        puVar5 = bsearch(&local_80,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar5 == (uint *)0x0) || (local_b8 == (int *)0x0)) goto LAB_01556c60;
        piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
        puVar8 = (ushort *)((long)piVar4 - (long)*piVar4);
        uVar1 = *puVar8;
        if (uVar1 < 7) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)0x0;
          if ((ulong)puVar8[3] != 0) {
            puVar5 = (uint *)((long)piVar4 + (ulong)puVar8[3]);
            piVar10 = (int *)((long)puVar5 + (ulong)*puVar5);
          }
        }
        if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
           (uVar7 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar7 == 0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = (long)*(char *)((long)piVar10 + uVar7) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar7 * 8) == 4) {
          if (uVar1 < 0xb) {
            uVar9 = 0;
LAB_01556ccc:
            uVar12 = 0;
          }
          else {
            uVar9 = 0;
            if ((ulong)puVar8[5] != 0) {
              uVar9 = (uint)*(ushort *)((long)piVar4 + (ulong)puVar8[5]);
            }
            if ((uVar1 < 0xd) || ((ulong)puVar8[6] == 0)) goto LAB_01556ccc;
            uVar12 = *(undefined4 *)((long)piVar4 + (ulong)puVar8[6]);
          }
          if ((uVar9 < *(ushort *)((long)local_b8 - (long)*local_b8)) &&
             (uVar7 = (ulong)*(ushort *)(((long)local_b8 - (long)*local_b8) + (ulong)uVar9),
             uVar7 != 0)) {
            uVar12 = *(undefined4 *)((long)local_b8 + uVar7);
          }
        }
        else {
          if ((uVar1 < 0xd) || ((ulong)puVar8[6] == 0)) goto LAB_01556c60;
          uVar12 = *(undefined4 *)((long)piVar4 + (ulong)puVar8[6]);
        }
      }
      local_68 = (long *)0x0;
      local_80 = (char *)0xcf2be88c37290bdd;
      local_78 = "FacialLabel";
      local_70 = 0xb;
      piVar4 = (int *)FUN_00d27b5c(&local_b8,&local_80);
      if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
         (uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar7 == 0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined4 *)((long)piVar4 + uVar7);
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_68 = (long *)0x0;
      local_80 = (char *)0xc4797013e7942f48;
      local_78 = "EnableLookAt";
      local_70 = 0xc;
      bVar2 = FUN_00cf7518(&local_b8,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_68 = (long *)0x0;
      local_80 = (char *)0x9cf04490476be433;
      local_78 = "EnableEyeBlink";
      local_70 = 0xe;
      bVar3 = FUN_00cf7518(&local_b8,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_80 = (char *)&local_bc;
      lVar6 = FUN_01556d30(param_2,&local_bc,&DAT_03d5ef88,&local_80,auStack_88);
      iVar11 = iVar11 + 1;
      *(undefined4 *)(lVar6 + 0x20) = uVar12;
      *(undefined4 *)(lVar6 + 0x24) = uVar13;
      *(byte *)(lVar6 + 0x28) = bVar2 & 1;
      *(byte *)(lVar6 + 0x29) = bVar3 & 1;
    } while (iVar14 != iVar11);
  }
  return;
}


