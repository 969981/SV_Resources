/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003af5b0; name: FUN_003af5b0
 */


undefined * FUN_003af5b0(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0043e840();
  if (iVar1 < 0x390) {
    if (iVar1 < 0x198) {
      lVar2 = 0;
      if (iVar1 != 6) {
        if (iVar1 != 0x74) {
          return (undefined *)0x0;
        }
        lVar2 = 2;
      }
    }
    else if (iVar1 == 0x198) {
      lVar2 = 3;
    }
    else {
      if (iVar1 != 0x32b) {
        return (undefined *)0x0;
      }
      lVar2 = 4;
    }
  }
  else if (iVar1 < 0x3d4) {
    if (iVar1 == 0x390) {
      lVar2 = 1;
    }
    else {
      if (iVar1 != 0x3d3) {
        return (undefined *)0x0;
      }
      lVar2 = 5;
    }
  }
  else if (iVar1 == 0x3d4) {
    lVar2 = 6;
  }
  else if (iVar1 == 0x43f) {
    lVar2 = 7;
  }
  else {
    if (iVar1 != 0x440) {
      return (undefined *)0x0;
    }
    lVar2 = 8;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = lVar2;
  }
  return &DAT_03cdc584 + lVar2 * 8;
}


