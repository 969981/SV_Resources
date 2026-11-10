/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008efec0; name: FUN_008efec0
 */


void FUN_008efec0(long *param_1,undefined8 param_2,ulong param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long local_50 [2];
  
  uVar5 = (ulong)*(uint *)(*param_1 +
                          (-(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3
                          ));
  puVar1 = (uint *)(*param_1 + (long)((int)param_3 + param_4 + -1) * 8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = *(uint *)(param_1 + 5);
  local_50[0] = 0;
  local_50[1] = 0;
  FUN_008f0980(param_1[2],local_50);
  local_50[0] = local_50[0] + uVar5;
  FUN_008f0ab0(param_2,*(undefined4 *)((long)param_1 + 0x24),(int)param_1[5],local_50,
               uVar3 + (int)((long)(uVar2 - uVar5) >> ((ulong)uVar4 & 0x3f)),(int)param_1[6],param_5
               ,param_6);
  return;
}


