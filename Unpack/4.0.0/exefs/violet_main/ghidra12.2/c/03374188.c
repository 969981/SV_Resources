/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03374188; name: FUN_03374188
 */


/* WARNING: Removing unreachable block (ram,0x0337431c) */
/* WARNING: Removing unreachable block (ram,0x033744c4) */

undefined4 FUN_03374188(long param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  byte *pbVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  
  iVar6 = (*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x30)) -
          (uint)(*(int *)(param_1 + 0x40) != 0);
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) < iVar6) {
    FUN_033277d4(param_2,PTR_PTR_047d1a50,(long)iVar6);
  }
  iVar4 = (int)param_2[1];
  if (iVar4 < iVar6) {
    puVar11 = (undefined8 *)(*param_2 + (long)iVar4 * 0x18);
    lVar14 = (long)iVar6 * 0x18 + (long)iVar4 * -0x18;
    *(int *)(param_2 + 1) = iVar6;
    do {
      *(undefined4 *)((long)puVar11 + 0x14) = 0;
      lVar14 = lVar14 + -0x18;
      *(undefined1 *)(puVar11 + 2) = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = puVar11 + 3;
    } while (lVar14 != 0);
  }
  else if (iVar6 < iVar4) {
    *(int *)(param_2 + 1) = iVar6;
  }
  puVar9 = PTR_DAT_047e5c70;
  puVar8 = PTR_DAT_047e5c68;
  puVar7 = PTR_DAT_047e5c40;
  uVar19 = (ulong)*(uint *)(param_1 + 0x20);
  if ((int)*(uint *)(param_1 + 0x20) < 2) {
LAB_0337458c:
    uVar18 = (ulong)*(uint *)(param_1 + 0x30);
    if (0 < (int)*(uint *)(param_1 + 0x30)) {
      lVar13 = 0;
      lVar14 = 1;
      while( true ) {
        iVar6 = (int)lVar14 + (int)uVar19 + -1;
        *(undefined8 *)(*param_2 + (long)iVar6 * 0x18) =
             *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar13);
        *(undefined8 *)(*param_2 + (long)iVar6 * 0x18 + 8) =
             *(undefined8 *)
              (*(long *)(param_1 + 8) + (long)*(int *)(*(long *)(param_1 + 0x28) + lVar13 + 8) * 8);
        *(undefined1 *)(*param_2 + (long)iVar6 * 0x18 + 0x10) = 2;
        *(undefined4 *)(*param_2 + (long)iVar6 * 0x18 + 0x14) =
             *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar13 + 0xc);
        uVar18 = (ulong)*(int *)(param_1 + 0x30);
        if ((long)uVar18 <= lVar14) break;
        uVar19 = (ulong)*(uint *)(param_1 + 0x20);
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x10;
      }
    }
    if (1 < *(int *)(param_1 + 0x40)) {
      lVar13 = 0;
      lVar14 = 2;
      while( true ) {
        iVar6 = (int)lVar14 + (int)uVar18 + *(int *)(param_1 + 0x20) + -2;
        *(undefined8 *)(*param_2 + (long)iVar6 * 0x18) =
             *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar13 + 0x10);
        *(undefined8 *)(*param_2 + (long)iVar6 * 0x18 + 8) =
             *(undefined8 *)
              (*(long *)(param_1 + 8) +
              (long)*(int *)(*(long *)(param_1 + 0x38) + lVar13 + 0x18) * 8);
        *(undefined1 *)(*param_2 + (long)iVar6 * 0x18 + 0x10) = 1;
        *(undefined4 *)(*param_2 + (long)iVar6 * 0x18 + 0x14) =
             *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar13 + 0x1c);
        if (*(int *)(param_1 + 0x40) <= lVar14) break;
        uVar18 = (ulong)*(uint *)(param_1 + 0x30);
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x10;
      }
    }
    return (int)param_2[1];
  }
  lVar14 = 1;
LAB_03374280:
  uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + lVar14 * 0x10 + 8);
  if (-1 < (int)uVar3) {
    pbVar12 = *(byte **)(*(long *)(param_1 + 0x18) + lVar14 * 0x10);
    for (puVar15 = *(ulong **)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8); puVar15 != (ulong *)0x0;
        puVar15 = (ulong *)puVar15[1]) {
      uVar19 = *puVar15;
      if (((uint)uVar19 >> 2 & 1) != 0) goto LAB_0337438c;
    }
