/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00426680; name: FUN_00426680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00426680(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_190 [64];
  undefined1 auStack_150 [64];
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [64];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  byte bStack_58;
  
  lVar1 = param_1 + 0x40;
  uStack_88 = param_2[1];
  local_90 = *param_2;
  uStack_78 = param_2[3];
  local_80 = param_2[2];
  uStack_70 = param_2[4];
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  bStack_58 = (byte)((ulong)*(undefined8 *)((long)param_2 + 0x31) >> 0x38);
  uVar10 = (uint)bStack_58;
  bStack_58 = bStack_58 & 0x7f;
  uStack_68 = (undefined1)param_2[5];
  local_67 = (undefined7)((ulong)param_2[5] >> 8);
  uStack_5f = (undefined7)*(undefined8 *)((long)param_2 + 0x31);
  uVar7 = FUN_0042a980(lVar1,&local_90,1,0);
  uVar11 = (uint)bStack_58;
  FUN_0042bb00(param_1,lVar1);
  lVar2 = param_1 + 0x80;
  FUN_0042ab30(lVar2,&DAT_03ced560,param_1);
  lVar3 = param_1 + 0xc0;
  FUN_0042b9b0(lVar3,param_1,0x98a9);
  FUN_0042ab30(lVar3,&DAT_03ced4e0,lVar3);
  FUN_0042ab30(lVar3,&DAT_03ced560,lVar3);
  FUN_0042b500(param_1,lVar2,lVar3);
  uVar8 = FUN_0042add0(lVar3,param_1);
  FUN_0042b500(param_1,lVar3,lVar2);
  uVar9 = FUN_0042a940(param_1);
  FUN_004268d0(param_1,uVar9 ^ (int)((uVar10 & 0x80) - 1) >> 0x1f ^ 0xffffffffU);
  uVar6 = _UNK_03ced598;
  uVar5 = _DAT_03ced590;
  uVar4 = _DAT_03ced580;
  *(undefined8 *)(param_1 + 0xa8) = _UNK_03ced588;
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  uVar6 = _UNK_03ced578;
  uVar5 = _DAT_03ced570;
  uVar4 = _DAT_03ced560;
  *(undefined8 *)(param_1 + 0x88) = _UNK_03ced568;
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x98) = uVar6;
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  FUN_0042bb00(auStack_150,param_1);
  FUN_0042bb00(auStack_d0,lVar1);
  FUN_0042a790(auStack_190,auStack_150,auStack_d0);
  FUN_0042a790(lVar3,lVar1,param_1);
  FUN_0042bb00(auStack_110,lVar3);
  FUN_0042ab30(auStack_110,auStack_110,auStack_190);
  FUN_0042ab30(lVar3,auStack_d0,auStack_150);
  FUN_0042bb00(param_1,lVar2);
  FUN_0042a790(lVar2,param_1,param_1);
  FUN_0042ab30(auStack_d0,lVar2,auStack_190);
  FUN_0042b500(param_1,auStack_d0,auStack_110);
  FUN_0042b500(lVar2,lVar3,auStack_d0);
  FUN_0042b500(lVar1,lVar3,auStack_190);
  FUN_0042b500(lVar3,auStack_110,auStack_190);
  FUN_00453300(auStack_d0,0x40);
  FUN_00453300(auStack_110,0x40);
  FUN_00453300(auStack_150,0x40);
  FUN_00453300(auStack_190,0x40);
  FUN_00453300(&local_90,0x39);
  return uVar7 & (int)(uVar11 - 1) >> 0x1f & uVar8;
}


