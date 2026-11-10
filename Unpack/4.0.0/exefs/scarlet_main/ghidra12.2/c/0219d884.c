/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0219d884; name: FUN_0219d884
 */


void FUN_0219d884(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar1 = lVar2, lVar1 != param_2) {
    lVar3 = *(long *)(lVar1 + -0x20);
    *(undefined8 *)(lVar1 + -0x20) = 0;
    lVar2 = lVar1 + -0x28;
    if (lVar3 != 0) {
      FUN_0219d8e4(lVar1 + -0x18);
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


