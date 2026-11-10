/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00466e10; name: FUN_00466e10
 */


bool FUN_00466e10(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_28;
  
  local_28 = 0;
  *param_1 = 0;
  if ((param_2 == 0) || (iVar1 = FUN_0043b710(param_2), iVar1 == 0x40)) {
    return true;
  }
  iVar1 = FUN_0043b710(param_2);
  if (iVar1 == 0x40) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_003e55a0();
    if (lVar4 == 0) goto LAB_00466ecc;
    FUN_003e5690(lVar4,param_2);
  }
  lVar2 = FUN_003e00a0(lVar4,PTR_DAT_047cd248,&local_28);
  if (lVar2 != 0) {
    lVar2 = FUN_003e55a0();
    *param_1 = lVar2;
    if (lVar2 != 0) {
      uVar3 = FUN_0045bc10(0x38f);
      FUN_003e55c0(lVar2,uVar3,0x10,local_28);
      local_28 = 0;
    }
  }
LAB_00466ecc:
  FUN_003df2e0(local_28);
  FUN_003e55b0(lVar4);
  return *param_1 != 0;
}


