/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e1e7a4; name: FUN_02e1e7a4
 */


undefined8 FUN_02e1e7a4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar2 = 0;
    do {
      uVar1 = (**(code **)(**(long **)(param_1 + uVar2 * 8) + 0x208))();
      if ((uVar1 & 1) != 0) {
        return *(undefined8 *)(param_1 + uVar2 * 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x30));
  }
  return 0;
}


