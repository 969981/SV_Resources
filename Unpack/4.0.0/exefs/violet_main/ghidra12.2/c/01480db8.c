/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01480db8; name: FUN_01480db8
 */


void FUN_01480db8(undefined8 param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x10) == '\b') {
    return;
  }
  if (param_3 < 0) {
    plVar1 = *(long **)(param_2 + 8);
    uVar2 = 0x16;
  }
  else {
    if (param_3 == 0) {
      return;
    }
    plVar1 = *(long **)(param_2 + 8);
    uVar2 = 0x15;
  }
                    /* WARNING: Could not recover jumptable at 0x01480ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x508))(plVar1,uVar2);
  return;
}


