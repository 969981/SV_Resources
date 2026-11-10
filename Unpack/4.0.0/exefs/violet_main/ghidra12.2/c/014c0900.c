/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c0900; name: FUN_014c0900
 */


void FUN_014c0900(undefined8 *param_1)

{
  *(undefined2 *)((long)param_1 + 10) = 10;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0xa0a0a0a;
  *(undefined1 *)(param_1 + 2) = 10;
  *(undefined2 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}


