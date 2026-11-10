/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ddde0; name: FUN_034ddde0
 */


void FUN_034ddde0(ulong param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long local_48;
  
  nn::os::LockMutex((MutexType *)&DAT_048b0510);
  puVar4 = PTR_DAT_047e2fc8;
  if (DAT_048b0508 != 0) {
    iVar8 = 0;
    uVar6 = DAT_048b0508;
    while( true ) {
      iVar1 = iVar8 + (uVar6 >> 1);
      puVar10 = (ulong *)(DAT_048b0500 + (long)iVar1 * 0x18);
      uVar2 = *puVar10;
      if (uVar2 == param_2 && puVar10[1] == param_1) break;
      if ((uVar2 < param_2) || ((uVar2 == param_2 && (puVar10[1] < param_1)))) {
        iVar8 = iVar1 + 1;
        uVar6 = uVar6 - 1;
      }
      uVar6 = uVar6 >> 1;
      if (uVar6 == 0) goto LAB_034de0e4;
    }
    plVar12 = (long *)(DAT_048b0500 + (long)iVar1 * 0x18 + 0x10);
    lVar13 = *plVar12;
    if (*(int *)(lVar13 + 0x18) != 0) {
      puVar15 = *(undefined4 **)(lVar13 + 0x10);
      do {
        plVar5 = *(long **)puVar4;
        puVar14 = puVar15 + 1;
        (**(code **)(*plVar5 + 0x50))(plVar5,*puVar15,*(undefined1 *)(lVar13 + 0x30));
        puVar15 = puVar14;
      } while (puVar14 !=
               (undefined4 *)(*(long *)(lVar13 + 0x10) + (ulong)*(uint *)(lVar13 + 0x18) * 4));
    }
    if (*(int *)(lVar13 + 0x28) != 0) {
      puVar15 = *(undefined4 **)(lVar13 + 0x20);
      do {
        plVar5 = *(long **)puVar4;
        puVar14 = puVar15 + 1;
        (**(code **)(*plVar5 + 0x50))(plVar5,*puVar15,*(undefined1 *)(lVar13 + 0x31));
        puVar15 = puVar14;
      } while (puVar14 !=
               (undefined4 *)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)(lVar13 + 0x28) * 4));
    }
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(lVar13 + 0x28) = 0;
    FUN_034de108(*plVar12);
    puVar11 = (undefined8 *)*puVar10;
    if (puVar11 != (undefined8 *)0x0) {
      iVar8 = *(int *)(puVar11 + 0x10);
      uVar6 = iVar8 - 1;
      *(uint *)(puVar11 + 0x10) = uVar6;
      if (iVar8 == 0 || uVar6 == 0) {
        if (uVar6 == 0) {
LAB_034ddf38:
          lVar13 = puVar11[5];
          if (lVar13 != 0) {
            uVar6 = ((uint)lVar13 ^ (uint)lVar13 >> 0x10) * -0x7a143595;
            uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
            local_48 = lVar13;
            FUN_034c6294(&DAT_048b02b8,&local_48,uVar6 ^ uVar6 >> 0x10);
            uVar6 = *(uint *)(puVar11 + 0x10);
          }
          goto LAB_034ddf7c;
        }
      }
      else if (uVar6 < 2) {
        if (*(char *)((long)puVar11 + 0x84) != '\0') goto LAB_034ddf38;
LAB_034ddf7c:
        if (uVar6 == 0) {
          (**(code **)*puVar11)(puVar11);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar11);
        }
      }
    }
    plVar5 = (long *)*plVar12;
    if (plVar5 != (long *)0x0) {
      if (plVar5[2] != 0) {
        *(undefined4 *)(plVar5 + 3) = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        plVar5[2] = 0;
        *(undefined4 *)((long)plVar5 + 0x1c) = 0;
      }
      if (plVar5[4] != 0) {
        *(undefined4 *)(plVar5 + 5) = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        plVar5[4] = 0;
        *(undefined4 *)((long)plVar5 + 0x2c) = 0;
      }
      if (*plVar5 != 0) {
        *(undefined4 *)(plVar5 + 1) = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        *plVar5 = 0;
        *(undefined4 *)((long)plVar5 + 0xc) = 0;
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,*plVar12);
      *plVar12 = 0;
    }
    if (DAT_048b0508 != 0) {
      iVar8 = 0;
      uVar6 = DAT_048b0508;
      while( true ) {
        iVar1 = iVar8 + (uVar6 >> 1);
        puVar10 = (ulong *)(DAT_048b0500 + (long)iVar1 * 0x18);
        uVar2 = *puVar10;
        uVar3 = puVar10[1];
        if (uVar2 == param_2 && uVar3 == param_1) break;
        if ((uVar2 < param_2) || ((uVar2 == param_2 && (uVar3 < param_1)))) {
          iVar8 = iVar1 + 1;
          uVar6 = uVar6 - 1;
        }
        uVar6 = uVar6 >> 1;
        if (uVar6 == 0) goto LAB_034de0e4;
      }
      puVar11 = (undefined8 *)(DAT_048b0500 + (long)iVar1 * 0x18);
      puVar7 = (undefined8 *)((DAT_048b0500 + (ulong)DAT_048b0508 * 0x18) - 0x18);
      if (puVar11 < puVar7) {
        do {
          puVar9 = puVar11 + 3;
          puVar11[2] = puVar11[5];
          *puVar11 = *puVar9;
          puVar11[1] = puVar11[4];
          puVar11 = puVar9;
        } while (puVar9 < puVar7);
      }
      DAT_048b0508 = DAT_048b0508 - 1;
    }
  }
LAB_034de0e4:
  nn::os::UnlockMutex((MutexType *)&DAT_048b0510);
  return;
}


