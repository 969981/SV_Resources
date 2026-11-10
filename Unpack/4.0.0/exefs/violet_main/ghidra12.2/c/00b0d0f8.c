/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b0d0f8; name: FUN_00b0d0f8
 */


void FUN_00b0d0f8(long param_1)

{
  short sVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 uVar12;
  long lVar13;
  long *local_70;
  undefined8 uStack_68;
  undefined4 local_50 [4];
  
  if (((*PTR_DAT_047d6288 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6288), iVar9 != 0))
  {
    FUN_00100190(&LAB_00b1b6d8,PTR_DAT_047d6290,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6288);
  }
  lVar13 = *(long *)PTR_DAT_047d6290;
  *(long *)PTR_DAT_047d6298 = lVar13;
  puVar6 = PTR_DAT_047d6c98;
  if (lVar13 == 0) {
    iVar9 = *(int *)(param_1 + 0x40);
LAB_00b0d418:
    if (iVar9 == 5) {
      *(undefined4 *)(param_1 + 0x40) = 6;
LAB_00b0d430:
      FUN_01e95d9c(&local_70,param_1 + 0x48);
      FUN_01c5d610(param_1 + 0x60,&local_70);
      FUN_01c5d228(&local_70);
    }
  }
  else {
    iVar9 = *(int *)(param_1 + 0x40);
    if (*(char *)(lVar13 + 0x39) == '\0') goto LAB_00b0d418;
    if (iVar9 != 0) {
LAB_00b0d150:
      puVar7 = PTR_DAT_047d6ca8;
      puVar4 = PTR_DAT_047d6ca0;
      puVar6 = PTR_DAT_047d6c98;
      if (iVar9 != 5) goto LAB_00b0d448;
      if (((*(long *)(param_1 + 0x48) == 0) ||
          (lVar13 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar13 == 0)) ||
         (uVar11 = FUN_00ea2b08(lVar13 + -0x28), (uVar11 & 1) == 0)) {
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c98);
        }
        lVar13 = *(long *)puVar4;
        *(long *)puVar7 = lVar13;
        if (((lVar13 != 0) && (*(long *)PTR_DAT_047d0a08 != 0)) &&
           (iVar9 = FUN_00f21480(), iVar9 == 1)) {
          if (((*PTR_DAT_047d66a0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d66a0), iVar9 != 0)) {
            FUN_00100190(&LAB_00b52dc4,PTR_DAT_047d66a8,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d66a0);
          }
          *(undefined8 *)PTR_DAT_047d66b0 = *(undefined8 *)PTR_DAT_047d66a8;
        }
        goto LAB_00b0d448;
      }
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c98);
      }
      lVar13 = *(long *)puVar4;
      *(long *)puVar7 = lVar13;
      puVar5 = PTR_DAT_047d0a08;
      if (((lVar13 != 0) && (*(long *)PTR_DAT_047d0a08 != 0)) && (uVar8 = FUN_00d0ca58(), 1 < uVar8)
         ) {
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c98);
        }
        lVar13 = *(long *)puVar4;
        *(long *)puVar7 = lVar13;
        if (((lVar13 != 0) && (*(long *)puVar5 != 0)) && (iVar9 = FUN_00f21480(), iVar9 == 1))
        goto LAB_00b0d448;
      }
      if (*(int *)(param_1 + 0x40) != 6) {
        *(undefined4 *)(param_1 + 0x40) = 6;
      }
      goto LAB_00b0d430;
    }
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    puVar5 = PTR_DAT_047d6ca8;
    puVar7 = PTR_DAT_047d6ca0;
    lVar13 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar13;
    puVar4 = PTR_DAT_047d0a08;
    if (((lVar13 != 0) && (*(long *)PTR_DAT_047d0a08 != 0)) && (iVar9 = FUN_00f21480(), iVar9 == 1))
    {
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c98);
      }
      lVar13 = *(long *)puVar7;
      *(long *)puVar5 = lVar13;
      if (((lVar13 != 0) && (*(long *)puVar4 != 0)) && (uVar8 = FUN_00d0ca58(), 1 < uVar8)) {
        lVar13 = *(long *)puVar4;
        if (((lVar13 == 0) || (*(long *)(lVar13 + 0xb8) == 0)) ||
           (*(long *)(lVar13 + 0xb8) != *(long *)(lVar13 + 0xc0))) {
          FUN_01e999f4(&local_70,0xc);
          if (local_70 == (long *)0x0) {
            FUN_00d8e444(&local_70);
          }
          else {
            sVar1 = *(short *)((long)local_70 + 0x1a);
            FUN_00d8e444(&local_70);
            if (sVar1 != 0) {
              *(undefined8 *)(param_1 + 0xb8) = 0;
              *(undefined8 *)(param_1 + 0xc0) = 0;
              FUN_01e999f4(&local_70,0xc);
              FUN_01e9583c(local_50,&local_70);
              FUN_00d8e444(&local_70);
              FUN_01c5d610(param_1 + 0x60,local_50);
              FUN_01c5d228(local_50);
              if (*(int *)(param_1 + 0x40) != 3) {
                uVar12 = 3;
                goto LAB_00b0d330;
              }
              goto LAB_00b0d448;
            }
          }
          iVar9 = *(int *)(param_1 + 0x40);
          goto LAB_00b0d150;
        }
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        lVar13 = FUN_016c7db0();
        if (lVar13 == 0) {
          local_70 = (long *)0x0;
          uStack_68 = 0;
        }
        else {
          FUN_01e956a4(&local_70,lVar13,0xc,0,0);
        }
        FUN_01c5d610(param_1 + 0x60,&local_70);
        FUN_01c5d228(&local_70);
        if (*(int *)(param_1 + 0x40) != 1) {
          uVar12 = 1;
LAB_00b0d330:
          *(undefined4 *)(param_1 + 0x40) = uVar12;
        }
      }
    }
  }
