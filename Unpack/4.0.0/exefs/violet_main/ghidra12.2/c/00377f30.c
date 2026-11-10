/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00377f30; name: FUN_00377f30
 */


ulong FUN_00377f30(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if ((param_1 != -1) && (param_2 != -1)) {
    uVar1 = (int)param_2 + (int)param_1 * 0x6c;
    uVar2 = uVar1 - 0x2b;
    uVar4 = uVar2 % 0x6a;
    if (uVar2 >> 2 < 0xaf9) {
      uVar4 = uVar4 + (int)(char)(&DAT_03cd796e)[(ulong)(uVar2 >> 1 & 0x7fff) / 0x35];
    }
    if (((0x5d < uVar4) || (*(ushort *)(&DAT_03cd7848 + (ulong)uVar4 * 2) != uVar1)) ||
       ((ulong)(byte)(&DAT_03cd7904)[uVar4] == 0xff)) {
      return 0;
    }
    uVar3 = *(long *)PTR_DAT_047ccb88 + (ulong)(byte)(&DAT_03cd7904)[uVar4] * 0x50 | 1;
  }
  return uVar3;
}


