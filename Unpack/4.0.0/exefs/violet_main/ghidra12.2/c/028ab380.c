/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ab380; name: FUN_028ab380
 */


void FUN_028ab380(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long *local_38;
  
  uVar2 = param_1[2] - param_1[1];
  lVar4 = 0;
  if (uVar2 != 0) {
    lVar4 = ((long)uVar2 >> 3) * 0x2a + -1;
  }
  if ((ulong)(lVar4 - (param_1[5] + param_1[4])) < 0x2a) {
    uVar7 = param_1[3] - *param_1;
    if (uVar2 < uVar7) {
      if (param_1[1] == *param_1) {
        lVar4 = tpidr_el0;
        plVar5 = *(long **)(lVar4 + 0x30);
        if (plVar5 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar5 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
        }
        local_58 = (**(code **)(*plVar5 + 0x10))(plVar5,0xfc0,8);
        FUN_028ac020(param_1,&local_58);
        local_58 = *(long *)(param_1[2] + -8);
        param_1[2] = param_1[2] + -8;
        FUN_028ac9f4(param_1,&local_58);
      }
      else {
        lVar4 = tpidr_el0;
        plVar5 = *(long **)(lVar4 + 0x30);
        if (plVar5 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar5 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
        }
        local_58 = (**(code **)(*plVar5 + 0x10))(plVar5,0xfc0,8);
        FUN_028ac25c(param_1,&local_58);
      }
      if (param_1[2] - param_1[1] == 8) {
        lVar4 = 0x15;
      }
      else {
        lVar4 = param_1[4] + 0x2a;
      }
      param_1[4] = lVar4;
    }
    else {
      lVar4 = (long)uVar7 >> 2;
      if (uVar7 == 0) {
        lVar4 = 1;
      }
      local_38 = param_1 + 3;
      local_58 = FUN_028ac4a4(lVar4);
      local_40 = local_58 + lVar4 * 8;
      lVar4 = tpidr_el0;
      plVar5 = *(long **)(lVar4 + 0x30);
      local_50 = local_58;
      local_48 = local_58;
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      local_60 = (**(code **)(*plVar5 + 0x10))(plVar5,0xfc0,8);
      FUN_028ac570(&local_58,&local_60);
      lVar3 = param_1[1];
      lVar10 = lVar3;
      if (lVar3 != param_1[2]) {
        do {
          FUN_028acc3c(&local_58,lVar10);
          lVar10 = lVar10 + 8;
        } while (lVar10 != param_1[2]);
        lVar3 = param_1[1];
      }
      lVar9 = *param_1;
      *param_1 = local_58;
      param_1[1] = local_50;
      lVar8 = param_1[3];
      param_1[2] = local_48;
      param_1[3] = local_40;
      if (local_48 - local_50 == 8) {
        lVar6 = 0x15;
      }
      else {
        lVar6 = param_1[4] + 0x2a;
      }
      param_1[4] = lVar6;
      local_48 = lVar10;
      if (lVar10 - lVar3 != 0) {
        local_48 = lVar10 + ((lVar10 - lVar3) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
      }
      if (lVar9 != 0) {
        plVar5 = *(long **)(lVar4 + 0x30);
        local_58 = lVar9;
        local_50 = lVar3;
        local_40 = lVar8;
        if (plVar5 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar5 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
        }
        uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (((uVar2 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8))) {
          FUN_00c48fe8(plVar5,lVar9,0,8);
          return;
        }
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,0,8);
      }
    }
  }
  else {
    param_1[4] = param_1[4] + 0x2a;
    plVar5 = (long *)(param_1[2] + -8);
    local_58 = *plVar5;
    param_1[2] = (long)plVar5;
    FUN_028ac9f4(param_1,&local_58);
  }
  return;
}


