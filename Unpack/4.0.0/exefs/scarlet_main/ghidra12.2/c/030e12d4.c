/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e12d4; name: FUN_030e12d4
 */


void FUN_030e12d4(int *param_1,long param_2,long param_3,int *param_4,undefined8 *param_5)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  short *psVar17;
  int local_70 [2];
  int local_68 [2];
  
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar8 = *(long *)(param_3 + 0x20);
    lVar13 = lVar8;
  }
  else {
    lVar13 = FUN_0307d71c();
    lVar8 = *(long *)(param_3 + 0x20);
  }
  iVar3 = *(int *)(lVar8 + 0x30);
  iVar4 = *(int *)(lVar8 + 0x20);
  lVar2 = *(long *)(lVar13 + 0xd0) + (long)*param_4 * 0x10;
  psVar17 = (short *)(lVar2 + 10);
  sVar6 = *psVar17;
  iVar5 = *(int *)(lVar8 + 0xe8);
  FUN_0308fb68(param_3,sVar6 + 1);
  iVar16 = (int)sVar6;
  if (sVar6 == 0) {
    iVar14 = iVar5;
  }
  else {
    if (0 < iVar16) {
      iVar14 = *(int *)(lVar2 + 4);
      uVar15 = *(undefined8 *)(param_2 + 0x18);
      iVar7 = iVar16;
      do {
        iVar11 = iVar7 + -1;
        local_68[0] = iVar5 + iVar11;
        local_70[0] = (iVar14 - iVar3) + iVar11;
        FUN_030e9e20(uVar15,param_3,local_68,local_70);
        bVar1 = 1 < iVar7;
        iVar7 = iVar11;
      } while (bVar1);
    }
    iVar14 = iVar5 + iVar16;
  }
  puVar10 = (undefined4 *)*param_5;
  puVar9 = (undefined4 *)(*(long *)(lVar13 + 0xe0) + (long)iVar14 * 0x14);
  *puVar9 = *puVar10;
  puVar9[1] = puVar10[1];
  uVar15 = *(undefined8 *)(puVar10 + 2);
  *(undefined2 *)(puVar9 + 4) = *(undefined2 *)(puVar10 + 4);
  *(undefined8 *)(puVar9 + 2) = uVar15;
  *(undefined2 *)((long)puVar9 + 0x12) = *(undefined2 *)((long)puVar10 + 0x12);
  memcpy((void *)(*(long *)(lVar13 + 0x150) + (long)(*(int *)(lVar13 + 0x60) * iVar14) * 4),
         (void *)param_5[1],(long)*(int *)(lVar13 + 0x60) << 2);
  *(undefined2 *)(*(long *)(lVar13 + 0x110) + (long)iVar14 * 2) = *(undefined2 *)(param_5 + 3);
  *(int *)(lVar2 + 4) = iVar5 + iVar3;
  *psVar17 = *psVar17 + 1;
  *(int *)(lVar13 + 0x164) = *(int *)(lVar13 + 0x164) + iVar16;
  if (*(int *)(param_3 + 0x40) != 0) {
    iVar5 = *param_4;
    lVar13 = (long)*(int *)(param_3 + 0x40) * 0x18;
    plVar12 = *(long **)(param_3 + 0x38);
    do {
      lVar8 = *plVar12;
      if (lVar8 != 0) {
        if ((char)plVar12[2] != '\x01') {
          lVar8 = FUN_03065a74(plVar12);
        }
        local_68[0] = iVar5 + iVar4;
        FUN_03077488(lVar8,param_3,local_68);
      }
      plVar12 = plVar12 + 3;
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != 0);
  }
  *param_1 = iVar14 + iVar3;
  return;
}