LAB_00b0d448:
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 1:
  case 3:
    if (*(long *)(param_1 + 0x60) == 0) {
      local_70 = (long *)0x0;
    }
    else {
      FUN_01c5fc84(&local_70);
      if ((local_70 != (long *)0x0) &&
         (uVar11 = (**(code **)(*local_70 + 0x68))(), (uVar11 & 1) != 0)) {
        FUN_01c5d930((long *)(param_1 + 0x60));
        FUN_01c5d338(&local_70);
        if (*(int *)(param_1 + 0x40) == 5) {
          return;
        }
        uVar12 = 5;
        goto LAB_00b0d4bc;
      }
    }
    FUN_01c5d338(&local_70);
    break;
  case 2:
    FUN_01e999f4(&local_70,0xc);
    if (local_70 == (long *)0x0) {
      FUN_00d8e444(&local_70);
      return;
    }
    sVar1 = *(short *)((long)local_70 + 0x1a);
    FUN_00d8e444(&local_70);
    if (sVar1 == 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    FUN_01e999f4(&local_70,0xc);
    FUN_01e9583c(local_50,&local_70);
    FUN_00d8e444(&local_70);
    FUN_01c5d610(param_1 + 0x60,local_50);
    FUN_01c5d228(local_50);
    if (*(int *)(param_1 + 0x40) == 3) {
      return;
    }
    uVar12 = 3;
LAB_00b0d4bc:
    *(undefined4 *)(param_1 + 0x40) = uVar12;
    break;
  case 5:
    uVar10 = 0;
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar13 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
      uVar10 = 0;
      if (lVar13 != 0) {
        uVar10 = FUN_01419488(lVar13 + -0x28);
        uVar10 = uVar10 & 0xffff;
      }
    }
    if ((int)uVar10 < *(int *)(param_1 + 200)) {
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      lVar13 = *(long *)PTR_DAT_047d4ca0;
      *(long *)PTR_DAT_047d4ca8 = lVar13;
      plVar2 = *(long **)(lVar13 + 0x1c8);
      plVar3 = *(long **)(lVar13 + 0x1c0);
      do {
        if (plVar3 == plVar2) goto LAB_00b0d630;
        lVar13 = *plVar3;
        uVar11 = FUN_00a371b8(lVar13 + 0x28);
        plVar3 = plVar3 + 1;
      } while ((uVar11 & 1) == 0);
      FUN_02ae0ea4(lVar13);
LAB_00b0d630:
      FUN_00b0f08c(param_1);
      *(undefined4 *)(param_1 + 0xc4) = 0;
      *(undefined8 *)(param_1 + 0xbc) = 0;
      FUN_016947d8(&local_70);
      local_50[0] = 4;
      FUN_00b0f234(&local_70,local_50);
      if (local_70 == (long *)0x0) {
        lVar13 = 0;
        uVar12 = 0;
      }
      else {
        lVar13 = *local_70;
        uVar12 = (undefined4)local_70[3];
      }
      (**(code **)(**(long **)(param_1 + 0x70) + 0x70))(*(long **)(param_1 + 0x70),lVar13,uVar12);
      FUN_01694aa8(&local_70);
      *(undefined4 *)(param_1 + 200) = 0;
    }
    break;
  case 6:
    if (*(long *)(param_1 + 0x60) == 0) {
      local_70 = (long *)0x0;
LAB_00b0d5ac:
      FUN_01c5d338(&local_70);
    }
    else {
      FUN_01c5fc84(&local_70);
      if ((local_70 == (long *)0x0) ||
         (uVar11 = (**(code **)(*local_70 + 0x68))(), (uVar11 & 1) == 0)) goto LAB_00b0d5ac;
      FUN_01c5d930((long *)(param_1 + 0x60));
      FUN_01c5d338(&local_70);
      if (*(int *)(param_1 + 0x40) != 0) {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar13 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar13;
    plVar2 = *(long **)(lVar13 + 0x1c8);
    plVar3 = *(long **)(lVar13 + 0x1c0);
    do {
      if (plVar3 == plVar2) {
        return;
      }
      lVar13 = *plVar3;
      uVar11 = FUN_00a371b8(lVar13 + 0x28);
      plVar3 = plVar3 + 1;
    } while ((uVar11 & 1) == 0);
    FUN_02ae0ea4(lVar13);
    FUN_02addd90(lVar13);
    *(undefined1 *)(lVar13 + 0x1c5) = 0;
    *(undefined1 *)(lVar13 + 0xb39) = 0;
  }
  return;
}


