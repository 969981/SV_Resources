/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346e4f4; name: FUN_0346e4f4
 */


void FUN_0346e4f4(long param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = 1;
  if ((param_3 & 1) == 0) {
    uVar1 = 2;
  }
  *(undefined4 *)((long)param_2 + 0x2c) = uVar1;
  return;
}


