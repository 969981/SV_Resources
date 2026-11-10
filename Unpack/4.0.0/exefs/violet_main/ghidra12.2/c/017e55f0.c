/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e55f0; name: FUN_017e55f0
 */


undefined8 FUN_017e55f0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_01497d84();
  uVar3 = FUN_010a9b4c(uVar2,0x800000);
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_01497d84(param_1);
    uVar3 = FUN_010a9b4c(uVar2,0x400);
    if ((uVar3 & 1) == 0) {
      uVar2 = FUN_01497d84(param_1);
      uVar3 = FUN_010a9b4c(uVar2,0x1000);
      if ((uVar3 & 1) == 0) {
        FUN_014f5f08(param_1);
        iVar1 = FUN_0154b6d4();
        if (iVar1 == 2) {
LAB_017e565c:
          FUN_017e4fe4(param_1);
          FUN_014f5f00();
          uVar2 = FUN_014f5ef8();
          uVar2 = FUN_014f5f24(uVar2,0);
          return uVar2;
        }
        FUN_01497d84(param_1);
        iVar1 = FUN_0154b6c8();
        if (iVar1 == 0) {
          FUN_014f5f08(param_1);
          iVar1 = FUN_0154b6d4();
          if (iVar1 == 0) goto LAB_017e565c;
        }
      }
    }
  }
  return 0;
}


