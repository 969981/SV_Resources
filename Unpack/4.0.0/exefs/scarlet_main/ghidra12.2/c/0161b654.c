/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0161b654; name: FUN_0161b654
 */


undefined8 FUN_0161b654(long *param_1,uint param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 local_60 [16];
  
  puVar1 = PTR_DAT_047d7940;
  if ((param_2 & 0xffff) != 0xa5) {
    lVar12 = *(long *)(param_4 + 0x70);
    if (((*PTR_DAT_047d7940 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    puVar3 = PTR_DAT_047d7950;
    puVar2 = PTR_DAT_047d7948;
    uVar9 = *(undefined8 *)PTR_DAT_047d7948;
    *(undefined8 *)PTR_DAT_047d7950 = uVar9;
    piVar10 = (int *)FUN_00cf60cc(uVar9,param_2);
    if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 7) ||
        (uVar11 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar11 == 0)) ||
       (*(char *)((long)piVar10 + uVar11) == '\0')) {
      return 1;
    }
    sVar4 = (**(code **)(*param_1 + 0x698))(param_1,param_2);
    if (sVar4 == 0) {
      return 2;
    }
    if (((*puVar1 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar9 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar9;
    piVar10 = (int *)FUN_00cf60cc(uVar9,param_2);
    if (((0x92 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
        (uVar11 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x49], uVar11 != 0)) &&
       ((*(char *)((long)piVar10 + uVar11) != '\0' &&
        (uVar5 = (**(code **)(*param_1 + 1000))(param_1), (uVar5 & 0xffff) == (param_2 & 0xffff)))))
    {
      return 0x11;
    }
    uVar5 = (**(code **)(*param_1 + 0x2b0))(param_1,lVar12);
    if ((uVar5 & 0xffff) != 0) {
      uVar11 = (**(code **)(*param_1 + 0x220))(param_1,0x1c);
      if ((uVar11 & 1) != 0) {
        uVar11 = FUN_0161be5c(param_3,uVar5);
        if ((uVar11 & 1) != 0) {
          local_60 = (**(code **)(*param_1 + 0x240))(param_1,0x1c);
          uVar7 = FUN_0107ffe0(local_60);
          uVar11 = (**(code **)(*param_1 + 0x668))(param_1,uVar7);
          if (((uVar7 & 0xffff) != (param_2 & 0xffff)) && ((uVar11 & 1) != 0)) {
            return 4;
          }
        }
      }
      uVar11 = FUN_0161bb5c(param_3,0x1903b748ebb942bc,uVar5);
      if ((uVar11 & 1) != 0) {
        uVar11 = FUN_015d973c(param_2);
        if ((uVar11 & 1) == 0) {
          return 5;
        }
      }
    }
    sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar4 == 0xff) {
      uVar11 = (**(code **)(*param_1 + 0x220))(param_1,0x1c);
      if ((uVar11 & 1) != 0) {
        auVar13 = (**(code **)(*param_1 + 0x240))(param_1,0x1c);
        local_60 = auVar13;
        uVar5 = FUN_0107ffe0(local_60);
        uVar11 = (**(code **)(*param_1 + 0x668))(param_1,uVar5);
        if (((uVar5 & 0xffff) != (param_2 & 0xffff)) && ((uVar11 & 1) != 0)) {
          return 6;
        }
      }
    }
    uVar11 = (**(code **)(*param_1 + 0x220))(param_1,0x17);
    if ((uVar11 & 1) != 0) {
      auVar13 = (**(code **)(*param_1 + 0x240))(param_1,0x17);
      local_60 = auVar13;
      uVar5 = FUN_0107ffe0(local_60);
      if ((uVar5 & 0xffff) != (param_2 & 0xffff)) {
        return 7;
      }
    }
    uVar11 = (**(code **)(*param_1 + 0x220))(param_1,0xb);
    if ((uVar11 & 1) != 0) {
      uVar11 = FUN_015d973c(param_2);
      if ((uVar11 & 1) == 0) {
        return 8;
      }
    }
    uVar11 = (**(code **)(*param_1 + 0x220))(param_1,0xc);
    if ((uVar11 & 1) != 0) {
      uVar5 = (**(code **)(*param_1 + 0x3d8))(param_1);
      if ((uVar5 & 0xffff) == (param_2 & 0xffff)) {
        return 9;
      }
    }
    uVar11 = (**(code **)(*param_1 + 0x220))(param_1,0xd);
    if ((uVar11 & 1) != 0) {
      uVar5 = (**(code **)(*param_1 + 0x238))(param_1,0xd);
      if ((uVar5 & 0xffff) == (param_2 & 0xffff)) {
        return 10;
      }
    }
    uVar11 = (**(code **)(*param_1 + 0x220))(param_1,0xf);
    if ((uVar11 & 1) != 0) {
      uVar11 = FUN_0161bd78(param_2);
      if ((uVar11 & 1) != 0) {
        return 0xb;
      }
    }
    if (*(int *)(lVar12 + 0xb4) != 0) {
      uVar11 = FUN_0161bdb0(lVar12,param_4,param_1,param_2);
      if ((uVar11 & 1) != 0) {
        return 0xc;
      }
    }
    if (*(int *)(lVar12 + 0xb0) != 0) {
      uVar11 = FUN_0161bd40(param_2);
      if ((uVar11 & 1) != 0) {
        return 0xd;
      }
    }
    if ((param_2 & 0xffff) == 0x232) {
      uVar11 = (**(code **)(*param_1 + 0x520))(param_1,0);
      if ((uVar11 & 1) == 0) {
        return 0xe;
      }
    }
    else if ((param_2 & 0xffff) == 0x2eb) {
      uVar6 = (**(code **)(*param_1 + 0x2a8))(param_1);
      uVar11 = FUN_019d69c4(param_3,uVar6);
      if ((uVar11 & 1) == 0) {
        return 0xf;
      }
    }
    if (*(char *)(*(long *)(param_3 + 0x38) + 0x704) != '\0') {
      uVar11 = FUN_018a0dec(param_2);
      if ((uVar11 & 1) != 0) {
        return 3;
      }
    }
    uVar11 = (**(code **)(*param_1 + 0x220))(param_1,0x18);
    if ((uVar11 & 1) != 0) {
      uVar11 = FUN_016b1d7c(param_2);
      if ((uVar11 & 1) != 0) {
        return 0x10;
      }
    }
  }
  return 0;
}


