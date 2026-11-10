/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c1b90; name: FUN_012c1b90
 */


bool FUN_012c1b90(code *param_1,undefined8 param_2)

{
  if (param_1 == (code *)0x0) {
    return false;
  }
  FUN_001003e0();
  if (DAT_047ec2a0 != 0) {
    FUN_001209d0(&DAT_047ec328);
  }
  if ((DAT_047ec0e0 != 0) || (DAT_047ec0e8 != (code *)0x0)) {
    if (DAT_047ec0e8 == param_1) goto LAB_012c1c18;
    if (DAT_047ec0f0 != 0) {
      if (DAT_047ec2a0 == 0) {
        return false;
      }
      FUN_00120750(&DAT_047ec328);
      return false;
    }
  }
  DAT_047ec0e8 = param_1;
LAB_012c1c18:
  DAT_047ec0f8 = (*param_1)(param_2);
  if (DAT_047ec2a0 != 0) {
    FUN_00120750(&DAT_047ec328);
  }
  return DAT_047ec0f8 != 0;
}


