/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bc759c; name: FUN_00bc759c
 */


int FUN_00bc759c(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 3) == 0) {
    iVar9 = 0;
  }
  else {
    if ((uVar3 & 1) == 0) {
      iVar9 = 0;
    }
    else {
      bVar2 = **(byte **)(param_1 + 0x18);
      uVar1 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(uint *)(*(byte **)(param_1 + 0x18) + 8);
      }
      iVar9 = 5;
      if (uVar1 >> 0x1c != 0) {
        iVar9 = 6;
      }
      iVar5 = 4;
      if (0x1fffff < uVar1) {
        iVar5 = iVar9;
      }
      iVar13 = 3;
      if (0x3fff < uVar1) {
        iVar13 = iVar5;
      }
      iVar9 = 2;
      if (0x7f < uVar1) {
        iVar9 = iVar13;
      }
      iVar9 = iVar9 + uVar1;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0x20);
      iVar5 = *(int *)(lVar10 + 0x40) << 1;
      if (0 < *(int *)(lVar10 + 0x40)) {
        lVar11 = 0;
        do {
          uVar6 = FUN_00bdb9b8(*(undefined8 *)(*(long *)(lVar10 + 0x48) + lVar11 * 8 + 8));
          iVar13 = 4;
          if ((uVar6 >> 0x1c & 0xf) != 0) {
            iVar13 = 5;
          }
          uVar3 = (uint)uVar6;
          iVar4 = 3;
          if (0x1fffff < uVar3) {
            iVar4 = iVar13;
          }
          iVar13 = 2;
          if (0x3fff < uVar3) {
            iVar13 = iVar4;
          }
          iVar4 = 1;
          if (0x7f < uVar3) {
            iVar4 = iVar13;
          }
          iVar5 = uVar3 + iVar5 + iVar4;
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
          iVar4 = FUN_00c2ba20(plVar12 + 5,(int)plVar12[4]);
          iVar13 = iVar4 + iVar13;
          plVar7 = (long *)plVar12[1];
          if ((long *)plVar12[1] == (long *)0x0) {
            plVar7 = plVar12 + 2;
            plVar8 = (long *)*plVar7;
            if ((long *)*plVar8 != plVar12) {
              do {
                lVar11 = *plVar7;
                plVar7 = (long *)(lVar11 + 0x10);
                plVar8 = (long *)*plVar7;
              } while (*plVar8 != lVar11);
            }
          }
          else {
            do {
              plVar8 = plVar7;
              plVar7 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
          plVar12 = plVar8;
        } while (plVar8 != (long *)(lVar10 + 0x10));
      }
      uVar3 = iVar13 + iVar5;
      if ((*(ulong *)(lVar10 + 0x28) & 1) != 0) {
        iVar5 = FUN_00c0358c(*(ulong *)(lVar10 + 0x28) & 0xfffffffffffffffe);
        uVar3 = iVar5 + uVar3;
      }
      *(uint *)(lVar10 + 0x34) = uVar3;
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else if (uVar3 < 0x4000) {
        iVar5 = 2;
      }
      else if (uVar3 < 0x200000) {
        iVar5 = 3;
      }
      else {
        iVar5 = 4;
        if (uVar3 >> 0x1c != 0) {
          iVar5 = 5;
        }
      }
      iVar9 = iVar9 + uVar3 + iVar5 + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar5 = FUN_00c0358c(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar9 = iVar5 + iVar9;
  }
  *(int *)(param_1 + 0x14) = iVar9;
  return iVar9;
}


