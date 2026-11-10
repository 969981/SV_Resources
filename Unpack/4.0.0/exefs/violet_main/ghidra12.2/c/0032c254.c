/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032c254; name: FUN_0032c254
 */


void FUN_0032c254(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04495768;
  if (param_1[7] != 0) {
                    /* try { // try from 0032c274 to 0032c2a7 has its CatchHandler @ 0032c2c0 */
    FUN_00350f40();
  }
  if (param_1[8] != 0) {
    FUN_00368470();
    free((void *)param_1[8]);
  }
  FUN_00368470(param_1 + 0xb);
  FUN_0034f880(param_1 + 0x38);
  FUN_0034f890(param_1 + 0x23e);
                    /* try { // try from 0032c2ac to 0032c2af has its CatchHandler @ 0032c2bc */
  FUN_0038db20(param_1 + 2);
  return;
}


