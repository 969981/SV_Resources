/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034607d0; name: FUN_034607d0
 */


void FUN_034607d0(uint *param_1,ulong param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  char cVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
  puVar2 = param_1 + 0x19;
  if ((param_2 & 1) == 0) {
    do {
      uVar5 = *puVar2;
      cVar13 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = uVar5 - 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (0 < (int)(uVar5 - 1)) goto LAB_03460974;
  }
  else {
    *puVar2 = 0;
  }
  puVar9 = PTR_DAT_047e70e8;
  if ((((byte)param_1[0x1a] >> 2 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    lVar14 = *(long *)PTR_DAT_047e70e8;
    nn::os::LockMutex((MutexType *)(lVar14 + 0x68));
    puVar8 = PTR_DAT_047e2fd0;
    if (param_1[0xd] != 0) {
      uVar15 = 0;
      do {
        uVar5 = *(uint *)(*(long *)(param_1 + 8) + uVar15 * 0xc);
        if ((uVar5 != 0) && (uVar3 = *(uint *)(lVar14 + 0x98), uVar3 != 0)) {
          uVar7 = 0;
          if (uVar3 != 0) {
            uVar7 = uVar5 / uVar3;
          }
          uVar17 = (ulong)(uVar5 - uVar7 * uVar3);
          puVar12 = *(undefined8 **)(*(long *)(lVar14 + 0x90) + uVar17 * 8);
          if (puVar12 != (undefined8 *)0x0) {
            if (*(uint *)(puVar12 + 1) == uVar5) {
              puVar16 = (undefined8 *)0x0;
            }
            else {
              do {
                puVar16 = puVar12;
                puVar12 = (undefined8 *)*puVar16;
                if (puVar12 == (undefined8 *)0x0) goto LAB_03460944;
              } while (*(uint *)(puVar12 + 1) != uVar5);
            }
            iVar4 = *(int *)(puVar12 + 6);
            *(int *)(puVar12 + 6) = iVar4 + -1;
            if (iVar4 + -1 == 0) {
              if (puVar12[2] != 0) {
                (**(code **)(puVar8 + 0x30))(*(undefined4 *)((long)puVar12 + 0x1c));
                puVar12[2] = 0;
                puVar12[3] = 0xffffffff00000000;
                if (*(int *)(puVar12 + 6) != 0) goto LAB_03460944;
              }
              if (puVar16 == (undefined8 *)0x0) {
                puVar16 = (undefined8 *)(*(long *)(lVar14 + 0x90) + uVar17 * 8);
              }
              *puVar16 = *puVar12;
              if (puVar12[4] != 0) {
                *(undefined4 *)(puVar12 + 5) = 0;
                (**(code **)(puVar8 + 0x30))(0);
                puVar12[4] = 0;
                *(undefined4 *)((long)puVar12 + 0x2c) = 0;
              }
              (**(code **)(puVar8 + 0x30))(0,puVar12);
              *(int *)(lVar14 + 0xa0) = *(int *)(lVar14 + 0xa0) + -1;
            }
          }
        }
LAB_03460944:
        uVar15 = uVar15 + 1;
      } while (uVar15 < param_1[0xd]);
    }
    nn::os::UnlockMutex((MutexType *)(lVar14 + 0x68));
    *(byte *)(param_1 + 0x1a) = (byte)param_1[0x1a] & 0xfb;
  }
  if ((int)param_1[0x18] < 1) {
    lVar14 = *(long *)puVar9;
    uVar5 = *param_1;
    nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
    uVar3 = *(uint *)(lVar14 + 0xb0);
    if (uVar3 != 0) {
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = uVar5 / uVar3;
      }
      puVar2 = (uint *)(*(long *)(lVar14 + 0xa8) + (ulong)(uVar5 - uVar7 * uVar3) * 8);
      puVar11 = *(uint **)puVar2;
      if (puVar11 != (uint *)0x0) {
        puVar10 = (uint *)0x0;
        do {
          if ((*puVar11 == uVar5) && (*(long *)(puVar11 + 2) == 0)) {
            if (puVar10 != (uint *)0x0) {
              puVar2 = puVar10 + 4;
            }
            *(undefined8 *)puVar2 = *(undefined8 *)(puVar11 + 4);
            *(int *)(lVar14 + 0xb8) = *(int *)(lVar14 + 0xb8) + -1;
            break;
          }
          puVar1 = puVar11 + 4;
          puVar10 = puVar11;
          puVar11 = *(uint **)puVar1;
        } while (*(uint **)puVar1 != (uint *)0x0);
      }
    }
    puVar9 = PTR_DAT_047e70e0;
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
    nn::os::UnlockMutex((MutexType *)puVar9);
    puVar9 = PTR_DAT_047e6d30;
    puVar16 = *(undefined8 **)(param_1 + 0x14);
    puVar12 = puVar16;
    if (param_1[0x16] != 0) {
      do {
        nn::os::LockMutex((MutexType *)puVar9);
        if (puVar12 != (undefined8 *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 8)) {
          cVar13 = '\x01';
          puVar16 = puVar12;
          do {
            puVar12 = puVar16 + 1;
            (**(code **)(*(long *)*puVar16 + 0x18))();
            cVar13 = cVar13 + '\x01';
            if (cVar13 == '\0') break;
            puVar16 = puVar12;
          } while (puVar12 != (undefined8 *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 8));
        }
        nn::os::UnlockMutex((MutexType *)puVar9);
        puVar16 = *(undefined8 **)(param_1 + 0x14);
      } while (puVar12 != puVar16 + param_1[0x16]);
    }
    if (puVar16 != (undefined8 *)0x0) {
      param_1[0x16] = 0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar16);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x17] = 0;
    }
    if (*(long *)(param_1 + 6) != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))((((byte)param_1[0x1a] & 8) >> 3) << 0x1e | 0x20000003);
      param_1[6] = 0;
      param_1[7] = 0;
    }
    if (((byte)param_1[0x1a] >> 1 & 1) != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,*(undefined8 *)(param_1 + 8));
      *(byte *)(param_1 + 0x1a) = (byte)param_1[0x1a] & 0xfd;
    }
    param_1[8] = 0;
    param_1[9] = 0;
                    /* WARNING: Could not recover jumptable at 0x03460b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
    return;
  }
LAB_03460974:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
  return;
}


