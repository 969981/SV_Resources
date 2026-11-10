/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb1ab0; name: FUN_01fb1ab0
 */


ulong FUN_01fb1ab0(ulong param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (uint)param_1 & 0xffff;
  if (uVar1 < 0xc2) {
    lVar2 = 0;
    switch(uVar1) {
    case 0x41:
      break;
    case 0x42:
      lVar2 = 1;
      break;
    case 0x43:
      lVar2 = 2;
      break;
    case 0x44:
      lVar2 = 3;
      break;
    case 0x45:
      lVar2 = 4;
      break;
    case 0x46:
      lVar2 = 5;
      break;
    case 0x47:
      lVar2 = 6;
      break;
    case 0x48:
      lVar2 = 7;
      break;
    case 0x49:
      lVar2 = 8;
      break;
    case 0x4a:
      lVar2 = 9;
      break;
    case 0x4b:
      lVar2 = 10;
      break;
    case 0x4c:
      lVar2 = 0xb;
      break;
    case 0x4d:
      lVar2 = 0xc;
      break;
    case 0x4e:
      lVar2 = 0xd;
      break;
    case 0x4f:
      lVar2 = 0xe;
      break;
    case 0x50:
      lVar2 = 0xf;
      break;
    case 0x51:
      lVar2 = 0x10;
      break;
    case 0x52:
      lVar2 = 0x11;
      break;
    case 0x53:
      lVar2 = 0x12;
      break;
    case 0x54:
      lVar2 = 0x13;
      break;
    case 0x55:
      lVar2 = 0x14;
      break;
    case 0x56:
      lVar2 = 0x15;
      break;
    case 0x57:
      lVar2 = 0x16;
      break;
    case 0x58:
      lVar2 = 0x17;
      break;
    case 0x59:
      lVar2 = 0x18;
      break;
    case 0x5a:
      lVar2 = 0x19;
      break;
    default:
      goto switchD_01fb1ae0_default;
    }
  }
  else if (uVar1 < 0xd4) {
    switch(uVar1) {
    case 0xc2:
      lVar2 = 0x1f;
      break;
    default:
      goto switchD_01fb1ae0_default;
    case 0xc4:
      lVar2 = 0x20;
      break;
    case 199:
      lVar2 = 0x1b;
      break;
    case 200:
      lVar2 = 0x1c;
      break;
    case 0xc9:
      lVar2 = 0x1a;
      break;
    case 0xcf:
      lVar2 = 0x1e;
    }
  }
  else if (uVar1 == 0xd4) {
    lVar2 = 0x1d;
  }
  else if (uVar1 == 0xdc) {
    lVar2 = 0x21;
  }
  else {
    if (uVar1 != 0x152) {
      return param_1;
    }
    lVar2 = 0x22;
  }
  param_1 = (ulong)(ushort)(&DAT_03d5f18a)[lVar2 * 2];
switchD_01fb1ae0_default:
  return param_1;
}


