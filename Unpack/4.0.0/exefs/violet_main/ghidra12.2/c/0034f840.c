/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034f840; name: FUN_0034f840
 */


void FUN_0034f840(void *param_1,undefined4 param_2,undefined8 param_3)

{
  memset(param_1,0,0x1028);
  *(undefined4 *)((long)param_1 + 4) = param_2;
  *(undefined8 *)((long)param_1 + 8) = param_3;
  *(undefined8 *)((long)param_1 + 0x1028) = 2;
  return;
}


