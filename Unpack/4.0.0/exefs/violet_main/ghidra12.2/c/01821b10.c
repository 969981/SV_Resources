/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01821b10; name: FUN_01821b10
 */


void FUN_01821b10(uint param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  if (((*PTR_DAT_047d38d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d38d8), iVar2 != 0))
  {
    FUN_00100190(&LAB_008f33ec,PTR_DAT_047d38e0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38d8);
  }
  uVar4 = (ulong)param_1;
  lVar3 = *(long *)PTR_DAT_047d38e0;
  DAT_04800900 = lVar3;
  nn::os::LockMutex((MutexType *)(lVar3 + 0x90));
  uVar5 = *(ulong *)(lVar3 + 0x30);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = (ulong)((int)uVar5 - 1U & param_1);
    }
    else {
      uVar7 = uVar4;
      if (uVar5 <= uVar4) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar4 / uVar5;
        }
        uVar7 = uVar4 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(*(long *)(lVar3 + 0x28) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (*(uint *)(plVar8 + 2) == param_1) goto LAB_01821c44;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar4) {
            if (*(uint *)(plVar8 + 2) == param_1) goto LAB_01821c44;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar1 * uVar5;
            }
            if (uVar6 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
LAB_01821c64:
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x90));
  return;
LAB_01821c44:
  FUN_01821f7c(plVar8[3]);
  FUN_0169dfa4(plVar8 + 3);
  FUN_01821ce8((long *)(lVar3 + 0x28),plVar8);
  goto LAB_01821c64;
}


