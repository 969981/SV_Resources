/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f57fd0; name: FUN_02f57fd0
 */


void FUN_02f57fd0(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6,long param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined2 uVar11;
  int iVar12;
  uint *puVar13;
  
  bVar4 = *(byte *)((long)param_1 + 9);
  puVar13 = (uint *)param_2[2];
  iVar12 = (int)param_2[3];
  uVar7 = *(uint *)((long)param_2 + 0x1c);
  iVar3 = *(int *)(*param_2 + 8);
  if ((int)(iVar12 + (uint)bVar4 * 0x10) < 0xfa1) {
    puVar6 = (undefined8 *)((long)puVar13 + (long)iVar12 + 0x20);
  }
  else {
    puVar6 = (undefined8 *)FUN_031c36f4(param_2);
  }
  iVar9 = bVar4 + 1;
  puVar10 = puVar6;
  do {
    iVar9 = iVar9 + -1;
    uVar1 = *(undefined4 *)(param_1 + 1);
    uVar2 = *(undefined4 *)((long)param_1 + 0xc);
    *puVar10 = *param_1;
    *(undefined4 *)(puVar10 + 1) = uVar1;
    *(undefined4 *)((long)puVar10 + 0xc) = uVar2;
    param_1 = param_1 + 2;
    puVar10 = puVar10 + 2;
  } while (1 < iVar9);
  *(uint *)(param_2 + 3) = (int)param_2[3] + (uint)bVar4 * 0x10;
  *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
  bVar4 = *(byte *)((long)puVar6 + 0xf);
  *(byte *)((long)puVar6 + 0xf) = bVar4 & 0xf7;
  if ((*(int *)((long)param_2 + 0x1c) + *(int *)(*param_2 + 8) != iVar3 + uVar7) &&
     (puVar8 = (uint *)param_2[2], puVar8 != puVar13)) {
    if ((uVar7 & 0xffff) == (*puVar13 & 0xffff)) {
      puVar13 = *(uint **)(puVar13 + 2);
      iVar12 = 0;
    }
    uVar11 = (undefined2)iVar12;
    if (puVar13 == puVar8) goto joined_r0x02f58170;
  }
  uVar11 = (undefined2)iVar12;
  puVar8 = puVar13;
joined_r0x02f58170:
  if (param_4 == 0) {
    if (((ulong)*(byte *)(puVar6 + 1) == 2) && (2 < *(byte *)((long)puVar6 + 9))) {
      if (puVar6[4] != 0) {
        *(byte *)((long)puVar6 + 0xf) = bVar4 | 8;
      }
      puVar6[4] = 0;
      *(undefined2 *)(puVar6 + 5) = 0;
    }
    plVar5 = *(long **)(param_7 + (ulong)*(byte *)(puVar6 + 1) * 8);
    if ((int)plVar5[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x02f581d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x30))(plVar5,puVar6,param_6,param_3);
      return;
    }
  }
  else {
    if (*(int *)(param_4 + 0x18) < 0xf91) {
      puVar6 = (undefined8 *)(*(long *)(param_4 + 0x10) + (long)*(int *)(param_4 + 0x18) + 0x20);
    }
    else {
      puVar6 = (undefined8 *)FUN_031c36f4(param_4);
    }
    *(undefined4 *)((long)puVar6 + 0xc) = 0;
    *puVar6 = puVar8;
    *(undefined2 *)(puVar6 + 1) = uVar11;
    *(undefined1 *)((long)puVar6 + 0xb) = 3;
    uVar7 = *(uint *)(param_5 + 0x1000);
    if (uVar7 == 0x100) {
      FUN_02f63610(*(undefined8 *)(param_5 + 0x1008),param_5,0x100);
      uVar7 = 0;
      *(undefined4 *)(param_5 + 0x1000) = 0;
    }
    puVar6 = (undefined8 *)(param_5 + (ulong)uVar7 * 0x10);
    *(uint *)(param_5 + 0x1000) = uVar7 + 1;
    *puVar6 = *(undefined8 *)(param_4 + 0x10);
    *(short *)(puVar6 + 1) = (short)*(undefined4 *)(param_4 + 0x18);
    *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + 0x10;
    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
  }
  return;
}


