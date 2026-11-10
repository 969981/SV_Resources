/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d185c; name: FUN_021d185c
 */


void FUN_021d185c(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != param_2) {
    lVar4 = 0;
    do {
      lVar1 = lVar3 + lVar4;
      pcVar2 = *(code **)(lVar1 + -0x78);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar1 + -0x70) = 0;
        *(undefined8 *)(lVar1 + -0x68) = 0;
        *(undefined8 *)(lVar1 + -0x80) = 0;
        *(undefined8 *)(lVar1 + -0x78) = 0;
        (*pcVar2)(lVar1 + -0x60);
      }
      pcVar2 = *(code **)(lVar1 + -0xf8);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar1 + -0xf0) = 0;
        *(undefined8 *)(lVar1 + -0xe8) = 0;
        *(undefined8 *)(lVar1 + -0x100) = 0;
        *(undefined8 *)(lVar1 + -0xf8) = 0;
        (*pcVar2)(lVar1 + -0xe0);
      }
      pcVar2 = *(code **)(lVar1 + -0x178);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar1 + -0x170) = 0;
        *(undefined8 *)(lVar1 + -0x168) = 0;
        *(undefined8 *)(lVar1 + -0x180) = 0;
        *(undefined8 *)(lVar1 + -0x178) = 0;
        (*pcVar2)(lVar1 + -0x160);
      }
      lVar4 = lVar4 + -0x180;
    } while (param_2 - lVar3 != lVar4);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


