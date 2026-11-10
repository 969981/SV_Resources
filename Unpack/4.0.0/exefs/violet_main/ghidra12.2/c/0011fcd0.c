/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011fcd0; name: FUN_0011fcd0
 */


undefined8 FUN_0011fcd0(uint param_1)

{
  uint uVar1;
  long lVar2;
  
  if (param_1 < 3) {
    if ((&DAT_047ec998)[(int)param_1] == '\0') {
      DAT_047ec990 = "Thread number not started.";
    }
    else {
      lVar2 = (&DAT_047ec9a0)[(int)param_1];
      if (*(int *)(lVar2 + 0x638) != 0) {
        uVar1 = FUN_001201c0(lVar2 + 0x62c);
        if (uVar1 < 0x10) {
          FUN_00120240(lVar2 + 0x62c,1);
          FUN_00120bc0(lVar2 + 0x4a8,1);
          return 1;
        }
        return 1;
      }
      DAT_047ec990 = "Broken async queue.";
    }
  }
  else {
    DAT_047ec990 = "Out of range thread number.";
  }
  return 0;
}


