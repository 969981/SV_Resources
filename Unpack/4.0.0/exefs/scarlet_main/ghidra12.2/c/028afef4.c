/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


