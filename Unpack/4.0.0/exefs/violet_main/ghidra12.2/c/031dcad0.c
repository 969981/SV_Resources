/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031dcad0; name: FUN_031dcad0
 */


void FUN_031dcad0(ulong *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  char cVar3;
  ulong *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  ulong *puVar10;
  ulong uVar11;
  short *psVar12;
  long lVar13;
  int iVar14;
  short *psVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  byte bVar20;
  byte bVar21;
  ulong *local_80;
  ulong *local_78;
  ulong *local_70;
  undefined8 *local_68 [2];
  ulong local_58;
  
  uVar8 = (uint)*param_1;
  bVar20 = (byte)*param_1;
  if (((uVar8 >> 6 & 1) == 0) ||
     (bVar21 = POPCOUNT(bVar20 & 0x3f), puVar10 = param_1 + (ulong)bVar21 + 2,
     (undefined *)param_1[(ulong)bVar21 + 2] != PTR_LAB_047e5bb0)) {
    local_80 = (ulong *)0x0;
    puVar10 = local_80;
  }
  else {
    *puVar10 = (ulong)PTR_LAB_047e5bb8;
  }
  if (((uVar8 >> 7 & 1) == 0) ||
     (bVar20 = POPCOUNT(bVar20 & 0x7f), (undefined *)param_1[(ulong)bVar20 + 2] != PTR_LAB_047e5bc0)
     ) {
    local_78 = (ulong *)0x0;
    puVar4 = local_78;
  }
  else {
    param_1[(ulong)bVar20 + 2] = (ulong)PTR_LAB_047e5bc8;
    puVar4 = param_1 + (ulong)bVar20 + 2;
  }
  if (((uVar8 >> 9 & 1) == 0) ||
     (uVar16 = CONCAT44(uVar8,uVar8) & 0x1ff000001ff,
     bVar20 = POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)),
     local_70 = param_1 + (ulong)bVar20 + 2,
     (undefined *)param_1[(ulong)bVar20 + 2] != PTR_LAB_047e5bd0)) {
    local_70 = (ulong *)0x0;
    if (puVar10 == (ulong *)0x0 && puVar4 == (ulong *)0x0) {
      return;
    }
  }
  else {
    *local_70 = (ulong)PTR_LAB_047e5bd8;
  }
  puVar6 = local_70;
  iVar9 = (int)param_2[1];
  if (0 < iVar9) {
    uVar16 = (ulong)(iVar9 - 1);
    iVar14 = iVar9;
    do {
      if (*(ulong **)(*param_2 + uVar16 * 8) == param_1) {
        if (iVar14 != 0) {
          return;
        }
        break;
      }
      iVar14 = iVar14 + -1;
      bVar1 = 0 < (long)uVar16;
      uVar16 = uVar16 - 1;
    } while (bVar1);
  }
  lVar13 = (long)iVar9;
  local_80 = puVar10;
  local_78 = puVar4;
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar9) {
    FUN_031dee78(param_2,PTR_PTR_047d1a50 + 0x20,lVar13 + 1);
    iVar9 = (int)param_2[1];
  }
  *(ulong **)(*param_2 + (long)iVar9 * 8) = param_1;
  *(int *)(param_2 + 1) = (int)(lVar13 + 1);
  puVar5 = PTR_DAT_047e5be0;
  puVar17 = param_1;
  while (FUN_031dbdbc(local_68,puVar17,puVar5), local_68[0] == (undefined8 *)0x0) {
    if ((local_58 & 1) != 0) {
      plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
      plVar2 = plVar7 + 1;
      do {
        lVar13 = *plVar2;
        cVar3 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar1) {
          *(int *)plVar2 = (int)lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar13 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    puVar17 = (ulong *)puVar17[1];
    if (puVar17 == (ulong *)0x0) goto code_r0x031dccf4;
  }
  if ((local_58 & 1) != 0) {
    plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
    plVar2 = plVar7 + 1;
    do {
      lVar13 = *plVar2;
      cVar3 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar1) {
        *(int *)plVar2 = (int)lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar13 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  puVar10 = param_1;
  do {
    uVar8 = (uint)*puVar10;
    if ((uVar8 >> 0xf & 1) != 0) {
      uVar16 = CONCAT44(uVar8,uVar8) & 0x7fff00007fff;
      uVar16 = puVar10[(ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8))) + 2];
      goto LAB_031dcdf4;
    }
  } while (((*puVar10 & 9) == 0) && (puVar10 = (ulong *)puVar10[1], puVar10 != (ulong *)0x0));
  uVar16 = 0;
LAB_031dcdf4:
  uVar11 = (ulong)*(ushort *)(uVar16 + 8);
  if (uVar11 != 0) {
    uVar18 = 0;
    puVar19 = (undefined8 *)(uVar16 + 0x18);
    do {
      if (*(char *)*puVar19 == 't') {
        FUN_031dcad0(puVar19[-1],param_2);
        uVar11 = (ulong)*(ushort *)(uVar16 + 8);
      }
      uVar18 = uVar18 + 1;
      puVar19 = puVar19 + 2;
    } while (uVar18 < uVar11);
  }
  (*(code *)*local_68[0])(param_1);
  goto LAB_031dceb0;
code_r0x031dccf4:
  puVar17 = param_1;
  if ((*param_1 & 1) == 0) {
    do {
      puVar17 = (ulong *)puVar17[1];
    } while ((*puVar17 & 1) == 0);
  }
  if ((param_1 == (ulong *)0x0) || ((puVar17[2] & 0x1f) != 7)) {
    if (puVar10 != (ulong *)0x0) {
      *puVar10 = 0;
    }
    if (puVar4 != (ulong *)0x0) {
      *puVar4 = 0;
    }
    if (puVar6 != (ulong *)0x0) {
      *puVar6 = 0;
    }
  }
  else {
    uVar16 = param_1[1];
    if (uVar16 != 0) {
      FUN_031dcad0(uVar16,param_2);
      FUN_031ded28(&local_80,uVar16);
    }
    while( true ) {
      uVar8 = (uint)*param_1;
      if ((uVar8 >> 0x17 & 1) != 0) break;
      if (((*param_1 & 1) != 0) || (param_1 = (ulong *)param_1[1], param_1 == (ulong *)0x0))
      goto LAB_031dce78;
    }
    uVar16 = CONCAT44(uVar8,uVar8) & 0x7fffff007fffff;
    psVar12 = (short *)param_1[(ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8))
                                            + POPCOUNT((char)(uVar16 >> 0x10))) + 2];
    if (psVar12 != (short *)0x0) {
      psVar15 = psVar12 + 4;
      psVar12 = psVar15 + (long)*psVar12 * 4;
      goto LAB_031dce7c;
    }
LAB_031dce78:
    psVar15 = (short *)0x0;
    psVar12 = (short *)0x0;
LAB_031dce7c:
    if (0 < (int)((ulong)((long)psVar12 - (long)psVar15) >> 3)) {
      uVar16 = (ulong)((long)psVar12 - (long)psVar15) >> 3 & 0xffffffff;
      do {
        FUN_031dcad0(*(undefined8 *)psVar15,param_2);
        FUN_031ded28(&local_80,*(undefined8 *)psVar15);
        uVar16 = uVar16 - 1;
        psVar15 = psVar15 + 4;
      } while (uVar16 != 0);
    }
  }
LAB_031dceb0:
  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  return;
}


