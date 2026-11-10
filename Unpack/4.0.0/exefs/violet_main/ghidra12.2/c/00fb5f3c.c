/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb5f3c; name: FUN_00fb5f3c
 */


void FUN_00fb5f3c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if ((char)param_1[0x17] != '\0') {
    std::locale::~locale((locale *)(param_1 + 0x18));
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  *(undefined **)(param_1 + 0xc) = &DAT_045469a8;
  lVar4 = tpidr_el0;
  if (((char)param_1[0x15] != '\0') && (lVar5 = param_1[0xe], lVar5 != 0)) {
    plVar6 = *(long **)(lVar4 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar5,0,8);
    }
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  std::streambuf::~streambuf((streambuf *)(param_1 + 0xc));
  if (((*(byte *)(param_1 + 8) & 1) != 0) && (lVar5 = param_1[10], lVar5 != 0)) {
    plVar6 = *(long **)(lVar4 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar5,0,8);
    }
  }
  lVar5 = param_1[3];
  if (lVar5 != 0) {
    plVar6 = *(long **)(lVar4 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar5,0,8);
    }
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar7 = param_1[1];
    lVar8 = lVar5;
    if (lVar7 != lVar5) {
      do {
        if (*(char *)(lVar7 + -0x20) != '\0') {
          std::locale::~locale((locale *)(lVar7 + -0x18));
          *(undefined1 *)(lVar7 + -0x20) = 0;
        }
        if (((*(byte *)(lVar7 + -0x58) & 1) != 0) && (lVar8 = *(long *)(lVar7 + -0x48), lVar8 != 0))
        {
          plVar6 = *(long **)(lVar4 + 0x30);
          if (plVar6 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar6 = DAT_04859430;
            *(long **)(lVar4 + 0x30) = DAT_04859430;
          }
          uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
          if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,0,8);
          }
          else {
            FUN_00c48fe8(plVar6,lVar8,0,8);
          }
        }
        lVar8 = lVar7 + -0x78;
        if (((*(byte *)(lVar7 + -0x70) & 1) != 0) && (lVar7 = *(long *)(lVar7 + -0x60), lVar7 != 0))
        {
          plVar6 = *(long **)(lVar4 + 0x30);
          if (plVar6 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar6 = DAT_04859430;
            *(long **)(lVar4 + 0x30) = DAT_04859430;
          }
          uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
          if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,0,8);
          }
          else {
            FUN_00c48fe8(plVar6,lVar7,0,8);
          }
        }
        lVar7 = lVar8;
      } while (lVar5 != lVar8);
      lVar8 = *param_1;
    }
    param_1[1] = lVar5;
    if (lVar8 != 0) {
      plVar6 = *(long **)(lVar4 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00fb6248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,0,8);
        return;
      }
      FUN_00c48fe8(plVar6,lVar8,0,8);
      return;
    }
  }
  return;
}


