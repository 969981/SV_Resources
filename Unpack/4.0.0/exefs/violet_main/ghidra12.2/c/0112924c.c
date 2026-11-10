/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


