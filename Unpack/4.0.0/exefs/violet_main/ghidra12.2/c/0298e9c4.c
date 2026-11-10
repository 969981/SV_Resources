/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298e9c4; name: FUN_0298e9c4
 */


void FUN_0298e9c4(long param_1,undefined4 *param_2,byte param_3)

{
  if (param_3 < 6) {
    param_1 = param_1 + (ulong)param_3 * 0x1c;
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 1);
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((long)param_2 + 5);
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)((long)param_2 + 6);
    *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)((long)param_2 + 7);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 2);
    *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)((long)param_2 + 10);
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 3);
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)((long)param_2 + 0xd);
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)((long)param_2 + 0xe);
    *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)((long)param_2 + 0xf);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 4);
    *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)((long)param_2 + 0x15);
    *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)((long)param_2 + 0x16);
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 6);
  }
  return;
}


