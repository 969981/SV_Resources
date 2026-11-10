/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01242804; name: FUN_01242804
 */


undefined8 FUN_01242804(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  
  if (*(uint *)(param_1 + 0x7c) == 0) {
    return 0;
  }
  uVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x5c);
  while ((3 < uVar1 || (*pcVar2 != '\x01'))) {
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 8;
    if (*(uint *)(param_1 + 0x7c) == uVar1) {
      return 0;
    }
  }
  return 1;
}


