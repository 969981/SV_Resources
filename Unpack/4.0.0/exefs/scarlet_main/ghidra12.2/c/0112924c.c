/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0112924c; name: FUN_0112924c
 */


void FUN_0112924c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  for (plVar3 = *(long **)(param_1 + 0x38); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    plVar2 = (long *)plVar3[6];
    uVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if ((uVar1 & 1) != 0) {
      (**(code **)(*plVar2 + 0x30))(plVar2);
    }
  }
  for (plVar3 = *(long **)(param_1 + 0xa0); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    plVar2 = (long *)plVar3[6];
    uVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if ((uVar1 & 1) != 0) {
      (**(code **)(*plVar2 + 0x30))(plVar2);
    }
  }
  for (plVar3 = *(long **)(param_1 + 0x108); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    plVar2 = (long *)plVar3[6];
    uVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if ((uVar1 & 1) != 0) {
      (**(code **)(*plVar2 + 0x30))(plVar2);
    }
  }
  return;
}


