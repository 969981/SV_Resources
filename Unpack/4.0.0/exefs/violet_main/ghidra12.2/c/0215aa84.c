/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215aa84; name: FUN_0215aa84
 */


undefined8 FUN_0215aa84(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  plVar1 = *(long **)(param_1 + 0x10);
  if (*(char *)(param_1 + 200) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0215aacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 200))(plVar1,param_1 + 0x98,param_2);
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0215aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0xd0))(plVar1,param_1 + 0xb8,param_1 + 0xc0);
  return uVar2;
}


