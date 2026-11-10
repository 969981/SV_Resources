/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01581d90; name: FUN_01581d90
 */


uint FUN_01581d90(long param_1,long *param_2,short *param_3,ulong param_4,long param_5)

{
  char cVar1;
  short sVar2;
  undefined4 uVar4;
  undefined4 uVar6;
  int iVar7;
  short sVar3;
  uint uVar5;
  uint *puVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 local_60 [16];
  
  sVar2 = (**(code **)(*param_2 + 0x230))(param_2);
  if ((sVar2 == 2) && (uVar14 = (**(code **)(*param_2 + 0x3c0))(param_2), (uVar14 & 1) != 0)) {
    FUN_0298b840(param_1,param_2);
  }
  sVar2 = (**(code **)(*param_2 + 0x230))(param_2);
  if ((sVar2 == 2) &&
     (uVar14 = FUN_015834bc(*(undefined8 *)(param_1 + 0x38),param_2,*param_3,2), (uVar14 & 1) == 0))
  {
    return 2;
  }
  sVar2 = *param_3;
  sVar3 = (**(code **)(*param_2 + 0x230))(param_2);
  if (sVar3 == 3) {
    uVar14 = FUN_01583140(*(undefined8 *)(param_1 + 0x38),param_2,sVar2);
    if (((uVar14 & 1) != 0) || (uVar14 = FUN_01582d70(sVar2), (uVar14 & 1) == 0)) {
      plVar12 = (long *)FUN_0124acbc(param_1);
      uVar4 = (**(code **)(*plVar12 + 0x68))(plVar12,&DAT_03d6a688);
      iVar7 = FUN_0124d360(param_1,uVar4);
      if (iVar7 != 0) {
        FUN_01582de4(param_1,param_2);
      }
      goto LAB_01581e18;
    }
    bVar15 = true;
  }
  else {
LAB_01581e18:
    bVar15 = false;
  }
  sVar2 = (**(code **)(*param_2 + 0x230))(param_2);
  if ((!bVar15) && (sVar2 == 3)) {
    return 4;
  }
  lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x38);
  if (((*(byte *)(lVar13 + 0x499) >> 2 & 1) == 0) && (*(uint *)(lVar13 + 0x30) < 2)) {
    uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
    puVar8 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) +
                                   0x50),uVar4);
    if (puVar8 == (uint *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *puVar8;
      if (4 < (int)uVar5) {
        uVar5 = 0;
      }
    }
    if (uVar5 == *(byte *)(*(long *)(param_1 + 8) + 0x95)) {
      cVar1 = FUN_01582568(param_1,param_2);
      if (cVar1 == '\x04') {
        return 0x16;
      }
      if (cVar1 == '\x02') {
        return 0x17;
      }
      goto LAB_01581ed0;
    }
  }
  cVar1 = '\0';
