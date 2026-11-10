/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028afef4; name: FUN_028afef4
 */


void FUN_028afef4(undefined8 *param_1)

{
  if ((Layer *)param_1[1] != (Layer *)0x0) {
    nn::vi::DestroyLayer((Layer *)param_1[1]);
  }
  if ((Display *)*param_1 != (Display *)0x0) {
    nn::vi::CloseDisplay((Display *)*param_1);
  }
  DAT_04863908 = DAT_04863908 + -1;
  if (DAT_04863908 == 0) {
    nn::vi::Finalize();
    return;
  }
  return;
}


