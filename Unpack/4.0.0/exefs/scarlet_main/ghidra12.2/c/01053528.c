/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


