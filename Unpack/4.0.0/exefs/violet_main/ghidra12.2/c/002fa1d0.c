/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fa1d0; name: thunk_FUN_002f7d30
 */


void thunk_FUN_002f7d30(void)

{
  long *plVar1;
  long *plStack_28;
  long *plStack_18;
  
  plStack_18 = (long *)FUN_0049e770(PTR_FUN_047cba38,8);
  if (plStack_18 != (long *)0x0) {
    *plStack_18 = (long)&PTR_LAB_04494140;
  }
  FUN_0034c12c(0,0,&plStack_18);
  plVar1 = plStack_18;
  plStack_18 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
  plStack_28 = (long *)FUN_0049e770(PTR_FUN_047cba38,8);
  if (plStack_28 != (long *)0x0) {
    *plStack_28 = (long)&PTR_LAB_04494168;
  }
  FUN_0034c12c(0,1,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
  return;
}


