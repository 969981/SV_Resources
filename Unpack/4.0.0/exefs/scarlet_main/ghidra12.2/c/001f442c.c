/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f442c; name: FUN_001f442c
 */


undefined8 FUN_001f442c(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  puVar3 = *(undefined1 **)(lVar2 + 0x20);
  if (*(undefined1 **)(lVar2 + 0x10) == puVar3) {
    uVar1 = FUN_001f4394();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    lVar2 = *(long *)(param_1 + 8);
    puVar3 = *(undefined1 **)(lVar2 + 0x20);
  }
  *(undefined1 **)(lVar2 + 0x20) = puVar3 + 1;
  *puVar3 = param_2;
  return 0;
}


