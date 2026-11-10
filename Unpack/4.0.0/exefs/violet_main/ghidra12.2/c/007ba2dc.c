/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ba2dc; name: FUN_007ba2dc
 */


void FUN_007ba2dc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = FUN_0078b12c(param_2);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_0078b12c(param_1 + 0x88);
    uVar2 = FUN_0078b278(param_1 + 0x88,param_2);
    if ((uVar2 & 1) == 0) {
      uVar3 = 4;
      if ((uVar1 & 1) == 0) {
        uVar3 = 0;
      }
      if ((uVar1 & 1) != 0) {
        uVar1 = FUN_0078b12c(param_1 + 0xa8);
        uVar3 = 4;
        if ((uVar1 & 1) == 0) {
          uVar3 = 1;
        }
      }
      uVar1 = FUN_0078b278(param_1 + 0xa8,param_2);
      if ((uVar1 & 1) == 0) {
        if (uVar3 == 4) {
          uVar1 = FUN_0078b12c(param_1 + 200);
          uVar3 = 4;
          if ((uVar1 & 1) == 0) {
            uVar3 = 2;
          }
        }
        uVar1 = FUN_0078b278(param_1 + 200,param_2);
        if ((uVar1 & 1) == 0) {
          if (uVar3 == 4) {
            uVar1 = FUN_0078b12c(param_1 + 0xe8);
            uVar3 = 3;
            if ((uVar1 & 1) != 0) {
              uVar3 = 4;
            }
          }
          uVar1 = FUN_0078b278(param_1 + 0xe8,param_2);
          if (((uVar1 & 1) == 0) && (uVar3 != 4)) {
            FUN_0284e39c(param_1 + (ulong)uVar3 * 0x20 + 0x88,param_2);
          }
        }
      }
    }
  }
  return;
}


