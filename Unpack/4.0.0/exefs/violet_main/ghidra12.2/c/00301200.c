/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00301200; name: FUN_00301200
 */


undefined8 FUN_00301200(undefined8 *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == (undefined8 *)0x0) || ((undefined8 *)*param_1 == (undefined8 *)0x0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)*param_1, UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00301214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


