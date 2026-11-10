/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019215e0; name: FUN_019215e0
 */


void FUN_019215e0(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined *__compar;
  undefined *puVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  ushort uVar8;
  ulong uVar9;
  ushort *puVar10;
  uint uVar11;
  int *piVar12;
  ulong uVar13;
  ushort *puVar14;
  char *local_1c8;
  char *pcStack_1c0;
  undefined8 local_1b8;
  long *local_1b0 [8];
  undefined1 auStack_170 [64];
  int *local_130;
  int *local_128;
  undefined8 local_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [88];
  
  while( true ) {
    bVar5 = 0;
    if (*(long *)(param_1 + 0x1aa0) != 0) {
      if ((*(byte *)(*(long *)(param_1 + 0x1aa0) + 0x1e8) & 1) == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = 0;
        if (*(long *)(param_1 + 0x1ae0) != 0) {
          bVar5 = *(byte *)(*(long *)(param_1 + 0x1ae0) + 0x1e8) & 1;
        }
      }
    }
    if ((((*(long *)(param_1 + 0x1b38) != 0) &&
         ((*(byte *)(*(long *)(param_1 + 0x1b38) + 0x1e8) & 1) != 0)) &&
        (*(long *)(param_1 + 0x1b78) != 0)) &&
       ((*(byte *)(*(long *)(param_1 + 0x1b78) + 0x1e8) & bVar5) != 0)) break;
    nn::os::SleepThread(1000000);
  }
  FUN_00fb9e50(auStack_100,param_1 + 0x1a98,param_1 + 0x1ad8);
  FUN_00fb4dd0(auStack_118,auStack_100);
  lVar7 = -0x1a70;
  do {
    lVar1 = param_1 + lVar7;
    lVar7 = lVar7 + 0x30;
    *(undefined2 *)(lVar1 + 0x1aa8) = 0;
    *(undefined4 *)(lVar1 + 0x1a98) = 0xffffffff;
    *(undefined2 *)(lVar1 + 0x1ac0) = 0;
    *(undefined4 *)(lVar1 + 0x1ab0) = 0xffffffff;
    puVar3 = PTR_DAT_047d5608;
    __compar = PTR_LAB_047d5600;
  } while (lVar7 != 0);
  uVar13 = 0;
  puVar14 = (ushort *)(param_1 + 0x38);
  do {
    local_1c8 = &DAT_fbec41851566601b;
    pcStack_1c0 = "values";
    local_1b8 = 6;
    local_1b0[0] = (long *)0x0;
    puVar4 = (uint *)FUN_00efa07c(auStack_118,&local_1c8);
    if (puVar4 == (uint *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *puVar4;
    }
    if (local_1b0[0] != (long *)0x0) {
      (**(code **)(*local_1b0[0] + 0x20))();
    }
    if (uVar6 <= uVar13) {
      FUN_00fb9e50(&local_1c8,param_1 + 0x1b30,param_1 + 0x1b70);
      FUN_00fb4dd0(&local_130,&local_1c8);
      *(undefined8 *)(param_1 + 0x1b28) = local_120;
      *(int **)(param_1 + 0x1b20) = local_128;
      *(int **)(param_1 + 0x1b18) = local_130;
      FUN_00db239c(auStack_170);
      FUN_00db239c(local_1b0);
      FUN_00db239c(auStack_a8);
      FUN_00db239c(auStack_e8);
      return;
    }
    local_1c8 = &DAT_fbec41851566601b;
    pcStack_1c0 = "values";
    local_1b8 = 6;
    local_1b0[0] = (long *)0x0;
    FUN_00e90ee0(&local_130,auStack_118,&local_1c8,uVar13 & 0xffffffff);
    if (local_1b0[0] != (long *)0x0) {
      (**(code **)(*local_1b0[0] + 0x20))();
    }
    if (((local_128 == (int *)0x0) || (*(ushort *)((long)local_128 - (long)*local_128) < 7)) ||
       (uVar9 = (ulong)((ushort *)((long)local_128 - (long)*local_128))[3], uVar9 == 0)) {
LAB_019219a4:
      uVar6 = 0;
    }
    else {
      puVar4 = (uint *)((long)local_128 + uVar9);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      local_1c8 = "index";
      puVar4 = bsearch(&local_1c8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
      if ((puVar4 == (uint *)0x0) || (local_130 == (int *)0x0)) goto LAB_019219a4;
      piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar10 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar8 = *puVar10;
      if (uVar8 < 7) {
        piVar12 = (int *)0x0;
      }
      else {
        piVar12 = (int *)0x0;
        if ((ulong)puVar10[3] != 0) {
          puVar4 = (uint *)((long)piVar2 + (ulong)puVar10[3]);
          piVar12 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar9 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = (long)*(char *)((long)piVar12 + uVar9) & 0xffffffff;
      }
      if (*(long *)(puVar3 + uVar9 * 8) == 4) {
        if (uVar8 < 0xb) {
          uVar11 = 0;
LAB_019219e8:
          uVar6 = 0;
        }
        else {
          uVar11 = 0;
          if ((ulong)puVar10[5] != 0) {
            uVar11 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar10[5]);
          }
          if ((uVar8 < 0xd) || ((ulong)puVar10[6] == 0)) goto LAB_019219e8;
          uVar6 = *(uint *)((long)piVar2 + (ulong)puVar10[6]);
        }
        if ((uVar11 < *(ushort *)((long)local_130 - (long)*local_130)) &&
           (uVar9 = (ulong)*(ushort *)(((long)local_130 - (long)*local_130) + (ulong)uVar11),
           uVar9 != 0)) {
          uVar6 = *(uint *)((long)local_130 + uVar9);
        }
      }
      else {
        if ((uVar8 < 0xd) || ((ulong)puVar10[6] == 0)) goto LAB_019219a4;
        uVar6 = *(uint *)((long)piVar2 + (ulong)puVar10[6]);
      }
    }
    if ((uVar13 < 0x11a) && (uVar6 < 0x11a)) {
      *(undefined8 *)(puVar14 + -4) = (&DAT_03d61260)[uVar6];
      if ((local_128 == (int *)0x0) || (*(ushort *)((long)local_128 - (long)*local_128) < 7))
      goto LAB_019219ac;
      uVar8 = ((ushort *)((long)local_128 - (long)*local_128))[3];
      if ((ulong)uVar8 != 0) {
        puVar4 = (uint *)((long)local_128 + (ulong)uVar8);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        local_1c8 = "itemID";
        puVar4 = bsearch(&local_1c8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
        if ((puVar4 != (uint *)0x0) && (local_130 != (int *)0x0)) {
          piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
          puVar10 = (ushort *)((long)piVar2 - (long)*piVar2);
          uVar8 = *puVar10;
          if (uVar8 < 7) {
            piVar12 = (int *)0x0;
          }
          else {
            piVar12 = (int *)0x0;
            if ((ulong)puVar10[3] != 0) {
              puVar4 = (uint *)((long)piVar2 + (ulong)puVar10[3]);
              piVar12 = (int *)((long)puVar4 + (ulong)*puVar4);
            }
          }
          if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
             (uVar9 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar9 == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = (long)*(char *)((long)piVar12 + uVar9) & 0xffffffff;
          }
          if (*(long *)(puVar3 + uVar9 * 8) == 4) {
            if (uVar8 < 0xb) {
              uVar11 = 0;
LAB_01921a04:
              uVar8 = 0;
            }
            else {
              uVar11 = 0;
              if ((ulong)puVar10[5] != 0) {
                uVar11 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar10[5]);
              }
              if ((uVar8 < 0xd) || ((ulong)puVar10[6] == 0)) goto LAB_01921a04;
              uVar8 = (ushort)*(undefined4 *)((long)piVar2 + (ulong)puVar10[6]);
            }
            if ((uVar11 < *(ushort *)((long)local_130 - (long)*local_130)) &&
               (uVar9 = (ulong)*(ushort *)(((long)local_130 - (long)*local_130) + (ulong)uVar11),
               uVar9 != 0)) {
              uVar8 = (ushort)*(undefined4 *)((long)local_130 + uVar9);
            }
            goto LAB_01921990;
          }
          if ((0xc < uVar8) && ((ulong)puVar10[6] != 0)) {
            uVar8 = (ushort)*(undefined4 *)((long)piVar2 + (ulong)puVar10[6]);
            goto LAB_01921990;
          }
        }
LAB_019219ac:
        uVar8 = 0;
      }
LAB_01921990:
      *puVar14 = uVar8;
      *(uint *)(puVar14 + -8) = uVar6;
    }
    uVar13 = uVar13 + 1;
    puVar14 = puVar14 + 0xc;
  } while( true );
}


