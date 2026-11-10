/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028be480; name: FUN_028be480
 */


void FUN_028be480(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  uVar5 = *param_2;
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  puVar4[6] = 0;
  puVar4[2] = uVar1;
  puVar4[3] = uVar3;
  *puVar4 = uVar5;
  puVar4[1] = uVar2;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[4] = param_2[4];
  puVar4[5] = param_2[5];
  puVar4[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[7] = param_2[7];
  puVar4[8] = param_2[8];
  puVar4[9] = param_2[9];
  uVar5 = param_2[10];
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  *(undefined8 *)((long)puVar4 + 0x55) = *(undefined8 *)((long)param_2 + 0x55);
  puVar4[10] = uVar5;
  *(undefined8 **)(param_1 + 8) = puVar4 + 0xc;
  return;
}


