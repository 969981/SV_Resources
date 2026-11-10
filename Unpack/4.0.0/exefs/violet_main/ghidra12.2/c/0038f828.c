/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038f828; name: FUN_0038f828
 */


void FUN_0038f828(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04497290;
  if (*(char *)(param_1 + 0x3a) != '\0') {
    nn::os::DestroyThread((ThreadType *)(param_1 + 1));
                    /* try { // try from 0038f850 to 0038f853 has its CatchHandler @ 0038f85c */
    free((void *)param_1[0x39]);
  }
  return;
}


