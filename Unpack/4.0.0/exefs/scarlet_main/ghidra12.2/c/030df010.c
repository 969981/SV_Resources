/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030df010; name: FUN_030df010
 */


bool FUN_030df010(long param_1,long param_2,int *param_3,short *param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int local_70 [2];
  short local_68 [4];
  int local_60 [2];
  short local_58 [4];
  
  lVar9 = *(long *)(param_2 + 0x20);
  iVar18 = *param_3;
  lVar12 = (long)iVar18;
  if (*(int *)(lVar9 + 0x108) == 0) {
    bVar7 = true;
  }
  else {
    bVar7 = (*(byte *)(*(long *)(lVar9 + 0x100) + lVar12) & 1) == 0;
  }
  iVar17 = *(int *)(lVar9 + 0x20);
  iVar14 = iVar18 - iVar17;
  if (iVar18 < iVar17) {
    lVar10 = *(long *)(lVar9 + 0x18);
    iVar14 = iVar18;
    if (*(int *)(lVar9 + 0x98) != 0) {
      iVar14 = *(int *)(*(long *)(lVar9 + 0x90) + lVar12 * 4);
    }
    iVar6 = iVar18;
    if (iVar14 == -1) goto joined_r0x030df184;
    plVar11 = (long *)(lVar9 + 0xb0);
  }
  else {
    plVar11 = (long *)(lVar9 + 0xd0);
  }
  lVar10 = *plVar11;
  iVar6 = iVar14;
joined_r0x030df184:
  if (!bVar7) {
    uVar3 = *(uint *)(*(long *)(lVar9 + 0x168) + lVar12 * 4);
    uVar13 = (ulong)uVar3;
    if (-1 < (int)uVar3) {
      uVar16 = *(uint *)(lVar9 + 0x170);
      lVar15 = (long)(int)uVar16;
      lVar12 = lVar10 + (long)iVar6 * 0x10;
      if ((int)uVar16 <= (int)(uVar3 + 1)) {
        uVar16 = uVar3 + 1;
      }
      do {
        uVar2 = uVar13 + 1;
        if (lVar15 <= (long)uVar2) goto LAB_030df0f0;
        lVar1 = uVar13 * 4;
        uVar13 = uVar2;
      } while (*(int *)(*(long *)(lVar9 + 0x168) + 4 + lVar1) == iVar18);
      uVar16 = (uint)uVar2;
LAB_030df0f0:
      if (uVar3 != uVar16) {
        iVar17 = uVar3 - iVar17;
        iVar18 = uVar16 - uVar3;
        bVar7 = false;
        do {
          bVar5 = bVar7;
          sVar4 = *param_4;
          if (sVar4 < *(short *)(lVar10 + (long)iVar6 * 0x10 + 8)) {
            local_60[0] = iVar17;
            local_58[0] = sVar4;
            cVar8 = FUN_030efb44(*(undefined8 *)(param_1 + 0x18),param_2,lVar12,local_58,local_60);
          }
          else {
            local_70[0] = iVar17;
            local_68[0] = sVar4;
            cVar8 = FUN_030f0184(*(undefined8 *)(param_1 + 0x18),param_2,lVar12,local_68,local_70);
          }
          iVar17 = iVar17 + 1;
          iVar18 = iVar18 + -1;
          bVar7 = bVar5 || cVar8 != '\0';
        } while (iVar18 != 0);
        return bVar5 || cVar8 != '\0';
      }
    }
  }
  return false;
}


