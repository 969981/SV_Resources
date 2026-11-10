/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ab7e0; name: FUN_028ab7e0
 */


void FUN_028ab7e0(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  FUN_028ab910();
  plVar8 = *(long **)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar8 != plVar1) {
    lVar2 = tpidr_el0;
    do {
      lVar6 = *plVar8;
      if (lVar6 != 0) {
        plVar7 = *(long **)(lVar2 + 0x30);
        if (plVar7 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar7 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,0,8);
        }
        else {
          FUN_00c48fe8(plVar7,lVar6,0,8);
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar1 != plVar8);
  }
  FUN_028abcb0(param_1);
  return;
}


