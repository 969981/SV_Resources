/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfb8b4; name: FUN_01dfb8b4
 */


undefined4 FUN_01dfb8b4(long param_1,int param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1 + 0xad0) != '\0') {
    uVar1 = (*(long *)(param_1 + 0xae0) - *(long *)(param_1 + 0xad8) >> 2) * -0x5555555555555555;
    if ((int)uVar1 != 0) {
      uVar1 = uVar1 & 0xffffffff;
      puVar2 = (undefined4 *)(*(long *)(param_1 + 0xad8) + 4);
      do {
        if (puVar2[-1] == param_2) {
          return *puVar2;
        }
        puVar2 = puVar2 + 3;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return 0;
}


