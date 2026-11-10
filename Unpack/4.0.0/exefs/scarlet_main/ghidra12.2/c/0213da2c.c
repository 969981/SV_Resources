/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0213da2c; name: FUN_0213da2c
 */


undefined1  [16] FUN_0213da2c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  lVar12 = *(long *)(param_1 + 0x1f0);
  plVar8 = *(long **)(param_1 + 0x168);
  if (plVar8 == (long *)0x0) {
    plVar8 = *(long **)(param_1 + 8);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x1d8);
  lVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar9,0x1000);
  lVar10 = *(long *)(lVar12 + 0x30);
  *(long *)(lVar12 + 0x30) = lVar3;
  if (lVar10 == 0) goto LAB_0213da7c;
  plVar1 = *(long **)(lVar12 + 0x38);
  uVar2 = *(undefined8 *)(lVar12 + 0x40);
  uVar11 = *(undefined8 *)(lVar12 + 0x48);
  uVar7 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar7 & 1) == 0) {
LAB_0213daf4:
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar10,uVar2,uVar11);
  }
  else {
    lVar3 = FUN_00c4e600();
    if (*(int *)(lVar3 + 0x12c8) < 1) goto LAB_0213daf4;
    FUN_00c48fe8(plVar1,lVar10,uVar2,uVar11);
  }
  lVar3 = *(long *)(lVar12 + 0x30);
LAB_0213da7c:
  *(long **)(lVar12 + 0x38) = plVar8;
  *(undefined8 *)(lVar12 + 0x40) = uVar9;
  *(undefined8 *)(lVar12 + 0x48) = 0x1000;
  if (lVar3 == 0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 2;
  }
  else {
    *(ulong *)(param_1 + 0x1e0) =
         *(ulong *)(param_1 + 0x1d8) & (long)*(ulong *)(param_1 + 0x1d8) >> 0x3f;
    auVar13 = FUN_00dc8274(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1f0) + 0x30));
    uVar7 = auVar13._0_8_;
    uVar5 = uVar7 & 0xffffff0000000000;
    uVar6 = uVar7 & 0xff00000000;
    uVar7 = uVar7 & 0xffffffff;
    uVar4 = auVar13._8_8_ & 0xffffffff;
  }
  auVar13._0_8_ = uVar6 | uVar5 | uVar7;
  auVar13._8_8_ = uVar4;
  return auVar13;
}


