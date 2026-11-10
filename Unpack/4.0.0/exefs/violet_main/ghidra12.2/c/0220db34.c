/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0220db34; name: FUN_0220db34
 */


undefined8 FUN_0220db34(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(ulong *)(param_1 + 0xf0) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      if (((*(ulong *)(param_1 + 0x88) <= uVar2) ||
          ((*(ulong *)(*(long *)(param_1 + 0x80) + (uVar2 >> 3 & 0x1ffffffffffffff8)) >>
            (uVar2 & 0x3f) & 1) == 0)) && (*(char *)(*(long *)(param_1 + 0x48) + lVar1) != '\0')) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (*(ulong *)(param_1 + 0xf0) != uVar2);
  }
  return 0;
}


