/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f11e0; name: FUN_001f11e0
 */


undefined8 FUN_001f11e0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_001edb18(param_1,*(undefined4 *)(param_2 + 8));
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 0xdc) != 3) {
    if ((((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) && ((*(byte *)(param_2 + 0xd) & 1) != 0)) &&
       (iVar1 = FUN_001f8bc4(lVar2), iVar1 != 0)) {
      uVar3 = FUN_001ee90c(param_1,*(undefined4 *)(lVar2 + 0xb8),1);
      if ((int)uVar3 < -900) {
        return uVar3;
      }
    }
    else if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
            (iVar1 = (**(code **)(param_1 + 0x7e8))
                               (param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)), iVar1 != 0)) {
      return 0xfffffc7a;
    }
    if ((((*(byte *)(param_2 + 0xd) & 1) != 0) &&
        (FUN_001f9648(lVar2,1), (~*(byte *)(lVar2 + 0xe5) & 3) == 0)) &&
       (uVar3 = FUN_001eea24(param_1,*(undefined4 *)(lVar2 + 0xb8),0), (int)uVar3 < -900)) {
      return uVar3;
    }
  }
  return 0;
}


