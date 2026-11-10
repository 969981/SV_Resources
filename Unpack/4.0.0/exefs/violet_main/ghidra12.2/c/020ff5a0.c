/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020ff5a0; name: FUN_020ff5a0
 */


void FUN_020ff5a0(undefined8 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  *param_1 = 5;
  uVar1 = 0x15;
  if ((param_3 & 1) == 0) {
    uVar1 = 5;
  }
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)param_1 = uVar1;
  return;
}


