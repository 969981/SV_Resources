/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0272ef10; name: FUN_0272ef10
 */


uint FUN_0272ef10(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (*(char *)(param_1 + 0x99) == '\0') {
    uVar2 = param_3 & 0x7f;
    uVar3 = param_3;
  }
  else {
    if ((param_3 & 1) != 0) {
      lVar1 = *(long *)(param_1 + 0x50);
      uVar6 = (*(long *)(param_1 + 0x58) - lVar1 >> 3) * 0x38e38e39;
      lVar5 = *param_2;
      if ((int)uVar6 != 0) {
        uVar9 = uVar6 & 0xffffffff;
        FUN_00c75684(*(undefined8 *)(lVar5 + 200),0,lVar1 + 0x38);
        if ((((uVar9 != 1) &&
             (FUN_00c75684(*(undefined8 *)(lVar5 + 200),1,lVar1 + 0x80), uVar9 != 2)) &&
            (FUN_00c75684(*(undefined8 *)(lVar5 + 200),2,lVar1 + 200), uVar9 != 3)) &&
           ((FUN_00c75684(*(undefined8 *)(lVar5 + 200),3,lVar1 + 0x110), uVar9 != 4 &&
            (FUN_00c75684(*(undefined8 *)(lVar5 + 200),4,lVar1 + 0x158), uVar9 != 5)))) {
          lVar7 = lVar1 + 0x1a0;
          uVar8 = 5;
          do {
            FUN_00c75684(*(undefined8 *)(lVar5 + 200),uVar8 & 0xffffffff,lVar7);
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + 0x48;
          } while (uVar9 != uVar8);
        }
      }
      if ((param_3 >> 1 & 1) != 0) {
        FUN_00c752dc(lVar5,lVar1,uVar6 & 0xffffffff);
      }
    }
    uVar3 = param_3 & 0xfffffffc;
    uVar2 = param_3 & 0x7c;
  }
  if (uVar2 != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  return uVar3;
}


