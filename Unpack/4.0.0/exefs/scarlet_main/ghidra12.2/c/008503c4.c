/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008503c4; name: FUN_008503c4
 */


void FUN_008503c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uVar3 = *param_5;
  *(undefined8 *)((long)puVar1 + 7) = *(undefined8 *)((long)param_5 + 7);
  *puVar1 = uVar3;
  uVar3 = param_5[2];
  puVar1[3] = param_5[3];
  puVar1[2] = uVar3;
  uVar3 = param_5[4];
  puVar1[5] = param_5[5];
  puVar1[4] = uVar3;
  uVar3 = *param_4;
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(lVar2 + 0x128) = param_4[1];
  *(undefined8 *)(lVar2 + 0x120) = uVar3;
  FUN_0085f114(*(undefined8 *)(param_1 + 0x18),param_2,param_3,1,0);
  return;
}


