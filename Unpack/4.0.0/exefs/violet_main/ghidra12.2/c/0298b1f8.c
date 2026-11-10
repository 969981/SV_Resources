/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298b1f8; name: FUN_0298b1f8
 */


void FUN_0298b1f8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_029056f0(*(undefined2 *)*param_3);
  if ((uVar1 & 0xff) == 0) {
    FUN_0298b434(param_1,*param_3,param_3[1]);
    return;
  }
  FUN_0298b370(param_1,param_3[1],uVar1);
  return;
}


