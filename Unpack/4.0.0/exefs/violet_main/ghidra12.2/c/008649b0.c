/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


