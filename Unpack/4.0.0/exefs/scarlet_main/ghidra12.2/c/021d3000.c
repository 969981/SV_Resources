/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d3000; name: FUN_021d3000
 */


void FUN_021d3000(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar2 != param_2) {
    *(undefined8 **)(param_1 + 0x10) = (undefined8 *)(lVar2 + -0x180);
    pcVar1 = *(code **)(lVar2 + -0x78);
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0x70) = 0;
      *(undefined8 *)(lVar2 + -0x68) = 0;
      *(undefined8 *)(lVar2 + -0x80) = 0;
      *(undefined8 *)(lVar2 + -0x78) = 0;
      (*pcVar1)(lVar2 + -0x60);
    }
    pcVar1 = *(code **)(lVar2 + -0xf8);
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0xf0) = 0;
      *(undefined8 *)(lVar2 + -0xe8) = 0;
      *(undefined8 *)(lVar2 + -0x100) = 0;
      *(undefined8 *)(lVar2 + -0xf8) = 0;
      (*pcVar1)(lVar2 + -0xe0);
    }
    pcVar1 = *(code **)(lVar2 + -0x178);
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0x170) = 0;
      *(undefined8 *)(lVar2 + -0x168) = 0;
      *(undefined8 *)(lVar2 + -0x180) = 0;
      *(undefined8 *)(lVar2 + -0x178) = 0;
      (*pcVar1)(lVar2 + -0x160);
    }
    lVar2 = *(long *)(param_1 + 0x10);
  }
  return;
}


