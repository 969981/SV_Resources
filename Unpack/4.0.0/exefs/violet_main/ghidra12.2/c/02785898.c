/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02785898; name: FUN_02785898
 */


void FUN_02785898(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  plVar1 = plVar2;
  if (lVar3 != 0) {
    plVar1 = plVar2 + lVar3 * 4;
  }
  do {
    if (plVar2 == plVar1) {
      return;
    }
    plVar4 = (long *)*plVar2;
    plVar2 = plVar2 + 4;
  } while (plVar4[1] != param_2);
                    /* WARNING: Could not recover jumptable at 0x027858d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))();
  return;
}


