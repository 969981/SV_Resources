/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd5fe4; name: FUN_00cd5fe4
 */


void FUN_00cd5fe4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1[1] - *param_1;
  uVar1 = lVar2 >> 4;
  if (uVar1 < 0x800) {
    FUN_00cd6250(param_1,0x800 - uVar1);
    return;
  }
  if (lVar2 != 0x8000) {
    param_1[1] = *param_1 + 0x8000;
  }
  return;
}


