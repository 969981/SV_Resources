/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353282c; name: FUN_0353282c
 */


void FUN_0353282c(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0x80);
  if (puVar5[3] == 0) {
    lVar6 = 0;
    *param_2 = 0;
  }
  else {
    puVar3 = (undefined8 *)*puVar5;
    lVar4 = puVar5[1] + (long)*(int *)((long)puVar5 + 0x24);
    lVar2 = puVar5[1] + (long)*(int *)(puVar5[3] + 0x90);
    while ((lVar6 = lVar2, puVar3 != (undefined8 *)0x0 && (puVar3[3] != 0))) {
      puVar5 = (undefined8 *)*puVar3;
      lVar1 = puVar3[1] + (long)*(int *)((long)puVar3 + 0x24);
      lVar2 = puVar3[1] + (long)*(int *)(puVar3[3] + 0x90);
      if (lVar4 <= lVar1) {
        lVar1 = lVar4;
      }
      puVar3 = puVar5;
      lVar4 = lVar1;
      if (lVar6 <= lVar2) {
        lVar2 = lVar6;
      }
    }
    *param_2 = lVar4 - (ulong)*(uint *)(param_1 + 0x88);
    lVar6 = lVar6 - (ulong)*(uint *)(param_1 + 0x88);
  }
  *param_3 = lVar6;
  return;
}


