/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0296e5b0; name: FUN_0296e5b0
 */


long * FUN_0296e5b0(undefined8 param_1,int param_2,uint param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar4 = FUN_02943a10();
  bVar1 = FUN_00f7e274();
  if ((bVar1 != 0) && (param_3 < bVar1)) {
    uVar7 = 0;
    do {
      plVar5 = (long *)FUN_0124e4c0(uVar4,uVar7);
      iVar3 = (**(code **)(*plVar5 + 0x98))();
      if ((iVar3 == param_2) ||
         ((uVar6 = (**(code **)(*plVar5 + 0x208))(plVar5), (uVar6 & 1) != 0 &&
          (sVar2 = (**(code **)(*plVar5 + 0x230))(plVar5), sVar2 == 0)))) {
        if (param_3 == 0) {
          return plVar5;
        }
        param_3 = param_3 - 1;
      }
      uVar7 = uVar7 + 1;
    } while (bVar1 != uVar7);
  }
  return (long *)0x0;
}


