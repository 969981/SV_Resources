/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c47f5c; name: FUN_00c47f5c
 */


long FUN_00c47f5c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  
  uVar2 = *(ulong *)(param_1 + 0x3a0);
  lVar3 = *(long *)(param_1 + 0x368);
  plVar11 = (long *)(lVar3 + (uVar2 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_1 + 0x370) == lVar3) {
    lVar4 = *(long *)(param_1 + 0x3a8);
    plVar5 = (long *)0x0;
    plVar7 = (long *)0x0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x3a8);
    plVar5 = (long *)(*plVar11 + (uVar2 & 0x1ff) * 8);
    plVar7 = (long *)(*(long *)(lVar3 + (lVar4 + uVar2 >> 6 & 0x3fffffffffffff8)) +
                     (lVar4 + uVar2 & 0x1ff) * 8);
  }
  uVar1 = 1 << (ulong)(*(uint *)(param_2 + 0xc) & 0x1f);
  if (plVar7 != plVar5) {
    uVar6 = 0;
    lVar12 = param_1 + 0x360;
    plVar8 = plVar11;
    do {
      if (*(uint *)(*plVar5 + 0x358) == 0 || (*(uint *)(*plVar5 + 0x358) & uVar1) != 0)
      goto LAB_00c480a4;
      plVar5 = plVar5 + 1;
      if ((long)plVar5 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        plVar5 = (long *)*plVar8;
      }
      uVar6 = uVar6 + 1;
    } while (plVar7 != plVar5);
  }
  uVar2 = *(ulong *)(param_1 + 0x410);
  lVar3 = *(long *)(param_1 + 0x3d8);
  plVar11 = (long *)(lVar3 + (uVar2 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_1 + 0x3e0) == lVar3) {
    lVar4 = *(long *)(param_1 + 0x418);
    plVar5 = (long *)0x0;
    plVar7 = (long *)0x0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x418);
    plVar5 = (long *)(*plVar11 + (uVar2 & 0x1ff) * 8);
    plVar7 = (long *)(*(long *)(lVar3 + (lVar4 + uVar2 >> 6 & 0x3fffffffffffff8)) +
                     (lVar4 + uVar2 & 0x1ff) * 8);
  }
  if (plVar7 != plVar5) {
    uVar6 = 0;
    lVar12 = param_1 + 0x3d0;
    plVar8 = plVar11;
    do {
      if (*(uint *)(*plVar5 + 0x358) == 0 || (*(uint *)(*plVar5 + 0x358) & uVar1) != 0)
      goto LAB_00c480a4;
      plVar5 = plVar5 + 1;
      if ((long)plVar5 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        plVar5 = (long *)*plVar8;
      }
      uVar6 = uVar6 + 1;
    } while (plVar7 != plVar5);
  }
  uVar2 = *(ulong *)(param_1 + 0x480);
  lVar3 = *(long *)(param_1 + 0x448);
  plVar11 = (long *)(lVar3 + (uVar2 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_1 + 0x450) == lVar3) {
    lVar4 = *(long *)(param_1 + 0x488);
    plVar5 = (long *)0x0;
    plVar7 = (long *)0x0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x488);
    plVar5 = (long *)(*plVar11 + (uVar2 & 0x1ff) * 8);
    plVar7 = (long *)(*(long *)(lVar3 + (lVar4 + uVar2 >> 6 & 0x3fffffffffffff8)) +
                     (lVar4 + uVar2 & 0x1ff) * 8);
  }
  if (plVar7 != plVar5) {
    uVar6 = 0;
    lVar12 = param_1 + 0x440;
    plVar8 = plVar11;
    do {
      if (*(uint *)(*plVar5 + 0x358) == 0 || (*(uint *)(*plVar5 + 0x358) & uVar1) != 0) {
LAB_00c480a4:
        lVar9 = *plVar5;
        if (uVar6 != 0) {
          *(undefined8 *)
           (*(long *)(lVar3 + (uVar2 + uVar6 >> 6 & 0x3fffffffffffff8)) +
           (uVar2 + uVar6 & 0x1ff) * 8) = *(undefined8 *)(*plVar11 + (uVar2 & 0x1ff) * 8);
          uVar2 = *(ulong *)(lVar12 + 0x40);
          lVar4 = *(long *)(lVar12 + 0x48);
        }
        *(ulong *)(lVar12 + 0x40) = uVar2 + 1;
        *(long *)(lVar12 + 0x48) = lVar4 + -1;
        if (uVar2 + 1 < 0x400) {
          return lVar9;
        }
        plVar11 = *(long **)(lVar12 + 0x50);
        uVar10 = **(undefined8 **)(lVar12 + 8);
        uVar2 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,uVar10,0x1000,8);
        }
        else {
          FUN_00c48fe8(plVar11,uVar10,0x1000,8);
        }
        *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 8;
        *(long *)(lVar12 + 0x40) = *(long *)(lVar12 + 0x40) + -0x200;
        return lVar9;
      }
      plVar5 = plVar5 + 1;
      if ((long)plVar5 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        plVar5 = (long *)*plVar8;
      }
      uVar6 = uVar6 + 1;
    } while (plVar7 != plVar5);
  }
  return 0;
}


