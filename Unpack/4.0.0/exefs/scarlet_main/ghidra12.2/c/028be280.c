/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028be280; name: FUN_028be280
 */


void FUN_028be280(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 8) != param_2) {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(param_1 + 8);
    do {
      lVar5 = *(long *)(lVar4 + -0x28);
      if (lVar5 != 0) {
        *(long *)(lVar4 + -0x20) = lVar5;
        plVar6 = *(long **)(lVar1 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar3 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
        }
        else {
          FUN_00c48fe8(plVar6,lVar5,0,8);
        }
      }
      lVar5 = *(long *)(lVar4 + -0x40);
      lVar7 = lVar4 + -0x60;
      if (lVar5 != 0) {
        *(long *)(lVar4 + -0x38) = lVar5;
        plVar6 = *(long **)(lVar1 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
        }
        else {
          FUN_00c48fe8(plVar6,lVar5,0,8);
        }
      }
      lVar4 = lVar7;
    } while (param_2 != lVar7);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


