/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c5ac4; name: FUN_002c5ac4
 */


void FUN_002c5ac4(byte *param_1)

{
  byte bVar1;
  
  FUN_002c5ba4(param_1 + 0xb0);
  FUN_0025cef0(param_1 + 0x98,*(undefined8 *)(param_1 + 0xa0));
  if ((param_1[0x80] & 1) == 0) {
    bVar1 = param_1[0x60];
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x90));
    bVar1 = param_1[0x60];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x48];
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x70));
    bVar1 = param_1[0x48];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x10));
  return;
}


