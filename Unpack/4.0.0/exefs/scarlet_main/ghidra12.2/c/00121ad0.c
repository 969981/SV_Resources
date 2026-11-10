/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00121ad0; name: FUN_00121ad0
 */


void FUN_00121ad0(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (param_1 != param_2) {
    lVar2 = *(long *)(param_1 + 0x10);
    puVar3 = (undefined8 *)(lVar2 + (long)(int)param_3 * -0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    if (0 < (int)param_3) {
      puVar6 = *(undefined8 **)(param_2 + 0x10);
      *puVar6 = *puVar3;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(lVar2 + (long)(int)param_3 * -0x10 + 8);
      lVar2 = *(long *)(param_2 + 0x10);
      *(long *)(param_2 + 0x10) = lVar2 + 0x10;
      if (param_3 != 1) {
        lVar4 = 0;
        lVar5 = (ulong)param_3 - 1;
        do {
          lVar1 = *(long *)(param_1 + 0x10) + lVar4;
          lVar4 = lVar4 + 0x10;
          *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
          *(undefined1 *)(lVar2 + 0x18) = *(undefined1 *)(lVar1 + 0x18);
          lVar2 = *(long *)(param_2 + 0x10);
          lVar5 = lVar5 + -1;
          *(long *)(param_2 + 0x10) = lVar2 + 0x10;
        } while (lVar5 != 0);
      }
    }
  }
  return;
}


