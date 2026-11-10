/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bcc82c; name: FUN_00bcc82c
 */


int FUN_00bcc82c(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 5) == 0) {
    iVar8 = 0;
  }
  else {
    if ((uVar4 & 1) == 0) {
      iVar8 = 0;
    }
    else {
      bVar2 = **(byte **)(param_1 + 0x18);
      uVar1 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(uint *)(*(byte **)(param_1 + 0x18) + 8);
      }
      iVar8 = 5;
      if (uVar1 >> 0x1c != 0) {
        iVar8 = 6;
      }
      iVar5 = 4;
      if (0x1fffff < uVar1) {
        iVar5 = iVar8;
      }
      iVar13 = 3;
      if (0x3fff < uVar1) {
        iVar13 = iVar5;
      }
      iVar8 = 2;
      if (0x7f < uVar1) {
        iVar8 = iVar13;
      }
      iVar8 = iVar8 + uVar1;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0x38);
      iVar5 = (-(*(byte *)(lVar10 + 0x30) & 1) & 3) + *(int *)(lVar10 + 0x40) * 2;
      if (0 < *(int *)(lVar10 + 0x40)) {
        lVar11 = 0;
        do {
          uVar6 = FUN_00bdb9b8(*(undefined8 *)(*(long *)(lVar10 + 0x48) + lVar11 * 8 + 8));
          iVar13 = 4;
          if ((uVar6 >> 0x1c & 0xf) != 0) {
            iVar13 = 5;
          }
          uVar4 = (uint)uVar6;
          iVar3 = 3;
          if (0x1fffff < uVar4) {
            iVar3 = iVar13;
          }
          iVar13 = 2;
          if (0x3fff < uVar4) {
            iVar13 = iVar3;
          }
          iVar3 = 1;
          if (0x7f < uVar4) {
            iVar3 = iVar13;
          }
          iVar5 = uVar4 + iVar5 + iVar3;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(lVar10 + 0x40));
      }
      if (*(long **)(lVar10 + 8) == (long *)(lVar10 + 0x10)) {
        iVar13 = 0;
      }
      else {
        iVar13 = 0;
        plVar12 = *(long **)(lVar10 + 8);
        do {
          iVar3 = FUN_00c2ba20(plVar12 + 5,(int)plVar12[4]);
          iVar13 = iVar3 + iVar13;
          plVar7 = (long *)plVar12[1];
          if ((long *)plVar12[1] == (long *)0x0) {
            plVar7 = plVar12 + 2;
            plVar9 = (long *)*plVar7;
            if ((long *)*plVar9 != plVar12) {
              do {
                lVar11 = *plVar7;
                plVar7 = (long *)(lVar11 + 0x10);
                plVar9 = (long *)*plVar7;
              } while (*plVar9 != lVar11);
            }
          }
          else {
            do {
              plVar9 = plVar7;
              plVar7 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
          plVar12 = plVar9;
        } while (plVar9 != (long *)(lVar10 + 0x10));
      }
      uVar4 = iVar13 + iVar5;
      if ((*(ulong *)(lVar10 + 0x28) & 1) != 0) {
        iVar5 = FUN_00c0358c(*(ulong *)(lVar10 + 0x28) & 0xfffffffffffffffe);
        uVar4 = iVar5 + uVar4;
      }
      *(uint *)(lVar10 + 0x34) = uVar4;
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else if (uVar4 < 0x4000) {
        iVar5 = 2;
      }
      else if (uVar4 < 0x200000) {
        iVar5 = 3;
      }
      else {
        iVar5 = 4;
        if (uVar4 >> 0x1c != 0) {
          iVar5 = 5;
        }
      }
      iVar8 = iVar8 + uVar4 + iVar5 + 1;
    }
  }
  iVar8 = *(int *)(param_1 + 0x28) + iVar8;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar10 = 0;
    do {
      uVar6 = FUN_00bceac0(*(undefined8 *)(*(long *)(param_1 + 0x30) + lVar10 * 8 + 8));
      iVar5 = 4;
      if ((uVar6 >> 0x1c & 0xf) != 0) {
        iVar5 = 5;
      }
      uVar4 = (uint)uVar6;
      iVar13 = 3;
      if (0x1fffff < uVar4) {
        iVar13 = iVar5;
      }
      iVar5 = 2;
      if (0x3fff < uVar4) {
        iVar5 = iVar13;
      }
      iVar13 = 1;
      if (0x7f < uVar4) {
        iVar13 = iVar5;
      }
      iVar8 = uVar4 + iVar8 + iVar13;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x28));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar5 = FUN_00c0358c(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar8 = iVar5 + iVar8;
  }
  *(int *)(param_1 + 0x14) = iVar8;
  return iVar8;
}


