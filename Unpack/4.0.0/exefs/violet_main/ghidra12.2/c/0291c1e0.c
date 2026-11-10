/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291c1e0; name: FUN_0291c1e0
 */


undefined8 FUN_0291c1e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)FUN_01021c74();
  cVar1 = (**(code **)(*plVar2 + 0x458))(plVar2,param_2,param_3,param_4);
  if (cVar1 == '\0') {
    return 1;
  }
  plVar2 = (long *)FUN_01021c74(param_1);
                    /* WARNING: Could not recover jumptable at 0x0291c248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x490))(plVar2,param_3,param_4);
  return uVar3;
}


