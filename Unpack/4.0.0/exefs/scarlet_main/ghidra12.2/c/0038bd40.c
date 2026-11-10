/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038bd40; name: FUN_0038bd40
 */


void FUN_0038bd40(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  lVar4 = *(long *)(param_1 + 0x30);
  plVar3 = (long *)(param_1 + 0x30);
  if (lVar4 != param_1) {
    do {
      param_1 = lVar4;
      plVar5 = (long *)(param_1 + 0x30);
      *plVar3 = *plVar5;
      plVar3 = plVar5;
      lVar4 = *plVar5;
    } while (*plVar5 != param_1);
  }
  iVar2 = *(int *)(param_1 + 0x2c) + -1;
  *(int *)(param_1 + 0x2c) = iVar2;
  if (iVar2 == 0) {
    plVar3 = (long *)*(long *)(param_1 + 0x38);
    while (plVar3 != (long *)0x0) {
      lVar4 = *plVar3;
      if (*(uint *)((long)plVar3 + 0xc) != 0) {
        uVar1 = *(uint *)(plVar3 + 1);
        for (puVar6 = (undefined8 *)((long)plVar3 + (ulong)uVar1) +
                      (ulong)*(uint *)((long)plVar3 + 0xc) * -2;
            puVar6 < (undefined8 *)((long)plVar3 + (ulong)uVar1); puVar6 = puVar6 + 2) {
          (*(code *)*puVar6)(puVar6[1]);
        }
      }
      (*(code *)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),plVar3,0,0);
      plVar3 = (long *)lVar4;
    }
  }
  return;
}


