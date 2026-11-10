/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


