/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298da98; name: FUN_0298da98
 */


undefined8 FUN_0298da98(long param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined1 *)(param_1 + 0xd) = 1;
    return 1;
  }
  return 0;
}


