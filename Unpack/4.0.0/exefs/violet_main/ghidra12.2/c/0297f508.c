/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297f508; name: FUN_0297f508
 */


float FUN_0297f508(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  
  uVar6 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
  uVar7 = FUN_00f7e28c(uVar6,0);
  uVar9 = 0;
  uVar11 = 0;
  uVar10 = 0;
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_00f7e3c8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),0);
    plVar8 = (long *)FUN_0124e4c0(uVar6,0);
    uVar1 = (**(code **)(*plVar8 + 0x118))();
    uVar2 = FUN_0159fe8c(*(undefined8 *)(param_1 + 8));
    uVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
    uVar3 = FUN_01689a40(param_1,uVar3);
    uVar6 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
    uVar4 = FUN_01242ecc(uVar6,uVar2,uVar3);
    uVar10 = uVar4 & 1;
    uVar11 = uVar1 & 0xff;
    uVar9 = 0;
    if ((uVar4 & 1) == 0) {
      uVar11 = 0;
      uVar9 = uVar1 & 0xff;
    }
  }
  uVar6 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
  uVar7 = FUN_00f7e28c(uVar6,1);
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_00f7e3c8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),1);
    plVar8 = (long *)FUN_0124e4c0(uVar6,0);
    uVar4 = (**(code **)(*plVar8 + 0x118))();
    uVar2 = FUN_0159fe8c(*(undefined8 *)(param_1 + 8));
    uVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
    uVar3 = FUN_01689a40(param_1,uVar3);
    uVar6 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
    uVar5 = FUN_01242ecc(uVar6,uVar2,uVar3);
    uVar1 = uVar4 & 0xff;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
      uVar9 = uVar4 & 0xff;
    }
    uVar11 = uVar1 + uVar11;
    uVar10 = uVar10 + (uVar5 & 1);
  }
  uVar6 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
  uVar7 = FUN_00f7e28c(uVar6,2);
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_00f7e3c8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),2);
    plVar8 = (long *)FUN_0124e4c0(uVar6,0);
    uVar4 = (**(code **)(*plVar8 + 0x118))();
    uVar2 = FUN_0159fe8c(*(undefined8 *)(param_1 + 8));
    uVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
    uVar3 = FUN_01689a40(param_1,uVar3);
    uVar6 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
    uVar5 = FUN_01242ecc(uVar6,uVar2,uVar3);
    uVar1 = uVar4 & 0xff;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
      uVar9 = uVar4 & 0xff;
    }
    uVar11 = uVar1 + uVar11;
    uVar10 = uVar10 + (uVar5 & 1);
  }
  uVar6 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
  uVar7 = FUN_00f7e28c(uVar6,3);
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_00f7e3c8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),3);
    plVar8 = (long *)FUN_0124e4c0(uVar6,0);
    uVar4 = (**(code **)(*plVar8 + 0x118))();
    uVar2 = FUN_0159fe8c(*(undefined8 *)(param_1 + 8));
    uVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
    uVar3 = FUN_01689a40(param_1,uVar3);
    uVar6 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
    uVar5 = FUN_01242ecc(uVar6,uVar2,uVar3);
    uVar1 = uVar4 & 0xff;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
      uVar9 = uVar4 & 0xff;
    }
    uVar11 = uVar1 + uVar11;
    uVar10 = uVar10 + (uVar5 & 1);
  }
  uVar6 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
  uVar7 = FUN_00f7e28c(uVar6,4);
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_00f7e3c8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),4);
    plVar8 = (long *)FUN_0124e4c0(uVar6,0);
    uVar4 = (**(code **)(*plVar8 + 0x118))();
    uVar2 = FUN_0159fe8c(*(undefined8 *)(param_1 + 8));
    uVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
    uVar3 = FUN_01689a40(param_1,uVar3);
    uVar6 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
    uVar5 = FUN_01242ecc(uVar6,uVar2,uVar3);
    uVar1 = uVar4 & 0xff;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
      uVar9 = uVar4 & 0xff;
    }
    uVar11 = uVar1 + uVar11;
    uVar10 = uVar10 + (uVar5 & 1);
  }
  fVar12 = 1.0;
  if ((uVar9 != 0) && (uVar10 != 0)) {
    fVar12 = ((float)uVar11 / (float)uVar10) / (float)uVar9;
  }
  return fVar12;
}


