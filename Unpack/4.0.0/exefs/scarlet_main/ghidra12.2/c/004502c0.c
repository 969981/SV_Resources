/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004502c0; name: FUN_004502c0
 */


long FUN_004502c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,ulong param_7)

{
  size_t __n;
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_a0 [64];
  undefined1 local_54 [4];
  
  iVar2 = FUN_0043b720();
  lVar3 = 0;
  uVar5 = (ulong)iVar2;
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = param_7 / uVar5;
  }
  if (param_7 != uVar1 * uVar5) {
    uVar1 = uVar1 + 1;
  }
  if ((param_6 != 0) && (uVar1 < 0x100)) {
    lVar4 = FUN_00445b60(0);
    lVar3 = 0;
    if (lVar4 != 0) {
      iVar2 = FUN_00445600(lVar4,param_2,param_3,param_1,0);
      if (iVar2 == 0) {
LAB_00450400:
        lVar3 = 0;
      }
      else {
        lVar3 = param_6;
        if (uVar1 != 0) {
          lVar6 = 0;
          uVar7 = 1;
          do {
            local_54[0] = (undefined1)uVar7;
            if ((((1 < (uint)uVar7) &&
                 ((iVar2 = FUN_00445600(lVar4,0,0,0,0), iVar2 == 0 ||
                  (iVar2 = FUN_00445a80(lVar4,auStack_a0,uVar5), iVar2 == 0)))) ||
                (iVar2 = FUN_00445a80(lVar4,param_4,param_5), iVar2 == 0)) ||
               ((iVar2 = FUN_00445a80(lVar4,local_54,1), iVar2 == 0 ||
                (iVar2 = FUN_00445aa0(lVar4,auStack_a0,0), iVar2 == 0)))) goto LAB_00450400;
            __n = param_7 - lVar6;
            if (lVar6 + uVar5 <= param_7) {
              __n = uVar5;
            }
            memcpy((void *)(param_6 + lVar6),auStack_a0,__n);
            uVar7 = (ulong)((uint)uVar7 + 1);
            lVar6 = __n + lVar6;
          } while (uVar7 <= uVar1);
        }
      }
      FUN_00453300(auStack_a0,0x40);
      FUN_00445bf0(lVar4);
    }
  }
  return lVar3;
}


