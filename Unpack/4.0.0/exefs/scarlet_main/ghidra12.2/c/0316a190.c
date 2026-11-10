/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0316a190; name: FUN_0316a190
 */


void FUN_0316a190(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  puVar3 = (uint *)(*(long *)(param_1 + 0x100) + (param_2 & 0xffff) * 0x20);
  puVar4 = (uint *)(*(long *)(param_1 + 0x100) + (param_3 & 0xffff) * 0x20);
  uVar6 = *puVar3;
  uVar8 = puVar3[1];
  uVar7 = *puVar4;
  uVar9 = puVar4[1];
  if (uVar8 != uVar9) {
    iVar1 = ((uVar8 - uVar6) * 2 & 0x10000) + (uVar8 - uVar6);
    iVar2 = ((uVar9 - uVar6) * 2 & 0x10000) + (uVar9 - uVar6);
    iVar5 = iVar1 >> 0x10;
    iVar1 = (int)(short)iVar1;
    uVar10 = (short)iVar2 * iVar5 - (iVar2 >> 0x10) * iVar1;
    if ((uVar10 != 0) &&
       ((iVar2 = ((uVar7 - uVar6) * 2 & 0x10000) + (uVar7 - uVar6),
        uVar11 = (short)iVar2 * iVar5 - (iVar2 >> 0x10) * iVar1, uVar11 == 0 ||
        ((int)(uVar10 ^ uVar11) < 0)))) {
      iVar1 = ((uVar9 - uVar7) * 2 & 0x10000) + (uVar9 - uVar7);
      iVar2 = iVar1 >> 0x10;
      iVar5 = (int)(short)iVar1;
      iVar1 = ((uVar8 - uVar7) * 2 & 0x10000) + (uVar8 - uVar7);
      uVar10 = (short)iVar1 * iVar2 - iVar5 * (iVar1 >> 0x10);
      if ((uVar10 != 0) &&
         ((iVar1 = ((uVar6 - uVar7) * 2 & 0x10000) + (uVar6 - uVar7),
          uVar11 = (short)iVar1 * iVar2 - iVar5 * (iVar1 >> 0x10), uVar11 == 0 ||
          ((int)(uVar11 ^ uVar10) < 0)))) goto LAB_0316a3a4;
    }
  }
  if (*(char *)((long)puVar3 + 0xb) == -1) {
    if (((uVar8 < uVar9) && (uVar7 < uVar8)) &&
       (iVar1 = ((uVar9 - uVar7) * 2 & 0x10000) + (uVar9 - uVar7),
       iVar2 = ((uVar8 - uVar7) * 2 & 0x10000) + (uVar8 - uVar7),
       (int)(short)iVar2 * (iVar1 >> 0x10) == (int)(short)iVar1 * (iVar2 >> 0x10))) {
LAB_0316a3a4:
      FUN_031657f0();
      return;
    }
  }
  else if ((((*(char *)((long)puVar4 + 0xb) == -1) && (uVar9 < uVar8)) && (uVar6 < uVar9)) &&
          (iVar1 = ((uVar8 - uVar6) * 2 & 0x10000) + (uVar8 - uVar6),
          iVar2 = ((uVar9 - uVar6) * 2 & 0x10000) + (uVar9 - uVar6),
          (int)(short)iVar2 * (iVar1 >> 0x10) == (iVar2 >> 0x10) * (int)(short)iVar1))
  goto LAB_0316a3a4;
  return;
}


