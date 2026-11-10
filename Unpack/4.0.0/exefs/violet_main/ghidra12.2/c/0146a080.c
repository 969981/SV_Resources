/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146a080; name: FUN_0146a080
 */


char * FUN_0146a080(long param_1,char *param_2,char *param_3,char *param_4)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  long *plVar10;
  ulong local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  ulong local_98;
  ulong uStack_90;
  char *local_88;
  ulong local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  ulong local_60;
  char *local_58;
  
  if (param_2 == param_3) {
    return param_2;
  }
  if (*param_2 == ']') {
    return param_2;
  }
  local_68 = 0;
  uVar9 = 0;
  local_60 = 0;
  local_58 = (char *)0x0;
  if ((param_2 + 1 != param_3) && (*param_2 == '[')) {
    cVar8 = param_2[1];
    if (cVar8 != '.') {
      if (cVar8 == ':') {
        param_4 = (char *)FUN_028a8568(param_1,param_2 + 2,param_3,param_4);
      }
      else {
        if (cVar8 != '=') {
          uVar9 = 0;
          goto LAB_0146a108;
        }
        param_4 = (char *)FUN_028a81e4(param_1,param_2 + 2,param_3,param_4);
      }
      bVar3 = false;
      goto LAB_0146a20c;
    }
    param_2 = (char *)FUN_028a863c(param_1,param_2 + 2,param_3,&local_68);
    uVar9 = local_68 & 0xff;
  }
LAB_0146a108:
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar1 = uVar9 >> 1;
  if ((uVar9 & 1) != 0) {
    uVar1 = local_60;
  }
  if (uVar1 == 0) {
    if (((uVar2 & 0x1b0) == 0) && (*param_2 == '\\')) {
      if ((uVar2 & 0x1f0) == 0) {
        param_2 = (char *)FUN_028a8814(param_1,param_2 + 1,param_3,&local_68,param_4);
      }
      else {
        param_2 = (char *)FUN_0146bf24();
      }
    }
    else {
      std::string::operator=((string *)&local_68,*param_2);
      param_2 = param_2 + 1;
    }
  }
  if ((((param_2 == param_3) || (*param_2 == ']')) || (param_2 + 1 == param_3)) ||
     ((*param_2 != '-' || (param_2[1] == ']')))) {
    if ((local_68 & 1) == 0) {
      if (1 < (byte)local_68._0_1_) {
        if (((byte)local_68._0_1_ & 0xfe) == 2) goto LAB_0146a248;
        pcVar6 = (char *)((ulong)&local_68 | 1);
        cVar8 = local_68._1_1_;
LAB_0146a25c:
        FUN_0146bb94(param_4,cVar8,pcVar6[1]);
      }
    }
    else if (local_60 != 0) {
      cVar8 = *local_58;
      pcVar6 = local_58;
      if (local_60 != 1) goto LAB_0146a25c;
LAB_0146a248:
      FUN_0146ab00(param_4);
    }
    bVar3 = true;
    goto LAB_0146a20c;
  }
  local_78 = 0;
  local_70 = (char *)0x0;
  pcVar6 = param_2 + 2;
  local_80 = 0;
  cVar8 = param_2[1];
  if ((pcVar6 == param_3) || (cVar8 != '[')) {
    if (((uVar2 & 0x1b0) != 0) || (cVar8 != '\\')) goto LAB_0146a1ac;
    if ((uVar2 & 0x1f0) == 0) {
      pcVar6 = (char *)FUN_028a8814(param_1,pcVar6,param_3,&local_80,param_4);
    }
    else {
      pcVar6 = (char *)FUN_0146bf24();
    }
  }
  else if (*pcVar6 == '.') {
    pcVar6 = (char *)FUN_028a863c(param_1,param_2 + 3,param_3,&local_80);
  }
  else {
    cVar8 = '[';
LAB_0146a1ac:
    std::string::operator=((string *)&local_80,cVar8);
  }
  uStack_90 = local_60;
  local_98 = local_68;
  local_b0 = local_80;
  local_68 = 0;
  local_60 = 0;
  local_88 = local_58;
  local_80 = 0;
  local_58 = (char *)0x0;
  uStack_a8 = local_78;
  local_a0 = local_70;
  local_78 = 0;
  local_70 = (char *)0x0;
  FUN_0146abac(param_4,&local_98,&local_b0);
  pcVar4 = local_a0;
  if (((local_b0 & 1) != 0) && (param_4 = pcVar4, local_a0 != (char *)0x0)) {
    lVar7 = tpidr_el0;
    plVar10 = *(long **)(lVar7 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,pcVar4,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,pcVar4,0,8);
    }
  }
  pcVar4 = local_88;
  if (((local_98 & 1) != 0) && (param_4 = pcVar4, local_88 != (char *)0x0)) {
    lVar7 = tpidr_el0;
    plVar10 = *(long **)(lVar7 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,pcVar4,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,pcVar4,0,8);
    }
  }
  pcVar4 = local_70;
  if (((local_80 & 1) != 0) && (param_4 = pcVar4, local_70 != (char *)0x0)) {
    lVar7 = tpidr_el0;
    plVar10 = *(long **)(lVar7 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,pcVar4,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,pcVar4,0,8);
    }
  }
  bVar3 = true;
  param_2 = pcVar6;
LAB_0146a20c:
  pcVar6 = local_58;
  if (((local_68 & 1) != 0) && (local_58 != (char *)0x0)) {
    lVar7 = tpidr_el0;
    plVar10 = *(long **)(lVar7 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,pcVar6,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,pcVar6,0,8);
    }
  }
  if (!bVar3) {
    return param_4;
  }
  return param_2;
}


