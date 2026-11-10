/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aacb90; name: FUN_01aacb90
 */


void FUN_01aacb90(short *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0;
  do {
    if (*param_1 == 0) {
      return;
    }
    if (*param_1 == 0x10) {
      lVar2 = (ulong)(ushort)param_1[1] + 2;
      param_1 = param_1 + lVar2;
    }
    else {
      param_1 = param_1 + 1;
      lVar2 = 1;
    }
    uVar1 = (int)lVar2 + uVar1;
  } while (uVar1 < 0x800);
  return;
}


