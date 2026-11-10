/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008649b0; name: FUN_008649b0
 */


char * FUN_008649b0(int param_1)

{
  switch(param_1) {
  case -0xfff6:
    return "Invalid Product";
  case -0xfff5:
    return "Empty Keycode";
  case -0xfff4:
    return "Invalid Keycode Format";
  case -0xfff3:
    return "Mismatched Product Against Keycode";
  case -0xfff2:
    goto switchD_008649dc_caseD_ffff000e;
  case -0xfff1:
    return "Expired Keycode";
  default:
    if (param_1 == -0xff01) {
      return "Base System Is Still Initializing... Continue And Retry";
    }
switchD_008649dc_caseD_ffff000e:
    return "Unknown Error";
  }
}


