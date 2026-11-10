/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026ed13c; name: FUN_026ed13c
 */


void FUN_026ed13c(long param_1)

{
  ulong uVar1;
  char local_60 [16];
  undefined1 auStack_50 [48];
  
  FUN_026ed1d0();
  uVar1 = FUN_026d5d80(param_1);
  if ((uVar1 & 1) != 0) {
    FUN_026ed1d4(local_60,param_1);
    if (*(char *)(param_1 + 0x140) == '\0') {
      if (local_60[0] != '\0') {
        memcpy((void *)(param_1 + 0x150),auStack_50,0x30);
        *(undefined1 *)(param_1 + 0x140) = 1;
      }
    }
    else if (local_60[0] == '\0') {
      *(undefined1 *)(param_1 + 0x140) = 0;
    }
    else {
      memcpy((void *)(param_1 + 0x150),auStack_50,0x30);
    }
  }
  return;
}


