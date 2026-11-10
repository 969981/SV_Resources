/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00df6fe0; name: FUN_00df6fe0
 */


void FUN_00df6fe0(undefined8 *param_1,byte *param_2,long param_3,uint param_4,long param_5)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  byte *pbVar13;
  long lVar14;
  long *local_38;
  
  puVar4 = PTR_DAT_047d4e08;
  puVar3 = PTR_DAT_047d4e00;
  puVar2 = PTR_DAT_047d4df8;
  if ((param_3 == 0) || (lVar11 = *(long *)(param_3 + 0x460), lVar11 == 0)) {
    if ((param_4 & 1) == 0) {
      lVar11 = param_5;
      if (param_5 == 0) {
        if (((*PTR_DAT_047d4df8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4df8);
        }
        lVar11 = *(long *)puVar3;
        *(long *)puVar4 = lVar11;
        lVar11 = *(long *)(lVar11 + 0x28);
      }
    }
    else {
      if (((*PTR_DAT_047d4df8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4df8);
      }
      lVar11 = *(long *)puVar3;
      *(long *)puVar4 = lVar11;
      lVar11 = *(long *)(lVar11 + 0x30);
    }
  }
  if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar10 = *(long *)puVar3;
  *(long *)puVar4 = lVar10;
  uVar5 = FUN_00df7b3c(*(undefined8 *)(lVar10 + 0xb4f0));
  FUN_00df7cbc(param_1,lVar11,~uVar5 >> 0x1f);
  *param_1 = &PTR_LAB_045a4e78;
  param_1[4] = &PTR_LAB_045a4fa8;
  param_1[5] = &DAT_045a4ff8;
  param_1[0x1f] = &PTR_LAB_045a5050;
  puVar2 = PTR_DAT_047dd588;
  param_1[0xa8] = &PTR_LAB_045a50c0;
  param_1[0xaa] = 0;
  param_1[0xa9] = puVar2 + 0x10;
  param_1[0xab] = 0;
  *(undefined4 *)((long)param_1 + 0x56c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0xac,0,1);
  *param_1 = &DAT_045a4b90;
  param_1[0xae] = 0;
  param_1[4] = &PTR_LAB_045a4ce0;
  param_1[5] = &DAT_045a4d30;
  param_1[0x1f] = &PTR_LAB_045a4d88;
  param_1[0xa9] = &PTR_LAB_045a4e48;
  param_1[0xa8] = &PTR_LAB_045a4df8;
  param_1[0xaf] = 0;
  *(undefined4 *)((long)param_1 + 0x58c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0xb0,0,1);
  *(undefined1 *)(param_1 + 0xb7) = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  memset(param_1 + 0xb8,0,0x41);
  param_1[0xc2] = 0;
  puVar2 = PTR_DAT_047dd8b0;
  param_1[0xc3] = 0;
  param_1[0xc1] = puVar2 + 0x10;
  param_1[0xc4] = 0;
  *(undefined4 *)((long)param_1 + 0x634) = 1;
  nn::os::InitializeLightEvent(param_1 + 0xc5,0,1);
  param_1[0xca] = 0;
  pbVar13 = &DAT_04865a38;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = 0x4865000;
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  pbVar1 = (byte *)tpidr_el0;
  if (lVar11 != 0) goto LAB_00df79d8;
  do {
    lVar11 = *(long *)(pbVar1 + 0x30);
    if (lVar11 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar11 = DAT_04859430;
      *(long *)(pbVar1 + 0x30) = DAT_04859430;
    }
    do {
      param_1[0xca] = lVar11;
      param_1[0xcb] = 0;
      *(undefined4 *)((long)param_1 + 0x66c) = 1;
      nn::os::InitializeLightEvent(param_1 + 0xcc,0,1);
      param_1[0xd1] = 0;
      param_1[0xd0] = 0;
      param_1[0xcf] = 0;
      param_1[0xce] = 0;
      if (((*pbVar13 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(lVar10 + 0xa30));
      if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
          (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
         (lVar11 = *(long *)(pbVar1 + 0x30), lVar11 == 0)) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        lVar11 = DAT_04859430;
        *(long *)(pbVar1 + 0x30) = DAT_04859430;
      }
      param_1[0xd1] = lVar11;
      param_1[0xd2] = 0;
      *(undefined4 *)((long)param_1 + 0x6a4) = 1;
      nn::os::InitializeLightEvent(param_1 + 0xd3,0,1);
      param_1[0xdb] = 0;
      param_1[0xda] = 0;
      param_1[0xd9] = 0;
      param_1[0xd8] = 0;
      param_1[0xd7] = 0;
      param_1[0xd6] = 0;
      param_1[0xd5] = 0;
      if (((*pbVar13 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(lVar10 + 0xa30));
      if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
          (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
         (lVar11 = *(long *)(pbVar1 + 0x30), lVar11 == 0)) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        lVar11 = DAT_04859430;
        *(long *)(pbVar1 + 0x30) = DAT_04859430;
      }
      param_1[0xd7] = lVar11;
      param_1[0xd8] = 0;
      if (((*pbVar13 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(lVar10 + 0xa30));
      if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
          (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
         (lVar11 = *(long *)(pbVar1 + 0x30), lVar11 == 0)) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        lVar11 = DAT_04859430;
        *(long *)(pbVar1 + 0x30) = DAT_04859430;
      }
      param_1[0xd9] = lVar11;
      *(undefined4 *)(param_1 + 0xdb) = 0x3f800000;
      param_1[0xda] = 0;
      *(undefined1 *)(param_1 + 0xdc) = 0;
      *(undefined1 *)(param_1 + 0xde) = 0;
      *(undefined1 *)((long)param_1 + 0x6f4) = 0;
      param_1[0xdf] = 0;
      *(undefined1 *)(param_1 + 0xe0) = 0;
      param_1[0xe1] = 0;
      *(undefined4 *)((long)param_1 + 0x71c) = 1;
      nn::os::InitializeLightEvent(param_1 + 0xe2,0,1);
      *(undefined1 *)(param_1 + 0xe4) = 0;
      *(undefined1 *)(param_1 + 0xe5) = 0;
      *(undefined8 *)((long)param_1 + 0x72c) = 0;
      *(undefined1 *)((long)param_1 + 0x734) = 1;
      *(undefined1 *)(param_1 + 0xea) = 1;
      param_1[0xec] = 0;
      param_1[0xed] = 0;
      param_1[0xe9] = 0;
      param_1[0xe8] = 0;
      *(undefined4 *)((long)param_1 + 0x77c) = 1;
      nn::os::InitializeLightEvent(param_1 + 0xee,0,1);
      param_1[0xf2] = 0;
      param_1[0xf1] = 0;
      param_1[0xf0] = 0;
      if (((*pbVar13 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
        pbVar13 = pbVar1;
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(lVar10 + 0xa30));
      if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
          (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
         (lVar11 = *(long *)(pbVar1 + 0x30), lVar11 == 0)) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        lVar11 = DAT_04859430;
        *(long *)(pbVar1 + 0x30) = DAT_04859430;
      }
      param_1[0xf3] = lVar11;
      *(undefined2 *)(param_1 + 0xf8) = 0x101;
      lVar10 = 1;
      param_1[0xf4] = 0;
      param_1[0xf5] = 0;
      param_1[0xf6] = 0;
      param_1[0xf7] = 0;
      param_1[0xf9] = 0;
      *(undefined8 *)((long)param_1 + 0x7c2) = 0;
      *(undefined4 *)((long)param_1 + 0x7dc) = 1;
      nn::os::InitializeLightEvent(param_1 + 0xfa,0,1);
      param_1[0xfc] = 0;
      if (pbVar1[0xb0] == 0) {
        pbVar1[0xb0] = 1;
        __cxa_thread_atexit(&LAB_02b4dbdc,pbVar1 + 0x88,&PTR_LOOP_04483000);
      }
      if (pbVar1[0xa8] == 0) {
LAB_00df73fc:
        pcVar12 = *(char **)(param_2 + 8);
        if (*pcVar12 == '\0') {
          plVar9 = (long *)FUN_00d44228();
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
        }
        else {
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar7 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar7;
          FUN_00cf9884(&local_38,uVar7,pcVar12);
          plVar9 = local_38;
        }
        plVar8 = (long *)PTR_DAT_047d8b70;
        if (plVar9 != (long *)0x0) {
          plVar8 = plVar9 + 6;
        }
        lVar11 = *plVar8;
        plVar8 = (long *)PTR_PTR_047d4508;
        if (plVar9 != (long *)0x0) {
          plVar8 = plVar9 + 7;
        }
        lVar10 = *plVar8;
        if (plVar9 == (long *)0x0) {
          lVar14 = 0;
        }
        else {
          lVar14 = plVar9[8];
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        param_1[0x6d] = lVar11;
        param_1[0x6e] = lVar10;
        param_1[0x6f] = lVar14;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        plVar8 = (long *)param_1[0x70];
        param_1[0x70] = plVar9;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x20))();
        }
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))(plVar9);
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
        if (param_3 == 0) {
          return;
        }
        FUN_00dfba48(param_1,param_3);
        return;
      }
      if (pbVar1[0xb0] != 0) {
        param_2 = pbVar1 + 0x88;
        goto LAB_00df73fc;
      }
      pbVar1[0xb0] = 1;
      param_2 = pbVar1 + 0x88;
      __cxa_thread_atexit(&LAB_02b4dbdc,param_2,&PTR_LOOP_04483000);
      if (pbVar1[0xa8] != 0) goto LAB_00df73fc;
      lVar11 = FUN_0219b5b0();
LAB_00df79d8:
    } while ((*(long *)(lVar11 + 0x80) != 0) &&
            (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 != 0));
  } while( true );
}


