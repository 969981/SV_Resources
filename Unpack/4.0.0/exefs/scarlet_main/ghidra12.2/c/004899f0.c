/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004899f0; name: FUN_004899f0
 */


void FUN_004899f0(undefined8 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int local_58 [10];
  
  if (param_2 == 0) {
    FUN_00489ae0(0x38e,param_1,param_3 | 8);
    return;
  }
  uVar1 = param_2 - 1;
  if (uVar1 < 8) {
LAB_00489a1c:
    lVar3 = (ulong)uVar1 * 0x28 + 0x44bfb28;
LAB_00489a30:
    (**(code **)(lVar3 + 8))(lVar3,param_1,param_3);
  }
  else {
    if (DAT_047f43d0 != 0) {
      local_58[0] = param_2;
      iVar2 = FUN_0047e200(DAT_047f43d0,local_58);
      if (-1 < iVar2) {
        uVar1 = iVar2 + 8;
        if (uVar1 != 0xffffffff) {
          if ((int)uVar1 < 0) {
            lVar3 = 0;
          }
          else {
            if ((int)uVar1 < 8) goto LAB_00489a1c;
            lVar3 = FUN_0047e450(DAT_047f43d0,iVar2);
          }
          goto LAB_00489a30;
        }
      }
    }
    (*(code *)PTR_FUN_044bfb20)(param_2,param_1,param_3);
  }
  return;
}


