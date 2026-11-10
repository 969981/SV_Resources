/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a6a0a4; name: FUN_00a6a0a4
 */


void FUN_00a6a0a4(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined1 *)(param_1 + 0x2ae) = 1;
  if (*(code **)(param_1 + 0x17a0) != (code *)0x0) {
    (**(code **)(param_1 + 0x17a0))(param_1 + 0x17c0);
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x17a8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x17b0) = 0;
      *(undefined8 *)(param_1 + 0x17b8) = 0;
      *(undefined8 *)(param_1 + 0x17a0) = 0;
      *(undefined8 *)(param_1 + 0x17a8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00a6a104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1 + 0x17c0);
      return;
    }
  }
  return;
}


