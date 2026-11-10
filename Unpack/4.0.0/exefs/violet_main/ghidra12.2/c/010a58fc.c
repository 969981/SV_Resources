/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a58fc; name: FUN_010a58fc
 */


void FUN_010a58fc(long param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x2c) == '\0' && (byte)(param_3 + 1U) < 2;
  }
  FUN_010a8610(*(undefined8 *)(param_1 + 8),param_2,bVar1);
  return;
}


