/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352cdd4; name: FUN_0352cdd4
 */


int FUN_0352cdd4(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  
  if ((*(uint *)(param_1 + 0x128) == 0) || (uVar1 = *(uint *)(param_1 + 0x100), uVar1 == 0)) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x120);
  lVar6 = lVar5 + (ulong)*(uint *)(param_1 + 0x128) * 0x1c;
  piVar4 = *(int **)(param_1 + 0xf8);
  iVar3 = 0;
  do {
    piVar9 = piVar4;
    lVar7 = (ulong)uVar1 * 0x10;
    iVar8 = *piVar4;
    while (iVar8 != *(int *)(lVar5 + 4)) {
      lVar7 = lVar7 + -0x10;
      if (lVar7 == 0) goto LAB_0352cebc;
      piVar9 = piVar9 + 4;
      iVar8 = *piVar9;
    }
    if ((piVar9 != piVar4 + (ulong)uVar1 * 4) && (lVar7 = *(long *)(piVar9 + 2), lVar7 != 0)) {
      uVar2 = *(int *)(lVar5 + 0xc) - param_2;
      if ((*(ushort *)(lVar7 + 0xc) & 0x7c) == 4) {
        if ((((int)uVar2 < 0) || ((*(ushort *)(lVar7 + 0xc) >> 1 & 1) == 0)) ||
           (iVar8 = 0, *(int *)(lVar5 + 0x18) != 0)) {
          iVar8 = *(int *)(lVar7 + 0x20);
        }
      }
      else {
        iVar8 = 0;
      }
      if (*(short *)(lVar7 + 0x1a) == 0x11) {
        if (*(int *)(lVar5 + 0x18) == 0) {
          iVar8 = iVar8 + (uint)*(ushort *)PTR_DAT_047e6d08;
        }
        else {
          iVar8 = iVar8 + (uint)*(ushort *)PTR_DAT_047e6d08 * 4;
        }
      }
      iVar8 = iVar8 - (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
      if (iVar8 <= iVar3) {
        iVar8 = iVar3;
      }
      iVar3 = iVar8;
    }
LAB_0352cebc:
    lVar5 = lVar5 + 0x1c;
    if (lVar5 == lVar6) {
      return iVar3;
    }
  } while( true );
}


