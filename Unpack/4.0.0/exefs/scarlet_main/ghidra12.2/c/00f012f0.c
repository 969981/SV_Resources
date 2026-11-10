/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f012f0; name: FUN_00f012f0
 */


void FUN_00f012f0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(param_1 + 8);
  if (puVar8 != param_2) {
    lVar1 = tpidr_el0;
    do {
      puVar8 = puVar8 + -1;
      pbVar5 = (byte *)*puVar8;
      *puVar8 = 0;
      if (pbVar5 != (byte *)0x0) {
        FUN_00f0012c(pbVar5 + 0x30);
        lVar6 = *(long *)(pbVar5 + 0x18);
        if (lVar6 != 0) {
          *(long *)(pbVar5 + 0x20) = lVar6;
          plVar7 = *(long **)(lVar1 + 0x30);
          if (plVar7 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar7 = DAT_04859430;
            *(long **)(lVar1 + 0x30) = DAT_04859430;
          }
          uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if ((uVar3 & 1) != 0) {
            lVar4 = FUN_00c4e600();
            if (0 < *(int *)(lVar4 + 0x12c8)) {
              FUN_00c48fe8(plVar7,lVar6,0,8);
              goto LAB_00f013c4;
            }
          }
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,0,8);
        }
LAB_00f013c4:
        if (((*pbVar5 & 1) != 0) && (lVar6 = *(long *)(pbVar5 + 0x10), lVar6 != 0)) {
          plVar7 = *(long **)(lVar1 + 0x30);
          if (plVar7 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar7 = DAT_04859430;
            *(long **)(lVar1 + 0x30) = DAT_04859430;
          }
          uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if ((uVar3 & 1) != 0) {
            lVar4 = FUN_00c4e600();
            if (0 < *(int *)(lVar4 + 0x12c8)) {
              FUN_00c48fe8(plVar7,lVar6,0,8);
              goto LAB_00f013cc;
            }
          }
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,0,8);
        }
LAB_00f013cc:
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
        uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if ((uVar3 & 1) != 0) {
          lVar6 = FUN_00c4e600();
          if (0 < *(int *)(lVar6 + 0x12c8)) {
            FUN_00c48fe8(plVar7,pbVar5,0,8);
            goto LAB_00f01340;
          }
        }
        (**(code **)(*plVar7 + 0x18))(plVar7,pbVar5,0,8);
      }
LAB_00f01340:
    } while (param_2 != puVar8);
  }
  *(undefined8 **)(param_1 + 8) = param_2;
  return;
}


