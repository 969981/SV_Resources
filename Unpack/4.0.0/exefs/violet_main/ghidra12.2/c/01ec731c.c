/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec731c; name: FUN_01ec731c
 */


void FUN_01ec731c(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x88);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0xa0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x108);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x120);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x188);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
                    /* WARNING: Could not recover jumptable at 0x01ec7358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0x1a0);
  return;
}


