/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0307878c; name: FUN_0307878c
 */


uint FUN_0307878c(uint *param_1,long param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar2 = *param_1;
  if (param_2 != 0) {
    uVar6 = (ulong)uVar2 & 0x3fffff;
    lVar10 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + ((ulong)(uVar2 >> 0xe) & 0x3ff00)) +
                      0x20);
    uVar5 = *(uint *)(*(long *)(lVar10 + 0x168) + uVar6 * 4);
    if ((int)uVar5 < 0) {
      if ((*(int *)(lVar10 + 0x108) == 0) ||
         ((*(byte *)(*(long *)(lVar10 + 0x100) + uVar6) & 1) == 0)) {
        if ((short)param_1[1] != -1) {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      iVar8 = *(int *)(lVar10 + 0x170);
      lVar11 = (long)iVar8;
      if (iVar8 <= (int)(uVar5 + 1)) {
        iVar8 = uVar5 + 1;
      }
      lVar12 = (ulong)uVar5 + 1;
      do {
        if (lVar11 <= lVar12) goto LAB_030787e8;
        lVar1 = lVar12 * 4;
        lVar12 = lVar12 + 1;
      } while (*(int *)(*(long *)(lVar10 + 0x168) + lVar1) == (int)uVar6);
      iVar8 = (int)lVar12 + -1;
LAB_030787e8:
      uVar5 = uVar5 + (int)(short)param_1[1];
      uVar9 = 0xffffffff;
      if ((int)uVar5 < iVar8) {
        uVar9 = uVar5 | uVar2 & 0xffc00000;
      }
      uVar2 = 0xffffffff;
      if ((short)param_1[1] != -1) {
        uVar2 = uVar9;
      }
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2;
  }
  if (((uVar2 == 0xffffffff) ||
      (lVar10 = *(long *)(*(long *)(param_2 + 0x38) + (ulong)(uVar2 >> 0x16) * 0x100), lVar10 == 0))
     || (sVar3 = (short)param_1[2], sVar3 == -1)) {
    return 0xffffffff;
  }
  lVar10 = *(long *)(lVar10 + 0x20);
  uVar5 = uVar2 & 0x3fffff;
  uVar9 = uVar5 - *(int *)(lVar10 + 0x20);
  if ((int)uVar5 < *(int *)(lVar10 + 0x20)) {
    if (*(int *)(lVar10 + 0x98) == 0) {
      uVar9 = uVar5;
    }
    else {
      uVar9 = *(uint *)(*(long *)(lVar10 + 0x90) + (ulong)uVar5 * 4);
      if (uVar9 == 0xffffffff) {
        piVar7 = (int *)(*(long *)(lVar10 + 0x18) + (ulong)uVar5 * 0x10);
        goto LAB_030788c8;
      }
    }
    lVar10 = *(long *)(lVar10 + 0xb0);
  }
  else {
    lVar10 = *(long *)(lVar10 + 0xd0);
  }
  piVar7 = (int *)(lVar10 + (long)(int)uVar9 * 0x10);
LAB_030788c8:
  sVar4 = (short)piVar7[2];
  if (sVar3 < sVar4) {
    uVar5 = *piVar7 + (int)sVar3;
  }
  else {
    if ((int)*(short *)((long)piVar7 + 10) + (int)sVar4 <= (int)sVar3) {
      if (param_3 != (uint *)0x0) {
        *param_3 = 0xffffffff;
      }
      return 0xffffffff;
    }
    uVar5 = ((int)sVar3 - (int)sVar4) + piVar7[1];
  }
  return uVar5 | uVar2 & 0xffc00000;
}


