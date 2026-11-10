/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b8484; name: FUN_033b8484
 */


void FUN_033b8484(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  code *pcVar7;
  uint uVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong *puVar13;
  ulong *local_40;
  ulong *local_38;
  
  puVar13 = (ulong *)param_1[4];
  *param_1 = (long)(PTR_DAT_047e6918 + 0x10);
  if (puVar13 == (ulong *)0x0) goto LAB_033b8710;
  puVar1 = (ulong *)(param_1 + 3);
  plVar12 = (long *)*puVar1;
  if (puVar13 == (ulong *)PTR_DAT_047ddc28) {
LAB_033b8578:
    uVar5 = 0;
    do {
      uVar8 = (uint)*puVar13;
      if ((uVar8 >> 0x15 & 1) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = CONCAT44(uVar8,uVar8) & 0x1fffff001fffff;
        uVar11 = puVar13[(ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                      POPCOUNT((char)(uVar11 >> 0x10))) + 2];
      }
      uVar5 = uVar11 | uVar5;
    } while (((*puVar13 & 1) == 0) && (puVar13 = (ulong *)puVar13[1], puVar13 != (ulong *)0x0));
    if ((plVar12 == (long *)0x0) || (((uint)uVar5 >> 3 & 1) != 0)) goto LAB_033b8624;
    if (plVar12[1] == 0) goto LAB_033b8710;
    plVar4 = plVar12 + 2;
    do {
      lVar9 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 != 0) goto LAB_033b8710;
    pcVar7 = *(code **)(*plVar12 + 0x18);
  }
  else {
    local_38 = puVar13;
    while( true ) {
      uVar8 = (uint)*local_38;
      if ((uVar8 >> 0xd & 1) != 0) break;
      if (((*local_38 & 1) != 0) || (local_38 = (ulong *)local_38[1], local_38 == (ulong *)0x0))
      goto LAB_033b8514;
    }
    if (local_38 != (ulong *)0x0) {
      uVar5 = CONCAT44(uVar8,uVar8) & 0x1fff00001fff;
      local_38 = local_38 + (ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8))) + 2;
      goto LAB_033b851c;
    }
LAB_033b8514:
    local_38 = (ulong *)0x0;
LAB_033b851c:
    local_40 = (ulong *)PTR_DAT_047ddc28;
    while( true ) {
      uVar8 = (uint)*local_40;
      if ((uVar8 >> 0xd & 1) != 0) break;
      if (((*local_40 & 1) != 0) || (local_40 = (ulong *)local_40[1], local_40 == (ulong *)0x0))
      goto LAB_033b85f4;
    }
    if (local_40 != (ulong *)0x0) {
      uVar5 = CONCAT44(uVar8,uVar8) & 0x1fff00001fff;
      local_40 = local_40 + (ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8))) + 2;
      if (local_38 == (ulong *)0x0) goto LAB_033b85f8;
      uVar5 = FUN_031dd354(&local_38,&local_40);
      if ((uVar5 & 1) != 0) goto LAB_033b8578;
      goto LAB_033b8624;
    }
LAB_033b85f4:
    local_40 = (ulong *)0x0;
LAB_033b85f8:
    puVar6 = (ulong *)PTR_DAT_047ddc28;
    do {
      if ((*puVar6 & 1) != 0) break;
      puVar6 = (ulong *)puVar6[1];
    } while (puVar6 != (ulong *)0x0);
    puVar10 = puVar13;
    do {
      if (puVar10 == puVar6) goto LAB_033b8578;
      puVar10 = (ulong *)puVar10[1];
    } while (puVar10 != (ulong *)0x0);
LAB_033b8624:
    uVar5 = *puVar1;
    if (uVar5 == 0) goto LAB_033b8710;
    puVar13 = (ulong *)param_1[4];
    puVar6 = puVar13;
    while (uVar11 = *puVar6, ((uint)uVar11 >> 8 & 1) == 0) {
      if (((uVar11 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
      goto LAB_033b8688;
    }
    if ((puVar6 != (ulong *)0x0) &&
       ((code *)puVar6[(ulong)(byte)POPCOUNT((char)uVar11) + 2] != (code *)0x0)) {
      (*(code *)puVar6[(ulong)(byte)POPCOUNT((char)uVar11) + 2])(uVar5,puVar13,1);
      uVar5 = param_1[3];
      puVar13 = (ulong *)param_1[4];
    }
LAB_033b8688:
    uVar8 = (uint)*puVar13;
    if ((uVar8 >> 0x13 & 1) == 0) {
      do {
        puVar13 = (ulong *)puVar13[1];
        uVar8 = (uint)*puVar13;
      } while ((uVar8 >> 0x13 & 1) == 0);
    }
    uVar11 = CONCAT44(uVar8,uVar8) & 0x7ffff0007ffff;
    (**(code **)(*(long *)puVar13[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                POPCOUNT((char)(uVar11 >> 8)) +
                                               POPCOUNT((char)(uVar11 >> 0x10))) + 2] + 0x20))
              ((long *)puVar13[(ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8))
                                            + POPCOUNT((char)(uVar11 >> 0x10))) + 2],uVar5);
    *puVar1 = 0;
    param_1[4] = 0;
    uVar5 = param_1[5];
    param_1[5] = 0;
    if ((uVar5 & 1) == 0) goto LAB_033b8710;
    plVar12 = (long *)(uVar5 & 0xfffffffffffffffe);
    plVar4 = plVar12 + 1;
    do {
      lVar9 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *(int *)plVar4 = (int)lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar12 == (long *)0x0) || ((int)lVar9 != 1)) goto LAB_033b8710;
    pcVar7 = *(code **)(*plVar12 + 8);
  }
  (*pcVar7)(plVar12);
LAB_033b8710:
  if ((param_1[5] & 1U) != 0) {
    plVar4 = (long *)(param_1[5] & 0xfffffffffffffffe);
    plVar12 = plVar4 + 1;
    do {
      lVar9 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar9 == 1)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


