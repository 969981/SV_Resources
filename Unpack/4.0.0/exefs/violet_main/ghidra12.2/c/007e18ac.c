/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e18ac; name: FUN_007e18ac
 */


void FUN_007e18ac(long *param_1)

{
  FUN_007f40f8();
  *param_1 = (long)(PTR_DAT_047d1438 + 0x10);
  FUN_007e5190(param_1 + 0x12);
  *(undefined2 *)(param_1 + 0x1e) = 0xffff;
  FUN_018dd988(param_1 + 0x1f);
  FUN_018dd980(param_1 + 0x1f);
  memset(param_1 + 0x30,0,0x10);
  FUN_018dd988(param_1 + 0x32);
  FUN_018dd980(param_1 + 0x32);
  memset(param_1 + 0x43,0,0x10);
  FUN_018dd988(param_1 + 0x45);
  FUN_018dd980(param_1 + 0x45);
  memset(param_1 + 0x56,0,0x10);
  FUN_018dd988(param_1 + 0x58);
  FUN_018dd980(param_1 + 0x58);
  memset(param_1 + 0x69,0,0x10);
  *(undefined2 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)((long)param_1 + 0x35a) = 0;
  return;
}


