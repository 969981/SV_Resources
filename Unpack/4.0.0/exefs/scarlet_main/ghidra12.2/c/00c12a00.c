/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c12a00; name: FUN_00c12a00
 */


void FUN_00c12a00(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  long lVar7;
  
  switch((int)param_1[1]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    pbVar5 = (byte *)*param_1;
    if (pbVar5 != (byte *)0x0) {
      lVar3 = tpidr_el0;
      plVar6 = *(long **)(lVar3 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
LAB_00c12a5c:
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c12a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))(plVar6,pbVar5,0,8);
        return;
      }
      FUN_00c48fe8(plVar6,pbVar5,0,8);
      return;
    }
    break;
  case 9:
    pbVar5 = (byte *)*param_1;
    if (pbVar5 != (byte *)0x0) {
      lVar3 = tpidr_el0;
      if (((*pbVar5 & 1) != 0) && (lVar7 = *(long *)(pbVar5 + 0x10), lVar7 != 0)) {
        plVar6 = *(long **)(lVar3 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,0,8);
        }
        else {
          FUN_00c48fe8(plVar6,lVar7,0,8);
        }
      }
      plVar6 = *(long **)(lVar3 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      goto LAB_00c12a5c;
    }
    break;
  case 10:
    if ((long *)*param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c12ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 8))();
      return;
    }
  }
  return;
}


