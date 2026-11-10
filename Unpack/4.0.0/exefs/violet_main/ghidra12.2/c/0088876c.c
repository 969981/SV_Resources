/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088876c; name: FUN_0088876c
 */


undefined8 FUN_0088876c(long param_1,ushort param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(byte *)(param_1 + (ulong)param_2 + 0x1888);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x1c00) +
                   (ulong)*(byte *)(*(long *)(param_1 + (ulong)param_2 * 8 + 0x18a8) + uVar2)) !=
          '\0') {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}


