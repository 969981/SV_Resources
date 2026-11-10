/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291c540; name: FUN_0291c540
 */


int * FUN_0291c540(long param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  piVar2 = (int *)FUN_0291c4a8(param_1,param_3,0);
  if (piVar2 != (int *)0x0) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        uVar3 = FUN_00f7e284(param_2);
        plVar4 = (long *)FUN_01021c94(uVar3,iVar1);
        uVar3 = FUN_00f7e27c(param_2);
        uVar5 = FUN_0128ab58(uVar3,param_4,iVar1);
        if (((iVar1 != param_4) && ((uVar5 & 1) != 0)) &&
           (uVar5 = (**(code **)(*plVar4 + 0x200))(plVar4), (uVar5 & 1) == 0)) {
          return piVar2;
        }
      }
      uVar5 = (ulong)*(byte *)(param_1 + 0x2420);
      if (uVar5 != 0) {
        uVar6 = 0;
        lVar7 = (long)piVar2 + (0x84 - param_1);
        do {
          lVar7 = lVar7 + -0x8c;
          if (lVar7 == 0) {
            uVar5 = uVar6 & 0xffffffff;
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
      piVar2 = (int *)FUN_0291c4a8(param_1,param_3,(int)uVar5 + 1);
    } while (piVar2 != (int *)0x0);
  }
  return (int *)0x0;
}


