/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291c364; name: FUN_0291c364
 */


undefined8 FUN_0291c364(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0291c450();
  if ((uVar2 & 1) == 0) {
LAB_0291c440:
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) < 0) {
      uVar3 = FUN_00f7e27c(*(undefined8 *)(param_1 + 8));
      iVar1 = FUN_011e2da8(uVar3,param_2);
      if (iVar1 != 1) goto LAB_0291c440;
      if ((*(int *)(param_1 + 0x1c) < (int)(uint)*(ushort *)(param_1 + 0x2e)) &&
         (*(short *)(param_1 + 0x2c) == 1)) {
        uVar3 = 0;
      }
      else if ((*(int *)(param_1 + 0x20) < (int)(uint)*(ushort *)(param_1 + 0x40)) &&
              (*(short *)(param_1 + 0x3e) == 1)) {
        uVar3 = 1;
      }
      else if ((*(int *)(param_1 + 0x24) < (int)(uint)*(ushort *)(param_1 + 0x52)) &&
              (*(short *)(param_1 + 0x50) == 1)) {
        uVar3 = 2;
      }
      else {
        if (((int)(uint)*(ushort *)(param_1 + 100) <= *(int *)(param_1 + 0x28)) ||
           (*(short *)(param_1 + 0x62) != 1)) goto LAB_0291c440;
        uVar3 = 3;
      }
      FUN_0291c318(param_1,uVar3);
    }
    uVar3 = 1;
  }
  return uVar3;
}


