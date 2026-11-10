/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d669c; name: FUN_021d669c
 */


void FUN_021d669c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  pbVar5 = *(byte **)(param_1 + 0x18);
  if (pbVar5 == (byte *)0x0) {
    return;
  }
  puVar9 = *(undefined8 **)(pbVar5 + 0x30);
  lVar3 = tpidr_el0;
  if (puVar9 != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(pbVar5 + 0x38);
    if (puVar10 == puVar9) {
      puVar10 = puVar9;
    }
    else {
      do {
        puVar10 = puVar10 + -1;
        pbVar8 = (byte *)*puVar10;
        *puVar10 = 0;
        if (pbVar8 != (byte *)0x0) {
          FUN_00f0012c(pbVar8 + 0x30);
          lVar6 = *(long *)(pbVar8 + 0x18);
          if (lVar6 != 0) {
            *(long *)(pbVar8 + 0x20) = lVar6;
            plVar7 = *(long **)(lVar3 + 0x30);
            if (plVar7 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar7 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
            if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
              (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,0,8);
            }
            else {
              FUN_00c48fe8(plVar7,lVar6,0,8);
            }
          }
          if (((*pbVar8 & 1) != 0) && (lVar6 = *(long *)(pbVar8 + 0x10), lVar6 != 0)) {
            plVar7 = *(long **)(lVar3 + 0x30);
            if (plVar7 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar7 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
            if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
              (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,0,8);
            }
            else {
              FUN_00c48fe8(plVar7,lVar6,0,8);
            }
          }
          plVar7 = *(long **)(lVar3 + 0x30);
          if (plVar7 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar7 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar2 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,pbVar8,0,8);
          }
          else {
            FUN_00c48fe8(plVar7,pbVar8,0,8);
          }
        }
      } while (puVar9 != puVar10);
      puVar10 = *(undefined8 **)(pbVar5 + 0x30);
    }
    *(undefined8 **)(pbVar5 + 0x38) = puVar9;
    if (puVar10 != (undefined8 *)0x0) {
      plVar7 = *(long **)(lVar3 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar2 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,puVar10,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,puVar10,0,8);
      }
    }
  }
  lVar6 = *(long *)(pbVar5 + 0x18);
  if (lVar6 != 0) {
    *(long *)(pbVar5 + 0x20) = lVar6;
    plVar7 = *(long **)(lVar3 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar6,0,8);
    }
  }
  if (((*pbVar5 & 1) != 0) && (lVar6 = *(long *)(pbVar5 + 0x10), lVar6 != 0)) {
    plVar7 = *(long **)(lVar3 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar6,0,8);
    }
  }
  plVar7 = *(long **)(lVar3 + 0x30);
  if (plVar7 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar7 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x021d6784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,pbVar5,0,8);
    return;
  }
  FUN_00c48fe8(plVar7,pbVar5,0,8);
  return;
}


