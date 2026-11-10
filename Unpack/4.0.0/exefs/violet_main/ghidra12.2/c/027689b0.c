/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027689b0; name: FUN_027689b0
 */


void FUN_027689b0(long param_1)

{
  if ((*(char *)(param_1 + 0x333) == '\0') && (*(char *)(param_1 + 0x335) != '\0')) {
    FUN_00ea7e24(param_1);
    *(undefined1 *)(param_1 + 0x335) = 0;
  }
  return;
}


