/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02188c30; name: FUN_02188c30
 */


void FUN_02188c30(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_0121778c(param_2,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = uVar1;
  return;
}


