/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ae4790; name: FUN_02ae4790
 */


ulong FUN_02ae4790(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;
  short sVar9;
  undefined2 uVar10;
  short sVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar14 = (long)param_2 - (long)param_1 >> 2;
  if ((ulong)(lVar14 * 0x6db6db6db6db6db7) < 6) {
                    /* WARNING: Could not recover jumptable at 0x02ae47d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (*(code *)(&UNK_02ae47dc +
                       (ulong)*(ushort *)(&DAT_03d60b98 + lVar14 * -0x2492492492492492) * 4))(1);
    return uVar13;
  }
  sVar11 = *(short *)((long)param_1 + 0x1e);
  sVar8 = *(short *)((long)param_1 + 2);
  sVar9 = *(short *)((long)param_1 + 0x3a);
  bVar1 = *(int *)(param_1 + 4) < *(int *)((long)param_1 + 4);
  if (sVar11 != sVar8) {
    bVar1 = sVar11 < sVar8;
  }
  puVar15 = param_1 + 7;
  puVar17 = (undefined8 *)((long)param_1 + 0x1c);
  bVar2 = *(int *)((long)param_1 + 0x3c) < *(int *)(param_1 + 4);
  if (sVar9 != sVar11) {
    bVar2 = sVar9 < sVar11;
  }
  if (bVar1) {
    if (bVar2) {
      local_30 = *param_1;
      local_28 = param_1[1];
      local_20 = param_1[2];
      local_18 = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 10);
      param_1[1] = param_1[8];
      param_1[2] = param_1[9];
      *param_1 = *puVar15;
    }
    else {
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar18 = param_1[2];
      uVar7 = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)((long)param_1 + 0x34);
      param_1[1] = *(undefined8 *)((long)param_1 + 0x24);
      param_1[2] = *(undefined8 *)((long)param_1 + 0x2c);
      *param_1 = *puVar17;
      *(undefined4 *)((long)param_1 + 0x34) = uVar7;
      *(undefined8 *)((long)param_1 + 0x24) = uVar5;
      *(undefined8 *)((long)param_1 + 0x2c) = uVar18;
      *puVar17 = uVar4;
      bVar1 = *(int *)((long)param_1 + 0x3c) < *(int *)(param_1 + 4);
      if (sVar9 != *(short *)((long)param_1 + 0x1e)) {
        bVar1 = sVar9 < *(short *)((long)param_1 + 0x1e);
      }
      if (!bVar1) goto LAB_02ae4cd4;
      local_30 = *puVar17;
      local_28 = *(undefined8 *)((long)param_1 + 0x24);
      local_20 = *(undefined8 *)((long)param_1 + 0x2c);
      local_18 = *(undefined4 *)((long)param_1 + 0x34);
      *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(param_1 + 10);
      *(undefined8 *)((long)param_1 + 0x24) = param_1[8];
      *(undefined8 *)((long)param_1 + 0x2c) = param_1[9];
      *puVar17 = *puVar15;
    }
    *(undefined4 *)(param_1 + 10) = local_18;
    *puVar15 = local_30;
    param_1[8] = local_28;
    param_1[9] = local_20;
  }
  else if (bVar2) {
    uVar4 = *puVar17;
    uVar5 = *(undefined8 *)((long)param_1 + 0x24);
    uVar18 = *(undefined8 *)((long)param_1 + 0x2c);
    uVar7 = *(undefined4 *)((long)param_1 + 0x34);
    *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(param_1 + 10);
    *puVar17 = *puVar15;
    *(undefined8 *)((long)param_1 + 0x24) = param_1[8];
    *(undefined8 *)((long)param_1 + 0x2c) = param_1[9];
    *(undefined4 *)(param_1 + 10) = uVar7;
    param_1[8] = uVar5;
    param_1[9] = uVar18;
    *puVar15 = uVar4;
    bVar1 = *(int *)(param_1 + 4) < *(int *)((long)param_1 + 4);
    if (*(short *)((long)param_1 + 0x1e) != sVar8) {
      bVar1 = *(short *)((long)param_1 + 0x1e) < sVar8;
    }
    if (bVar1) {
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar18 = param_1[2];
      uVar7 = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)((long)param_1 + 0x34);
      param_1[1] = *(undefined8 *)((long)param_1 + 0x24);
      param_1[2] = *(undefined8 *)((long)param_1 + 0x2c);
      *param_1 = *puVar17;
      *(undefined4 *)((long)param_1 + 0x34) = uVar7;
      *(undefined8 *)((long)param_1 + 0x24) = uVar5;
      *(undefined8 *)((long)param_1 + 0x2c) = uVar18;
      *puVar17 = uVar4;
    }
  }
LAB_02ae4cd4:
  if ((undefined8 *)((long)param_1 + 0x54) != param_2) {
    lVar14 = 0;
    iVar16 = 0;
    puVar17 = (undefined8 *)((long)param_1 + 0x54);
    do {
      sVar8 = *(short *)((long)puVar17 + 2);
      iVar6 = *(int *)((long)puVar17 + 4);
      bVar1 = iVar6 < *(int *)((long)puVar15 + 4);
      if (sVar8 != *(short *)((long)puVar15 + 2)) {
        bVar1 = sVar8 < *(short *)((long)puVar15 + 2);
      }
      if (bVar1) {
        uVar4 = puVar17[1];
        uVar5 = puVar17[2];
        uVar7 = *(undefined4 *)(puVar17 + 3);
        uVar10 = *(undefined2 *)puVar17;
        lVar12 = lVar14;
        do {
          lVar19 = lVar12;
          *(undefined8 *)((long)param_1 + lVar19 + 0x54) =
               *(undefined8 *)((long)param_1 + lVar19 + 0x38);
          *(undefined8 *)((long)param_1 + lVar19 + 0x5c) =
               *(undefined8 *)((long)param_1 + lVar19 + 0x40);
          *(undefined8 *)((long)param_1 + lVar19 + 100) =
               *(undefined8 *)((long)param_1 + lVar19 + 0x48);
          *(undefined4 *)((long)param_1 + lVar19 + 0x6c) =
               *(undefined4 *)((long)param_1 + lVar19 + 0x50);
          if (lVar19 == -0x38) {
            puVar15 = param_1;
            goto LAB_02ae4d9c;
          }
          sVar9 = *(short *)((long)param_1 + lVar19 + 0x1e);
          bVar1 = iVar6 < *(int *)((long)param_1 + lVar19 + 0x20);
          if (sVar8 != sVar9) {
            bVar1 = sVar8 < sVar9;
          }
          lVar12 = lVar19 + -0x1c;
        } while (bVar1);
        puVar15 = (undefined8 *)((long)param_1 + lVar19 + 0x38);
LAB_02ae4d9c:
        *(undefined2 *)puVar15 = uVar10;
        iVar16 = iVar16 + 1;
        *(short *)((long)puVar15 + 2) = sVar8;
        *(int *)((long)puVar15 + 4) = iVar6;
        *(undefined4 *)(puVar15 + 3) = uVar7;
        puVar15[1] = uVar4;
        puVar15[2] = uVar5;
        if (iVar16 == 8) {
          return (ulong)((undefined8 *)((long)puVar17 + 0x1c) == param_2);
        }
      }
      puVar3 = (undefined8 *)((long)puVar17 + 0x1c);
      lVar14 = lVar14 + 0x1c;
      puVar15 = puVar17;
      puVar17 = puVar3;
    } while (puVar3 != param_2);
  }
  return 1;
}


