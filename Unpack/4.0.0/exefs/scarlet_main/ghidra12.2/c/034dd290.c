/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034dd290; name: FUN_034dd290
 */


void FUN_034dd290(ulong param_1,ulong param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  code *pcVar11;
  int iVar12;
  uint uVar13;
  ulong *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  
  nn::os::LockMutex((MutexType *)&DAT_048b0510);
  uVar19 = DAT_048b0508;
  puVar5 = PTR_DAT_047e2fc8;
  if (DAT_048b0508 == 0) {
    if (DAT_048b0500 != 0) {
      uVar15 = 0;
      goto LAB_034dd384;
    }
    if (DAT_048b050c == 0) {
      lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,0x18);
      if (lVar6 == 0) goto LAB_034dd678;
      DAT_048b0500 = lVar6;
      DAT_048b050c = 1;
    }
    else {
      lVar6 = 0;
    }
    if (DAT_048b050c == 0) goto LAB_034dd678;
    uVar9 = (ulong)DAT_048b0508;
    DAT_048b0508 = DAT_048b0508 + 1;
    if (lVar6 == 0) goto LAB_034dd678;
    puVar17 = (ulong *)(lVar6 + uVar9 * 0x18);
  }
  else {
    iVar12 = 0;
    uVar15 = DAT_048b0508;
    do {
      iVar1 = iVar12 + (uVar15 >> 1);
      puVar17 = (ulong *)(DAT_048b0500 + (long)iVar1 * 0x18);
      uVar9 = *puVar17;
      uVar2 = puVar17[1];
      if (uVar9 == param_2 && uVar2 == param_1) {
        lVar6 = *(long *)(DAT_048b0500 + (long)iVar1 * 0x18 + 0x10);
        bVar4 = *(byte *)(lVar6 + 0x30);
        if (((uint)bVar4 != (param_3 & 0xff)) || ((uint)*(byte *)(lVar6 + 0x31) != (param_4 & 0xff))
           ) {
          if (*(int *)(lVar6 + 0x18) != 0) {
            puVar20 = *(undefined4 **)(lVar6 + 0x10);
            plVar7 = *(long **)PTR_DAT_047e2fc8;
            uVar3 = *puVar20;
            pcVar11 = *(code **)(*plVar7 + 0x58);
            while( true ) {
              puVar20 = puVar20 + 1;
              (*pcVar11)(plVar7,uVar3,param_3,bVar4);
              if (puVar20 ==
                  (undefined4 *)(*(long *)(lVar6 + 0x10) + (ulong)*(uint *)(lVar6 + 0x18) * 4))
              break;
              plVar7 = *(long **)puVar5;
              uVar3 = *puVar20;
              pcVar11 = *(code **)(*plVar7 + 0x58);
              bVar4 = *(byte *)(lVar6 + 0x30);
            }
          }
          if (*(int *)(lVar6 + 0x28) != 0) {
            puVar20 = *(undefined4 **)(lVar6 + 0x20);
            do {
              plVar7 = *(long **)puVar5;
              puVar21 = puVar20 + 1;
              (**(code **)(*plVar7 + 0x58))(plVar7,*puVar20,param_4,*(undefined1 *)(lVar6 + 0x31));
              puVar20 = puVar21;
            } while (puVar21 !=
                     (undefined4 *)(*(long *)(lVar6 + 0x20) + (ulong)*(uint *)(lVar6 + 0x28) * 4));
          }
          *(char *)(lVar6 + 0x30) = (char)param_3;
          *(char *)(lVar6 + 0x31) = (char)param_4;
        }
        goto LAB_034dd678;
      }
      if ((uVar9 < param_2) || ((uVar9 == param_2 && (uVar2 < param_1)))) {
        iVar12 = iVar1 + 1;
        uVar15 = uVar15 - 1;
      }
      uVar15 = uVar15 >> 1;
    } while (uVar15 != 0);
    uVar15 = 0;
    uVar13 = DAT_048b0508;
    do {
      iVar12 = uVar15 + (uVar13 >> 1);
      puVar17 = (ulong *)(DAT_048b0500 + (long)iVar12 * 0x18);
      uVar9 = *puVar17;
      uVar2 = puVar17[1];
      if (uVar9 == param_2 && uVar2 == param_1) {
        puVar17 = (ulong *)(DAT_048b0500 + (long)iVar12 * 0x18);
        goto LAB_034dd578;
      }
      if ((uVar9 < param_2) || ((uVar9 == param_2 && (uVar2 < param_1)))) {
        uVar15 = iVar12 + 1;
        uVar13 = uVar13 - 1;
      }
      uVar13 = uVar13 >> 1;
    } while (uVar13 != 0);
LAB_034dd384:
    if (DAT_048b050c <= DAT_048b0508) {
      iVar12 = DAT_048b050c + (DAT_048b050c >> 1);
      if (DAT_048b050c == 0) {
        iVar12 = 1;
      }
      uVar13 = iVar12 + DAT_048b050c;
      lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,DAT_048b0500,(ulong)uVar13 * 0x18);
      if (lVar6 == 0) goto LAB_034dd678;
      DAT_048b0500 = lVar6;
      DAT_048b050c = uVar13;
    }
    uVar13 = DAT_048b0508;
    if (DAT_048b050c <= uVar19) goto LAB_034dd678;
    puVar10 = (ulong *)(DAT_048b0500 + (ulong)DAT_048b0508 * 0x18);
    puVar17 = (ulong *)(DAT_048b0500 + (ulong)uVar15 * 0x18);
    DAT_048b0508 = DAT_048b0508 + 1;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
    if (uVar15 < uVar13) {
      do {
        puVar14 = puVar10 + -3;
        puVar10[2] = puVar10[-1];
        *puVar10 = *puVar14;
        puVar10[1] = puVar10[-2];
        puVar10 = puVar14;
      } while (puVar17 < puVar14);
    }
  }
  puVar17[1] = param_1;
  puVar17[2] = 0;
  *puVar17 = param_2;
