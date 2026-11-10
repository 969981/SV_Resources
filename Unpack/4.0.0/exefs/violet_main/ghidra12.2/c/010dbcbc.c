/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010dbcbc; name: FUN_010dbcbc
 */


void FUN_010dbcbc(long *param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ushort *puVar9;
  byte *pbVar10;
  ulong uVar11;
  bool bVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ulong uVar20;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar7 == 0)) {
    lVar16 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar7);
    lVar16 = (long)puVar1 + (ulong)*puVar1;
  }
  puVar18 = &DAT_cbf29ce484222645;
  *param_1 = (long)(PTR_DAT_047e31a8 + 0x10);
  param_1[1] = (long)&DAT_cbf29ce484222645;
  param_1[2] = (long)&DAT_03c886bc;
  param_1[3] = 0;
  param_1[4] = 0;
  sVar5 = strlen((char *)(lVar16 + 4));
  bVar3 = *(byte *)(lVar16 + 4);
  puVar8 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar8 = &DAT_cbf29ce484222645;
    pbVar10 = (byte *)(lVar16 + 5);
    do {
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar3 != 0);
  }
  param_1[2] = lVar16 + 4;
  param_1[3] = sVar5;
  *param_1 = (long)&PTR_LAB_046050c0;
  param_1[1] = (long)puVar8;
  param_1[4] = 0;
  param_1[5] = (long)param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = (long)(PTR_DAT_047de148 + 0x10);
  param_1[7] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xe] = (long)(PTR_DAT_047e31b0 + 0x10);
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = (long)&DAT_cbf29ce484222645;
  param_1[0x1b] = (long)&DAT_03c886bc;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  puVar9 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar9 < 0xb) {
    if (*puVar9 < 7) {
      return;
    }
LAB_010dbf50:
    uVar7 = (ulong)puVar9[3];
    if (uVar7 != 0) {
      puVar1 = (uint *)((long)param_2 + uVar7);
      uVar11 = (ulong)*puVar1;
      pcVar14 = (char *)((long)puVar1 + uVar11 + 4);
      sVar5 = strlen(pcVar14);
      bVar3 = *(byte *)((long)puVar1 + uVar11 + 4);
      if (bVar3 != 0) {
        pbVar10 = (byte *)((long)param_2 + uVar11 + uVar7 + 5);
        do {
          puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar3 != 0);
      }
      param_1[0x1a] = (long)puVar18;
      param_1[0x1b] = (long)pcVar14;
      param_1[0x1c] = sVar5;
      param_1[0x1d] = 0;
    }
    return;
  }
  uVar7 = (ulong)puVar9[5];
  if (uVar7 == 0) goto LAB_010dbf50;
  uVar11 = (ulong)*(uint *)((long)param_2 + uVar7);
  piVar2 = (int *)((long)((long)param_2 + uVar7) + uVar11);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar19 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar19 == 0)) {
LAB_010dbee4:
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar18 = *(undefined1 **)PTR_DAT_047d3e30;
    pcVar14 = *(char **)(PTR_DAT_047d3e30 + 8);
    sVar5 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar17 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
      param_1[0x1a] = (long)puVar18;
      param_1[0x1b] = (long)pcVar14;
      param_1[0x1c] = sVar5;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      bVar12 = false;
      goto LAB_010dbeb4;
    }
  }
  else {
    uVar20 = (ulong)*(uint *)((long)piVar2 + uVar19);
    piVar2 = (int *)((long)((long)piVar2 + uVar19) + uVar20);
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
       (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar15 == 0))
    goto LAB_010dbee4;
    puVar1 = (uint *)((long)piVar2 + uVar15);
    uVar13 = (ulong)*puVar1;
    pcVar14 = (char *)((long)puVar1 + uVar13 + 4);
    sVar5 = strlen(pcVar14);
    bVar3 = *(byte *)((long)puVar1 + uVar13 + 4);
    if (bVar3 != 0) {
      pbVar10 = (byte *)((long)param_2 + uVar13 + uVar15 + uVar20 + uVar19 + uVar11 + uVar7 + 5);
      do {
        puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar3 != 0);
    }
  }
  plVar17 = (long *)0x0;
  param_1[0x1c] = sVar5;
  param_1[0x1a] = (long)puVar18;
  param_1[0x1b] = (long)pcVar14;
  bVar12 = true;
LAB_010dbeb4:
  plVar6 = (long *)param_1[0x1d];
  param_1[0x1d] = (long)plVar17;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  if (!bVar12) {
                    /* WARNING: Could not recover jumptable at 0x010dbfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar17 + 0x20))(plVar17);
    return;
  }
  return;
}


