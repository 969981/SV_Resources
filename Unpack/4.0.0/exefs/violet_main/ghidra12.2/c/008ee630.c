/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ee630; name: FUN_008ee630
 */


undefined8 FUN_008ee630(long *param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar4 = *(long *)(param_2 + 0x1c8);
  *(int *)(param_1 + 0xf) = param_3;
  uVar5 = (param_4 + lVar4) - 1U & -lVar4;
  lVar4 = uVar5 * (long)param_3;
  param_1[0xe] = uVar5;
  param_1[2] = param_2;
  param_1[3] = lVar4;
  lVar4 = FUN_008c9960(param_2,lVar4,*(undefined8 *)(param_2 + 0x1c8));
  *param_1 = lVar4;
  uVar3 = 0;
  if (lVar4 != 0) {
    lVar10 = param_1[2];
    uVar5 = param_1[3];
    param_1[1] = 0;
    lVar8 = param_1[0xe] + -1;
    uVar6 = *(long *)(lVar10 + 0x1c8) + lVar8 & -*(long *)(lVar10 + 0x1c8);
    if (uVar5 < uVar6) {
      uVar6 = 0;
      lVar9 = 0;
    }
    else {
      param_1[1] = uVar6;
      lVar9 = lVar4;
    }
    param_1[10] = lVar9;
    lVar1 = *(long *)(param_2 + 0x1d8);
    lVar2 = *(long *)(param_2 + 0x1e0);
    param_1[4] = lVar1;
    param_1[5] = lVar2;
    param_1[4] = (lVar9 - *(long *)(param_2 + 0x170)) + lVar1;
    uVar7 = (*(long *)(lVar10 + 0x1c8) + lVar8 & -*(long *)(lVar10 + 0x1c8)) + uVar6;
    if (uVar5 < uVar7) {
      lVar9 = 0;
      uVar7 = uVar6;
    }
    else {
      lVar9 = lVar4 + uVar6;
      param_1[1] = uVar7;
    }
    param_1[0xb] = lVar9;
    lVar1 = *(long *)(param_2 + 0x1d8);
    lVar2 = *(long *)(param_2 + 0x1e0);
    param_1[6] = lVar1;
    param_1[7] = lVar2;
    param_1[6] = (lVar9 - *(long *)(param_2 + 0x170)) + lVar1;
    if ((int)param_1[0xf] == 3) {
      uVar6 = (*(long *)(lVar10 + 0x1c8) + lVar8 & -*(long *)(lVar10 + 0x1c8)) + uVar7;
      lVar10 = 0;
      if (uVar6 <= uVar5) {
        lVar10 = lVar4 + uVar7;
        param_1[1] = uVar6;
      }
      param_1[0xc] = lVar10;
      lVar4 = *(long *)(param_2 + 0x1d8);
      lVar8 = *(long *)(param_2 + 0x1e0);
      param_1[8] = lVar4;
      param_1[9] = lVar8;
      param_1[8] = (lVar10 - *(long *)(param_2 + 0x170)) + lVar4;
    }
    uVar3 = 1;
  }
  return uVar3;
}


