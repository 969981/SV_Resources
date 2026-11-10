/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a4890; name: FUN_017a4890
 */


uint FUN_017a4890(uint param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  if (((*PTR_DAT_047d38d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d38d8), iVar2 != 0))
  {
    FUN_00100190(&LAB_008f33ec,PTR_DAT_047d38e0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38d8);
  }
  uVar5 = (ulong)param_1;
  lVar4 = *(long *)PTR_DAT_047d38e0;
  DAT_04800900 = lVar4;
  nn::os::LockMutex((MutexType *)(lVar4 + 0x90));
  uVar6 = *(ulong *)(lVar4 + 0x30);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = (ulong)((int)uVar6 - 1U & param_1);
    }
    else {
      uVar8 = uVar5;
      if (uVar6 <= uVar5) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar5 / uVar6;
        }
        uVar8 = uVar5 - uVar8 * uVar6;
      }
    }
    plVar9 = *(long **)(*(long *)(lVar4 + 0x28) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == uVar5) {
            if (*(uint *)(plVar9 + 2) == param_1) goto LAB_017a49c0;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) goto LAB_017a4a1c;
          plVar9 = (long *)*plVar9;
          uVar3 = 0;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar5) {
            if (*(uint *)(plVar9 + 2) == param_1) goto LAB_017a49c0;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar1 * uVar6;
            }
            if (uVar7 != uVar8) goto LAB_017a4a1c;
          }
          plVar9 = (long *)*plVar9;
          uVar3 = 0;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_017a49cc;
    }
  }
LAB_017a4a1c:
  uVar3 = 0;
LAB_017a49cc:
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x90));
  return uVar3 & 1;
LAB_017a49c0:
  uVar3 = FUN_017a4a68(plVar9[3]);
  goto LAB_017a49cc;
}


