/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d3a27c; name: FUN_00d3a27c
 */


void FUN_00d3a27c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  
  if ((*(long *)(param_1 + 0x450) == 0) ||
     (*(long *)(param_1 + 0x450) != *(long *)(param_1 + 0x458))) {
    fVar10 = *(float *)(param_1 + 0x4a8);
    *(float *)(param_1 + 0x4b0) = fVar10;
  }
  else {
    fVar10 = *(float *)(param_1 + 0x4b0);
  }
  if (fVar10 <= 0.0) {
    *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_1 + 0x4ac);
  }
  lVar2 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  lVar2 = *(long *)(lVar2 + 8);
  *(undefined8 *)(param_1 + 0x470) = 0;
  uVar8 = *(ulong *)(param_1 + 0x450);
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  fVar10 = *(float *)(param_1 + 0x4b0) + (float)((double)lVar2 / -1000000000.0);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(float *)(param_1 + 0x4b0) = fVar10;
  do {
    uVar9 = 1L << (uVar7 & 0x3f);
    uVar1 = uVar8 & uVar9;
    if (uVar1 != 0) {
      uVar6 = uVar6 | uVar9;
      *(ulong *)(param_1 + 0x468) = uVar6;
    }
    if ((uVar1 & ~*(ulong *)(param_1 + 0x458)) != 0) {
      uVar5 = uVar5 | uVar9;
      *(ulong *)(param_1 + 0x470) = uVar5;
    }
    if ((uVar9 & ~uVar8 & *(ulong *)(param_1 + 0x458)) != 0) {
      uVar4 = uVar4 | uVar9;
      *(ulong *)(param_1 + 0x478) = uVar4;
    }
    if (fVar10 <= 0.0 && uVar1 != 0) {
      uVar3 = uVar3 | uVar9;
      *(ulong *)(param_1 + 0x480) = uVar3;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x40);
  *(ulong *)(param_1 + 0x458) = uVar8;
  return;
}


