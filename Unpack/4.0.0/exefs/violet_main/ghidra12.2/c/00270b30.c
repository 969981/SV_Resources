/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00270b30; name: FUN_00270b30
 */


void FUN_00270b30(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  uVar1 = param_1[1];
  free(param_1);
                    /* WARNING: Could not recover jumptable at 0x00270b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}


