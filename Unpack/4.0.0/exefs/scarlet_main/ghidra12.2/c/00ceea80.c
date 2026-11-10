/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ceea80; name: FUN_00ceea80
 */


void FUN_00ceea80(long *param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  if (((DAT_0483ae18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0483ae18), iVar2 != 0)) {
    FUN_00100190(&LAB_02a2cf90,&DAT_0483ae08,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483ae18);
  }
  DAT_0483ae20 = DAT_0483ae08;
  uVar5 = *(ulong *)(DAT_0483ae08 + 0x198);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar3 = *param_2;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & uVar3;
    }
    else if (uVar3 < uVar5) {
      uVar7 = uVar3;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar3 / uVar5;
      }
      uVar7 = uVar3 - uVar7 * uVar5;
    }
    plVar8 = *(long **)(*(long *)(DAT_0483ae08 + 400) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar3) {
            if (plVar8[2] == uVar3) goto LAB_00ceebb0;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar3) {
            if (plVar8[2] == uVar3) {
LAB_00ceebb0:
              lVar4 = plVar8[6];
              *param_1 = (long)(PTR_DAT_047d9318 + 0x10);
              param_1[1] = lVar4;
              return;
            }
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
  *param_1 = (long)(PTR_DAT_047d9318 + 0x10);
  param_1[1] = 0;
  return;
}


