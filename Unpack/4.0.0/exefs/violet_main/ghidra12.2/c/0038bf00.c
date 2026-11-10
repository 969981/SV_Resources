/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038bf00; name: FUN_0038bf00
 */


undefined8 FUN_0038bf00(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (undefined8 *)0x0) {
    return 2;
  }
  uVar1 = 2;
  if ((((param_5 != 0) && (param_4 != 0)) && (param_3 != 0)) &&
     ((param_2 != 0 && ((undefined8 *)*param_1 != (undefined8 *)0x0)))) {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0038bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar1 = 6;
  }
  return uVar1;
}


