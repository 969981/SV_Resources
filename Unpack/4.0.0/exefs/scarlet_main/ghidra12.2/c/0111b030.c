/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0111b030; name: FUN_0111b030
 */


undefined8 FUN_0111b030(byte param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((char)param_1 < '\0') && (param_1 < 0xc0)) {
    if (param_1 - 0xb5 < 0xb) {
      return 1;
    }
    switch((uint)param_1) {
    case 0x80:
    case 0x84:
      return 2;
    case 0x81:
    case 0x85:
      return 3;
    case 0x82:
    case 0x86:
    case 0x88:
      return 5;
    case 0x83:
    case 0x87:
    case 0x89:
      return 9;
    default:
      uVar1 = 0;
    }
  }
  return uVar1;
}


