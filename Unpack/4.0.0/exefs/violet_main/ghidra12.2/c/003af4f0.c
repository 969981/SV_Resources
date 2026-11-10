/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003af4f0; name: FUN_003af4f0
 */


undefined8 FUN_003af4f0(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 < 0x390) {
    if (param_1 < 0x198) {
      if (param_1 == 6) {
        uVar1 = 0;
      }
      else {
        if (param_1 != 0x74) {
          return 0;
        }
        uVar1 = 2;
      }
    }
    else if (param_1 == 0x198) {
      uVar1 = 3;
    }
    else {
      if (param_1 != 0x32b) {
        return 0;
      }
      uVar1 = 4;
    }
  }
  else if (param_1 < 0x3d4) {
    if (param_1 == 0x390) {
      uVar1 = 1;
    }
    else {
      if (param_1 != 0x3d3) {
        return 0;
      }
      uVar1 = 5;
    }
  }
  else if (param_1 == 0x3d4) {
    uVar1 = 6;
  }
  else if (param_1 == 0x43f) {
    uVar1 = 7;
  }
  else {
    if (param_1 != 0x440) {
      return 0;
    }
    uVar1 = 8;
  }
  *param_2 = uVar1;
  return 1;
}


