/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df2294; name: FUN_01df2294
 */


void FUN_01df2294(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_01df0ddc(*(undefined8 *)(param_1 + 0x30));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_01704cf8(*(undefined8 *)(param_1 + 0x30),2);
  return;
}


