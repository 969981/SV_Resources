/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e51a8; name: FUN_001e51a8
 */


undefined8 FUN_001e51a8(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x420) + 0x40);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 600);
    return 0x10001;
  }
                    /* WARNING: Could not recover jumptable at 0x001e51b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


