/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bcc884; name: FUN_01bcc884
 */


void FUN_01bcc884(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_01bcc8c8(param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_01bcc918(param_1,param_2);
  return;
}


