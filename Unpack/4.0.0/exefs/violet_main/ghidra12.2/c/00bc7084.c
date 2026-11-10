/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bc7084; name: FUN_00bc7084
 */


/* WARNING: Removing unreachable block (ram,0x00bc70f8) */

undefined8 FUN_00bc7084(long param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  long lVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  
  puVar9 = PTR_DAT_047dabb0;
  lVar8 = tpidr_el0;
LAB_00bc70c8:
  while (pbVar3 = (byte *)*param_2, (byte *)param_2[1] <= pbVar3) {
    uVar12 = 0;
LAB_00bc7100:
    iVar11 = FUN_00c096d0(param_2,uVar12);
    bVar10 = iVar11 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar11;
    uVar12 = (ulong)CONCAT14(bVar10,iVar11);
    if (bVar10) goto LAB_00bc7124;
LAB_00bc71a4:
    if (((uint)uVar12 == 0) || (((uint)uVar12 & 7) == 4)) {
      return 1;
    }
    uVar16 = *(ulong *)(param_1 + 8);
    if ((uVar16 & 1) == 0) {
      uVar16 = FUN_00b7714c((ulong *)(param_1 + 8));
    }
    else {
      uVar16 = uVar16 & 0xfffffffffffffffe;
    }
    uVar12 = FUN_00c01b50(param_2,uVar12 & 0xffffffff,uVar16);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  bVar7 = *pbVar3;
  uVar12 = (ulong)(uint)bVar7;
  if ((char)bVar7 < '\x01') goto LAB_00bc7100;
  *(uint *)(param_2 + 4) = (uint)bVar7;
  *param_2 = (ulong)(pbVar3 + 1);
LAB_00bc7124:
  uVar14 = (uint)(uVar12 >> 3) & 0x1fffffff;
  if (uVar14 == 2) {
    if ((int)uVar12 != 0x12) goto LAB_00bc71a4;
  }
  else {
    if ((uVar14 != 1) || ((int)uVar12 != 10)) goto LAB_00bc71a4;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    lVar13 = *(long *)(param_1 + 0x18);
    if (lVar13 == *(long *)puVar9) {
      FUN_00b6eb88((long *)(param_1 + 0x18),*(long *)puVar9);
      lVar13 = *(long *)(param_1 + 0x18);
    }
    uVar12 = FUN_00c0d824(param_2,lVar13);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    pcVar4 = (char *)*param_2;
    if (((char *)param_2[1] <= pcVar4) || (*pcVar4 != '\x12')) goto LAB_00bc70c8;
    *param_2 = (ulong)(pcVar4 + 1);
  }
  puVar20 = *(undefined8 **)(param_1 + 0x20);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if (puVar20 == (undefined8 *)0x0) {
    plVar17 = *(long **)(lVar8 + 0x30);
    if (plVar17 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar17 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    puVar20 = (undefined8 *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
    puVar20[2] = 0;
    puVar20[3] = 0;
    puVar20[4] = 0;
    puVar20[9] = 0;
    *puVar20 = &PTR_FUN_0455b120;
    puVar20[1] = puVar20 + 2;
    puVar20[5] = 0;
    puVar20[6] = 0;
    puVar20[7] = 0;
    puVar20[8] = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar20;
  }
  pbVar3 = (byte *)*param_2;
  pbVar18 = (byte *)param_2[1];
  if ((pbVar3 < pbVar18) && (-1 < (char)*pbVar3)) {
    pbVar19 = pbVar3 + 1;
    uVar14 = (uint)*pbVar3;
    *param_2 = (ulong)pbVar19;
  }
  else {
    uVar14 = FUN_00c0954c(param_2);
    if ((int)uVar14 < 0) {
      return 0;
    }
    pbVar19 = (byte *)*param_2;
    pbVar18 = (byte *)param_2[1];
  }
  iVar5 = (int)param_2[3];
  iVar2 = (int)param_2[5];
  iVar15 = *(int *)((long)param_2 + 0x2c);
  param_2[1] = (ulong)(pbVar18 + iVar15);
  iVar11 = (iVar5 - iVar15) + ((int)pbVar19 - (int)pbVar18);
  iVar1 = 0x7fffffff;
  if ((int)uVar14 <= 0x7fffffff - iVar11) {
    iVar1 = iVar11 + uVar14;
  }
  iVar11 = iVar2;
  if (iVar1 <= iVar2) {
    iVar11 = iVar1;
  }
  *(int *)(param_2 + 5) = iVar11;
  iVar1 = (int)param_2[6];
  if (iVar11 <= (int)param_2[6]) {
    iVar1 = iVar11;
  }
  iVar11 = iVar5 - iVar1;
  if (iVar11 == 0 || iVar5 < iVar1) {
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
  }
  else {
    *(int *)((long)param_2 + 0x2c) = iVar11;
    param_2[1] = (long)(pbVar18 + iVar15) - (long)iVar11;
  }
  uVar12 = param_2[7];
  *(int *)(param_2 + 7) = (int)uVar12 + -1;
  if ((int)uVar12 < 1) {
    return 0;
  }
  uVar12 = FUN_00bd471c(puVar20,param_2);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  *(int *)(param_2 + 5) = iVar2;
  cVar6 = *(char *)((long)param_2 + 0x24);
  uVar12 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
  iVar1 = (int)param_2[3];
  iVar11 = (int)param_2[6];
  if (iVar2 <= (int)param_2[6]) {
    iVar11 = iVar2;
  }
  iVar15 = iVar1 - iVar11;
  param_2[1] = uVar12;
  if (iVar15 == 0 || iVar1 < iVar11) {
    iVar15 = 0;
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
  }
  else {
    uVar12 = uVar12 - (long)iVar15;
    *(int *)((long)param_2 + 0x2c) = iVar15;
    param_2[1] = uVar12;
  }
  *(undefined1 *)((long)param_2 + 0x24) = 0;
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if (cVar6 == '\0') {
    return 0;
  }
  if ((*param_2 == uVar12) && ((iVar1 == iVar2 || (iVar15 != 0)))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00bc70c8;
}


