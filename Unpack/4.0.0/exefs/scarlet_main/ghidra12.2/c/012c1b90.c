/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


