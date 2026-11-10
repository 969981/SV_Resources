/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0088717c; name: FUN_0088717c
 */


void FUN_0088717c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    lVar1 = FUN_00ddef1c(*(undefined8 *)(param_1 + 0x30));
    if (*(long *)(lVar1 + 0x48) != 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      FUN_00e5c0b4(*(undefined8 *)(lVar2 + 0x80),param_2);
      FUN_00e5c070(*(undefined8 *)(lVar2 + 0x88),param_2);
      if (*(long *)(lVar1 + 0x48) == *(long *)(lVar1 + 0x40)) {
        FUN_00e5c07c(*(long *)(lVar1 + 0x48),param_2);
      }
      *(undefined8 *)(lVar1 + 0x48) = 0;
    }
    FUN_008874d4(param_1 + 0x28,0,0xc,0,0,0,1);
    *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}


