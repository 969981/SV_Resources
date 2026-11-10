/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350e1b4; name: FUN_0350e1b4
 */


undefined8 FUN_0350e1b4(long param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xa0) != '\0') {
    return 0x11;
  }
  plVar1 = *(long **)(param_1 + 0xa8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,*param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0350e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),param_2);
  return uVar2;
}


