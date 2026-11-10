/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037a720; name: FUN_0037a720
 */


undefined8 FUN_0037a720(int param_1)

{
  if (param_1 < 0x1f6) {
    switch(param_1) {
    case 400:
      return 0xd;
    case 0x191:
      return 0x10;
    case 0x192:
    case 0x195:
    case 0x196:
    case 0x197:
    case 0x198:
    case 0x199:
    case 0x19a:
    case 0x19b:
    case 0x19c:
    case 0x19d:
    case 0x19e:
    case 0x19f:
    case 0x1a0:
    case 0x1a1:
    case 0x1a2:
    case 0x1a3:
    case 0x1a4:
    case 0x1a5:
    case 0x1a6:
    case 0x1a7:
    case 0x1a8:
    case 0x1a9:
    case 0x1aa:
    case 0x1ab:
    case 0x1ac:
      break;
    case 0x193:
      return 7;
    case 0x194:
      return 0xc;
    case 0x1ad:
      return 0xe;
    default:
      if (param_1 == 200) {
        return 0;
      }
    }
  }
  else {
    if (param_1 == 0x1f6) {
      return 0xe;
    }
    if (param_1 == 0x1f7) {
      return 0xe;
    }
    if (param_1 == 0x1f8) {
      return 0xe;
    }
  }
  return 2;
}


