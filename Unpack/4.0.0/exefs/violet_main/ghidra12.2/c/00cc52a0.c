/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


