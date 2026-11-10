/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01053528; name: FUN_01053528
 */


void FUN_01053528(long *param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((byte)(*(char *)((long)param_1 + 0x85) + 1U) < *(byte *)(param_1 + 0x10)) {
    cVar1 = *(char *)((long)param_1 + 0x85) + '\x01';
  }
  *(char *)((long)param_1 + 0x85) = cVar1;
  FUN_013194d0();
  (**(code **)(*param_1 + 0x68))(param_1);
  *(undefined1 *)((long)param_1 + 0x87) = 0;
  return;
}


