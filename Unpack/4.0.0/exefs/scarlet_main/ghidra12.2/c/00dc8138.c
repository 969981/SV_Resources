/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dc8138; name: FUN_00dc8138
 */


undefined1  [16] FUN_00dc8138(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  lVar8 = *(long *)(param_1 + 0x1d8);
  if (lVar8 == 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0x100000000;
    uVar7 = 3;
    goto LAB_00dc81c0;
  }
  plVar9 = *(long **)(param_1 + 0x168);
  if (plVar9 == (long *)0x0) {
    plVar9 = *(long **)(param_1 + 8);
  }
  lVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,lVar8,0x10);
  lVar10 = *(long *)(param_1 + 0x1f0);
  *(long *)(param_1 + 0x1f0) = lVar3;
  if (lVar10 != 0) {
    plVar1 = *(long **)(param_1 + 0x1f8);
    uVar2 = *(undefined8 *)(param_1 + 0x200);
    uVar11 = *(undefined8 *)(param_1 + 0x208);
    uVar4 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar4 & 1) == 0) {
LAB_00dc81fc:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar10,uVar2,uVar11);
    }
    else {
      lVar3 = FUN_00c4e600();
      if (*(int *)(lVar3 + 0x12c8) < 1) goto LAB_00dc81fc;
      FUN_00c48fe8(plVar1,lVar10,uVar2,uVar11);
    }
    lVar3 = *(long *)(param_1 + 0x1f0);
  }
  *(long **)(param_1 + 0x1f8) = plVar9;
  *(long *)(param_1 + 0x200) = lVar8;
  *(undefined8 *)(param_1 + 0x208) = 0x10;
  if (lVar3 == 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar7 = 2;
    uVar4 = 0;
  }
  else {
    *(ulong *)(param_1 + 0x1e0) =
         *(ulong *)(param_1 + 0x1d8) & (long)*(ulong *)(param_1 + 0x1d8) >> 0x3f;
    auVar12 = FUN_00dc8274(param_1);
    uVar7 = auVar12._0_8_;
    uVar5 = uVar7 & 0xffffff0000000000;
    uVar6 = uVar7 & 0xff00000000;
    uVar7 = uVar7 & 0xffffffff;
    uVar4 = auVar12._8_8_ & 0xffffffff;
  }
LAB_00dc81c0:
  auVar12._0_8_ = uVar6 | uVar7 | uVar5;
  auVar12._8_8_ = uVar4;
  return auVar12;
}


