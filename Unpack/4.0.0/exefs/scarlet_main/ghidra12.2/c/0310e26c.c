/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0310e26c; name: FUN_0310e26c
 */


void FUN_0310e26c(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  plVar1 = (long *)(*param_1 & 0xfffffffffffffffc);
  if (plVar1 != (long *)0x0) {
    *param_1 = (ulong)plVar1 | 1;
    puVar3 = param_1;
    do {
      puVar4 = (ulong *)(plVar1 + 1);
      plVar2 = (long *)(*puVar4 & 0xfffffffffffffffc);
      if ((*puVar4 & 3) == 0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        *puVar3 = *puVar3 & 3 | (ulong)plVar2;
        puVar4 = puVar3;
      }
      plVar1 = plVar2;
      puVar3 = puVar4;
    } while (plVar2 != (long *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}


