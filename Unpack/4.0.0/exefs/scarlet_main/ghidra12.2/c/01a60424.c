/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a60424; name: FUN_01a60424
 */


void FUN_01a60424(undefined8 *param_1,char *param_2)

{
  if (*param_2 == '\0') {
    FUN_0256ed70(*(undefined8 *)(param_2 + 8));
    return;
  }
  if (*param_2 == '\x01') {
    FUN_0256edbc(param_2 + 8);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}


