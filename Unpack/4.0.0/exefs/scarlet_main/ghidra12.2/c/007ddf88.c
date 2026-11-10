/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ddf88; name: FUN_007ddf88
 */


void FUN_007ddf88(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = FUN_007ec50c();
  if (lVar1 != 0) {
    lVar1 = FUN_007ec50c(param_1);
    lVar2 = FUN_007ec4a8(param_1);
    if (lVar1 == lVar2) {
      lVar1 = param_1 + 0xa8;
      if (*(long *)(param_1 + 0xb0) != lVar1) {
        uVar5 = *(undefined8 *)PTR_DAT_047d11a0;
        lVar2 = *(long *)(param_1 + 0xb0);
        do {
          lVar7 = *(long *)(lVar2 + 8);
          uVar3 = FUN_007e1254(uVar5,*(undefined8 *)(lVar2 + 0x10));
          if ((uVar3 & 1) == 0) {
            uVar6 = *(undefined8 *)(lVar2 + 0x10);
            FUN_0078fa2c(lVar1,lVar2);
            FUN_0078fa04(param_1 + 0xc0,param_1 + 0xc0,lVar2 + *(int *)(param_1 + 0xd4));
            plVar4 = *(long **)(param_1 + 0xf0);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4,uVar6);
            }
          }
          lVar2 = lVar7;
        } while (lVar7 != lVar1);
      }
    }
  }
  return;
}


