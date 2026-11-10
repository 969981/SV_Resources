/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


