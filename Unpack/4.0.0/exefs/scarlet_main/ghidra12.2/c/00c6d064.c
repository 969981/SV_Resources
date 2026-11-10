/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6d064; name: FUN_00c6d064
 */


void FUN_00c6d064(long param_1,undefined4 param_2,uint param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 auStack_1b0 [32];
  undefined4 local_130 [64];
  
  if (0 < (int)param_3) {
    puVar4 = local_130;
    uVar5 = (ulong)param_3;
    puVar6 = (undefined4 *)(param_4 + 0xc);
    puVar3 = auStack_1b0;
    do {
      uVar2 = puVar6[-2];
      uVar5 = uVar5 - 1;
      *puVar4 = puVar6[-3];
      puVar4[1] = uVar2;
      uVar2 = *puVar6;
      puVar4[2] = puVar6[-1];
      puVar4[3] = uVar2;
      puVar1 = puVar6 + 1;
      uVar2 = puVar6[2];
      puVar6 = puVar6 + 0xc;
      puVar4 = puVar4 + 4;
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3 = puVar3 + 2;
    } while (uVar5 != 0);
  }
  (**(code **)PTR_DAT_047d2860)(*(undefined8 *)(param_1 + 0xb0),param_2,param_3,local_130);
  (**(code **)PTR_DAT_047d2870)(*(undefined8 *)(param_1 + 0xb0),param_2,param_3,auStack_1b0);
  return;
}


