/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbdf00; name: FUN_01dbdf00
 */


undefined8 FUN_01dbdf00(short *param_1,short *param_2)

{
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
       ((char)param_1[2] == (char)param_2[2])) &&
      ((*(char *)((long)param_1 + 5) == *(char *)((long)param_2 + 5) &&
       ((char)param_1[3] == (char)param_2[3])))) &&
     ((ABS(*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) <= 1.1920929e-07 &&
      ((*(int *)(param_1 + 6) == *(int *)(param_2 + 6) &&
       (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))))))) {
    return 1;
  }
  return 0;
}


