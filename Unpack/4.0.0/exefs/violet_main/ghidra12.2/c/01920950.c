/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01920950; name: FUN_01920950
 */


undefined8 FUN_01920950(ushort *param_1,uint param_2)

{
  ushort uVar1;
  ulong uVar2;
  
  if (6 < param_2) {
    uVar2 = (ulong)param_2;
    do {
      uVar1 = *param_1;
      if ((uVar1 + 0x5400 >> 2 & 0x3fff) < 0xae9) {
        return 0;
      }
      if ((uVar1 - 0x4e00 & 0xffff) < 0x51cd) {
        return 0;
      }
      if ((ushort)(uVar1 + 0xcfbf) < 0x50) {
        return 0;
      }
      if ((ushort)(uVar1 + 0xcf5f) < 0x5a) {
        return 0;
      }
      uVar2 = uVar2 - 1;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
  }
  return 1;
}


