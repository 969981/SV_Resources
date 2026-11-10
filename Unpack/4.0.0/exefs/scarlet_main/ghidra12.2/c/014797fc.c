/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014797fc; name: FUN_014797fc
 */


void FUN_014797fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 != puVar1) {
    pcVar4 = (code *)puVar2[-0x11];
    puVar3 = puVar2 + -0x12;
    if (pcVar4 != (code *)0x0) {
      puVar2[-0x10] = 0;
      puVar2[-0xf] = 0;
      *puVar3 = 0;
      puVar2[-0x11] = 0;
      (*pcVar4)(puVar2 + -0xe);
    }
    while (puVar2 = puVar3, puVar2 != puVar1) {
      pcVar4 = (code *)puVar2[-0x11];
      puVar3 = puVar2 + -0x12;
      if (pcVar4 != (code *)0x0) {
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        puVar2[-0x12] = 0;
        puVar2[-0x11] = 0;
        (*pcVar4)(puVar2 + -0xe);
      }
    }
  }
  *(undefined8 **)(param_1 + 0x20) = puVar1;
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  if (puVar2 != puVar1) {
    pcVar4 = (code *)puVar2[-0x11];
    puVar3 = puVar2 + -0x12;
    if (pcVar4 != (code *)0x0) {
      puVar2[-0x10] = 0;
      puVar2[-0xf] = 0;
      *puVar3 = 0;
      puVar2[-0x11] = 0;
      (*pcVar4)(puVar2 + -0xe);
    }
    while (puVar2 = puVar3, puVar2 != puVar1) {
      pcVar4 = (code *)puVar2[-0x11];
      puVar3 = puVar2 + -0x12;
      if (pcVar4 != (code *)0x0) {
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        puVar2[-0x12] = 0;
        puVar2[-0x11] = 0;
        (*pcVar4)(puVar2 + -0xe);
      }
    }
  }
  *(undefined8 **)(param_1 + 0x58) = puVar1;
  return;
}


