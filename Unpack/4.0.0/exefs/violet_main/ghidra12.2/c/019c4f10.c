/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019c4f10; name: FUN_019c4f10
 */


undefined8 FUN_019c4f10(undefined8 param_1,short *param_2,short *param_3)

{
  if (((((*param_2 == *param_3) && (param_2[1] == param_3[1])) &&
       ((char)param_2[2] == (char)param_3[2])) &&
      ((*(char *)((long)param_2 + 5) == *(char *)((long)param_3 + 5) &&
       ((char)param_2[3] == (char)param_3[3])))) &&
     ((*(int *)(param_2 + 6) == *(int *)(param_3 + 6) &&
      ((*(float *)(param_2 + 4) == *(float *)(param_3 + 4) &&
       (*(int *)(param_2 + 8) == *(int *)(param_3 + 8))))))) {
    return 1;
  }
  return 0;
}


