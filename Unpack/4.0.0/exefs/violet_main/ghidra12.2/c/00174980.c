/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00174980; name: FUN_00174980
 */


undefined1 * FUN_00174980(undefined1 *param_1,long param_2,void *param_3,size_t param_4)

{
  if ((long)param_4 < 0x40000) {
    if ((long)(param_4 + 3) <= param_2 - (long)param_1) {
      param_1[2] = (char)param_4;
      *param_1 = (char)(param_4 >> 0x10);
      param_1[1] = (char)(param_4 >> 8);
      memcpy(param_1 + 3,param_3,param_4);
      return param_1 + 3 + (param_4 - (long)param_1);
    }
  }
  else {
    FUN_0015c3d0();
    if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
      (**(code **)PTR_PTR_047cb868)
                (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.cpp",0x213,
                 "OODLE ERROR : from_len too big !?\n");
    }
    FUN_0015c3f0();
  }
  return (undefined1 *)0xffffffffffffffff;
}


