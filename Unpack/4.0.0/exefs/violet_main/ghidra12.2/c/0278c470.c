/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


