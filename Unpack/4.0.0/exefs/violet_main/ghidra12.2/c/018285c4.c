/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018285c4; name: FUN_018285c4
 */


undefined8 FUN_018285c4(long param_1,int param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0x2420);
  if (uVar1 != 0) {
    pcVar2 = (char *)(param_1 + 0x91);
    do {
      if ((*pcVar2 == '\0') && (*(int *)(pcVar2 + -0x89) == param_2)) {
        return 0;
      }
      uVar1 = uVar1 - 1;
      pcVar2 = pcVar2 + 0x8c;
    } while (uVar1 != 0);
  }
  return 1;
}


