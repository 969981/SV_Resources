/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e176c; name: FUN_030e176c
 */


void FUN_030e176c(undefined8 param_1,long param_2,int *param_3,undefined8 *param_4,long param_5,
                 int *param_6,undefined8 *param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_130;
  long local_128;
  undefined2 local_118 [2];
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 local_d0 [4];
  int local_c8 [2];
  undefined2 local_c0 [4];
  int local_b8 [2];
  long local_b0;
  ulong local_a8;
  long local_a0;
  ulong local_98;
  int local_90 [2];
  int local_88 [2];
  int local_80 [4];
  int local_68 [2];
  
  lVar13 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x38) +
                    (long)*(int *)(param_2 + 0x20) * 0x100);
  lVar14 = *(long *)(*(long *)(*(long *)(param_5 + 0x18) + 0x38) +
                    (long)*(int *)(param_5 + 0x20) * 0x100);
  if (*(char *)(lVar13 + 0x30) == '\x01') {
    local_128 = *(long *)(lVar13 + 0x20);
  }
  else {
    local_128 = FUN_0307d71c();
  }
  if (*(char *)(lVar14 + 0x30) == '\x01') {
    lVar10 = *(long *)(lVar14 + 0x20);
    local_130 = lVar10;
  }
  else {
    local_130 = FUN_0307d71c();
    lVar10 = *(long *)(lVar14 + 0x20);
  }
  local_68[0] = *param_3;
  iVar5 = *param_6;
  lVar15 = *(long *)(lVar10 + 0x18);
  lVar10 = *(long *)(*(long *)(lVar13 + 0x20) + 0x18) + (long)local_68[0] * 0x10;
  FUN_030e692c(param_2 + 0x28,local_68,
               (*(short *)(param_4 + 3) - *(short *)(lVar10 + 8)) - *(short *)(lVar10 + 10));
  local_80[0] = *param_6;
  lVar15 = lVar15 + (long)iVar5 * 0x10;
  FUN_030e692c(param_5 + 0x28,local_80,
               (*(short *)(param_7 + 3) - *(short *)(lVar15 + 8)) - *(short *)(lVar15 + 10));
  local_88[0] = *param_3;
  FUN_030e0698(param_1,param_2,local_88,param_4,param_8);
  local_90[0] = *param_6;
  FUN_030e0698(param_1,param_5,local_90,param_7,param_8);
  if (*(int *)(*(long *)(lVar13 + 0x20) + 0x108) == 0) {
    bVar11 = 4;
  }
  else {
    bVar11 = *(byte *)(*(long *)(*(long *)(lVar13 + 0x20) + 0x100) + (long)*param_3) | 4;
  }
  *(byte *)(*(long *)(local_128 + 0x100) + (long)*param_3) = bVar11;
  if (*(int *)(*(long *)(lVar14 + 0x20) + 0x108) == 0) {
    bVar11 = 4;
  }
  else {
    bVar11 = *(byte *)(*(long *)(*(long *)(lVar14 + 0x20) + 0x100) + (long)*param_6) | 4;
  }
  *(byte *)(*(long *)(local_130 + 0x100) + (long)*param_6) = bVar11;
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  local_b0 = 0;
  local_a8 = 0x8000000000000000;
  local_b8[0] = *param_3;
  local_c0[0] = *(undefined2 *)(param_4 + 3);
  FUN_030df1a8(lVar13,local_b8,local_c0,&local_a0,0);
  local_c8[0] = *param_6;
  local_d0[0] = *(undefined2 *)(param_7 + 3);
  FUN_030df1a8(lVar14,local_c8,local_d0,&local_b0,0);
  lVar9 = local_a0;
  lVar15 = local_b0;
  lVar12 = *(long *)(lVar13 + 0x20);
  iVar5 = *(int *)*param_4;
  iVar3 = ((int *)*param_4)[1];
  iVar4 = *(int *)(lVar12 + 0x40);
  lVar10 = 0x38;
  if (iVar4 <= iVar5) {
    lVar10 = 0xf0;
  }
  iVar2 = 0;
  if (iVar4 <= iVar5) {
    iVar2 = iVar4;
  }
  iVar1 = 0;
  if (iVar4 <= iVar3) {
    iVar1 = iVar4;
  }
  puVar6 = (undefined8 *)(*(long *)(lVar12 + lVar10) + (long)(iVar5 - iVar2) * 0x10);
  uStack_e8 = puVar6[1];
  local_f0 = *puVar6;
  lVar10 = 0x38;
  if (iVar4 <= iVar3) {
    lVar10 = 0xf0;
  }
  puVar6 = (undefined8 *)(*(long *)(lVar12 + lVar10) + (long)(iVar3 - iVar1) * 0x10);
  uStack_d8 = puVar6[1];
  uStack_e0 = *puVar6;
  lVar12 = *(long *)(lVar14 + 0x20);
  iVar4 = *(int *)(lVar12 + 0x40);
  iVar5 = *(int *)*param_7;
  iVar3 = ((int *)*param_7)[1];
  lVar10 = 0x38;
  if (iVar4 <= iVar5) {
    lVar10 = 0xf0;
  }
  iVar2 = 0;
  if (iVar4 <= iVar5) {
    iVar2 = iVar4;
  }
  puVar6 = (undefined8 *)(*(long *)(lVar12 + lVar10) + (long)(iVar5 - iVar2) * 0x10);
  uStack_108 = puVar6[1];
  local_110 = *puVar6;
  lVar10 = 0x38;
  if (iVar4 <= iVar3) {
    lVar10 = 0xf0;
  }
  iVar5 = 0;
  if (iVar4 <= iVar3) {
    iVar5 = iVar4;
  }
  puVar6 = (undefined8 *)(*(long *)(lVar12 + lVar10) + (long)(iVar3 - iVar5) * 0x10);
  uStack_f8 = puVar6[1];
  uStack_100 = *puVar6;
  local_118[0] = 0;
  local_114 = (undefined4)param_1;
  FUN_030eae80(*(undefined8 *)(param_2 + 0x18),lVar13,lVar14,&local_f0,&local_110,local_a0,
               local_a0 + (long)(int)local_98 * 8,param_9,local_b0,
               local_b0 + (long)(int)local_a8 * 8,local_118);
  uVar8 = local_a8;
  uVar7 = local_a8 >> 0x20;
  local_a8 = uVar7 << 0x20;
  if ((lVar15 != 0) && (-1 < (long)uVar8)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,lVar15,uVar7 << 3);
  }
  uVar8 = local_98;
  uVar7 = local_98 >> 0x20;
  local_98 = uVar7 << 0x20;
  if ((lVar9 != 0) && (-1 < (long)uVar8)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,lVar9,uVar7 << 3);
  }
  return;
}


