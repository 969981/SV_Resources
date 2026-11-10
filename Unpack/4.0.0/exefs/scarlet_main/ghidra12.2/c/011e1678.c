/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011e1678; name: FUN_011e1678
 */


undefined8 FUN_011e1678(long param_1,undefined8 param_2)

{
  short sVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  byte bVar13;
  long *plVar14;
  long *plVar15;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x499) >> 2 & 1) == 0) {
    uVar10 = FUN_011e1c28(param_1,param_2);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  bVar3 = FUN_011e1ac8(param_1);
  lVar12 = *(long *)(*(long *)(param_1 + 0x50) + 0x30) + (ulong)bVar3 * 0x38;
  if (4 < bVar3) {
    return 1;
  }
  if (*(char *)(lVar12 + 0x58) == '\0') {
    return 1;
  }
  plVar14 = *(long **)(lVar12 + 0x28);
  if (plVar14 == (long *)0x0) {
    return 1;
  }
  puVar9 = (undefined8 *)(**(code **)plVar14[5])(plVar14 + 5);
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar8 != 0))
  {
    uVar11 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar11;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  if (puVar9 == (undefined8 *)0x0) {
    return 1;
  }
  while (puVar9 != (undefined8 *)PTR_DAT_047d3f08) {
    puVar9 = (undefined8 *)*puVar9;
    if (puVar9 == (undefined8 *)0x0) {
      return 1;
    }
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0x50) + 0x30);
  if (*(char *)(lVar12 + 0x90) == '\0') {
    plVar15 = (long *)0x0;
  }
  else {
    plVar15 = *(long **)(lVar12 + 0x60);
  }
  uVar10 = (**(code **)(*plVar14 + 0x200))(plVar14);
  if ((uVar10 & 1) != 0) {
    return 0;
  }
  uVar10 = (**(code **)(*plVar15 + 0x200))(plVar15);
  if ((uVar10 & 1) != 0) {
    return 0;
  }
  sVar1 = *(short *)(param_1 + 0x3e2);
  if (sVar1 == 1) {
    uVar2 = *(ushort *)(param_1 + 0x3e0);
    uVar6 = (**(code **)(*plVar14 + 0x560))(plVar14,7);
    if (uVar6 <= uVar2) {
      return 0;
    }
    uVar5 = (**(code **)(*plVar14 + 0x560))(plVar14,7);
    *(undefined2 *)(param_1 + 0x3e0) = uVar5;
LAB_011e1828:
    *(short *)(param_1 + 0x3e2) = *(short *)(param_1 + 0x3e2) + 1;
    return 0;
  }
  if (sVar1 != 2) {
    if (sVar1 == 0) {
      FUN_0173cc9c(param_1);
      goto LAB_011e1828;
    }
    if (sVar1 != 3) {
      return 1;
    }
    if ((((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x499) >> 2 & 1) != 0) &&
        (*(char *)(param_1 + 0x3ad) != '\0')) && (*(char *)(param_1 + 0x80) != '\0')) {
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 0x50) + 0xa8) != '\0') {
        return 0;
      }
      lVar12 = *(long *)(*(long *)(param_1 + 0x50) + 0x30);
      if (*(char *)(lVar12 + 0x90) == '\0') {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar12 + 0x60);
      }
      uVar10 = FUN_015af3fc(param_1,uVar11,param_1 + 0x70);
      if ((uVar10 & 1) == 0) {
        FUN_011e2180(param_1 + 0x70,*(long *)(*(long *)(param_1 + 0x30) + 0x50) + 0xe0);
      }
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
    FUN_01698200(param_1);
    goto LAB_011e17f8;
  }
  if (*(short *)(param_1 + 0x3e0) == 1) {
    if (bVar3 == 0) {
LAB_011e18a0:
      lVar12 = FUN_011e1c08(*(undefined8 *)(param_1 + 0x48),2);
      if (lVar12 != 0) {
        bVar13 = 2;
        FUN_011e1c08(*(undefined8 *)(param_1 + 0x48),2);
        cVar4 = FUN_010a58c0();
        if (cVar4 == '\x01') goto LAB_011e18f4;
      }
      if (bVar3 == 3) {
LAB_011e18bc:
        lVar12 = FUN_011e1c08(*(undefined8 *)(param_1 + 0x48),4);
        if (lVar12 != 0) {
          bVar13 = 4;
          FUN_011e1c08(*(undefined8 *)(param_1 + 0x48),4);
          cVar4 = FUN_010a58c0();
          if (cVar4 == '\x01') goto LAB_011e18f4;
        }
      }
      else {
LAB_011e185c:
        lVar12 = FUN_011e1c08(*(undefined8 *)(param_1 + 0x48),3);
        if (lVar12 != 0) {
          bVar13 = 3;
          FUN_011e1c08(*(undefined8 *)(param_1 + 0x48),3);
          cVar4 = FUN_010a58c0();
          if (cVar4 == '\x01') goto LAB_011e18f4;
        }
        if (bVar3 != 4) goto LAB_011e18bc;
      }
      bVar13 = 5;
    }
    else {
      lVar12 = FUN_011e1c08(*(undefined8 *)(param_1 + 0x48),0);
      if (lVar12 == 0) {
LAB_011e1850:
        if (bVar3 != 2) goto LAB_011e18a0;
        goto LAB_011e185c;
      }
      FUN_011e1c08(*(undefined8 *)(param_1 + 0x48),0);
      cVar4 = FUN_010a58c0();
      bVar13 = 0;
      if (cVar4 != '\x01') goto LAB_011e1850;
    }
LAB_011e18f4:
    bVar3 = *(byte *)(param_1 + 0x11c);
    if (bVar13 == bVar3) {
      *(undefined1 *)(param_1 + 0x60) = 0;
      *(undefined2 *)(param_1 + 0x210) = 0;
      *(undefined8 *)(param_1 + 0x220) = 0;
      *(undefined8 *)(param_1 + 0x230) = 0;
      *(undefined8 *)(param_1 + 0x240) = 0;
      *(undefined8 *)(param_1 + 0x250) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined8 *)(param_1 + 0x270) = 0;
      *(undefined8 *)(param_1 + 0x280) = 0;
      *(undefined8 *)(param_1 + 0x290) = 0;
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *(short *)(param_1 + 0x3e2) = *(short *)(param_1 + 0x3e2) + 1;
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      *(undefined8 *)(param_1 + 0x2d0) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
      *(undefined2 *)(param_1 + 0x128) = 0;
      *(undefined1 *)(param_1 + 0x3db) = 0;
      if ((4 < bVar3) ||
         (lVar12 = *(long *)(*(long *)(param_1 + 0x50) + 0x30),
         *(char *)(lVar12 + (ulong)bVar3 * 0x38 + 0x58) == '\0')) {
        *(undefined8 *)(param_1 + 0x58) = 0;
        return 0;
      }
      plVar14 = *(long **)(lVar12 + (ulong)bVar3 * 0x38 + 0x28);
      *(long **)(param_1 + 0x58) = plVar14;
      if (plVar14 == (long *)0x0) {
        return 0;
      }
      *(long *)(param_1 + 0x68) = param_1 + 0x220;
      *(undefined4 *)(param_1 + 0x220) = 0x29;
      uVar7 = (**(code **)(*plVar14 + 0x98))();
      *(undefined4 *)(*(long *)(param_1 + 0x68) + 8) = uVar7;
      return 0;
    }
  }
  uVar10 = FUN_011e1c28(param_1,param_2);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
LAB_011e17f8:
  *(undefined2 *)(param_1 + 0x3e2) = 0;
  return 1;
}


