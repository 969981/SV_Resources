/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4480; name: FUN_001f4480
 */


undefined8 FUN_001f4480(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
  if (*(undefined1 **)(*(long *)(param_1 + 8) + 0x10) == puVar2) {
    uVar1 = FUN_001f4394();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    puVar2 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
  }
  *puVar2 = param_2;
  return 0;
}


