/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033c290; name: FUN_0033c290
 */


void FUN_0033c290(long param_1)

{
  FUN_0038db40(param_1 + 0x20);
                    /* try { // try from 0033c2ac to 0033c2d7 has its CatchHandler @ 0033c2f0 */
  FUN_00343498(param_1 + 200);
  if (*(char *)(param_1 + 0x160) == '\0') {
    *(undefined1 *)(param_1 + 0x108) = 0;
    FUN_0033c12c(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0x161) = 1;
    FUN_00360570(param_1 + 0x110);
  }
                    /* try { // try from 0033c2d8 to 0033c2df has its CatchHandler @ 0033c2ec */
  FUN_0038db60(param_1 + 0x20);
  return;
}


