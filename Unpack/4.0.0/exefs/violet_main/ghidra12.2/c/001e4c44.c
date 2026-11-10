/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e4c44; name: FUN_001e4c44
 */


undefined8 FUN_001e4c44(long param_1,long *param_2,uint param_3)

{
  if ((param_1 != 0) && (param_2 != (long *)0x0)) {
    if ((param_2[0x98] + param_2[0x9c] == 0) || ((param_3 & 1) != 0)) {
      if (param_2[0xd] != 0) {
        FUN_001c9694(param_1);
        param_2[0xd] = 0;
      }
      FUN_001c9030(param_1);
      *param_2 = param_1;
      if (*(code **)(param_2[0x84] + 0x60) != (code *)0x0) {
        (**(code **)(param_2[0x84] + 0x60))(param_2,param_3 & 1);
        param_1 = *param_2;
      }
      FUN_001db818(param_1,"Closing connection %ld\n",param_2[0xc]);
      FUN_001c76b8(param_2);
      thunk_FUN_001ecbd0(param_2,0);
      thunk_FUN_001ecbd0(param_2,1);
      if (*(int *)((long)param_2 + 0x25c) != -1) {
        FUN_001c62cc(param_2);
      }
      if ((int)param_2[0x4b] != -1) {
        FUN_001c62cc(param_2);
      }
      if ((int)param_2[0x4c] != -1) {
        FUN_001c62cc(param_2);
      }
      if (*(int *)((long)param_2 + 0x264) != -1) {
        FUN_001c62cc(param_2);
      }
      FUN_001c70d8(*param_2,param_2,1);
      FUN_001e4d68(param_2);
    }
  }
  return 0;
}


