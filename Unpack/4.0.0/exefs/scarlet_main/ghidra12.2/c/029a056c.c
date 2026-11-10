/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a056c; name: FUN_029a056c
 */


void FUN_029a056c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  
  if (param_2 != param_3) {
    puVar3 = *(undefined8 **)(param_1 + 8);
    puVar2 = (undefined8 *)((long)param_2 + ((long)param_3 - (long)param_2));
    if (puVar2 != puVar3) {
      lVar1 = (long)param_3 - (long)param_2 >> 4;
      do {
        FUN_029a072c(param_2,param_2 + lVar1 * 2);
        param_2[0x10] = (param_2 + lVar1 * 2)[0x10];
        param_2 = param_2 + 0x12;
      } while (puVar3 + lVar1 * -2 != param_2);
      puVar2 = *(undefined8 **)(param_1 + 8);
    }
    if (puVar2 != param_2) {
      pcVar4 = (code *)puVar2[-0x11];
      puVar3 = puVar2 + -0x12;
      if (pcVar4 != (code *)0x0) {
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        *puVar3 = 0;
        puVar2[-0x11] = 0;
        (*pcVar4)(puVar2 + -0xe);
      }
      while (puVar2 = puVar3, puVar2 != param_2) {
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
    *(undefined8 **)(param_1 + 8) = param_2;
  }
  return;
}


