/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080e250; name: FUN_0080e250
 */


void FUN_0080e250(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  ushort *puVar14;
  uint uVar15;
  undefined8 uVar16;
  int local_70 [4];
  
  puVar1 = PTR_DAT_047d15d8;
  if (*(long *)PTR_DAT_047d15d8 == 0) {
    return;
  }
  lVar2 = FUN_00808b1c();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = FUN_00808b1c(*(undefined8 *)puVar1);
  nn::os::LockMutex((MutexType *)(lVar3 + 0x18));
  plVar4 = (long *)thunk_FUN_00799c50(*(undefined8 *)puVar1);
  if (plVar4 == (long *)0x0) goto LAB_0080e404;
  lVar5 = thunk_FUN_00799c50(*(undefined8 *)puVar1);
  nn::os::LockMutex((MutexType *)(lVar5 + 0x1378));
  puVar14 = (ushort *)plVar4[0x261];
  if (plVar4[0x275] == 0) {
    puVar6 = (undefined8 *)FUN_008013a4(puVar14);
    if (puVar6 == (undefined8 *)0x0) {
      uVar13 = *(undefined1 *)(*(long *)PTR_DAT_047d0a08 + 0x472);
      puVar8 = &DAT_03c886bc;
    }
    else {
      lVar7 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*puVar6);
      puVar8 = (undefined1 *)FUN_00793098(lVar7 + 0x10);
      uVar13 = *(undefined1 *)(*(long *)PTR_DAT_047d0a08 + 0x472);
    }
    uVar12 = 0xd;
LAB_0080e3f8:
    FUN_0080ac4c(lVar2,puVar8,uVar12,uVar13);
  }
  else {
    if (*(char *)(plVar4[0x275] + 0x869) != '\0') {
      puVar6 = (undefined8 *)FUN_008013a4(puVar14);
      if (puVar6 == (undefined8 *)0x0) {
        uVar13 = *(undefined1 *)(*(long *)PTR_DAT_047d0a08 + 0x472);
        puVar8 = &DAT_03c886bc;
        uVar12 = 0xb;
      }
      else {
        lVar7 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*puVar6);
        puVar8 = (undefined1 *)FUN_00793098(lVar7 + 0x10);
        uVar13 = *(undefined1 *)(*(long *)PTR_DAT_047d0a08 + 0x472);
        uVar12 = 0xb;
      }
      goto LAB_0080e3f8;
    }
    FUN_00cbd7c0(local_70,*(long *)puVar1 + 0x1f44);
    puVar1 = PTR_DAT_047d0a08;
    if (local_70[0] != 0) {
      puVar6 = (undefined8 *)FUN_008013a4(puVar14);
      if (puVar6 == (undefined8 *)0x0) {
        uVar13 = *(undefined1 *)(*(long *)PTR_DAT_047d0a08 + 0x472);
        puVar8 = &DAT_03c886bc;
      }
      else {
        lVar7 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*puVar6);
        puVar8 = (undefined1 *)FUN_00793098(lVar7 + 0x10);
        uVar13 = *(undefined1 *)(*(long *)PTR_DAT_047d0a08 + 0x472);
      }
      uVar12 = 0xc;
      goto LAB_0080e3f8;
    }
    if (*puVar14 != 0) {
      uVar15 = 0;
      do {
        plVar10 = (long *)FUN_00801414(puVar14,uVar15);
        if (((plVar10 != (long *)0x0) && (*plVar10 != -1)) && ((int)plVar10[2] - 0xdU < 2)) {
          lVar7 = (**(code **)(*plVar4 + 0x3c8))(plVar4);
          if ((int)plVar10[2] == 0xd) {
            uVar12 = 0;
            uVar16 = 1;
          }
          else if ((int)plVar10[2] == 0xe) {
            if (*(char *)(*(long *)puVar1 + 0x472) == '\0') {
              uVar12 = 0;
              uVar16 = 10;
            }
            else {
              uVar11 = (**(code **)(*(long *)plVar4[0x275] + 0x68))();
              if (((uVar11 & 1) == 0) ||
                 ((**(code **)(*(long *)plVar4[0x275] + 0x70))(local_70), local_70[0] != 0)) {
                uVar12 = 1;
                uVar16 = 10;
              }
              else {
                uVar12 = 1;
                uVar16 = 2;
              }
            }
          }
          else {
            uVar16 = 0;
            uVar12 = 0;
          }
          uVar9 = FUN_00793098(lVar7 + 0x10);
          FUN_0080ac4c(lVar2,uVar9,uVar16,uVar12);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *puVar14);
    }
  }
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x1378));
LAB_0080e404:
  FUN_0080b034(lVar2);
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x18));
  return;
}


