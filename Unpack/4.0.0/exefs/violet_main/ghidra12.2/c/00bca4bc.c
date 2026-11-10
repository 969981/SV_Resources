/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bca4bc; name: FUN_00bca4bc
 */


/* WARNING: Removing unreachable block (ram,0x00bca530) */

undefined8 FUN_00bca4bc(long param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  ulong uVar16;
  long *plVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  
  puVar8 = PTR_DAT_047dabb0;
  lVar7 = tpidr_el0;
LAB_00bca500:
  while (pbVar18 = (byte *)*param_2, (byte *)param_2[1] <= pbVar18) {
    uVar11 = 0;
LAB_00bca538:
    iVar10 = FUN_00c096d0(param_2,uVar11);
    bVar9 = iVar10 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar10;
    uVar11 = (ulong)CONCAT14(bVar9,iVar10);
    if (bVar9) goto LAB_00bca55c;
LAB_00bca610:
    if (((uint)uVar11 == 0) || (((uint)uVar11 & 7) == 4)) {
      return 1;
    }
    uVar16 = *(ulong *)(param_1 + 8);
    if ((uVar16 & 1) == 0) {
      uVar16 = FUN_00b7714c((ulong *)(param_1 + 8));
    }
    else {
      uVar16 = uVar16 & 0xfffffffffffffffe;
    }
    uVar11 = FUN_00c01b50(param_2,uVar11 & 0xffffffff,uVar16);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  bVar6 = *pbVar18;
  uVar11 = (ulong)(uint)bVar6;
  if ((char)bVar6 < '\x01') goto LAB_00bca538;
  *(uint *)(param_2 + 4) = (uint)bVar6;
  *param_2 = (ulong)(pbVar18 + 1);
LAB_00bca55c:
  uVar13 = (uint)(uVar11 >> 3) & 0x1fffffff;
  iVar10 = (int)uVar11;
  if (uVar13 == 3) {
    if (iVar10 != 0x1a) goto LAB_00bca610;
  }
  else {
    if (uVar13 == 2) {
      if (iVar10 != 0x10) goto LAB_00bca610;
      pbVar18 = (byte *)*param_2;
      pbVar15 = (byte *)param_2[1];
    }
    else {
      if ((uVar13 != 1) || (iVar10 != 10)) goto LAB_00bca610;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      lVar12 = *(long *)(param_1 + 0x18);
      if (lVar12 == *(long *)puVar8) {
        FUN_00b6eb88((long *)(param_1 + 0x18),*(long *)puVar8);
        lVar12 = *(long *)(param_1 + 0x18);
      }
      uVar11 = FUN_00c0d824(param_2,lVar12);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      pbVar18 = (byte *)*param_2;
      pbVar15 = (byte *)param_2[1];
      if ((pbVar15 <= pbVar18) || (*pbVar18 != 0x10)) goto LAB_00bca500;
      pbVar18 = pbVar18 + 1;
      *param_2 = (ulong)pbVar18;
    }
    if (pbVar18 < pbVar15) {
      uVar11 = (ulong)*pbVar18;
      if ((char)*pbVar18 < '\0') goto LAB_00bca654;
      *param_2 = (ulong)(pbVar18 + 1);
    }
    else {
      uVar11 = 0;
LAB_00bca654:
      uVar11 = FUN_00c0944c(param_2,uVar11);
      if ((long)uVar11 < 0) {
        return 0;
      }
    }
    *(int *)(param_1 + 0x28) = (int)uVar11;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    pcVar3 = (char *)*param_2;
    if (((char *)param_2[1] <= pcVar3) || (*pcVar3 != '\x1a')) goto LAB_00bca500;
    *param_2 = (ulong)(pcVar3 + 1);
  }
  puVar20 = *(undefined8 **)(param_1 + 0x20);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  if (puVar20 == (undefined8 *)0x0) {
    plVar17 = *(long **)(lVar7 + 0x30);
    if (plVar17 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar17 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    puVar20 = (undefined8 *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
    puVar20[3] = 0;
    puVar20[4] = 0;
    puVar20[2] = 0;
    *puVar20 = &PTR_FUN_0455b2c0;
    puVar20[1] = puVar20 + 2;
    puVar20[9] = 0;
    *(undefined1 *)(puVar20 + 10) = 0;
    puVar20[5] = 0;
    puVar20[6] = 0;
    puVar20[7] = 0;
    puVar20[8] = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar20;
  }
  pbVar18 = (byte *)*param_2;
  pbVar15 = (byte *)param_2[1];
  if ((pbVar18 < pbVar15) && (-1 < (char)*pbVar18)) {
    pbVar19 = pbVar18 + 1;
    uVar13 = (uint)*pbVar18;
    *param_2 = (ulong)pbVar19;
  }
  else {
    uVar13 = FUN_00c0954c(param_2);
    if ((int)uVar13 < 0) {
      return 0;
    }
    pbVar19 = (byte *)*param_2;
    pbVar15 = (byte *)param_2[1];
  }
  iVar4 = (int)param_2[3];
  iVar2 = (int)param_2[5];
  iVar14 = *(int *)((long)param_2 + 0x2c);
  param_2[1] = (ulong)(pbVar15 + iVar14);
  iVar10 = (iVar4 - iVar14) + ((int)pbVar19 - (int)pbVar15);
  iVar1 = 0x7fffffff;
  if ((int)uVar13 <= 0x7fffffff - iVar10) {
    iVar1 = iVar10 + uVar13;
  }
  iVar10 = iVar2;
  if (iVar1 <= iVar2) {
    iVar10 = iVar1;
  }
  *(int *)(param_2 + 5) = iVar10;
  iVar1 = (int)param_2[6];
  if (iVar10 <= (int)param_2[6]) {
    iVar1 = iVar10;
  }
  iVar10 = iVar4 - iVar1;
  if (iVar10 == 0 || iVar4 < iVar1) {
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
  }
  else {
    *(int *)((long)param_2 + 0x2c) = iVar10;
    param_2[1] = (long)(pbVar15 + iVar14) - (long)iVar10;
  }
  uVar11 = param_2[7];
  *(int *)(param_2 + 7) = (int)uVar11 + -1;
  if ((int)uVar11 < 1) {
    return 0;
  }
  uVar11 = FUN_00bd650c(puVar20,param_2);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  *(int *)(param_2 + 5) = iVar2;
  cVar5 = *(char *)((long)param_2 + 0x24);
  uVar11 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
  iVar1 = (int)param_2[3];
  iVar10 = (int)param_2[6];
  if (iVar2 <= (int)param_2[6]) {
    iVar10 = iVar2;
  }
  iVar14 = iVar1 - iVar10;
  param_2[1] = uVar11;
  if (iVar14 == 0 || iVar1 < iVar10) {
    iVar14 = 0;
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
  }
  else {
    uVar11 = uVar11 - (long)iVar14;
    *(int *)((long)param_2 + 0x2c) = iVar14;
    param_2[1] = uVar11;
  }
  *(undefined1 *)((long)param_2 + 0x24) = 0;
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if (cVar5 == '\0') {
    return 0;
  }
  if ((*param_2 == uVar11) && ((iVar1 == iVar2 || (iVar14 != 0)))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00bca500;
}


