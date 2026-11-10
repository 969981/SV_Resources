/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215a4bc; name: FUN_0215a4bc
 */


undefined8 FUN_0215a4bc(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  
  FUN_01733568(*(undefined8 *)(param_1 + 0x880));
  if (*(int *)(*(long *)(param_1 + 0x880) + 0x1b8) == 0) {
    *(uint *)(*(long *)(param_1 + 0x930) + 0x28) = (uint)(*(int *)(param_1 + 0x750) != 0);
    lVar8 = *(long *)(param_1 + 0x930);
    iVar3 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
    uVar7 = *(undefined8 *)(param_1 + 0x7ac);
    iVar5 = (int)((ulong)uVar7 >> 0x20);
    iVar4 = iVar5;
    iVar2 = (int)uVar7;
    if (*(int *)(lVar8 + 0x28) != 0) {
      iVar4 = (int)uVar7;
      iVar2 = iVar5;
    }
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = iVar3 / iVar2;
    }
    iVar4 = iVar5 - iVar4;
    if (iVar3 != iVar5 * iVar2) {
      iVar4 = iVar4 + 1;
    }
    fVar9 = (float)iVar4;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    *(undefined8 *)(lVar8 + 0x20) = uVar7;
    *(int *)(lVar8 + 8) = iVar3;
    *(int *)(lVar8 + 0xc) = (int)fVar9;
    lVar8 = *(long *)(param_1 + 0x930);
    piVar1 = (int *)(param_1 + 0x7b0);
    if (*(int *)(lVar8 + 0x28) != 0) {
      piVar1 = (int *)(param_1 + 0x7ac);
    }
    iVar2 = *piVar1;
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = iVar2 + 1;
    }
    if (*(char *)(param_1 + 0xb00) != '\0') {
      iVar4 = iVar4 >> 1;
      *(uint *)(lVar8 + 0x18) = iVar4 - (uint)(iVar2 + iVar4 * -2 != 1);
      *(int *)(lVar8 + 0x1c) = iVar4;
      lVar8 = *(long *)(param_1 + 0x930);
    }
    *(undefined4 *)(lVar8 + 0x14) = *(undefined4 *)(param_1 + 0x990);
    *(undefined4 *)(*(long *)(param_1 + 0x930) + 0x10) = *(undefined4 *)(param_1 + 0x994);
    *(float *)(*(long *)(param_1 + 0x880) + 0x1a4) =
         (float)*(int *)(*(long *)(param_1 + 0x930) + 0xc);
    FUN_0215b8bc(*(undefined8 *)(param_1 + 0x910),
                 (int)*(float *)(*(long *)(param_1 + 0x880) + 0x1a4),
                 (int)*(float *)(*(long *)(param_1 + 0x880) + 0x1d4));
    iVar4 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
    if (0 < iVar4) {
      lVar8 = *(long *)(param_1 + 0x930);
      iVar4 = *(int *)(lVar8 + 0x10);
      iVar2 = *(int *)(lVar8 + 0x14);
      piVar1 = (int *)(lVar8 + 0x20);
      if (*(int *)(lVar8 + 0x28) != 0) {
        piVar1 = (int *)(lVar8 + 0x24);
      }
      iVar3 = *piVar1;
      iVar5 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
      if (iVar5 <= iVar2 + iVar3 * iVar4) {
        lVar8 = *(long *)(param_1 + 0x930);
        uVar6 = FUN_017a4180(lVar8);
        *(undefined4 *)(lVar8 + 0x14) = uVar6;
      }
      FUN_01327c88(param_1,*(undefined4 *)(*(long *)(param_1 + 0x930) + 0x14),
                   (int)*(float *)(*(long *)(param_1 + 0x880) + 0x1d4));
      FUN_0215ba10(param_1);
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


