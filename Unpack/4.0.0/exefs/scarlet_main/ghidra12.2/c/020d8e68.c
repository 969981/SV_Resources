/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020d8e68; name: FUN_020d8e68
 */


undefined8 FUN_020d8e68(ulong *param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long local_40;
  long lStack_38;
  long local_30;
  long *local_28;
  
  uVar4 = DAT_0483c8e0[1];
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar3 = *param_1;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar4 - 1 & uVar3;
    }
    else if (uVar3 < uVar4) {
      uVar6 = uVar3;
    }
    else {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar3 / uVar4;
      }
      uVar6 = uVar3 - uVar6 * uVar4;
    }
    plVar7 = *(long **)(*DAT_0483c8e0 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (plVar7[2] == uVar3) goto LAB_020d8f08;
          }
          else if ((plVar7[1] & uVar4 - 1) != uVar6) {
            return 0;
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar5 = plVar7[1];
        if (uVar5 == uVar3) {
          if (plVar7[2] == uVar3) {
LAB_020d8f08:
            if (((*PTR_DAT_047d8280 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar2 != 0)) {
              FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d8280);
            }
            uVar8 = *(undefined8 *)PTR_DAT_047d8288;
            *(undefined8 *)PTR_DAT_047d8290 = uVar8;
            plVar9 = (long *)plVar7[3];
            plVar7 = (long *)PTR_DAT_047d8b70;
            if (plVar9 != (long *)0x0) {
              plVar7 = plVar9 + 6;
            }
            local_40 = *plVar7;
            plVar7 = (long *)PTR_PTR_047d4508;
            if (plVar9 != (long *)0x0) {
              plVar7 = plVar9 + 7;
            }
            lStack_38 = *plVar7;
            if (plVar9 == (long *)0x0) {
              local_30 = 0;
            }
            else {
              local_30 = plVar9[8];
            }
            local_28 = (long *)0x0;
            if (plVar9 == (long *)0x0) {
              local_28 = plVar9;
              uVar8 = FUN_0116d064(uVar8,&local_40);
            }
            else {
              (**(code **)(*plVar9 + 0x18))(plVar9);
              local_28 = plVar9;
              uVar8 = FUN_0116d064(uVar8,&local_40);
              (**(code **)(*plVar9 + 0x20))(plVar9);
            }
            return uVar8;
          }
        }
        else {
          if (uVar4 <= uVar5) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar5 / uVar4;
            }
            uVar5 = uVar5 - uVar1 * uVar4;
          }
          if (uVar5 != uVar6) {
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


