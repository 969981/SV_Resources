/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035380d0; name: FUN_035380d0
 */


undefined8 FUN_035380d0(long param_1,long param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((*(byte *)(param_1 + 0x5a) & 0xe) == 0) {
    lVar8 = *(long *)(param_2 + 0x248);
    lVar9 = *(long *)(param_1 + 0x10);
    if ((*(ushort *)(lVar8 + 0xc) & 0x7c) == 4) {
      iVar7 = *(int *)(lVar8 + 0x20);
    }
    else {
      iVar7 = 0;
    }
    *param_3 = iVar7;
    puVar5 = PTR_DAT_047e6d08;
    lVar10 = *(long *)(param_2 + 0x338);
    if (*(short *)(lVar8 + 0x1a) == 0x11) {
      uVar3 = (uint)*(ushort *)PTR_DAT_047e6d08;
      if (*(int *)(lVar10 + 0x18) != 0) {
        uVar3 = (uint)*(ushort *)PTR_DAT_047e6d08 << 2;
      }
      iVar7 = uVar3 + iVar7;
      *param_3 = iVar7;
    }
    uVar2 = *(ushort *)puVar5;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = ((iVar7 + (uint)uVar2) - 1) / (uint)uVar2;
    }
    *param_3 = uVar3 * uVar2;
    iVar7 = *(int *)(*(long *)(*(long *)(lVar9 + 0x10) + 0x60) + 0x48);
    iVar6 = FUN_03531af4(*(long *)(lVar9 + 0x10),*(undefined8 *)(lVar9 + 0x80));
    iVar7 = (iVar6 - iVar7) + *(int *)(*(long *)(*(long *)(lVar9 + 0x78) + 0x130) + 4);
    if (*param_3 + iVar7 < *(int *)(lVar10 + 0x10) + *(int *)(lVar10 + 0xc)) {
      uVar1 = *(uint *)(lVar10 + 0x14);
      uVar3 = (iVar7 - *(int *)(lVar10 + 0xc)) + *param_3 + *(int *)(lVar10 + 0x18);
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar3 / uVar1;
      }
      uVar3 = uVar3 - uVar4 * uVar1;
      *param_4 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
      return 1;
    }
  }
  return 0;
}


