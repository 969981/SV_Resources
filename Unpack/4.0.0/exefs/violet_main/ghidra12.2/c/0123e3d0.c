/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123e3d0; name: FUN_0123e3d0
 */


void FUN_0123e3d0(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  byte bVar18;
  long lVar19;
  undefined1 auStack_88 [8];
  undefined *local_80;
  long lStack_78;
  long local_70;
  undefined2 local_68;
  char local_66;
  
  lVar13 = 0;
  **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
  lVar16 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(lVar16 + 0x68) = 0;
  do {
    uVar1 = (&DAT_03d6abe6)[lVar13];
    puVar6 = (undefined1 *)FUN_010af09c(lVar16);
    lVar13 = lVar13 + 4;
    *puVar6 = uVar1;
  } while (lVar13 != 0x340);
  uVar11 = *(ulong *)(*(long *)(param_1 + 0x40) + 0x90);
  if (((uint)uVar11 >> 1 & 1) == 0) {
    *(ulong *)(*(long *)(param_1 + 0x40) + 0x90) = uVar11 | 2;
    FUN_0123fd2c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x19a0),auStack_88,&local_80);
    *(undefined1 *)(*(long *)(param_1 + 0x48) + 0x2420) = 0;
    uVar14 = *(undefined8 *)(param_1 + 0x48);
    uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1820);
    FUN_01245e40(uVar17,uVar14,*param_3);
    FUN_01245c10(uVar17,uVar14);
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) {
      local_70 = *(long *)(param_1 + 0x10);
      lVar16 = *(long *)(param_1 + 0x48);
      local_68 = 0;
      local_80 = PTR_DAT_047e2580 + 0x10;
      local_66 = '\x01';
      lStack_78 = *(long *)(param_1 + 8);
      FUN_01247774(&local_80);
      lVar13 = local_70;
      if (local_66 == '\0') {
        uVar11 = (ulong)(byte)local_68;
        lVar10 = 0;
        if ((byte)local_68 < 5) {
          lVar10 = *(long *)(local_70 + 0x30) + uVar11 * 0x38 + 0x28;
        }
        if (local_68._1_1_ < *(byte *)(lVar10 + 0x30)) {
          plVar15 = *(long **)(lVar10 + (ulong)local_68._1_1_ * 8);
        }
        else {
          plVar15 = (long *)0x0;
        }
        bVar18 = local_68._1_1_ + 1;
        local_68 = CONCAT11(bVar18,(byte)local_68);
        if ((byte)local_68 < 5) {
          do {
            lVar10 = *(long *)(*(long *)(lVar13 + 0x290) + 8);
            bVar3 = FUN_010f9128(*(undefined4 *)(lVar10 + 0x36c),*(undefined1 *)(lVar10 + 0x370),
                                 uVar11 & 0xffffffff);
            for (; bVar18 < bVar3; bVar18 = bVar18 + 1) {
              if (((bVar18 < *(byte *)(*(long *)(lVar13 + 0x30) + uVar11 * 0x38 + 0x58)) &&
                  (plVar7 = *(long **)(*(long *)(lVar13 + 0x30) + uVar11 * 0x38 + (ulong)bVar18 * 8
                                      + 0x28), plVar7 != (long *)0x0)) &&
                 (uVar8 = (**(code **)(*plVar7 + 0x200))(), (uVar8 & 1) == 0)) {
                bVar2 = false;
                local_68 = CONCAT11(bVar18,(char)uVar11);
                goto LAB_0123e5bc;
              }
            }
            uVar11 = uVar11 + 1;
            bVar18 = 0;
          } while (uVar11 != 5);
          bVar18 = 0;
          local_68 = 5;
        }
        bVar2 = true;
        local_66 = '\x01';
LAB_0123e5bc:
LAB_0123e5cc:
        iVar4 = (**(code **)(*plVar15 + 0x98))(plVar15);
        uVar8 = (ulong)*(byte *)(lVar16 + 0x2420);
        if (uVar8 != 0) {
          piVar12 = (int *)(lVar16 + 8);
          do {
            if (*piVar12 == iVar4) {
              uVar8 = (**(code **)(*plVar15 + 0x4d0))(plVar15,0xc);
              if ((uVar8 & 1) != 0) {
                FUN_01240198(*(undefined8 *)(param_1 + 0x20),plVar15,0xc);
                FUN_01248470(*(undefined8 *)(param_1 + 0x20),plVar15,0x13);
              }
              lVar10 = *(long *)(param_1 + 0x20);
              lVar19 = *(long *)(lVar10 + 0x20);
              uVar5 = (**(code **)(*plVar15 + 0x98))(plVar15);
              plVar7 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(lVar19 + 0x10) + 0x30),uVar5);
              (**(code **)(*plVar7 + 0x4b0))(plVar7,1);
              uVar14 = *(undefined8 *)(lVar10 + 0x18);
              uVar5 = (**(code **)(*plVar15 + 0x98))(plVar15);
              FUN_0129aff0(uVar14,0x51,uVar5,1);
              lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 0x68);
              uVar5 = (**(code **)(*plVar15 + 0x98))(plVar15);
              uVar8 = FUN_0124e624(lVar10,uVar5);
              if (((uVar8 & 1) == 0) && (*(int *)(lVar10 + 0x28) < 0x1e)) {
                *(char *)(lVar10 + *(int *)(lVar10 + 0x28) + 8) = (char)uVar5;
                *(int *)(lVar10 + 0x28) = *(int *)(lVar10 + 0x28) + 1;
              }
              break;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 0x23;
          } while (uVar8 != 0);
        }
        if (!bVar2) {
          uVar8 = uVar11 & 0xff;
          uVar9 = (uint)uVar11 & 0xff;
          lVar10 = 0;
          if (uVar9 < 5) {
            lVar10 = *(long *)(lVar13 + 0x30) + uVar8 * 0x38 + 0x28;
          }
          if (bVar18 < *(byte *)(lVar10 + 0x30)) {
            plVar15 = *(long **)(lVar10 + (ulong)bVar18 * 8);
          }
          else {
            plVar15 = (long *)0x0;
          }
          bVar18 = bVar18 + 1;
          local_68 = CONCAT11(bVar18,(byte)local_68);
          if (uVar9 < 5) {
            do {
              lVar10 = *(long *)(*(long *)(lVar13 + 0x290) + 8);
              bVar3 = FUN_010f9128(*(undefined4 *)(lVar10 + 0x36c),*(undefined1 *)(lVar10 + 0x370),
                                   uVar8 & 0xffffffff);
              for (; bVar18 < bVar3; bVar18 = bVar18 + 1) {
                if (((bVar18 < *(byte *)(*(long *)(lVar13 + 0x30) + uVar8 * 0x38 + 0x58)) &&
                    (plVar7 = *(long **)(*(long *)(lVar13 + 0x30) + uVar8 * 0x38 + (ulong)bVar18 * 8
                                        + 0x28), plVar7 != (long *)0x0)) &&
                   (uVar11 = (**(code **)(*plVar7 + 0x200))(), (uVar11 & 1) == 0)) {
                  bVar2 = false;
                  uVar11 = uVar8 & 0xffffffff;
                  local_68 = CONCAT11(bVar18,(char)uVar8);
                  goto LAB_0123e5cc;
                }
              }
              uVar8 = uVar8 + 1;
              bVar18 = 0;
            } while (uVar8 != 5);
            bVar18 = 0;
            local_68 = 5;
            uVar11 = 5;
          }
          bVar2 = true;
          local_66 = '\x01';
          goto LAB_0123e5cc;
        }
      }
      lVar13 = *(long *)(param_1 + 0x68);
      *(undefined1 *)(lVar13 + 0x5c) = 0;
      *(undefined4 *)(lVar13 + 0x60) = 0;
      *(undefined1 *)(lVar13 + 100) = 0;
      *(undefined4 *)(lVar13 + 0x68) = 0;
      *(undefined1 *)(lVar13 + 0x6c) = 0;
      *(undefined4 *)(lVar13 + 0x70) = 0;
      *(undefined1 *)(lVar13 + 0x74) = 0;
      *(undefined8 *)(lVar13 + 0x78) = 0;
      FUN_0123e9e4(param_1);
    }
    local_80 = *(undefined **)(param_1 + 0x48);
    FUN_0123ea20(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1800),auStack_88,&local_80);
    local_80 = *(undefined **)(param_1 + 0x48);
    FUN_0123f6b4(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x7c0),auStack_88,&local_80);
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + 0x48);
    uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1820);
    FUN_01245e40(uVar17,uVar14,*param_3);
    FUN_01245c10(uVar17,uVar14);
  }
  local_80 = *(undefined **)(param_1 + 0x48);
  FUN_0123ea20(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1800),auStack_88,&local_80);
  local_80 = *(undefined **)(param_1 + 0x48);
  FUN_0123f7d0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1560),auStack_88,&local_80);
  bVar18 = **(byte **)(*(long *)(param_1 + 0x40) + 0x28);
  uVar9 = (uint)bVar18;
  if (bVar18 == 0) {
    FUN_0123e97c(param_1);
    bVar18 = **(byte **)(*(long *)(param_1 + 0x40) + 0x28);
    uVar9 = (uint)bVar18;
    if (bVar18 == 0) {
      FUN_0123e9b0(param_1);
      uVar9 = (uint)**(byte **)(*(long *)(param_1 + 0x40) + 0x28);
    }
  }
  if ((uVar9 - 5 < 4) || (uVar9 == 0)) {
    FUN_0123e948(param_1);
    uVar9 = (uint)**(byte **)(*(long *)(param_1 + 0x40) + 0x28);
  }
  *param_2 = (char)uVar9;
  return;
}


