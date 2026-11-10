/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00428c40; name: FUN_00428c40
 */


void FUN_00428c40(undefined8 *param_1,long param_2,int param_3)

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
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
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
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  
  puVar1 = param_1 + 8;
  FUN_00427c00(&local_b0,puVar1,param_1);
  FUN_0042b500(&local_70,param_2 + 0x40,&local_b0);
  local_b0 = CONCAT44((int)((ulong)param_1[8] >> 0x20) + (int)((ulong)*param_1 >> 0x20),
                      (int)param_1[8] + (int)*param_1);
  uStack_a8 = CONCAT44((int)((ulong)param_1[9] >> 0x20) + (int)((ulong)param_1[1] >> 0x20),
                       (int)param_1[9] + (int)param_1[1]);
  local_a0 = CONCAT44((int)((ulong)param_1[10] >> 0x20) + (int)((ulong)param_1[2] >> 0x20),
                      (int)param_1[10] + (int)param_1[2]);
  local_98 = CONCAT44((int)((ulong)param_1[0xb] >> 0x20) + (int)((ulong)param_1[3] >> 0x20),
                      (int)param_1[0xb] + (int)param_1[3]);
  local_90 = CONCAT44((int)((ulong)param_1[0xc] >> 0x20) + (int)((ulong)param_1[4] >> 0x20),
                      (int)param_1[0xc] + (int)param_1[4]);
  uStack_88 = CONCAT44((int)((ulong)param_1[0xd] >> 0x20) + (int)((ulong)param_1[5] >> 0x20),
                       (int)param_1[0xd] + (int)param_1[5]);
  local_80 = CONCAT44((int)((ulong)param_1[0xe] >> 0x20) + (int)((ulong)param_1[6] >> 0x20),
                      (int)param_1[0xe] + (int)param_1[6]);
  local_78 = CONCAT44((int)((ulong)param_1[0xf] >> 0x20) + (int)((ulong)param_1[7] >> 0x20),
                      (int)param_1[0xf] + (int)param_1[7]);
  FUN_0042b500(puVar1,param_2,&local_b0);
  FUN_0042b500(param_1,param_2 + 0x80,param_1 + 0x18);
  local_f0 = *(int *)(param_1 + 8) + local_70;
  local_ec = *(int *)((long)param_1 + 0x44) + iStack_6c;
  local_e8 = *(int *)(param_1 + 9) + local_68;
  local_e4 = *(int *)((long)param_1 + 0x4c) + iStack_64;
  local_e0 = *(int *)(param_1 + 10) + local_60;
  local_dc = *(int *)((long)param_1 + 0x54) + iStack_5c;
  local_d8 = *(int *)(param_1 + 0xb) + local_58;
  local_d4 = *(int *)((long)param_1 + 0x5c) + iStack_54;
  local_d0 = *(int *)(param_1 + 0xc) + local_50;
  iStack_cc = *(int *)((long)param_1 + 100) + iStack_4c;
  local_c8 = *(int *)(param_1 + 0xd) + local_48;
  local_c4 = *(int *)((long)param_1 + 0x6c) + iStack_44;
  local_c0 = *(int *)(param_1 + 0xe) + local_40;
  local_bc = *(int *)((long)param_1 + 0x74) + iStack_3c;
  uVar2 = (*(int *)((long)param_1 + 0x74) - iStack_3c) + 0x1ffffffe;
  uVar3 = (*(int *)(param_1 + 0xe) - local_40) + 0x1ffffffe;
  uVar4 = (*(int *)((long)param_1 + 0x6c) - iStack_44) + 0x1ffffffe;
  uVar5 = (*(int *)(param_1 + 0xd) - local_48) + 0x1ffffffe;
  uVar6 = (*(int *)((long)param_1 + 100) - iStack_4c) + 0x1ffffffe;
  uVar7 = (*(int *)((long)param_1 + 0x5c) - iStack_54) + 0x1ffffffe;
  uVar8 = (*(int *)(param_1 + 0xb) - local_58) + 0x1ffffffe;
  uVar9 = (*(int *)((long)param_1 + 0x54) - iStack_5c) + 0x1ffffffe;
  uVar10 = (*(int *)(param_1 + 10) - local_60) + 0x1ffffffe;
  uVar11 = (*(int *)((long)param_1 + 0x4c) - iStack_64) + 0x1ffffffe;
  uVar12 = (*(int *)(param_1 + 9) - local_68) + 0x1ffffffe;
  uVar13 = (*(int *)((long)param_1 + 0x44) - iStack_6c) + 0x1ffffffe;
  uVar14 = (*(int *)(param_1 + 8) - local_70) + 0x1ffffffe;
  local_b8 = *(int *)(param_1 + 0xf) + local_38;
  local_80 = CONCAT44((uVar2 & 0xfffffff) + (uVar3 >> 0x1c),(uVar3 & 0xfffffff) + (uVar4 >> 0x1c));
  uStack_88 = CONCAT44((uVar4 & 0xfffffff) + (uVar5 >> 0x1c),(uVar5 & 0xfffffff) + (uVar6 >> 0x1c));
  local_a0 = CONCAT44((uVar9 & 0xfffffff) + (uVar10 >> 0x1c),(uVar10 & 0xfffffff) + (uVar11 >> 0x1c)
                     );
  uStack_a8 = CONCAT44((uVar11 & 0xfffffff) + (uVar12 >> 0x1c),
                       (uVar12 & 0xfffffff) + (uVar13 >> 0x1c));
  local_b4 = *(int *)((long)param_1 + 0x7c) + iStack_34;
  uVar3 = (*(int *)(param_1 + 0xf) - local_38) + 0x1ffffffe;
  uVar4 = (*(int *)((long)param_1 + 0x7c) - iStack_34) + 0x1ffffffe;
  uVar10 = uVar4 >> 0x1c;
  uVar5 = (*(int *)(param_1 + 0xc) - local_50) + uVar10 + 0x1ffffffc;
  local_b0 = CONCAT44((uVar13 & 0xfffffff) + (uVar14 >> 0x1c),uVar10 + (uVar14 & 0xfffffff));
  local_78 = CONCAT44((uVar4 & 0xfffffff) + (uVar3 >> 0x1c),(uVar3 & 0xfffffff) + (uVar2 >> 0x1c));
  local_98 = CONCAT44((uVar7 & 0xfffffff) + (uVar8 >> 0x1c),(uVar8 & 0xfffffff) + (uVar9 >> 0x1c));
  local_90 = CONCAT44((uVar6 & 0xfffffff) + (uVar5 >> 0x1c),(uVar5 & 0xfffffff) + (uVar7 >> 0x1c));
  puVar15 = param_1 + 0x10;
  param_1[9] = CONCAT44((int)((ulong)param_1[1] >> 0x20) + (int)((ulong)param_1[0x11] >> 0x20),
                        (int)param_1[1] + (int)param_1[0x11]);
  param_1[8] = CONCAT44((int)((ulong)*param_1 >> 0x20) + (int)((ulong)*puVar15 >> 0x20),
                        (int)*param_1 + (int)*puVar15);
  param_1[0xb] = CONCAT44((int)((ulong)param_1[3] >> 0x20) + (int)((ulong)param_1[0x13] >> 0x20),
                          (int)param_1[3] + (int)param_1[0x13]);
  param_1[10] = CONCAT44((int)((ulong)param_1[2] >> 0x20) + (int)((ulong)param_1[0x12] >> 0x20),
                         (int)param_1[2] + (int)param_1[0x12]);
  param_1[0xd] = CONCAT44((int)((ulong)param_1[5] >> 0x20) + (int)((ulong)param_1[0x15] >> 0x20),
                          (int)param_1[5] + (int)param_1[0x15]);
  param_1[0xc] = CONCAT44((int)((ulong)param_1[4] >> 0x20) + (int)((ulong)param_1[0x14] >> 0x20),
                          (int)param_1[4] + (int)param_1[0x14]);
  param_1[0xf] = CONCAT44((int)((ulong)param_1[7] >> 0x20) + (int)((ulong)param_1[0x17] >> 0x20),
                          (int)param_1[7] + (int)param_1[0x17]);
  param_1[0xe] = CONCAT44((int)((ulong)param_1[6] >> 0x20) + (int)((ulong)param_1[0x16] >> 0x20),
                          (int)param_1[6] + (int)param_1[0x16]);
  FUN_00427c00(&local_70,puVar15,param_1);
  FUN_0042b500(puVar15,&local_70,puVar1);
  FUN_0042b500(param_1,puVar1,&local_b0);
  FUN_0042b500(puVar1,&local_70,&local_f0);
  if (param_3 == 0) {
    FUN_0042b500(param_1 + 0x18,&local_b0,&local_f0);
  }
  return;
}


