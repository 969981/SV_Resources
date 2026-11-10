/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f9908; name: FUN_017f9908
 */


undefined8 FUN_017f9908(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x68) == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x2b8);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
    uVar1 = FUN_00f63380(uVar2,uVar3,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar1 = FUN_00f63380(uVar2,uVar3,1);
    if (((((uVar1 & 1) != 0) && (uVar1 = FUN_00f63380(uVar2,uVar3,2), (uVar1 & 1) != 0)) &&
        (uVar1 = FUN_00f63380(uVar2,uVar3,3), (uVar1 & 1) != 0)) &&
       (uVar1 = FUN_00f63380(uVar2,uVar3,4), (uVar1 & 1) != 0)) {
      FUN_01a55be4(param_1);
      return 2;
    }
  }
  else if (*(int *)(param_1 + 0x68) == 0) {
    FUN_017f99e0(param_1);
    FUN_01497d74(param_1);
  }
  return 0;
}


