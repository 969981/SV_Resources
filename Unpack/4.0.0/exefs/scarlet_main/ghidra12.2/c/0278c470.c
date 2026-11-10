/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278c470; name: FUN_0278c470
 */


void FUN_0278c470(undefined8 param_1,undefined8 param_2,long param_3)

{
  ApplicationErrorArg aAStack_1058 [4120];
  
  nn::err::ApplicationErrorArg::ApplicationErrorArg(aAStack_1058);
  nn::err::ApplicationErrorArg::SetApplicationErrorCodeNumber((uint)aAStack_1058);
  nn::err::ApplicationErrorArg::SetDialogMessage((char *)aAStack_1058);
  if (param_3 != 0) {
    nn::err::ApplicationErrorArg::SetFullScreenMessage((char *)aAStack_1058);
  }
  nn::err::ApplicationErrorArg::SetLanguageCode((LanguageCode *)aAStack_1058);
  nn::err::ShowApplicationError(aAStack_1058);
  return;
}


