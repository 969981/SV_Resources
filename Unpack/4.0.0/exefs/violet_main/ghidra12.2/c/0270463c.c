/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270463c; name: FUN_0270463c
 */


void FUN_0270463c(long param_1,int param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8) >> 3))
  {
    lVar3 = *(long *)(*(long *)(param_1 + 0x2d8) + (long)param_2 * 8);
    plVar2 = (long *)*param_3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x58))(plVar2);
      (**(code **)(*plVar2 + 0x58))(plVar2);
    }
    plVar1 = *(long **)(lVar3 + 0x148);
    *(long **)(lVar3 + 0x148) = plVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x60))();
    }
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x027046bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x60))(plVar2);
      return;
    }
  }
  return;
}


