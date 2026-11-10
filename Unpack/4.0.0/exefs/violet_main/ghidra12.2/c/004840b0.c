/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004840b0; name: FUN_004840b0
 */


undefined8 FUN_004840b0(long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((param_3 & 0x30000) == 0) {
    return 0;
  }
  iVar1 = FUN_0045bea0(*(undefined8 *)(param_1 + 8));
  if ((param_2 != 0) && (iVar2 = FUN_0043e840(param_2), iVar2 == 0x198)) {
    FUN_0043e6b0(param_2);
    lVar3 = FUN_0040c210();
    if (lVar3 != 0) {
      iVar2 = FUN_0040d580();
      if (iVar2 == 0x19f) {
        if ((iVar1 != 0x31a) && (iVar1 != -1)) {
          return 0x3b;
        }
        param_3 = param_3 >> 0x10;
      }
      else {
        if (iVar2 != 0x2cb) {
          return 0x3a;
        }
        if ((iVar1 != 0x31b) && (iVar1 != -1)) {
          return 0x3b;
        }
        param_3 = param_3 >> 0x11;
      }
      if ((param_3 & 1) == 0) {
        return 0x3c;
      }
      return 0;
    }
  }
  return 0x39;
}


