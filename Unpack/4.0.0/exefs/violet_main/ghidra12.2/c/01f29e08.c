/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f29e08; name: FUN_01f29e08
 */


void FUN_01f29e08(undefined8 param_1)

{
  ulong uVar1;
  char local_70 [4];
  uint local_6c;
  int local_68;
  
  FUN_01f0f2cc(local_70);
  if (local_70[0] != '\0') {
    return;
  }
  uVar1 = FUN_01f0f3cc(param_1);
  if (((uVar1 & 0xff) != 0) && ((uVar1 & 0xffffffff00000000) == 0x200000000)) {
    return;
  }
  FUN_01e7b310(local_70,param_1);
  if (local_70[0] != '\0') {
    if ((local_6c & 0x1ff) == 0x7c) {
      if ((local_6c & 0x3ffe00) == 0x200) {
        return;
      }
      if ((local_6c & 0x3fffff) == 0x7c) {
        return;
      }
      if ((local_6c & 0x3ffe00) == 0xc800) {
        return;
      }
    }
    else if ((local_6c & 0x3fffff) == 0x7c) {
      return;
    }
    local_70[0] = '\0';
  }
  FUN_01e94464(local_70,param_1);
  if (local_70[0] != '\0') {
    if (local_68 == 5) {
      FUN_01c3e888();
      FUN_01f0f4d4();
      return;
    }
    local_70[0] = '\0';
  }
  FUN_019dba7c(local_70,param_1);
  FUN_01c3d63c(local_70);
  FUN_019ab5b0(local_70);
  return;
}


