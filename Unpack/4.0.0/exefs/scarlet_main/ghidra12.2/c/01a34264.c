/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a34264; name: FUN_01a34264
 */


void FUN_01a34264(undefined8 *param_1,char *param_2)

{
  if (*param_2 == '\x01') {
    FUN_01bf4454(param_2 + 8);
    return;
  }
  if (*param_2 == '\0') {
    FUN_01bf4384(*(undefined8 *)(param_2 + 8));
    return;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03c886bc;
  return;
}


