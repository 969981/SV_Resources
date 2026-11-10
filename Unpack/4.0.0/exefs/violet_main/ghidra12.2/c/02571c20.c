/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02571c20; name: FUN_02571c20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02571c20(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_02571c94(*(undefined8 *)(param_1 + 8));
    break;
  case 1:
    FUN_02571cd0(param_1 + 8);
    break;
  case 2:
    FUN_02571d10(param_1 + 8);
    break;
  case 3:
    FUN_02571d60(param_1 + 8);
  }
  return;
}


