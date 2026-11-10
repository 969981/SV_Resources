/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6cf4c; name: FUN_00c6cf4c
 */


void FUN_00c6cf4c(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 local_120 [64];
  
  puVar2 = local_120;
  if (0 < (int)param_3) {
    uVar3 = (ulong)param_3;
    puVar4 = (undefined4 *)(param_4 + 8);
    do {
      uVar1 = puVar4[-1];
      uVar3 = uVar3 - 1;
      *puVar2 = puVar4[-2];
      puVar2[1] = uVar1;
      uVar1 = puVar4[1];
      puVar2[2] = *puVar4;
      puVar2[3] = uVar1;
      puVar2 = puVar2 + 4;
      puVar4 = puVar4 + 8;
    } while (uVar3 != 0);
  }
  (**(code **)PTR_DAT_047d2868)(*(undefined8 *)(param_1 + 0xb0),param_2,param_3,local_120);
  return;
}


