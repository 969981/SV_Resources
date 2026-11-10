/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03325f9c; name: FUN_03325f9c
 */


void FUN_03325f9c(long *param_1,long *param_2,char *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  size_t sVar7;
  ulong *puVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  char *local_40;
  char *local_38;
  
  pbVar10 = (byte *)param_2[1];
  pbVar13 = pbVar10;
  if ((*pbVar10 & 1) == 0) {
    do {
      pbVar13 = *(byte **)(pbVar13 + 8);
    } while ((*pbVar13 & 1) == 0);
  }
  if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) != 7) {
    pbVar10 = (byte *)0x0;
  }
  local_40 = param_3;
  if (param_3 == (char *)0x0) {
    local_38 = (char *)0x0;
  }
  else {
    sVar7 = strlen(param_3);
    local_38 = param_3 + sVar7;
  }
  puVar8 = (ulong *)FUN_03325d70(pbVar10,&local_40);
  uVar14 = *puVar8;
  uVar12 = (uint)uVar14;
  if ((uVar12 >> 0x11 & 1) == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = CONCAT44(uVar12,uVar12) & 0x1ffff0001ffff;
    uVar16 = (ulong)(ushort)puVar8[(ulong)(byte)(POPCOUNT((char)uVar16) +
                                                 POPCOUNT((char)(uVar16 >> 8)) +
                                                POPCOUNT((char)(uVar16 >> 0x10))) + 2];
  }
  lVar11 = uVar16 + *param_2;
  if (puVar8 == (ulong *)0x0) {
LAB_033260ac:
    uVar14 = 0;
  }
  else {
    puVar17 = puVar8;
    if ((uVar12 >> 2 & 1) == 0) {
      do {
        puVar17 = (ulong *)puVar17[1];
        if (puVar17 == (ulong *)0x0) goto LAB_033260ac;
        uVar14 = *puVar17;
      } while (((uint)uVar14 >> 2 & 1) == 0);
    }
    uVar14 = puVar17[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
    if ((uVar14 & 1) != 0) {
      piVar1 = (int *)((uVar14 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_033260b4;
    }
  }
  bVar4 = true;
LAB_033260b4:
  lVar15 = param_2[3];
  lVar6 = param_2[4];
  param_1[2] = uVar14;
  *param_1 = lVar11;
  param_1[1] = (long)puVar8;
  if (!bVar4) {
    piVar1 = (int *)((uVar14 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar11 = *param_1;
  }
  param_1[3] = lVar15;
  *(int *)(param_1 + 4) = (int)lVar6;
  if (lVar11 != 0) {
    pbVar13 = (byte *)param_1[1];
    pbVar10 = pbVar13;
    if ((*pbVar13 & 1) == 0) {
      do {
        pbVar10 = *(byte **)(pbVar10 + 8);
      } while ((*pbVar10 & 1) == 0);
    }
    if ((pbVar13 != (byte *)0x0) && ((*(ulong *)(pbVar10 + 0x10) & 0x1f) == 7)) {
      FUN_0331dcb8(param_1);
    }
  }
  if (!bVar4) {
    plVar9 = (long *)(uVar14 & 0xfffffffffffffffe);
    plVar2 = plVar9 + 1;
    do {
      lVar11 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0332616c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 8))();
      return;
    }
  }
  return;
}


