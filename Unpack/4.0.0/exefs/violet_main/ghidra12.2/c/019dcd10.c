/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019dcd10; name: FUN_019dcd10
 */


void FUN_019dcd10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  auVar3 = *(undefined1 (*) [16])(param_2 + 4);
  *(long *)(param_1 + 3) = auVar3._0_8_;
  auVar3 = NEON_ext(auVar3,auVar3,8,1);
  *(long *)(param_1 + 5) = auVar3._0_8_;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  param_1[7] = param_2[8];
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  return;
}


