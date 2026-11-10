/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00683054; name: FUN_00683054
 */


void FUN_00683054(undefined8 param_1,long param_2,long param_3,long param_4)

{
  if (*(char *)(param_4 + 0x10) == '\0') {
    FUN_00683864(*(undefined8 *)(param_4 + 8));
    *(undefined1 *)(param_4 + 0x10) = 1;
  }
  FUN_006838b0(*(undefined8 *)(param_4 + 8),param_1,param_3 * param_2);
  return;
}


