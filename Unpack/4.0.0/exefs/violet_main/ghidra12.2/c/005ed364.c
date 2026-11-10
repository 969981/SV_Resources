/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005ed364; name: FUN_005ed364
 */


void FUN_005ed364(long param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_005ed364(param_1,*param_2);
  FUN_005ed364(param_1,param_2[1]);
  plVar1 = (long *)param_2[10];
  if (plVar1 != (long *)0x0) {
    if (plVar1 == param_2 + 6) {
      pcVar2 = *(code **)(*plVar1 + 0x10);
    }
    else {
      pcVar2 = *(code **)(*plVar1 + 0x18);
    }
    (*pcVar2)();
  }
                    /* WARNING: Could not recover jumptable at 0x005ed3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_2,0x60,0x10);
  return;
}


