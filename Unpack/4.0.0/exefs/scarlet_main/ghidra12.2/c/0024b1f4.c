/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024b1f4; name: FUN_0024b1f4
 */


long * FUN_0024b1f4(long *param_1,long *param_2,long *param_3,byte *param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  long *plVar9;
  void *pvVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  plVar9 = param_1 + 1;
  if (plVar9 != param_2) {
    bVar4 = *(byte *)(param_2 + 4);
    bVar5 = *param_4;
    uVar2 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar2 = *(ulong *)(param_4 + 8);
    }
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = param_2[5];
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 == 0) {
LAB_0024b2ac:
      if (uVar2 <= uVar1) goto LAB_0024b280;
    }
    else {
      pvVar10 = (void *)param_2[6];
      if ((bVar4 & 1) == 0) {
        pvVar10 = (void *)((long)param_2 + 0x21);
      }
      pbVar8 = *(byte **)(param_4 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar8 = param_4 + 1;
      }
      iVar7 = memcmp(pvVar10,pbVar8,sVar3);
      if (iVar7 == 0) goto LAB_0024b2ac;
      if (-1 < iVar7) goto LAB_0024b280;
    }
    plVar13 = (long *)*plVar9;
    if (plVar13 != (long *)0x0) {
      pbVar8 = *(byte **)(param_4 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar8 = param_4 + 1;
      }
      do {
        bVar4 = *(byte *)(plVar13 + 4);
        uVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar1 = plVar13[5];
        }
        sVar3 = uVar2;
        if (uVar1 <= uVar2) {
          sVar3 = uVar1;
        }
        if (sVar3 == 0) {
LAB_0024b31c:
          if (uVar1 < uVar2) goto LAB_0024b324;
LAB_0024b2cc:
          plVar9 = (long *)*plVar13;
          if (plVar9 == (long *)0x0) {
            *param_3 = (long)plVar13;
            return plVar13;
          }
        }
        else {
          pvVar10 = (void *)plVar13[6];
          if ((bVar4 & 1) == 0) {
            pvVar10 = (void *)((long)plVar13 + 0x21);
          }
          iVar7 = memcmp(pvVar10,pbVar8,sVar3);
          if (iVar7 == 0) goto LAB_0024b31c;
          if (-1 < iVar7) goto LAB_0024b2cc;
LAB_0024b324:
          plVar9 = (long *)plVar13[1];
          if (plVar9 == (long *)0x0) {
            *param_3 = (long)plVar13;
            return plVar13 + 1;
          }
        }
        plVar13 = plVar9;
      } while( true );
    }
    goto LAB_0024b444;
  }
LAB_0024b280:
  plVar11 = (long *)*param_2;
  plVar13 = param_2;
  if ((long *)*param_1 == param_2) goto LAB_0024b3ac;
  if (plVar11 == (long *)0x0) {
    plVar12 = param_2;
    do {
      plVar13 = (long *)plVar12[2];
      bVar6 = (long *)*plVar13 == plVar12;
      plVar12 = plVar13;
    } while (bVar6);
  }
  else {
    plVar12 = plVar11;
    do {
      plVar13 = plVar12;
      plVar12 = (long *)plVar13[1];
    } while ((long *)plVar13[1] != (long *)0x0);
  }
  bVar4 = *(byte *)(plVar13 + 4);
  bVar5 = *param_4;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = plVar13[5];
  }
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = *(ulong *)(param_4 + 8);
  }
  sVar3 = uVar2;
  if (uVar1 <= uVar2) {
    sVar3 = uVar1;
  }
  if (sVar3 == 0) {
LAB_0024b3bc:
    if (uVar2 <= uVar1) {
LAB_0024b3ac:
      if (plVar11 != (long *)0x0) {
        *param_3 = (long)plVar13;
        return plVar13 + 1;
      }
LAB_0024b43c:
      *param_3 = (long)param_2;
      return param_2;
    }
  }
  else {
    pbVar8 = *(byte **)(param_4 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar8 = param_4 + 1;
    }
    pvVar10 = (void *)plVar13[6];
    if ((bVar4 & 1) == 0) {
      pvVar10 = (void *)((long)plVar13 + 0x21);
    }
    iVar7 = memcmp(pbVar8,pvVar10,sVar3);
    if (iVar7 == 0) goto LAB_0024b3bc;
    if (-1 < iVar7) goto LAB_0024b3ac;
  }
  param_2 = (long *)*plVar9;
  if (param_2 != (long *)0x0) {
    pbVar8 = *(byte **)(param_4 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar8 = param_4 + 1;
    }
    do {
      bVar4 = *(byte *)(param_2 + 4);
      uVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar2 = param_2[5];
      }
      sVar3 = uVar2;
      if (uVar1 <= uVar2) {
        sVar3 = uVar1;
      }
      if (sVar3 == 0) {
LAB_0024b42c:
        if (uVar1 < uVar2) goto LAB_0024b434;
LAB_0024b3dc:
        plVar9 = (long *)param_2[1];
        if (plVar9 == (long *)0x0) {
          *param_3 = (long)param_2;
          return param_2 + 1;
        }
      }
      else {
        pvVar10 = (void *)param_2[6];
        if ((bVar4 & 1) == 0) {
          pvVar10 = (void *)((long)param_2 + 0x21);
        }
        iVar7 = memcmp(pbVar8,pvVar10,sVar3);
        if (iVar7 == 0) goto LAB_0024b42c;
        if (-1 < iVar7) goto LAB_0024b3dc;
LAB_0024b434:
        plVar9 = (long *)*param_2;
        if (plVar9 == (long *)0x0) goto LAB_0024b43c;
      }
      param_2 = plVar9;
    } while( true );
  }
LAB_0024b444:
  *param_3 = (long)plVar9;
  return plVar9;
}


