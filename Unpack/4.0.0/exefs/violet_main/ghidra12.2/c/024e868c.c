/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024e868c; name: FUN_024e868c
 */


undefined1  [16] FUN_024e868c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = FUN_024c9574(param_3);
  fVar4 = (float)FUN_024e9964(param_2,uVar1,uVar2,uVar3);
  auVar5._0_8_ = (double)fVar4;
  auVar5._8_8_ = 0;
  return auVar5;
}


