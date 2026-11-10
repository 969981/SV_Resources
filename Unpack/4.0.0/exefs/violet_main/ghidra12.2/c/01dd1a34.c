/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd1a34; name: FUN_01dd1a34
 */


void FUN_01dd1a34(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(int *)(param_1 + 0x108) - 1U < 2) {
    local_70 = 0x76214f4d451e076a;
    pcStack_68 = "L_cursor_range_01";
    local_90 = 0xa697a17b66e2c89e;
    local_88 = "L_cursor_range_01/W_cursor_range_00";
    iVar1 = *(int *)(param_1 + 0x1f0);
    fVar7 = 0.0;
    fVar6 = -740.0;
    fVar5 = 380.0;
    iVar3 = ((iVar1 << 8) >> 0x14) * -0x7e + 0x125;
  }
  else {
    local_70 = 0x7621504d451e091d;
    pcStack_68 = "L_cursor_range_00";
    local_90 = 0x4e644ddf4f09ee55;
    local_88 = "L_cursor_range_00/W_cursor_range_00";
    iVar3 = *(int *)(param_1 + 0x1ec) >> 0x18;
    fVar5 = (float)(iVar3 * 0x7e + 0xe);
    fVar6 = (float)(((*(int *)(param_1 + 0x1ec) << 8) >> 0x14) * 0x7e + -0x15e);
    fVar7 = (float)(iVar3 * 0x3f + -0x3f);
    iVar1 = *(int *)(param_1 + 0x1f0);
    iVar3 = ((iVar1 << 8) >> 0x14) * -0x7e + 0x15d;
  }
  uStack_58 = 0;
  local_60 = 0x11;
  local_78 = 0;
  local_80 = 0x23;
  lVar4 = *(long *)(*(long *)(param_1 + 0x1a8) + 0x6cd0);
  lVar2 = FUN_00c8c7b4(*(undefined8 *)(lVar4 + 0x170),&local_70);
  *(float *)(lVar2 + 0x30) = fVar6;
  *(float *)(lVar2 + 0x34) = (float)iVar3;
  *(undefined4 *)(lVar2 + 0x38) = 0;
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x11;
  lVar2 = FUN_00c8c7b4(*(undefined8 *)(lVar4 + 0x170),&local_90);
  *(float *)(lVar2 + 0x30) = fVar7;
  *(float *)(lVar2 + 0x34) = -(float)((iVar1 >> 0x18) * 0x3f + -0x3f);
  *(undefined4 *)(lVar2 + 0x38) = 0;
  *(float *)(lVar2 + 0x50) = fVar5;
  *(float *)(lVar2 + 0x54) = (float)((iVar1 >> 0x18) * 0x7e + 0xe);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
  return;
}


