/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01259e48; name: FUN_01259e48
 */


void FUN_01259e48(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  while (lVar3 != param_2) {
    *(long **)(param_1 + 0x10) = (long *)(lVar3 + -0x38);
    lVar4 = *(long *)(lVar3 + -0x38);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar3 + -0x30);
      if (lVar5 == lVar4) {
        lVar5 = lVar4;
      }
      else {
        do {
          if (*(long **)(lVar5 + -0x10) != (long *)0x0) {
            (**(code **)(**(long **)(lVar5 + -0x10) + 0x20))();
          }
          plVar1 = (long *)(lVar5 + -0x18);
          lVar5 = lVar5 + -0x18;
          if ((long *)*plVar1 != (long *)0x0) {
            (**(code **)(*(long *)*plVar1 + 0x20))();
          }
        } while (lVar4 != lVar5);
        lVar5 = *(long *)(lVar3 + -0x38);
      }
      *(long *)(lVar3 + -0x30) = lVar4;
      plVar1 = *(long **)(lVar3 + -0x20);
      lVar3 = *(long *)(lVar3 + -0x28) - lVar5;
      uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar3,8);
      }
      else {
        FUN_00c48fe8(plVar1,lVar5,lVar3,8);
      }
    }
    lVar3 = *(long *)(param_1 + 0x10);
  }
  return;
}


