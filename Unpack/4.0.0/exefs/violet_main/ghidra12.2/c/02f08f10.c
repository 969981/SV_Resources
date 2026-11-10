/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f08f10; name: FUN_02f08f10
 */


void FUN_02f08f10(long param_1,ulong param_2)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  short *psVar17;
  short *psVar18;
  uint uVar19;
  ulong uVar20;
  
  uVar20 = param_2 & 0xffffff;
  plVar9 = *(long **)(*(long *)(param_1 + 0x98) + uVar20 * 8);
  *(undefined8 *)(*(long *)(param_1 + 0x98) + uVar20 * 8) = 0;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar1 = plVar9 + 2;
    do {
      lVar15 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  puVar8 = PTR_DAT_047d1a08;
  lVar11 = *(long *)(param_1 + 0x78);
  lVar15 = *(long *)(lVar11 + uVar20 * 8);
  if (lVar15 != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar15,0);
    lVar11 = *(long *)(param_1 + 0x78);
  }
  *(undefined8 *)(lVar11 + uVar20 * 8) = 0;
  lVar15 = *(long *)(*(long *)(param_1 + 0x88) + uVar20 * 8);
  if (lVar15 != 0) {
    (**(code **)(puVar8 + 8))(0,lVar15,0);
    *(undefined8 *)(*(long *)(param_1 + 0x88) + uVar20 * 8) = 0;
  }
  uVar14 = *(uint *)(param_1 + 0xbc);
  uVar12 = (ulong)uVar14;
  uVar19 = (uint)uVar20;
  if (-1 < (int)uVar14) {
    psVar18 = *(short **)(param_1 + 0xb0);
    uVar16 = 0xffffffffffffffff;
    psVar17 = psVar18;
    do {
      if (*psVar17 != -1) {
        uVar5 = (uint)uVar16;
        break;
      }
      uVar16 = uVar16 + 1;
      psVar17 = psVar17 + 8;
      uVar5 = uVar14;
    } while (uVar12 != uVar16);
    iVar13 = uVar5 + 1;
    if (iVar13 <= (int)uVar14) {
      do {
        if (uVar19 < *(uint *)(*(long *)(psVar18 + (long)iVar13 * 8 + 4) + 0x18)) {
          lVar15 = *(long *)(*(long *)(psVar18 + (long)iVar13 * 8 + 4) + 8);
          *(uint *)(lVar15 + (uVar20 >> 5) * 4) =
               *(uint *)(lVar15 + (uVar20 >> 5) * 4) & ~(1 << (ulong)((uint)param_2 & 0x1f));
          uVar12 = (ulong)*(uint *)(param_1 + 0xbc);
        }
        iVar10 = (int)uVar12;
        iVar4 = iVar10;
        if (iVar10 <= iVar13) {
          iVar4 = iVar13;
        }
        lVar15 = (long)iVar4 - (long)iVar13;
        lVar11 = (long)iVar13 * 0x10;
        do {
          lVar11 = lVar11 + 0x10;
          if (lVar15 == 0) {
            iVar13 = iVar4 + 1;
            break;
          }
          lVar15 = lVar15 + -1;
          iVar13 = iVar13 + 1;
        } while (*(short *)(*(long *)(param_1 + 0xb0) + lVar11) == -1);
        if (iVar10 < iVar13) break;
        psVar18 = *(short **)(param_1 + 0xb0);
      } while( true );
    }
  }
  if (*(int *)(param_1 + 0x18) <= (int)uVar19) {
    return;
  }
  lVar15 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar15 + uVar20 * 0xc0 + 0x54) & 0xf) == 0) {
    return;
  }
  plVar9 = *(long **)(lVar15 + uVar20 * 0xc0 + 0x78);
  if (plVar9 != (long *)0x0) {
    if (plVar9[1] != 0) {
      plVar1 = plVar9 + 2;
      do {
        lVar15 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
    lVar15 = *(long *)(param_1 + 0x10);
  }
  lVar15 = lVar15 + uVar20 * 0xc0;
  *(undefined1 *)(lVar15 + 0x88) = 0;
  *(uint *)(lVar15 + 0x50) = *(uint *)(lVar15 + 0x50) | 0xffffff;
  *(undefined4 *)(lVar15 + 0x54) = 0;
  uVar5 = *(uint *)(param_1 + 0x2c);
  uVar14 = uVar5 & 0xffffff;
  if (uVar14 == 0xffffff) {
    uVar14 = 0xffffffff;
  }
  *(uint *)(*(long *)(param_1 + 0x10) + uVar20 * 0xc0) = uVar14;
  puVar2 = (uint *)(param_1 + 0x2c);
  uVar14 = *puVar2;
  if (uVar14 == uVar5) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *puVar2 = uVar5 & 0xff000000 | uVar19;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_02f091b4;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    uVar5 = uVar14 & 0xffffff;
    if (uVar5 == 0xffffff) {
      uVar5 = 0xffffffff;
    }
    *(uint *)(*(long *)(param_1 + 0x10) + uVar20 * 0xc0) = uVar5;
    uVar5 = *puVar2;
    if (uVar5 == uVar14) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar7) {
        *puVar2 = uVar14 & 0xff000000 | uVar19;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_02f091a8;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02f091a8:
      bVar7 = false;
    }
    uVar14 = uVar5;
  } while (!bVar7);
LAB_02f091b4:
  piVar3 = (int *)(param_1 + 0x30);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar7) {
      *piVar3 = *piVar3 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  return;
}


