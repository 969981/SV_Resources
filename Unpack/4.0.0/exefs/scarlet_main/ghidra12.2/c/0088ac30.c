/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0088ac30; name: FUN_0088ac30
 */


undefined8 FUN_0088ac30(uint param_1)

{
  if ((param_1 & 0xffffff00) == 0x2000) {
    switch(param_1) {
    case 0x200b:
    case 0x200e:
    case 0x200f:
    case 0x202a:
    case 0x202b:
    case 0x202c:
    case 0x202d:
    case 0x202e:
    case 0x2060:
      return 0;
    }
    if (param_1 - 0x2066 < 4) {
      return 0;
    }
  }
  return 1;
}


