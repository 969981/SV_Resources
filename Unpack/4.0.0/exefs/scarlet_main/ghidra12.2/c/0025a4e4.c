/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025a4e4; name: FUN_0025a4e4
 */


long * FUN_0025a4e4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  long *plVar7;
  byte *pbVar8;
  long *plVar9;
  void *__s1;
  long *plVar10;
  byte *pbVar11;
  
  plVar9 = (long *)(param_1 + 8);
  plVar10 = (long *)*plVar9;
  if (plVar10 == (long *)0x0) {
    *param_2 = plVar9;
    return plVar9;
  }
  pbVar11 = *(byte **)*param_3;
  bVar4 = *pbVar11;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar11 + 8);
  }
  if ((bVar4 & 1) != 0) {
    do {
      pbVar6 = *(byte **)plVar10[4];
      bVar4 = *pbVar6;
      uVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar6 + 8);
      }
      sVar3 = uVar2;
      if (uVar1 <= uVar2) {
        sVar3 = uVar1;
      }
      if (sVar3 == 0) {
        if (uVar1 < uVar2) goto LAB_0025a530;
LAB_0025a5c4:
        if (uVar1 <= uVar2) goto LAB_0025a680;
LAB_0025a5cc:
        plVar9 = plVar10 + 1;
        plVar7 = (long *)*plVar9;
        if (plVar7 == (long *)0x0) goto LAB_0025a680;
      }
      else {
        pbVar8 = *(byte **)(pbVar6 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar8 = pbVar6 + 1;
        }
        __s1 = *(void **)(pbVar11 + 0x10);
        iVar5 = memcmp(__s1,pbVar8,sVar3);
        if (iVar5 == 0) {
          if (uVar2 <= uVar1) goto LAB_0025a5a8;
        }
        else if (-1 < iVar5) {
LAB_0025a5a8:
          iVar5 = memcmp(pbVar8,__s1,sVar3);
          if (iVar5 == 0) goto LAB_0025a5c4;
          if (iVar5 < 0) goto LAB_0025a5cc;
          goto LAB_0025a680;
        }
LAB_0025a530:
        plVar7 = (long *)*plVar10;
        plVar9 = plVar10;
        if (plVar7 == (long *)0x0) goto LAB_0025a690;
      }
      plVar10 = plVar7;
    } while( true );
  }
  do {
    pbVar6 = *(byte **)plVar10[4];
    bVar4 = *pbVar6;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(pbVar6 + 8);
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 == 0) {
      if (uVar1 < uVar2) goto LAB_0025a5dc;
LAB_0025a66c:
      if (uVar1 <= uVar2) {
LAB_0025a680:
        *param_2 = plVar10;
        return plVar9;
      }
LAB_0025a674:
      plVar9 = plVar10 + 1;
      plVar7 = (long *)*plVar9;
      if (plVar7 == (long *)0x0) goto LAB_0025a680;
    }
    else {
      pbVar8 = *(byte **)(pbVar6 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar8 = pbVar6 + 1;
      }
      iVar5 = memcmp(pbVar11 + 1,pbVar8,sVar3);
      if (iVar5 == 0) {
        if (uVar2 <= uVar1) goto LAB_0025a650;
      }
      else if (-1 < iVar5) {
LAB_0025a650:
        iVar5 = memcmp(pbVar8,pbVar11 + 1,sVar3);
        if (iVar5 == 0) goto LAB_0025a66c;
        if (iVar5 < 0) goto LAB_0025a674;
        goto LAB_0025a680;
      }
LAB_0025a5dc:
      plVar7 = (long *)*plVar10;
      plVar9 = plVar10;
      if (plVar7 == (long *)0x0) {
LAB_0025a690:
        *param_2 = plVar10;
        return plVar10;
      }
    }
    plVar10 = plVar7;
  } while( true );
}


