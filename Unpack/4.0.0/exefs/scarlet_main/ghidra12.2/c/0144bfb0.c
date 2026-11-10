/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0144bfb0; name: FUN_0144bfb0
 */


void FUN_0144bfb0(uint param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_48 [24];
  
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  lVar8 = *(long *)PTR_DAT_047d3be8;
  *(long *)PTR_DAT_047dcd80 = lVar8;
  nn::os::LockMutex((MutexType *)(lVar8 + 0x28));
  uVar3 = *(ulong *)(lVar8 + 0x50);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar6 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar4 = (ulong)param_1;
    if (uVar6 < 2) {
      uVar5 = (ulong)((int)uVar3 - 1U & param_1);
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)(lVar8 + 0x48) + uVar5 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar7[1] == uVar4) {
            if (*(uint *)(plVar7 + 2) == param_1) goto LAB_0144c084;
          }
          else if ((plVar7[1] & uVar3 - 1) != uVar5) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar7[1];
          if (uVar6 == uVar4) {
            if (*(uint *)(plVar7 + 2) == param_1) goto LAB_0144c084;
          }
          else {
            if (uVar3 <= uVar6) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar6 / uVar3;
              }
              uVar6 = uVar6 - uVar1 * uVar3;
            }
            if (uVar6 != uVar5) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
LAB_0144c094:
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0x28));
  return;
LAB_0144c084:
  FUN_0144c15c(auStack_48);
  FUN_014f4fc8(auStack_48);
  goto LAB_0144c094;
}


