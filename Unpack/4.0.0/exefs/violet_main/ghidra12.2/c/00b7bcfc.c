/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b7bcfc; name: FUN_00b7bcfc
 */


undefined1  [16] FUN_00b7bcfc(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  lVar8 = *param_2;
  if (lVar8 != 0) {
    FUN_00bb1344(lVar8);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    if (*(long **)(param_1 + 0x50) != (long *)0x0) {
      lVar7 = tpidr_el0;
      plVar9 = *(long **)(param_1 + 0x50);
      do {
        plVar11 = (long *)*plVar9;
        if (((*(byte *)(plVar9 + 2) & 1) != 0) && (lVar3 = plVar9[4], lVar3 != 0)) {
          plVar10 = *(long **)(lVar7 + 0x30);
          if (plVar10 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar10 = DAT_04859430;
            *(long **)(lVar7 + 0x30) = DAT_04859430;
          }
          uVar2 = (**(code **)(*plVar10 + 0xf8))(plVar10);
          if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar10 + 0x18))(plVar10,lVar3,0,8);
          }
          else {
            FUN_00c48fe8(plVar10,lVar3,0,8);
          }
        }
        plVar10 = *(long **)(lVar7 + 0x30);
        if (plVar10 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar10 = DAT_04859430;
          *(long **)(lVar7 + 0x30) = DAT_04859430;
        }
        uVar2 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,0,8);
        }
        else {
          FUN_00c48fe8(plVar10,plVar9,0,8);
        }
        plVar9 = plVar11;
      } while (plVar11 != (long *)0x0);
    }
    uVar2 = *(ulong *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (uVar2 != 0) {
      uVar5 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x40) + uVar6 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x40) + uVar6 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x40) + uVar6 * 8 + 0x10) = 0;
          lVar7 = uVar6 * 8;
          uVar6 = uVar6 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar7 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar6);
      }
      if (uVar5 != 0) {
        lVar7 = uVar6 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar7) = 0;
          uVar5 = uVar5 - 1;
          lVar7 = lVar7 + 8;
        } while (uVar5 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(long **)(param_1 + 0x28) != (long *)0x0) {
      lVar7 = tpidr_el0;
      plVar9 = *(long **)(param_1 + 0x28);
      do {
        plVar11 = (long *)*plVar9;
        if (((*(byte *)(plVar9 + 2) & 1) != 0) && (lVar3 = plVar9[4], lVar3 != 0)) {
          plVar10 = *(long **)(lVar7 + 0x30);
          if (plVar10 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar10 = DAT_04859430;
            *(long **)(lVar7 + 0x30) = DAT_04859430;
          }
          uVar2 = (**(code **)(*plVar10 + 0xf8))(plVar10);
          if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar10 + 0x18))(plVar10,lVar3,0,8);
          }
          else {
            FUN_00c48fe8(plVar10,lVar3,0,8);
          }
        }
        plVar10 = *(long **)(lVar7 + 0x30);
        if (plVar10 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar10 = DAT_04859430;
          *(long **)(lVar7 + 0x30) = DAT_04859430;
        }
        uVar2 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,0,8);
        }
        else {
          FUN_00c48fe8(plVar10,plVar9,0,8);
        }
        plVar9 = plVar11;
      } while (plVar11 != (long *)0x0);
    }
    uVar2 = *(ulong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (uVar2 != 0) {
      uVar5 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar6 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar6 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar6 * 8 + 0x10) = 0;
          lVar7 = uVar6 * 8;
          uVar6 = uVar6 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar6);
      }
      if (uVar5 != 0) {
        lVar7 = uVar6 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar7) = 0;
          uVar5 = uVar5 - 1;
          lVar7 = lVar7 + 8;
        } while (uVar5 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  auVar12 = FUN_00b7b9c4(param_1,param_3);
  uVar2 = auVar12._8_8_;
  uVar5 = auVar12._0_8_ >> 0x20;
  if (auVar12._0_4_ == 0) {
    lVar7 = param_2[3];
    if (lVar7 != 0) {
      auVar12 = FUN_00b7bcfc(*(undefined8 *)(lVar7 + 0x20),lVar7,param_3);
      uVar2 = auVar12._8_8_;
      uVar5 = auVar12._0_8_ >> 0x20;
      if (auVar12._0_4_ != 0) goto LAB_00b7c1d8;
    }
    uVar6 = FUN_00b7bb2c(param_2,param_3);
    if ((uVar6 & 1) == 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar2;
      auVar12 = auVar12 << 0x40;
    }
    else {
      auVar12 = FUN_00b7b9c4(param_1,param_3);
      uVar5 = auVar12._0_8_ >> 0x20;
    }
  }
LAB_00b7c1d8:
  if (lVar8 != 0) {
    FUN_00bb14b8(lVar8);
  }
  auVar13._8_8_ = auVar12._8_8_;
  auVar13._0_8_ = auVar12._0_8_ & 0xffffffff | uVar5 << 0x20;
  return auVar13;
}


