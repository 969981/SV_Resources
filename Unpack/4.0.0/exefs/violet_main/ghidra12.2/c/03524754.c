/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03524754; name: FUN_03524754
 */


int FUN_03524754(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  
  uVar1 = *(uint *)(param_1 + 0x138);
  uVar4 = param_4 & 1;
  uVar2 = uVar1 - 1;
  puVar3 = *(undefined4 **)(param_1 + 0x130);
  if (uVar4 < uVar2) {
    puVar9 = puVar3 + ((ulong)param_4 & 1) * 4 + 1;
    do {
      if ((uint)(puVar3[1] + param_2) <= *puVar9) goto LAB_035247a0;
      uVar4 = uVar4 + 1;
      puVar9 = puVar9 + 4;
    } while (uVar2 != uVar4);
    uVar4 = uVar2;
  }
LAB_035247a0:
  if (param_3 == 0) {
    uVar5 = uVar2 - uVar4;
  }
  else {
    uVar7 = uVar4;
    if (uVar4 == 0) {
      uVar7 = 1;
    }
    uVar5 = (uint)(uVar4 == 0);
    if (uVar7 < uVar2) {
      uVar10 = (ulong)uVar7;
      uVar11 = uVar10;
      if (((uVar2 - uVar7 & 1) != 0) && (uVar11 = uVar10 + 1, puVar3[uVar10 * 4] == param_3)) {
        uVar5 = uVar5 + 1;
      }
      if (~uVar10 + (ulong)uVar2 != 0) {
        lVar8 = uVar2 - uVar11;
        piVar12 = puVar3 + uVar11 * 4 + 4;
        do {
          if (piVar12[-4] == param_3) {
            uVar5 = uVar5 + 1;
          }
          if (*piVar12 == param_3) {
            uVar5 = uVar5 + 1;
          }
          lVar8 = lVar8 + -2;
          piVar12 = piVar12 + 8;
        } while (lVar8 != 0);
      }
    }
  }
  if (uVar5 == 0) {
    *param_5 = *puVar3;
    return 0;
  }
  lVar8 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
  *(long *)PTR_DAT_047e7068 = lVar8;
  uVar2 = 0;
  uVar7 = (uint)((ulong)lVar8 >> 0x21);
  if (uVar5 != 0) {
    uVar2 = uVar7 / uVar5;
  }
  iVar6 = uVar7 - uVar2 * uVar5;
  if (param_3 == 0) {
    uVar4 = iVar6 + uVar4;
    goto LAB_035248ac;
  }
  if (uVar4 == 0) {
    if (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      uVar4 = 1;
      goto LAB_03524860;
    }
  }
  else {
LAB_03524860:
    do {
      if (puVar3[(ulong)uVar4 * 4] == param_3) {
        if (iVar6 == 0) goto LAB_035248ac;
        iVar6 = iVar6 + -1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  uVar4 = 0;
LAB_035248ac:
  *param_5 = puVar3[(ulong)uVar4 * 4];
  return *(int *)(*(long *)(param_1 + 0x130) + (ulong)uVar4 * 0x10 + 4) -
         *(int *)(*(long *)(param_1 + 0x130) + 4);
}