LAB_034dd578:
  puVar8 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x38);
  puVar17[2] = (ulong)puVar8;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_048b0508 != 0) {
      iVar12 = 0;
      uVar19 = DAT_048b0508;
      do {
        iVar1 = iVar12 + (uVar19 >> 1);
        puVar17 = (ulong *)(DAT_048b0500 + (long)iVar1 * 0x18);
        uVar9 = *puVar17;
        uVar2 = puVar17[1];
        if (uVar9 == param_2 && uVar2 == param_1) {
          puVar8 = (undefined8 *)(DAT_048b0500 + (long)iVar1 * 0x18);
          puVar16 = (undefined8 *)((DAT_048b0500 + (ulong)DAT_048b0508 * 0x18) - 0x18);
          if (puVar8 < puVar16) {
            do {
              puVar18 = puVar8 + 3;
              puVar8[2] = puVar8[5];
              *puVar8 = *puVar18;
              puVar8[1] = puVar8[4];
              puVar8 = puVar18;
            } while (puVar18 < puVar16);
          }
          DAT_048b0508 = DAT_048b0508 - 1;
          break;
        }
        if ((uVar9 < param_2) || ((uVar9 == param_2 && (uVar2 < param_1)))) {
          iVar12 = iVar1 + 1;
          uVar19 = uVar19 - 1;
        }
        uVar19 = uVar19 >> 1;
      } while (uVar19 != 0);
    }
  }
  else {
    *(undefined2 *)(puVar8 + 6) = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    uVar9 = *puVar17;
    if (uVar9 != 0) {
      uVar19 = *(uint *)(uVar9 + 0x80);
      if (uVar19 < 2) {
        *(uint *)(uVar9 + 0x80) = uVar19 + 1;
        if ((uVar19 != 0) && (*(char *)(uVar9 + 0x84) != '\0')) {
          FUN_034c60b0(*(undefined8 *)PTR_DAT_047e6cc0);
        }
      }
      else {
        *(uint *)(uVar9 + 0x80) = uVar19 + 1;
      }
    }
    *(char *)(puVar17[2] + 0x30) = (char)param_3;
    *(char *)(puVar17[2] + 0x31) = (char)param_4;
    FUN_034dd6dc(puVar17[2],puVar17[1],*puVar17,0,0);
  }
LAB_034dd678:
  nn::os::UnlockMutex((MutexType *)&DAT_048b0510);
  return;
}


