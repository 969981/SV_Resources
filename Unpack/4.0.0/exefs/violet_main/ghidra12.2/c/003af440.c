/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003af440; name: FUN_003af440
 */


undefined4 FUN_003af440(undefined8 param_1,long param_2,uint *param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_003b5720();
  }
  else {
    uVar1 = FUN_003b5730(param_2);
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar1;
  }
  return *(undefined4 *)(&DAT_03cdc56c + (ulong)uVar1 * 4);
}


