/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f7f160; name: FUN_00f7f160
 */


undefined4 FUN_00f7f160(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  
  iVar3 = (uint)*param_3 - (uint)*param_2;
  bVar1 = param_3[1];
  bVar2 = param_2[1];
  uVar5 = FUN_00f7e27c();
  uVar6 = FUN_00f7d7d8(uVar5,0);
  uVar8 = 0;
  if ((uVar6 & 1) == 0) {
    uVar8 = 2;
    iVar3 = 0;
  }
  uVar5 = FUN_00f7e27c(2,param_1);
  uVar7 = FUN_00f7d7d8(uVar5,1);
  uVar4 = uVar8;
  if ((uVar7 & 1) != 0) {
    uVar4 = 1;
  }
  if (((uVar6 & 1) != 0) && ((uVar7 & 1) != 0)) {
    if ((int)((uint)bVar1 - (uint)bVar2) < iVar3) {
      uVar4 = 1;
    }
    else {
      uVar4 = 2;
      if ((uint)bVar1 - (uint)bVar2 != iVar3) {
        uVar4 = uVar8;
      }
    }
  }
  return uVar4;
}


