/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f1714; name: FUN_008f1714
 */


void FUN_008f1714(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  
  iVar3 = *(int *)(param_2 + 0x20);
  uVar5 = FUN_008f0670(param_2[1],1 < iVar3,1 < *(ushort *)(param_2 + 8));
  uVar4 = *(undefined4 *)(&DAT_03d2e714 + (ulong)uVar5 * 4);
  (**(code **)PTR_DAT_047d2cf8)(param_1);
  (**(code **)PTR_DAT_047d2d10)(param_1,*(undefined4 *)(param_2 + 0x14));
  iVar7 = iVar3;
  if (uVar5 != 4) {
    iVar7 = *(int *)(param_2 + 0x18);
  }
  (**(code **)PTR_DAT_047d2d18)(param_1,iVar7);
  if ((uVar5 & 0xfffffffd) != 5) {
    iVar3 = *(int *)(param_2 + 0x1c);
  }
  (**(code **)PTR_DAT_047d2d20)(param_1,iVar3);
  (**(code **)PTR_DAT_047d2d40)(param_1,*(undefined2 *)(param_2 + 6));
  if (1 < *(ushort *)(param_2 + 8)) {
    (**(code **)PTR_DAT_047d2d50)(param_1);
  }
  (**(code **)PTR_DAT_047d2d08)(param_1,uVar4);
  uVar10 = 0x62;
  piVar9 = &DAT_045194a0;
  do {
    uVar12 = uVar10 >> 1;
    piVar1 = piVar9 + uVar12 * 2 + 2;
    uVar10 = uVar10 + ~uVar12;
    if (*(int *)(param_2 + 0xc) <= piVar9[uVar12 * 2]) {
      piVar1 = piVar9;
      uVar10 = uVar12;
    }
    piVar9 = piVar1;
  } while (uVar10 != 0);
  if ((piVar1 == &DAT_045197b0) || (*(int *)(param_2 + 0xc) < *piVar1)) {
    iVar7 = 0;
  }
  else {
    iVar7 = piVar1[1];
  }
  (**(code **)PTR_DAT_047d2d48)(param_1,iVar7);
  uVar5 = *(uint *)(param_2 + 0x10) & 0x180;
  uVar11 = 4;
  if (*(short *)(param_2 + 2) != 1 && uVar5 != 0) {
    uVar11 = 0xc;
  }
  uVar11 = uVar11 | *(uint *)(param_2 + 0x10) >> 10 & 1 | (*param_2 >> 2 & 1) << 5;
  if (*(short *)(param_2 + 2) == 1) {
    lVar2 = 0x20;
    if (uVar5 != 0) {
      lVar2 = 0x80;
    }
    uVar8 = 0x10;
    if (uVar5 != 0) {
      uVar8 = 0x40;
    }
    uVar11 = uVar11 | uVar8;
    lVar6 = FUN_008f05b0(*(undefined4 *)(param_2 + 0x14),*(int *)(param_2 + 0xc) >> 8);
    (**(code **)PTR_DAT_047d2d98)(param_1,(lVar2 + lVar6) - 1U & -lVar2);
  }
  (**(code **)PTR_DAT_047d2d00)(param_1,uVar11);
  if ((*param_2 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008f1974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d2d90)(param_1,param_2 + 0x24);
  return;
}


