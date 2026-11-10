/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ae4150; name: FUN_02ae4150
 */


char FUN_02ae4150(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  short sVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  sVar8 = *(short *)((long)param_2 + 2);
  bVar1 = *(int *)((long)param_2 + 4) < *(int *)((long)param_1 + 4);
  if (sVar8 != *(short *)((long)param_1 + 2)) {
    bVar1 = sVar8 < *(short *)((long)param_1 + 2);
  }
  bVar2 = *(int *)((long)param_3 + 4) < *(int *)((long)param_2 + 4);
  if (sVar8 != *(short *)((long)param_3 + 2)) {
    bVar2 = *(short *)((long)param_3 + 2) < sVar8;
  }
  if (bVar1) {
    if (bVar2) {
      uVar3 = *param_1;
      uVar5 = param_1[1];
      uVar10 = param_1[2];
      uVar7 = *(undefined4 *)(param_1 + 3);
      uVar11 = param_3[2];
      uVar4 = *param_3;
      uVar6 = param_3[1];
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 3);
      param_1[1] = uVar6;
      param_1[2] = uVar11;
      *param_1 = uVar4;
      *(undefined4 *)(param_3 + 3) = uVar7;
      param_3[1] = uVar5;
      param_3[2] = uVar10;
      *param_3 = uVar3;
    }
    else {
      uVar3 = *param_1;
      uVar5 = param_1[1];
      uVar10 = param_1[2];
      uVar7 = *(undefined4 *)(param_1 + 3);
      uVar11 = param_2[2];
      uVar4 = *param_2;
      uVar6 = param_2[1];
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
      param_1[1] = uVar6;
      param_1[2] = uVar11;
      *param_1 = uVar4;
      *(undefined4 *)(param_2 + 3) = uVar7;
      param_2[1] = uVar5;
      param_2[2] = uVar10;
      *param_2 = uVar3;
      bVar1 = *(int *)((long)param_3 + 4) < *(int *)((long)param_2 + 4);
      if (*(short *)((long)param_3 + 2) != *(short *)((long)param_2 + 2)) {
        bVar1 = *(short *)((long)param_3 + 2) < *(short *)((long)param_2 + 2);
      }
      if (bVar1) {
        uVar3 = *param_2;
        uVar5 = param_2[1];
        uVar10 = param_2[2];
        uVar7 = *(undefined4 *)(param_2 + 3);
        uVar11 = param_3[2];
        uVar4 = *param_3;
        uVar6 = param_3[1];
        *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 3);
        param_2[1] = uVar6;
        param_2[2] = uVar11;
        *param_2 = uVar4;
        *(undefined4 *)(param_3 + 3) = uVar7;
        param_3[1] = uVar5;
        param_3[2] = uVar10;
        *param_3 = uVar3;
LAB_02ae4384:
        cVar9 = '\x02';
        goto LAB_02ae4390;
      }
    }
  }
  else {
    cVar9 = '\0';
    if (!bVar2) goto LAB_02ae4390;
    uVar3 = *param_2;
    uVar5 = param_2[1];
    uVar10 = param_2[2];
    uVar7 = *(undefined4 *)(param_2 + 3);
    uVar11 = param_3[2];
    uVar4 = *param_3;
    uVar6 = param_3[1];
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 3);
    param_2[1] = uVar6;
    param_2[2] = uVar11;
    *param_2 = uVar4;
    *(undefined4 *)(param_3 + 3) = uVar7;
    param_3[1] = uVar5;
    param_3[2] = uVar10;
    *param_3 = uVar3;
    bVar1 = *(int *)((long)param_2 + 4) < *(int *)((long)param_1 + 4);
    if (*(short *)((long)param_2 + 2) != *(short *)((long)param_1 + 2)) {
      bVar1 = *(short *)((long)param_2 + 2) < *(short *)((long)param_1 + 2);
    }
    if (bVar1) {
      uVar3 = *param_1;
      uVar5 = param_1[1];
      uVar10 = param_1[2];
      uVar7 = *(undefined4 *)(param_1 + 3);
      uVar11 = param_2[2];
      uVar4 = *param_2;
      uVar6 = param_2[1];
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
      param_1[1] = uVar6;
      param_1[2] = uVar11;
      *param_1 = uVar4;
      *(undefined4 *)(param_2 + 3) = uVar7;
      param_2[1] = uVar5;
      param_2[2] = uVar10;
      *param_2 = uVar3;
      goto LAB_02ae4384;
    }
  }
  cVar9 = '\x01';
LAB_02ae4390:
  bVar1 = *(int *)((long)param_4 + 4) < *(int *)((long)param_3 + 4);
  if (*(short *)((long)param_4 + 2) != *(short *)((long)param_3 + 2)) {
    bVar1 = *(short *)((long)param_4 + 2) < *(short *)((long)param_3 + 2);
  }
  if (bVar1) {
    uVar3 = *param_3;
    uVar5 = param_3[1];
    uVar10 = param_3[2];
    uVar7 = *(undefined4 *)(param_3 + 3);
    uVar11 = param_4[2];
    uVar4 = *param_4;
    uVar6 = param_4[1];
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_4 + 3);
    param_3[1] = uVar6;
    param_3[2] = uVar11;
    *param_3 = uVar4;
    *(undefined4 *)(param_4 + 3) = uVar7;
    param_4[1] = uVar5;
    param_4[2] = uVar10;
    *param_4 = uVar3;
    bVar1 = *(int *)((long)param_3 + 4) < *(int *)((long)param_2 + 4);
    if (*(short *)((long)param_3 + 2) != *(short *)((long)param_2 + 2)) {
      bVar1 = *(short *)((long)param_3 + 2) < *(short *)((long)param_2 + 2);
    }
    if (bVar1) {
      uVar3 = *param_2;
      uVar5 = param_2[1];
      uVar10 = param_2[2];
      uVar7 = *(undefined4 *)(param_2 + 3);
      uVar11 = param_3[2];
      uVar4 = *param_3;
      uVar6 = param_3[1];
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 3);
      param_2[1] = uVar6;
      param_2[2] = uVar11;
      *param_2 = uVar4;
      *(undefined4 *)(param_3 + 3) = uVar7;
      param_3[1] = uVar5;
      param_3[2] = uVar10;
      *param_3 = uVar3;
      bVar1 = *(int *)((long)param_2 + 4) < *(int *)((long)param_1 + 4);
      if (*(short *)((long)param_2 + 2) != *(short *)((long)param_1 + 2)) {
        bVar1 = *(short *)((long)param_2 + 2) < *(short *)((long)param_1 + 2);
      }
      if (bVar1) {
        uVar3 = *param_1;
        uVar5 = param_1[1];
        cVar9 = cVar9 + '\x03';
        uVar10 = param_1[2];
        uVar7 = *(undefined4 *)(param_1 + 3);
        uVar4 = *param_2;
        uVar6 = param_2[1];
        uVar11 = param_2[2];
        *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
        *param_1 = uVar4;
        param_1[1] = uVar6;
        param_1[2] = uVar11;
        *(undefined4 *)(param_2 + 3) = uVar7;
        param_2[1] = uVar5;
        param_2[2] = uVar10;
        *param_2 = uVar3;
      }
      else {
        cVar9 = cVar9 + '\x02';
      }
    }
    else {
      cVar9 = cVar9 + '\x01';
    }
  }
  return cVar9;
}