LAB_03374378:
    uVar19 = 0;
    bVar2 = true;
    goto joined_r0x033743a0;
  }
  pbVar12 = *(byte **)(*(long *)(param_1 + 8) + (long)(int)-uVar3 * 8);
  if (pbVar12 != (byte *)0x0) {
    pbVar16 = pbVar12;
    if ((*pbVar12 & 1) == 0) {
      do {
        pbVar16 = *(byte **)(pbVar16 + 8);
      } while ((*pbVar16 & 1) == 0);
    }
    puVar15 = (ulong *)puVar7;
    switch(*(uint *)(pbVar16 + 0x10) & 0x1f) {
    case 0:
      break;
    case 1:
      puVar15 = (ulong *)PTR_DAT_047e5b88;
      break;
    case 2:
      puVar15 = (ulong *)PTR_DAT_047e5c48;
      break;
    case 3:
      puVar15 = (ulong *)PTR_DAT_047e5c50;
      break;
    case 4:
      puVar15 = (ulong *)PTR_DAT_047e5c58;
      break;
    case 5:
      puVar15 = (ulong *)PTR_DAT_047e5c60;
      break;
    case 6:
      puVar15 = (ulong *)puVar8;
      break;
    case 7:
      puVar15 = (ulong *)puVar9;
      break;
    case 8:
      puVar15 = (ulong *)PTR_DAT_047e5c78;
      break;
    default:
      goto LAB_0337437c;
    }
    do {
      uVar19 = *puVar15;
      if (((uint)uVar19 >> 2 & 1) != 0) goto LAB_0337438c;
      puVar17 = puVar15 + 1;
      puVar15 = (ulong *)*puVar17;
    } while ((ulong *)*puVar17 != (ulong *)0x0);
    goto LAB_03374378;
  }
  goto LAB_0337437c;
LAB_0337438c:
  uVar19 = puVar15[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
  bVar2 = (uVar19 & 1) == 0;
joined_r0x033743a0:
  if (bVar2) {
LAB_0337437c:
    *(byte **)(*param_2 + lVar14 * 0x18) = pbVar12;
  }
  else {
    plVar10 = (long *)(uVar19 & 0xfffffffffffffffe);
    plVar1 = plVar10 + 1;
    do {
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(byte **)(*param_2 + lVar14 * 0x18) = pbVar12;
    plVar1 = plVar10 + 1;
    do {
      lVar13 = *plVar1;
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = (int)lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar13 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + lVar14 * 0x10 + 8);
  if (-1 < (int)uVar3) {
    puVar15 = *(ulong **)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8);
    if (puVar15 == (ulong *)0x0) goto LAB_033744e8;
    puVar17 = puVar15;
    do {
      uVar19 = *puVar17;
      if (((uint)uVar19 >> 2 & 1) != 0) goto LAB_033744f8;
      puVar17 = (ulong *)puVar17[1];
    } while (puVar17 != (ulong *)0x0);
LAB_033744e4:
    uVar19 = 0;
    bVar2 = false;
    goto joined_r0x0337450c;
  }
  pbVar12 = *(byte **)(*(long *)(param_1 + 8) + (long)(int)-uVar3 * 8);
  puVar15 = (ulong *)0x0;
  if (pbVar12 != (byte *)0x0) {
    for (; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
    }
    puVar15 = (ulong *)puVar7;
    switch(*(uint *)(pbVar12 + 0x10) & 0x1f) {
    case 0:
      break;
    case 1:
      puVar15 = (ulong *)PTR_DAT_047e5b88;
      break;
    case 2:
      puVar15 = (ulong *)PTR_DAT_047e5c48;
      break;
    case 3:
      puVar15 = (ulong *)PTR_DAT_047e5c50;
      break;
    case 4:
      puVar15 = (ulong *)PTR_DAT_047e5c58;
      break;
    case 5:
      puVar15 = (ulong *)PTR_DAT_047e5c60;
      break;
    case 6:
      puVar15 = (ulong *)puVar8;
      break;
    case 7:
      puVar15 = (ulong *)puVar9;
      break;
    case 8:
      puVar15 = (ulong *)PTR_DAT_047e5c78;
      break;
    default:
      puVar15 = (ulong *)0x0;
      goto LAB_033744e8;
    }
    puVar17 = puVar15;
    do {
      uVar19 = *puVar17;
      if (((uint)uVar19 >> 2 & 1) != 0) goto LAB_033744f8;
      puVar17 = (ulong *)puVar17[1];
    } while (puVar17 != (ulong *)0x0);
    goto LAB_033744e4;
  }
LAB_033744e8:
  *(ulong **)(*param_2 + lVar14 * 0x18 + 8) = puVar15;
LAB_03374560:
  lVar13 = lVar14 + 1;
  *(undefined1 *)(*param_2 + lVar14 * 0x18 + 0x10) = 0;
  *(undefined4 *)(*param_2 + lVar14 * 0x18 + 0x14) = 0xffffffff;
  uVar19 = (ulong)*(int *)(param_1 + 0x20);
  lVar14 = lVar13;
  if ((long)uVar19 <= lVar13) goto LAB_0337458c;
  goto LAB_03374280;
LAB_033744f8:
  uVar19 = puVar17[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
  bVar2 = (uVar19 & 1) != 0;
joined_r0x0337450c:
  if (bVar2) {
    plVar10 = (long *)(uVar19 & 0xfffffffffffffffe);
    plVar1 = plVar10 + 1;
    do {
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(ulong **)(*param_2 + lVar14 * 0x18 + 8) = puVar15;
    plVar1 = plVar10 + 1;
    do {
      lVar13 = *plVar1;
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = (int)lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar13 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
    goto LAB_03374560;
  }
  goto LAB_033744e8;
}


