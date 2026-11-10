/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01049938; name: FUN_01049938
 */


void FUN_01049938(long param_1,long *param_2,undefined4 param_3,short *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  float fVar11;
  
  switch(param_3) {
  case 0:
    if ((*param_4 == 0x10) && (1 < (ushort)param_4[1])) {
      uVar6 = (ulong)(ushort)param_4[3];
      if (8 < (ushort)param_4[3]) {
        return;
      }
    }
    else {
      uVar6 = 0;
    }
    if (*(char *)(param_1 + 0x20) == '\0') {
      puVar7 = (undefined4 *)*param_2;
      uVar2 = (&DAT_03d61fee)[uVar6];
      *(undefined4 *)(param_1 + 8) = *puVar7;
      uVar1 = puVar7[1];
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 0xc) = uVar1;
      *puVar7 = uVar2;
      puVar7[1] = uVar2;
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    break;
  case 1:
    if (*(char *)(param_1 + 0x20) != '\0') {
      puVar7 = (undefined4 *)*param_2;
      *puVar7 = *(undefined4 *)(param_1 + 8);
      puVar7[1] = *(undefined4 *)(param_1 + 0xc);
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x18) != 0) {
      if (*param_4 == 0x10) {
        param_4 = param_4 + (ulong)(ushort)param_4[1] + 2;
      }
      fVar11 = (float)FUN_021730a8(param_2,param_4);
      *(float *)(*param_2 + 0x14) = (float)((uint)(*(int *)(param_1 + 0x18) - (int)fVar11) >> 1);
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x18) == 0) {
      return;
    }
    fVar11 = 0.0;
    if ((*param_4 == 0x10) && (1 < (ushort)param_4[1])) {
      fVar11 = (float)NEON_ucvtf((uint)(ushort)param_4[3]);
    }
    fVar3 = (float)FUN_021730a8(param_2,param_4);
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x18));
    fVar11 = (fVar4 - fVar3) - fVar11;
    goto LAB_01049adc;
  case 4:
    lVar8 = *param_2;
    uVar9 = 0;
    uVar10 = 0;
    if ((*param_4 == 0x10) && (1 < (ushort)param_4[1])) {
      uVar1 = NEON_ucvtf((uint)(ushort)param_4[3]);
      uVar9 = (undefined2)uVar1;
      uVar10 = (undefined2)((uint)uVar1 >> 0x10);
    }
    fVar11 = *(float *)(lVar8 + 0x14) + (float)CONCAT22(uVar10,uVar9);
    goto LAB_01049ae0;
  case 5:
    fVar11 = 0.0;
    if ((*param_4 == 0x10) && (fVar11 = 0.0, 1 < (ushort)param_4[1])) {
      fVar11 = (float)NEON_ucvtf((uint)(ushort)param_4[3]);
    }
LAB_01049adc:
    lVar8 = *param_2;
LAB_01049ae0:
    *(float *)(lVar8 + 0x14) = fVar11;
    break;
  case 7:
    uVar5 = FUN_021730e0(param_1,param_4,param_2);
    if (uVar5 == 1000) {
      return;
    }
    uVar1 = *(undefined4 *)(*param_2 + 0xc);
    uVar9 = (undefined2)uVar1;
    uVar10 = (undefined2)((uint)uVar1 >> 0x10);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    fVar11 = (float)uVar5;
    goto LAB_01049b58;
  case 8:
    uVar1 = *(undefined4 *)(*param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    uVar9 = (undefined2)uVar1;
    uVar10 = (undefined2)((uint)uVar1 >> 0x10);
    fVar11 = 0.0;
    if ((*param_4 == 0x10) && (fVar11 = 0.0, 1 < (ushort)param_4[1])) {
      fVar11 = (float)NEON_ucvtf((uint)(ushort)param_4[3]);
    }
LAB_01049b58:
    fVar11 = (fVar11 / 1000.0) * (float)CONCAT22(uVar10,uVar9);
LAB_01049b68:
    *(float *)(*param_2 + 0xc) = fVar11;
    break;
  case 9:
    fVar11 = *(float *)(param_1 + 0x1c);
    if (fVar11 == 0.0) {
      return;
    }
    goto LAB_01049b68;
  }
  return;
}


