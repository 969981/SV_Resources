/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4f310; name: FUN_00c4f310
 */


int FUN_00c4f310(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar6 = (ulong *)*param_1;
  puVar4 = (ulong *)*param_2;
  puVar5 = (ulong *)*param_3;
  uVar7 = *puVar4;
  if (*puVar6 < uVar7) {
    if (uVar7 < *puVar5) {
      uVar7 = *puVar6;
      uVar1 = puVar6[1];
      uVar9 = puVar6[2];
      uVar2 = puVar5[2];
      uVar8 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = uVar2;
      *puVar6 = uVar8;
      puVar5[1] = uVar1;
      puVar5[2] = uVar9;
      *puVar5 = uVar7;
    }
    else {
      uVar7 = *puVar6;
      uVar1 = puVar6[1];
      uVar9 = puVar6[2];
      uVar2 = puVar4[2];
      uVar8 = *puVar4;
      puVar6[1] = puVar4[1];
      puVar6[2] = uVar2;
      *puVar6 = uVar8;
      puVar4[1] = uVar1;
      puVar4[2] = uVar9;
      *puVar4 = uVar7;
      if (uVar7 < *puVar5) {
        uVar7 = *puVar4;
        uVar1 = puVar4[1];
        uVar9 = puVar4[2];
        uVar2 = puVar5[2];
        uVar8 = *puVar5;
        puVar4[1] = puVar5[1];
        puVar4[2] = uVar2;
        *puVar4 = uVar8;
        puVar5[1] = uVar1;
        puVar5[2] = uVar9;
        *puVar5 = uVar7;
        goto LAB_00c4f4e8;
      }
    }
  }
  else {
    if (*puVar5 <= uVar7) {
      iVar3 = 0;
      goto LAB_00c4f340;
    }
    uVar7 = *puVar4;
    uVar1 = puVar4[1];
    uVar9 = puVar4[2];
    uVar2 = puVar5[2];
    uVar8 = *puVar5;
    puVar4[1] = puVar5[1];
    puVar4[2] = uVar2;
    *puVar4 = uVar8;
    puVar5[1] = uVar1;
    puVar5[2] = uVar9;
    *puVar5 = uVar7;
    if (*puVar6 < *puVar4) {
      uVar7 = *puVar6;
      uVar1 = puVar6[1];
      uVar9 = puVar6[2];
      uVar2 = puVar4[2];
      uVar8 = *puVar4;
      puVar6[1] = puVar4[1];
      puVar6[2] = uVar2;
      *puVar6 = uVar8;
      puVar4[1] = uVar1;
      puVar4[2] = uVar9;
      *puVar4 = uVar7;
LAB_00c4f4e8:
      iVar3 = 2;
      goto LAB_00c4f340;
    }
  }
  iVar3 = 1;
LAB_00c4f340:
  puVar4 = (ulong *)*param_4;
  puVar5 = (ulong *)*param_3;
  if (*puVar5 < *puVar4) {
    uVar7 = *puVar5;
    uVar1 = puVar5[1];
    uVar9 = puVar5[2];
    uVar2 = puVar4[2];
    uVar8 = *puVar4;
    puVar5[1] = puVar4[1];
    puVar5[2] = uVar2;
    *puVar5 = uVar8;
    puVar4[1] = uVar1;
    puVar4[2] = uVar9;
    *puVar4 = uVar7;
    puVar4 = (ulong *)*param_3;
    puVar5 = (ulong *)*param_2;
    if (*puVar5 < *puVar4) {
      uVar7 = *puVar5;
      uVar1 = puVar5[1];
      uVar9 = puVar5[2];
      uVar2 = puVar4[2];
      uVar8 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = uVar2;
      *puVar5 = uVar8;
      puVar4[1] = uVar1;
      puVar4[2] = uVar9;
      *puVar4 = uVar7;
      puVar4 = (ulong *)*param_2;
      puVar5 = (ulong *)*param_1;
      if (*puVar5 < *puVar4) {
        uVar7 = *puVar5;
        uVar1 = puVar5[1];
        iVar3 = iVar3 + 3;
        uVar9 = puVar5[2];
        uVar2 = puVar4[2];
        uVar8 = *puVar4;
        puVar5[1] = puVar4[1];
        puVar5[2] = uVar2;
        *puVar5 = uVar8;
        puVar4[1] = uVar1;
        puVar4[2] = uVar9;
        *puVar4 = uVar7;
      }
      else {
        iVar3 = iVar3 + 2;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}


