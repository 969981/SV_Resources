/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d4684; name: FUN_030d4684
 */


void FUN_030d4684(ulong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined4 local_48 [2];
  
  plVar2 = (long *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (long *)0x0) {
    uVar1 = *param_3;
    *param_1 = (ulong)plVar2 | 1;
    puVar4 = param_1;
    do {
      puVar5 = (ulong *)(plVar2 + 1);
      plVar3 = (long *)(*puVar5 & 0xfffffffffffffffc);
      if ((*puVar5 & 3) == 0) {
        local_48[0] = uVar1;
        (**(code **)(*plVar2 + 0x20))(plVar2,param_2,local_48);
      }
      else {
        (**(code **)(*plVar2 + 8))();
        *puVar4 = *puVar4 & 3 | (ulong)plVar3;
        puVar5 = puVar4;
      }
      plVar2 = plVar3;
      puVar4 = puVar5;
    } while (plVar3 != (long *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}


