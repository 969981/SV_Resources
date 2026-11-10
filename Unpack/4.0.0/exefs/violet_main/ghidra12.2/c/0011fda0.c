/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011fda0; name: FUN_0011fda0
 */


undefined8 FUN_0011fda0(uint param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  local_28 = 0;
  DAT_047ec990 = (char *)0x0;
  if (param_1 < 3) {
    if ((&DAT_047ec998)[(int)param_1] != '\0') {
      uVar1 = FUN_0011fe40((&DAT_047ec9a0)[(int)param_1] + 0x210,&local_28,8);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      (&DAT_047ec998)[(int)param_1] = 2;
      return 1;
    }
    DAT_047ec990 = "Thread number not started.";
  }
  else {
    DAT_047ec990 = "Out of range thread number.";
  }
  return 0;
}


