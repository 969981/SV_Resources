/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079b718; name: FUN_0079b718
 */


void FUN_0079b718(undefined8 param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50 [2];
  
  uVar6 = FUN_007ec4a8();
  uVar1 = (uint)((ulong)uVar6 >> 0x20) ^ (uint)uVar6;
  local_50[0] = 0;
  FUN_007935cc(local_50);
  FUN_007c70fc(local_50,local_50[0] & 0xffffffff);
  FUN_007c7184(local_50);
  FUN_007c7184(local_50);
  FUN_007c7184(local_50);
  uVar2 = FUN_007c7184(local_50);
  uVar3 = FUN_007c7184(local_50);
  uVar4 = FUN_007c7184(local_50);
  uVar5 = FUN_007c7184(local_50);
  FUN_007c7140(&local_60,uVar2 ^ uVar1,uVar3 ^ uVar1,uVar4 ^ uVar1,uVar5 ^ uVar1);
  *(undefined8 *)(param_2 + 0x1194) = local_60;
  *(undefined8 *)(param_2 + 0x119c) = uStack_58;
  local_80 = *param_3;
  uStack_78 = param_3[1];
  local_70 = param_3[2];
  uStack_68 = param_3[3];
  FUN_007ec3c4(param_1,param_2,&local_80);
  return;
}


