/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052b444; name: FUN_0052b444
 */


void FUN_0052b444(int *param_1)

{
  if ((*(long **)(param_1 + 4) != (long *)0x0) &&
     (0 < param_1[0xb] + (param_1[2] - *param_1) + param_1[7])) {
                    /* try { // try from 0052b480 to 0052b483 has its CatchHandler @ 0052b4b4 */
    (**(code **)(**(long **)(param_1 + 4) + 0x18))();
    param_1[6] = (((int)*(undefined8 *)param_1 - param_1[2]) - param_1[0xb]) + param_1[6];
    param_1[7] = 0;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
    param_1[0xb] = 0;
  }
  return;
}


