/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01898b80; name: FUN_01898b80
 */


long FUN_01898b80(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = param_2;
  if (param_2 + 0x20 != lVar4) {
    lVar3 = param_2;
    do {
      lVar2 = lVar3 + 0x20;
      FUN_00c96b7c(lVar3,lVar2);
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 0x30);
      lVar1 = lVar3 + 0x40;
      *(undefined1 *)(lVar3 + 0x18) = *(undefined1 *)(lVar3 + 0x38);
      lVar3 = lVar2;
    } while (lVar1 != lVar4);
  }
  FUN_01ea201c(param_1,lVar2);
  return param_2;
}


