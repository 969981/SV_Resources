/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298ac08; name: FUN_0298ac08
 */


undefined4 FUN_0298ac08(long param_1,long *param_2,undefined2 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0297d988(param_1,*param_3);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*param_2 + 0x220))(param_2,0xf);
    if (((uVar1 & 1) == 0) || (uVar1 = FUN_0161bd78(*param_3), (uVar1 & 1) == 0)) {
      uVar1 = (**(code **)(*param_2 + 0x220))(param_2,0x18);
      if (((uVar1 & 1) == 0) || (uVar1 = FUN_016b1d7c(*param_3), (uVar1 & 1) == 0)) {
        uVar2 = FUN_0158253c(*(undefined8 *)(param_1 + 0x10));
        uVar1 = FUN_01582544(uVar2,2);
        if (((uVar1 & 1) == 0) || (uVar1 = FUN_0161bd40(*param_3), (uVar1 & 1) == 0)) {
          uVar1 = FUN_018a0db4(param_1,*param_3);
          uVar3 = 0x1a;
          if ((uVar1 & 1) == 0) {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0x14;
        }
      }
      else {
        uVar3 = 0x21;
      }
    }
    else {
      uVar3 = 0xd;
    }
  }
  else {
    uVar3 = 0x24;
  }
  return uVar3;
}


