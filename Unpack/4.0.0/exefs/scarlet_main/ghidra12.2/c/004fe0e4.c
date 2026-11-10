/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fe0e4; name: FUN_004fe0e4
 */


void FUN_004fe0e4(long *param_1)

{
  byte *pbVar1;
  
  switch((int)param_1[1]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    if (*param_1 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
      return;
    }
    break;
  case 9:
    pbVar1 = (byte *)*param_1;
    if (pbVar1 != (byte *)0x0) {
      if ((*pbVar1 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar1 + 0x10));
      }
LAB_004fe164:
      FUN_0049e790(PTR_LAB_047cba48,pbVar1);
      return;
    }
    break;
  case 10:
    pbVar1 = (byte *)*param_1;
    if (pbVar1 != (byte *)0x0) {
      (*(code *)**(undefined8 **)pbVar1)(pbVar1);
      goto LAB_004fe164;
    }
  }
  return;
}


