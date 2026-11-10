/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024e32ec; name: FUN_024e32ec
 */


undefined1  [16] FUN_024e32ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = FUN_024cd704(param_3);
  fVar4 = (float)FUN_024e51a0(param_2,uVar1,uVar2,uVar3);
  auVar5._0_8_ = (double)fVar4;
  auVar5._8_8_ = 0;
  return auVar5;
}


