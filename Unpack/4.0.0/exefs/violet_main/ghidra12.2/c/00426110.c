/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00426110; name: FUN_00426110
 */


void FUN_00426110(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = param_1 + 8;
  FUN_00427c00(&local_b0,puVar1,param_1);
  FUN_0042b500(&local_70,param_2,&local_b0);
  uStack_a0 = CONCAT44((int)((ulong)param_1[10] >> 0x20) + (int)((ulong)param_1[2] >> 0x20),
                       (int)param_1[10] + (int)param_1[2]);
  uStack_98 = CONCAT44((int)((ulong)param_1[0xb] >> 0x20) + (int)((ulong)param_1[3] >> 0x20),
                       (int)param_1[0xb] + (int)param_1[3]);
  uStack_a8 = CONCAT44((int)((ulong)param_1[9] >> 0x20) + (int)((ulong)param_1[1] >> 0x20),
                       (int)param_1[9] + (int)param_1[1]);
  local_b0 = CONCAT44((int)((ulong)param_1[8] >> 0x20) + (int)((ulong)*param_1 >> 0x20),
                      (int)param_1[8] + (int)*param_1);
  local_80 = CONCAT44((int)((ulong)param_1[0xe] >> 0x20) + (int)((ulong)param_1[6] >> 0x20),
                      (int)param_1[0xe] + (int)param_1[6]);
  local_78 = CONCAT44((int)((ulong)param_1[0xf] >> 0x20) + (int)((ulong)param_1[7] >> 0x20),
                      (int)param_1[0xf] + (int)param_1[7]);
  uStack_88 = CONCAT44((int)((ulong)param_1[0xd] >> 0x20) + (int)((ulong)param_1[5] >> 0x20),
                       (int)param_1[0xd] + (int)param_1[5]);
  local_90 = CONCAT44((int)((ulong)param_1[0xc] >> 0x20) + (int)((ulong)param_1[4] >> 0x20),
                      (int)param_1[0xc] + (int)param_1[4]);
  FUN_0042b500(puVar1,param_2 + 0x40,&local_b0);
  FUN_0042b500(param_1,param_2 + 0x80,param_1 + 0x18);
  local_f0 = *(int *)(param_1 + 8) + (int)local_70;
  local_ec = *(int *)((long)param_1 + 0x44) + local_70._4_4_;
  local_e8 = *(int *)(param_1 + 9) + (int)uStack_68;
  local_e4 = *(int *)((long)param_1 + 0x4c) + uStack_68._4_4_;
  local_e0 = *(int *)(param_1 + 10) + (int)local_60;
  local_dc = *(int *)((long)param_1 + 0x54) + local_60._4_4_;
  local_d8 = *(int *)(param_1 + 0xb) + (int)local_58;
  local_d4 = *(int *)((long)param_1 + 0x5c) + local_58._4_4_;
  iStack_cc = *(int *)((long)param_1 + 100) + local_50._4_4_;
  local_d0 = *(int *)(param_1 + 0xc) + (int)local_50;
  local_c8 = *(int *)(param_1 + 0xd) + (int)uStack_48;
  local_c4 = *(int *)((long)param_1 + 0x6c) + uStack_48._4_4_;
  local_c0 = *(int *)(param_1 + 0xe) + (int)local_40;
  local_bc = *(int *)((long)param_1 + 0x74) + local_40._4_4_;
  uVar2 = (*(int *)((long)param_1 + 0x74) - local_40._4_4_) + 0x1ffffffe;
  uVar3 = (*(int *)(param_1 + 0xe) - (int)local_40) + 0x1ffffffe;
  local_b8 = *(int *)(param_1 + 0xf) + (int)local_38;
  uVar4 = (*(int *)((long)param_1 + 0x6c) - uStack_48._4_4_) + 0x1ffffffe;
  uVar5 = (*(int *)(param_1 + 0xd) - (int)uStack_48) + 0x1ffffffe;
  uVar6 = (*(int *)((long)param_1 + 100) - local_50._4_4_) + 0x1ffffffe;
  uVar7 = (*(int *)((long)param_1 + 0x5c) - local_58._4_4_) + 0x1ffffffe;
  uVar8 = (*(int *)(param_1 + 0xb) - (int)local_58) + 0x1ffffffe;
  uStack_88 = CONCAT44((uVar4 & 0xfffffff) + (uVar5 >> 0x1c),(uVar5 & 0xfffffff) + (uVar6 >> 0x1c));
  uVar5 = (*(int *)((long)param_1 + 0x54) - local_60._4_4_) + 0x1ffffffe;
  uVar9 = (*(int *)(param_1 + 10) - (int)local_60) + 0x1ffffffe;
  uStack_98 = CONCAT44((uVar7 & 0xfffffff) + (uVar8 >> 0x1c),(uVar8 & 0xfffffff) + (uVar5 >> 0x1c));
  uVar8 = (*(int *)((long)param_1 + 0x4c) - uStack_68._4_4_) + 0x1ffffffe;
  uVar10 = (*(int *)(param_1 + 9) - (int)uStack_68) + 0x1ffffffe;
  uVar11 = (*(int *)((long)param_1 + 0x44) - local_70._4_4_) + 0x1ffffffe;
  uStack_a8 = CONCAT44((uVar8 & 0xfffffff) + (uVar10 >> 0x1c),
                       (uVar10 & 0xfffffff) + (uVar11 >> 0x1c));
  uStack_a0 = CONCAT44((uVar5 & 0xfffffff) + (uVar9 >> 0x1c),(uVar9 & 0xfffffff) + (uVar8 >> 0x1c));
  local_b4 = *(int *)((long)param_1 + 0x7c) + local_38._4_4_;
  uVar5 = (*(int *)(param_1 + 0xf) - (int)local_38) + 0x1ffffffe;
  uVar8 = (*(int *)((long)param_1 + 0x7c) - local_38._4_4_) + 0x1ffffffe;
  uVar12 = uVar8 >> 0x1c;
  uVar9 = (*(int *)(param_1 + 0xc) - (int)local_50) + uVar12 + 0x1ffffffc;
  uVar10 = (*(int *)(param_1 + 8) - (int)local_70) + 0x1ffffffe;
  local_80 = CONCAT44((uVar2 & 0xfffffff) + (uVar3 >> 0x1c),(uVar3 & 0xfffffff) + (uVar4 >> 0x1c));
  local_b0 = CONCAT44((uVar11 & 0xfffffff) + (uVar10 >> 0x1c),uVar12 + (uVar10 & 0xfffffff));
  local_78 = CONCAT44((uVar8 & 0xfffffff) + (uVar5 >> 0x1c),(uVar5 & 0xfffffff) + (uVar2 >> 0x1c));
  local_90 = CONCAT44((uVar6 & 0xfffffff) + (uVar9 >> 0x1c),(uVar9 & 0xfffffff) + (uVar7 >> 0x1c));
  FUN_00427c00(puVar1,param_1 + 0x10,param_1);
  local_60 = CONCAT44((int)((ulong)param_1[0x12] >> 0x20) + (int)((ulong)param_1[2] >> 0x20),
                      (int)param_1[0x12] + (int)param_1[2]);
  local_58 = CONCAT44((int)((ulong)param_1[0x13] >> 0x20) + (int)((ulong)param_1[3] >> 0x20),
                      (int)param_1[0x13] + (int)param_1[3]);
  uStack_68 = CONCAT44((int)((ulong)param_1[0x11] >> 0x20) + (int)((ulong)param_1[1] >> 0x20),
                       (int)param_1[0x11] + (int)param_1[1]);
  local_70 = CONCAT44((int)((ulong)param_1[0x10] >> 0x20) + (int)((ulong)*param_1 >> 0x20),
                      (int)param_1[0x10] + (int)*param_1);
  local_40 = CONCAT44((int)((ulong)param_1[0x16] >> 0x20) + (int)((ulong)param_1[6] >> 0x20),
                      (int)param_1[0x16] + (int)param_1[6]);
  local_38 = CONCAT44((int)((ulong)param_1[0x17] >> 0x20) + (int)((ulong)param_1[7] >> 0x20),
                      (int)param_1[0x17] + (int)param_1[7]);
  uStack_48 = CONCAT44((int)((ulong)param_1[0x15] >> 0x20) + (int)((ulong)param_1[5] >> 0x20),
                       (int)param_1[0x15] + (int)param_1[5]);
  local_50 = CONCAT44((int)((ulong)param_1[0x14] >> 0x20) + (int)((ulong)param_1[4] >> 0x20),
                      (int)param_1[0x14] + (int)param_1[4]);
  FUN_0042b500(param_1 + 0x10,&local_70,puVar1);
  FUN_0042b500(param_1,puVar1,&local_b0);
  FUN_0042b500(puVar1,&local_70,&local_f0);
  if (param_3 == 0) {
    FUN_0042b500(param_1 + 0x18,&local_b0,&local_f0);
  }
  return;
}


