/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a695d8; name: FUN_00a695d8
 */


void FUN_00a695d8(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code **)(param_1 + 0x18a0) != (code *)0x0) {
    (**(code **)(param_1 + 0x18a0))(param_1 + 0x18c0);
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x18a8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x18b0) = 0;
      *(undefined8 *)(param_1 + 0x18b8) = 0;
      *(undefined8 *)(param_1 + 0x18a0) = 0;
      *(undefined8 *)(param_1 + 0x18a8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00a69630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1 + 0x18c0);
      return;
    }
  }
  return;
}


