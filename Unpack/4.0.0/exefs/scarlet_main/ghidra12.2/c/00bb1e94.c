/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bb1e94; name: FUN_00bb1e94
 */


void FUN_00bb1e94(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = &PTR_FUN_0455a580;
  lVar6 = param_1[10];
  lVar1 = tpidr_el0;
  lVar5 = param_1[0xb];
  if (param_1[0xb] != lVar6) {
    uVar3 = 0;
    do {
      lVar6 = *(long *)(lVar6 + uVar3 * 8);
      if (lVar6 != 0) {
        plVar7 = *(long **)(lVar1 + 0x30);
        if (plVar7 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar7 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,0,8);
        }
        else {
          FUN_00c48fe8(plVar7,lVar6,0,8);
        }
      }
      lVar6 = param_1[10];
      uVar3 = uVar3 + 1;
      lVar5 = lVar6;
    } while (uVar3 < (ulong)(param_1[0xb] - lVar6 >> 3));
  }
  if (lVar5 != 0) {
    param_1[0xb] = lVar5;
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar5,0,8);
    }
  }
  FUN_00bb3c4c(param_1[8]);
  FUN_00bb3e4c(param_1[5]);
  FUN_00bb3e4c(param_1[2]);
  return;
}


