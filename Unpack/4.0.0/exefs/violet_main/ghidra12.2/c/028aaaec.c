/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028aaaec; name: FUN_028aaaec
 */


void FUN_028aaaec(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long *local_38;
  
  if ((ulong)param_1[4] < 0x2a) {
    uVar7 = param_1[2] - param_1[1] >> 3;
    lVar5 = param_1[3] - *param_1;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      lVar3 = lVar5 >> 2;
      if (lVar5 == 0) {
        lVar3 = 1;
      }
      local_38 = param_1 + 3;
      local_58 = FUN_028ac4a4(lVar3);
      local_50 = local_58 + uVar7 * 8;
      local_40 = local_58 + lVar3 * 8;
      lVar5 = tpidr_el0;
      plVar2 = *(long **)(lVar5 + 0x30);
      local_48 = local_50;
      if (plVar2 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar2 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      local_60 = (**(code **)(*plVar2 + 0x10))(plVar2,0xfc0,8);
      FUN_028ac570(&local_58,&local_60);
      lVar3 = param_1[2];
      lVar8 = lVar3;
      if (lVar3 != param_1[1]) {
        do {
          lVar8 = lVar8 + -8;
          FUN_028ac7ac(&local_58,lVar8);
        } while (lVar8 != param_1[1]);
        lVar3 = param_1[2];
      }
      lVar6 = *param_1;
      *param_1 = local_58;
      param_1[1] = local_50;
      param_1[2] = local_48;
      lVar4 = param_1[3];
      param_1[3] = local_40;
      local_48 = lVar3;
      if (lVar8 != lVar3) {
        local_48 = lVar3 + ((lVar3 - lVar8) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
      }
      if (lVar6 == 0) {
        return;
      }
      plVar2 = *(long **)(lVar5 + 0x30);
      local_58 = lVar6;
      local_50 = lVar8;
      local_40 = lVar4;
      if (plVar2 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar2 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar2 + 0xf8))(plVar2);
      if (((uVar7 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar6,0,8);
        return;
      }
      FUN_00c48fe8(plVar2,lVar6,0,8);
      return;
    }
    if (param_1[3] != param_1[2]) {
      lVar5 = tpidr_el0;
      plVar2 = *(long **)(lVar5 + 0x30);
      if (plVar2 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar2 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      local_58 = (**(code **)(*plVar2 + 0x10))(plVar2,0xfc0,8);
      FUN_028ac020(param_1,&local_58);
      return;
    }
    lVar5 = tpidr_el0;
    plVar2 = *(long **)(lVar5 + 0x30);
    if (plVar2 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar2 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    local_58 = (**(code **)(*plVar2 + 0x10))(plVar2,0xfc0,8);
    FUN_028ac25c(param_1,&local_58);
  }
  else {
    param_1[4] = param_1[4] - 0x2a;
  }
  local_58 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN_028abde4(param_1,&local_58);
  return;
}


