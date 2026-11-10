/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012dc70; name: FUN_0012dc70
 */


byte * FUN_0012dc70(byte *param_1,double *param_2)

{
  double dVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  char *pcVar6;
  size_t sVar7;
  lconv *plVar8;
  byte *pbVar10;
  byte *pbVar9;
  undefined1 uVar11;
  ulong uVar12;
  double dVar13;
  int iVar14;
  byte *local_118 [26];
  byte **local_48;
  
  pbVar9 = param_1;
  do {
    pbVar10 = pbVar9;
    pbVar9 = pbVar10 + 1;
    bVar3 = *pbVar10;
  } while (((byte)(&DAT_03cb5f2b)[bVar3] >> 3 & 1) != 0);
  pbVar5 = pbVar9;
  if (bVar3 != 0x2d) {
    pbVar5 = pbVar10;
  }
  iVar14 = 8;
  if (bVar3 != 0x2d) {
    iVar14 = 7;
  }
  if (bVar3 != 0x2b) {
    pbVar9 = pbVar5;
  }
  uVar12 = (ulong)*pbVar9;
  iVar2 = 7;
  if (bVar3 != 0x2b) {
    iVar2 = iVar14;
  }
  if ((uVar12 == 0x30) && ((pbVar9[1] | 0x20) == 0x78)) {
    pbVar9 = pbVar9 + 2;
    uVar12 = (ulong)*pbVar9;
    bVar4 = (&DAT_03cb5f2b)[uVar12];
    if ((bVar4 >> 4 & 1) == 0) goto LAB_0012dd54;
    dVar13 = 0.0;
    do {
      iVar14 = ((uint)uVar12 | 0x20) - 0x57;
      if ((bVar4 & 2) != 0) {
        iVar14 = (uint)uVar12 - 0x30;
      }
      dVar13 = (double)((long)dVar13 * 0x10 + (long)iVar14);
      pbVar9 = pbVar9 + 1;
      uVar12 = (ulong)*pbVar9;
      bVar4 = (&DAT_03cb5f2b)[uVar12];
    } while ((bVar4 >> 4 & 1) != 0);
LAB_0012dd40:
    bVar4 = 1;
  }
  else {
    if (((byte)(&DAT_03cb5f2b)[uVar12] >> 1 & 1) != 0) {
      dVar13 = 0.0;
      do {
        iVar14 = (int)uVar12 + -0x30;
        if ((0xccccccccccccccb < (ulong)dVar13) &&
           ((dVar13 != 5.1488004017107686e-247 || (iVar2 < iVar14)))) goto LAB_0012dde8;
        pbVar9 = pbVar9 + 1;
        uVar12 = (ulong)*pbVar9;
        dVar13 = (double)((long)dVar13 * 10 + (long)iVar14);
      } while (((byte)(&DAT_03cb5f2b)[uVar12] >> 1 & 1) != 0);
      goto LAB_0012dd40;
    }
LAB_0012dd54:
    bVar4 = 0;
    dVar13 = 0.0;
  }
  while (((byte)(&DAT_03cb5f2b)[uVar12] >> 3 & 1) != 0) {
    pbVar9 = pbVar9 + 1;
    uVar12 = (ulong)*pbVar9;
  }
  if (!(bool)(bVar4 ^ 1 | (int)uVar12 != 0)) {
    dVar1 = (double)-(long)dVar13;
    if (bVar3 != 0x2d) {
      dVar1 = dVar13;
    }
    *param_2 = dVar1;
    uVar11 = 3;
    local_118[0] = pbVar9;
    goto LAB_0012df0c;
  }
LAB_0012dde8:
  pbVar9 = (byte *)strpbrk((char *)param_1,".xXnN");
  if ((pbVar9 != (byte *)0x0) && ((*pbVar9 & 0xdf) == 0x4e)) {
    return (byte *)0x0;
  }
  dVar13 = strtod((char *)param_1,(char **)local_118);
  if (local_118[0] == param_1) {
LAB_0012de4c:
    pcVar6 = strchr((char *)param_1,0x2e);
    if ((pcVar6 == (char *)0x0) || (sVar7 = strlen((char *)param_1), 200 < sVar7)) {
      return (byte *)0x0;
    }
    strcpy((char *)local_118,(char *)param_1);
    plVar8 = localeconv();
    *(char *)((long)local_118 + ((long)pcVar6 - (long)param_1)) = *plVar8->decimal_point;
    dVar13 = strtod((char *)local_118,(char **)&local_48);
    if (local_48 == local_118) {
      local_48 = (byte **)0x0;
    }
    else {
      uVar12 = (ulong)*(byte *)local_48;
      bVar3 = (&DAT_03cb5f2b)[uVar12];
      while ((bVar3 >> 3 & 1) != 0) {
        local_48 = (byte **)((long)local_48 + 1);
        uVar12 = (ulong)*(byte *)local_48;
        bVar3 = (&DAT_03cb5f2b)[uVar12];
      }
      if ((int)uVar12 != 0) {
        local_48 = (byte **)0x0;
      }
    }
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (local_48 == (byte **)0x0) {
      return (byte *)0x0;
    }
    local_118[0] = param_1 + ((long)local_48 - (long)local_118);
  }
  else {
    uVar12 = (ulong)*local_118[0];
    if (((byte)(&DAT_03cb5f2b)[uVar12] >> 3 & 1) != 0) {
      do {
        local_118[0] = local_118[0] + 1;
        uVar12 = (ulong)*local_118[0];
      } while (((byte)(&DAT_03cb5f2b)[uVar12] >> 3 & 1) != 0);
    }
    if ((int)uVar12 != 0) goto LAB_0012de4c;
  }
  uVar11 = 0x13;
  *param_2 = dVar13;
LAB_0012df0c:
  *(undefined1 *)(param_2 + 1) = uVar11;
  return local_118[0] + (1 - (long)param_1);
}


