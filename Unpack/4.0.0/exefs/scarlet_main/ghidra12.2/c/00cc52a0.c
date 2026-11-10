/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cc52a0; name: FUN_00cc52a0
 */


void FUN_00cc52a0(Display **param_1)

{
  if (DAT_04863908 == 0) {
    nn::vi::Initialize();
  }
  DAT_04863908 = DAT_04863908 + 1;
  nn::vi::OpenDefaultDisplay(param_1);
  nn::vi::CreateLayer((Layer **)(param_1 + 1),*param_1);
  nn::vi::GetNativeWindow(param_1 + 2,(Layer *)param_1[1]);
  return;
}


