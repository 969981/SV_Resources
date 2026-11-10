/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01efda64; name: FUN_01efda64
 */


void FUN_01efda64(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_40;
  long *local_38;
  
  uVar3 = FUN_01b60f20();
  if ((uVar3 & 1) == 0) {
    if (((*PTR_DAT_047da800 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047da800), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047da9d0,PTR_DAT_047da808,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047da800);
    }
    lVar6 = *(long *)PTR_DAT_047da808;
    *(long *)PTR_DAT_047da810 = lVar6;
    if ((lVar6 == 0) || (FUN_01efded0(&local_60), (char)local_60 == '\0')) {
      lVar6 = *param_1;
      FUN_01ee9b8c(&local_40,&DAT_03d5bad0);
      if (*(long *)(lVar6 + 0x40) != 0) {
        FUN_0193d1ec(*(long *)(lVar6 + 0x40),&local_40);
      }
      lVar6 = tpidr_el0;
      if (*(long *)(lVar6 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(undefined8 *)(lVar6 + 0x30) = DAT_04859430;
      }
      plVar4 = local_38;
      local_60 = *(undefined8 *)(lVar6 + 0x30);
      local_58 = *(undefined8 *)(lVar6 + 0x38);
      *(undefined8 *)(lVar6 + 0x30) = local_40;
      *(undefined2 *)(lVar6 + 0x38) = 1;
      local_38 = (long *)0x0;
      if (plVar4 == (long *)0x0) {
        *(undefined8 *)(lVar6 + 0x30) = local_60;
        *(undefined2 *)(lVar6 + 0x38) = (undefined2)local_58;
      }
      else {
        (**(code **)(*plVar4 + 8))();
        *(undefined8 *)(lVar6 + 0x30) = local_60;
        *(undefined2 *)(lVar6 + 0x38) = (undefined2)local_58;
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 8))(local_38);
        }
      }
    }
    else {
      FUN_01b61128((ulong)&local_60 | 1);
      lVar6 = *(long *)(*param_1 + 0x40);
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x48) == 0)) {
        if (*(char *)(lVar6 + 0xd0) == '\0') {
          *(undefined8 *)(lVar6 + 0xd8) = 0;
          *(undefined1 *)(lVar6 + 0xd0) = 1;
        }
        else {
          *(undefined8 *)(lVar6 + 0xd8) = 0;
        }
        uVar5 = *(undefined8 *)(lVar6 + 0xe0);
        lVar1 = tpidr_el0;
        if (*(long *)(lVar1 + 0x30) == 0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          *(undefined8 *)(lVar1 + 0x30) = DAT_04859430;
        }
        local_40 = *(undefined8 *)(lVar1 + 0x30);
        local_38 = *(long **)(lVar1 + 0x38);
        *(undefined2 *)(lVar1 + 0x38) = 1;
        *(undefined8 *)(lVar1 + 0x30) = uVar5;
        plVar4 = *(long **)(lVar6 + 0xe8);
        *(undefined8 *)(lVar6 + 0xe8) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        *(undefined8 *)(lVar1 + 0x30) = local_40;
        *(undefined2 *)(lVar1 + 0x38) = local_38._0_2_;
        *(undefined4 *)(lVar6 + 0x48) = 1;
        FUN_0174a3b8(lVar6);
      }
    }
  }
  else {
    lVar6 = *(long *)(*param_1 + 0x40);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x48) == 0)) {
      if (*(char *)(lVar6 + 0xd0) == '\0') {
        *(undefined8 *)(lVar6 + 0xd8) = 0;
        *(undefined1 *)(lVar6 + 0xd0) = 1;
      }
      else {
        *(undefined8 *)(lVar6 + 0xd8) = 0;
      }
      uVar5 = *(undefined8 *)(lVar6 + 0xe0);
      lVar1 = tpidr_el0;
      if (*(long *)(lVar1 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(undefined8 *)(lVar1 + 0x30) = DAT_04859430;
      }
      local_60 = *(undefined8 *)(lVar1 + 0x30);
      local_58 = *(undefined8 *)(lVar1 + 0x38);
      *(undefined2 *)(lVar1 + 0x38) = 1;
      *(undefined8 *)(lVar1 + 0x30) = uVar5;
      plVar4 = *(long **)(lVar6 + 0xe8);
      *(undefined8 *)(lVar6 + 0xe8) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      *(undefined8 *)(lVar1 + 0x30) = local_60;
      *(undefined2 *)(lVar1 + 0x38) = (undefined2)local_58;
      *(undefined4 *)(lVar6 + 0x48) = 1;
      FUN_0174a3b8(lVar6);
      return;
    }
  }
  return;
}


