/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6e36c; name: FUN_01f6e36c
 */


void FUN_01f6e36c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar5 = param_1[1];
  lVar3 = tpidr_el0;
  lVar7 = param_1[2];
  while (lVar4 = lVar7, lVar4 != lVar5) {
    param_1[2] = lVar4 + -0x18;
    lVar7 = lVar4 + -0x18;
    if ((*(byte *)(lVar4 + -0x18) & 1) != 0) {
      lVar7 = *(long *)(lVar4 + -8);
      if (lVar7 != 0) {
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
      lVar7 = param_1[2];
    }
  }
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
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
  uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01f6e480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
    return;
  }
  FUN_00c48fe8(plVar6,lVar5,0,8);
  return;
}