LAB_01581ed0:
  if (((((param_4 & 1) == 0) && ((*(byte *)(param_5 + 4) >> 3 & 1) == 0)) &&
      (uVar5 = (**(code **)(*param_2 + 0x700))(param_2,param_3[1]), (uVar5 & 0xff) != 4)) &&
     (sVar2 = (**(code **)(*param_2 + 0x690))(param_2,uVar5), sVar2 == 0)) {
    return 1;
  }
  sVar2 = *param_3;
  if (sVar2 == 0) {
    return 0x24;
  }
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar9 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar9;
  piVar10 = (int *)FUN_00cf60cc(uVar9,sVar2);
  if (*(ushort *)((long)piVar10 - (long)*piVar10) < 7) {
    return 0x24;
  }
  uVar14 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3];
  if (uVar14 == 0) {
    return 0x24;
  }
  if (*(char *)((long)piVar10 + uVar14) == '\0') {
    return 0x24;
  }
  if ((*(char *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x704) != '\0') &&
     (uVar14 = FUN_018a0dec(*param_3), (uVar14 & 1) != 0)) {
    return 0x1a;
  }
  uVar5 = FUN_015826c0(*(undefined8 *)(param_1 + 0x38),param_2,*param_3,0x20,param_3,0);
  if ((uVar5 & 0xff) != 0) {
    return uVar5;
  }
  uVar14 = (**(code **)(*param_2 + 0x510))(param_2,6);
  if (((uVar14 & 1) != 0) && (*param_3 == 0x108)) {
    return 7;
  }
  uVar14 = (**(code **)(*param_2 + 0x510))(param_2,4);
  if ((uVar14 & 1) != 0) {
    return 6;
  }
  uVar14 = (**(code **)(*param_2 + 0x220))(param_2,0xd);
  auVar16._8_8_ = local_60._8_8_;
  auVar16._0_8_ = local_60._0_8_;
  if (((uVar14 & 1) != 0) && (local_60 = auVar16, *param_3 != 0xa5)) {
    local_60 = (**(code **)(*param_2 + 0x240))(param_2,0xd);
    sVar2 = FUN_0107ffe0(local_60);
    if (*param_3 == sVar2) {
      return 9;
    }
  }
  uVar14 = (**(code **)(*param_2 + 0x220))(param_2,0xf);
  if ((uVar14 & 1) != 0) {
    uVar14 = FUN_0161bd78(*param_3);
    if ((uVar14 & 1) != 0) {
      return 0xd;
    }
  }
  uVar14 = (**(code **)(*param_2 + 0x220))(param_2,0x18);
  if ((uVar14 & 1) != 0) {
    uVar14 = FUN_016b1d7c(*param_3);
    if ((uVar14 & 1) != 0) {
      return 0x21;
    }
  }
  FUN_01582534(param_1);
  uVar9 = FUN_0158253c();
  uVar14 = FUN_01582544(uVar9,2);
  if ((uVar14 & 1) != 0) {
    uVar14 = FUN_0161bd40(*param_3);
    if ((uVar14 & 1) != 0) {
      return 0x14;
    }
  }
  if (*param_3 != 0xa5) {
    uVar14 = (**(code **)(*param_2 + 0x220))(param_2,0x17);
    if ((uVar14 & 1) != 0) {
      auVar16 = (**(code **)(*param_2 + 0x240))(param_2,0x17);
      local_60 = auVar16;
      sVar2 = FUN_0107ffe0(local_60);
      if ((sVar2 != 0xa5) && (*param_3 != sVar2)) {
        return 0x11;
      }
    }
    uVar14 = (**(code **)(*param_2 + 0x220))(param_2,0x1a);
    if ((uVar14 & 1) == 0) {
      sVar2 = *param_3;
    }
    else {
      sVar2 = (**(code **)(*param_2 + 1000))(param_2);
      if (*param_3 != sVar2) {
        return 0x11;
      }
    }
    if (sVar2 != 0xa5) {
      FUN_01582534(param_1);
      uVar9 = FUN_0158253c();
      uVar14 = FUN_01582544(uVar9,5);
      if ((uVar14 & 1) == 0) {
        uVar14 = (**(code **)(*param_2 + 0x220))(param_2,0x13);
        if ((uVar14 & 1) == 0) {
          uVar14 = (**(code **)(*param_2 + 0x220))(param_2,0x1c);
          if ((uVar14 & 1) != 0) {
            sVar3 = (**(code **)(*param_2 + 0x430))(param_2);
            if (sVar3 != sVar2) {
              return 0x11;
            }
          }
        }
      }
    }
    uVar14 = (**(code **)(*param_2 + 0x220))(param_2,0xb);
    if ((uVar14 & 1) != 0) {
      uVar14 = FUN_015d973c(*param_3);
      if ((uVar14 & 1) == 0) {
        return 10;
      }
    }
    FUN_01582534(param_1);
    uVar9 = FUN_0158253c();
    uVar14 = FUN_01582544(uVar9,3);
    if ((uVar14 & 1) != 0) {
      FUN_01582534(param_1);
      uVar9 = FUN_0158253c();
      uVar11 = FUN_01582534(param_1);
      uVar14 = FUN_0161bdb0(uVar9,uVar11,param_2,*param_3);
      if ((uVar14 & 1) != 0) {
        return 0xc;
      }
    }
  }
  if (cVar1 == '\x03') {
    uVar9 = FUN_01243584(param_1);
    uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar6 = (**(code **)(*param_2 + 0x98))(param_2);
    FUN_02982914(uVar9,uVar4,0x2b5,uVar6);
    return 5;
  }
  uVar14 = (**(code **)(*param_2 + 0x220))(param_2,6);
  if ((uVar14 & 1) != 0) {
    uVar14 = (**(code **)(*param_2 + 0x3c8))(param_2);
    if ((uVar14 & 1) == 0) {
      uVar9 = FUN_01243584(param_1);
      FUN_0298b9b0(uVar9,param_2);
      plVar12 = (long *)FUN_0124acbc(param_1);
      uVar4 = (**(code **)(*plVar12 + 0x68))(plVar12,&DAT_03d6a690);
      iVar7 = FUN_0124d360(param_1,uVar4);
      if (iVar7 != 0) {
        return 5;
      }
    }
    else {
      FUN_0298b8dc(param_1,param_2);
    }
  }
  sVar2 = (**(code **)(*param_2 + 0x230))(param_2);
  if (sVar2 == 1) {
    plVar12 = (long *)FUN_0124acbc(param_1);
    uVar4 = (**(code **)(*plVar12 + 0x68))(plVar12,&DAT_03d6a680);
    iVar7 = FUN_0124d360(param_1,uVar4);
    if (iVar7 != 0) {
      return 3;
    }
  }
  uVar14 = (**(code **)(*param_2 + 0x220))(param_2,7);
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  uVar9 = FUN_01243584(param_1);
  FUN_0298ba20(uVar9,param_2);
  plVar12 = (long *)FUN_0124acbc(param_1);
  uVar4 = (**(code **)(*plVar12 + 0x68))(plVar12,&DAT_03d6a698);
  iVar7 = FUN_0124d360(param_1,uVar4);
  return (uint)(iVar7 != 0) << 3;
}


