/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002de7b0; name: FUN_002de7b0
 */


ulong FUN_002de7b0(ulong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  
  uVar8 = (ulong)*(int *)PTR_DAT_047cc8e0;
  if (*(int *)PTR_DAT_047cc8e0 < 1) {
    return param_1;
  }
  lVar5 = uVar8 * 0xc;
  piVar7 = (int *)PTR_DAT_047cc8e8;
  do {
    uVar4 = (uint)uVar8 >> 1;
    piVar9 = piVar7 + (ulong)uVar4 * 3;
    iVar2 = *piVar9;
    iVar6 = (int)param_1;
    if ((iVar2 <= iVar6) && (iVar6 <= piVar7[(ulong)uVar4 * 3 + 1])) goto joined_r0x002de848;
    uVar1 = uVar4;
    if (iVar2 <= iVar6) {
      uVar1 = (uint)uVar8 - (uVar4 + 1);
    }
    uVar8 = (ulong)uVar1;
    if (iVar2 <= iVar6) {
      piVar7 = piVar7 + (ulong)(uVar4 + 1) * 3;
    }
  } while (0 < (int)uVar1);
  if (PTR_DAT_047cc8e8 + lVar5 <= piVar7 || piVar7 == (int *)0x0) {
    return param_1;
  }
  iVar2 = *piVar7;
  piVar9 = piVar7;
joined_r0x002de848:
  if (iVar6 < iVar2) {
    return param_1;
  }
  iVar3 = piVar9[2];
  if (iVar3 < 0x40000000) {
    if (iVar3 == -1) {
LAB_002de894:
      if (iVar6 % 2 == 1) {
        return (ulong)(iVar6 + 1);
      }
      goto LAB_002de8c8;
    }
    if (iVar3 != 1) {
LAB_002de8d0:
      return (ulong)(uint)(iVar3 + iVar6);
    }
  }
  else {
    if (iVar3 != 0x40000000) {
      if (iVar3 != 0x40000001) goto LAB_002de8d0;
      if ((iVar6 - iVar2 & 1U) != 0) {
        return param_1;
      }
      goto LAB_002de894;
    }
    if ((iVar6 - iVar2 & 1U) != 0) {
      return param_1;
    }
  }
  if ((param_1 & 1) == 0) {
    return (ulong)(iVar6 + 1);
  }
LAB_002de8c8:
  return (ulong)(iVar6 - 1);
}


