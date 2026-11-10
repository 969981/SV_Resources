/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e14d8; name: FUN_030e14d8
 */


void FUN_030e14d8(undefined8 param_1,long param_2,int *param_3,int *param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined2 local_108 [2];
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined2 local_b8 [4];
  int local_b0 [2];
  undefined2 local_a8 [4];
  int local_a0 [2];
  long local_98;
  ulong local_90;
  long local_88;
  ulong local_80;
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  int local_58 [2];
  
  lVar14 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x38) +
                    (long)*(int *)(param_2 + 0x20) * 0x100);
  local_58[0] = *param_3;
  local_68[0] = *param_4;
  lVar12 = *(long *)(*(long *)(lVar14 + 0x20) + 0x18);
  lVar1 = lVar12 + (long)local_68[0] * 0x10;
  lVar12 = lVar12 + (long)local_58[0] * 0x10;
  FUN_030e5e30(param_2 + 0x28,local_58,
               (*(short *)(param_5 + 3) - *(short *)(lVar12 + 8)) - *(short *)(lVar12 + 10),local_68
               ,(*(short *)(param_6 + 3) - *(short *)(lVar1 + 8)) - *(short *)(lVar1 + 10));
  local_70[0] = *param_3;
  FUN_030e0698(param_1,param_2,local_70,param_5,param_7);
  local_78[0] = *param_4;
  FUN_030e0698(param_1,param_2,local_78,param_6,param_7);
  local_88 = 0;
  local_80 = 0x8000000000000000;
  local_98 = 0;
  local_90 = 0x8000000000000000;
  local_a0[0] = *param_3;
  local_a8[0] = *(undefined2 *)(param_5 + 3);
  FUN_030df1a8(lVar14,local_a0,local_a8,&local_88,0);
  local_b0[0] = *param_4;
  local_b8[0] = *(undefined2 *)(param_6 + 3);
  FUN_030df1a8(lVar14,local_b0,local_b8,&local_98,0);
  lVar11 = local_88;
  lVar12 = local_98;
  lVar13 = *(long *)(lVar14 + 0x20);
  iVar4 = *(int *)*param_5;
  iVar5 = ((int *)*param_5)[1];
  iVar6 = *(int *)(lVar13 + 0x40);
  lVar1 = 0x38;
  if (iVar6 <= iVar4) {
    lVar1 = 0xf0;
  }
  iVar2 = 0;
  if (iVar6 <= iVar4) {
    iVar2 = iVar6;
  }
  puVar7 = (undefined8 *)(*(long *)(lVar13 + lVar1) + (long)(iVar4 - iVar2) * 0x10);
  uStack_d8 = puVar7[1];
  local_e0 = *puVar7;
  lVar1 = 0x38;
  if (iVar6 <= iVar5) {
    lVar1 = 0xf0;
  }
  iVar4 = 0;
  if (iVar6 <= iVar5) {
    iVar4 = iVar6;
  }
  puVar7 = (undefined8 *)(*(long *)(lVar13 + lVar1) + (long)(iVar5 - iVar4) * 0x10);
  uStack_c8 = puVar7[1];
  uStack_d0 = *puVar7;
  iVar4 = *(int *)*param_6;
  iVar5 = ((int *)*param_6)[1];
  lVar1 = 0x38;
  if (iVar6 <= iVar4) {
    lVar1 = 0xf0;
  }
  iVar2 = 0;
  if (iVar6 <= iVar4) {
    iVar2 = iVar6;
  }
  iVar3 = 0;
  if (iVar6 <= iVar5) {
    iVar3 = iVar6;
  }
  puVar7 = (undefined8 *)(*(long *)(lVar13 + lVar1) + (long)(iVar4 - iVar2) * 0x10);
  uStack_f8 = puVar7[1];
  local_100 = *puVar7;
  lVar1 = 0x38;
  if (iVar6 <= iVar5) {
    lVar1 = 0xf0;
  }
  puVar7 = (undefined8 *)(*(long *)(lVar13 + lVar1) + (long)(iVar5 - iVar3) * 0x10);
  uStack_e8 = puVar7[1];
  uStack_f0 = *puVar7;
  local_108[0] = 0;
  local_104 = (undefined4)param_1;
  FUN_030eae80(*(undefined8 *)(param_2 + 0x18),lVar14,lVar14,&local_e0,&local_100,local_88,
               local_88 + (long)(int)local_80 * 8,param_9,local_98,
               local_98 + (long)(int)local_90 * 8,local_108);
  uVar10 = local_90;
  puVar9 = PTR_PTR_047d1a50;
  uVar8 = local_90 >> 0x20;
  local_90 = uVar8 << 0x20;
  if ((lVar12 != 0) && (-1 < (long)uVar10)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,lVar12,uVar8 << 3);
  }
  uVar10 = local_80;
  uVar8 = local_80 >> 0x20;
  local_80 = uVar8 << 0x20;
  if ((lVar11 != 0) && (-1 < (long)uVar10)) {
    (**(code **)(*(long *)(puVar9 + 0x20) + 0x20))(puVar9 + 0x20,lVar11,uVar8 << 3);
  }
  return;
}


