/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350ba28; name: FUN_0350ba28
 */


undefined4 FUN_0350ba28(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  plVar5 = *(long **)(param_1 + 0x120);
  lVar6 = plVar5[3];
  iVar2 = *(int *)(lVar6 + 0x2d8);
  if (iVar2 < 1) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
    if ((*(byte *)(plVar5 + 4) & 1) == 0) {
      iVar2 = (**(code **)(*plVar5 + 0x68))
                        (plVar5,*(undefined8 *)(lVar6 + 0x2e0),*(undefined4 *)(lVar6 + 0x2e8));
      if (iVar2 == 0x3f) {
        return 0x11;
      }
      if (iVar2 != 1) {
        return 2;
      }
      *(byte *)(plVar5 + 4) = *(byte *)(plVar5 + 4) | 1;
    }
    if (*(int *)(lVar6 + 0x25c) == *(int *)(lVar7 + 0x25c)) {
      plVar5 = (long *)(lVar6 + 0x18);
      if ((*(ushort *)(lVar6 + 0x1b0) & 1) == 0) {
        (**(code **)(*plVar5 + 0x58))(plVar5,0);
      }
      else if ((*(ushort *)(lVar6 + 0x1b0) >> 4 & 1) != 0) {
        (**(code **)(*plVar5 + 0x60))();
      }
      FUN_0350bc3c(param_1);
      uVar3 = 0x2d;
      if (*(short *)(param_2 + 0x12) != *(short *)(param_2 + 0x10)) {
        uVar3 = 0x2b;
      }
      return uVar3;
    }
  }
  else {
    fVar8 = *(float *)(lVar6 + 0x264) *
            (float)((uint)*(ushort *)(param_2 + 0x10) - (uint)*(ushort *)(param_2 + 0x12));
    fVar9 = 0.5;
    if (fVar8 <= 0.0) {
      fVar9 = -0.5;
    }
    iVar4 = (int)(fVar9 + fVar8);
    iVar1 = iVar2 - iVar4;
    if (iVar1 == 0 || iVar2 < iVar4) {
      iVar1 = 0;
    }
    *(int *)(lVar6 + 0x2d8) = iVar1;
  }
  return 0x11;
}


