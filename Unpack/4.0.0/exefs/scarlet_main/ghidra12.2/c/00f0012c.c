/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f0012c; name: FUN_00f0012c
 */


void FUN_00f0012c(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = (undefined8 *)*param_1;
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)param_1[1];
    lVar3 = tpidr_el0;
    if (puVar9 == puVar8) {
      puVar9 = puVar8;
    }
    else {
      do {
        puVar9 = puVar9 + -1;
        pbVar6 = (byte *)*puVar9;
        *puVar9 = 0;
        if (pbVar6 != (byte *)0x0) {
          FUN_00f0012c(pbVar6 + 0x30);
          lVar7 = *(long *)(pbVar6 + 0x18);
          if (lVar7 != 0) {
            *(long *)(pbVar6 + 0x20) = lVar7;
            plVar5 = *(long **)(lVar3 + 0x30);
            if (plVar5 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar5 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
            if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
              (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,0,8);
            }
            else {
              FUN_00c48fe8(plVar5,lVar7,0,8);
            }
          }
          if (((*pbVar6 & 1) != 0) && (lVar7 = *(long *)(pbVar6 + 0x10), lVar7 != 0)) {
            plVar5 = *(long **)(lVar3 + 0x30);
            if (plVar5 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar5 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
            if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
              (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,0,8);
            }
            else {
              FUN_00c48fe8(plVar5,lVar7,0,8);
            }
          }
          plVar5 = *(long **)(lVar3 + 0x30);
          if (plVar5 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar5 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if (((uVar2 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar5 + 0x18))(plVar5,pbVar6,0,8);
          }
          else {
            FUN_00c48fe8(plVar5,pbVar6,0,8);
          }
        }
      } while (puVar8 != puVar9);
      puVar9 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar8;
    if (puVar9 != (undefined8 *)0x0) {
      plVar5 = *(long **)(lVar3 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00f0020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x18))(plVar5,puVar9,0,8);
        return;
      }
      FUN_00c48fe8(plVar5,puVar9,0,8);
      return;
    }
  }
  return;
}


