/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f3d18; name: FUN_001f3d18
 */


undefined8 FUN_001f3d18(int param_1)

{
  switch(param_1) {
  case -0x215:
    return 7;
  case -0x214:
  case -0x213:
    goto switchD_001f3d38_caseD_fffffdec;
  case -0x212:
  case -0x211:
  case -0x210:
  case -0x20f:
  case -0x20e:
  case -0x20d:
    return 2;
  case -0x20c:
    return 3;
  case -0x20b:
    return 9;
  case -0x20a:
    return 6;
  default:
    if (param_1 == -0x1fe) {
      return 5;
    }
    if (param_1 != -0x1f9) {
      return 2;
    }
switchD_001f3d38_caseD_fffffdec:
    return 1;
  }
}


