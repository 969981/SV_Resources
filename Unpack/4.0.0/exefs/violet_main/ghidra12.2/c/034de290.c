/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034de290; name: FUN_034de290
 */


void FUN_034de290(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long local_68;
  
  nn::os::LockMutex((MutexType *)&DAT_048b0510);
  puVar3 = PTR_DAT_047e2fd0;
  puVar2 = PTR_DAT_047e2fc8;
  puVar11 = DAT_048b0500;
  uVar5 = DAT_048b0508;
  if (DAT_048b0508 != 0) {
    puVar13 = DAT_048b0500;
    do {
      if (puVar13[1] == param_1) {
        lVar10 = puVar13[2];
        if (*(int *)(lVar10 + 0x18) != 0) {
          puVar9 = *(undefined4 **)(lVar10 + 0x10);
          do {
            plVar4 = *(long **)puVar2;
            puVar8 = puVar9 + 1;
            (**(code **)(*plVar4 + 0x50))(plVar4,*puVar9,*(undefined1 *)(lVar10 + 0x30));
            puVar9 = puVar8;
          } while (puVar8 != (undefined4 *)
                             (*(long *)(lVar10 + 0x10) + (ulong)*(uint *)(lVar10 + 0x18) * 4));
        }
        if (*(int *)(lVar10 + 0x28) != 0) {
          puVar9 = *(undefined4 **)(lVar10 + 0x20);
          do {
            plVar4 = *(long **)puVar2;
            puVar8 = puVar9 + 1;
            (**(code **)(*plVar4 + 0x50))(plVar4,*puVar9,*(undefined1 *)(lVar10 + 0x31));
            puVar9 = puVar8;
          } while (puVar8 != (undefined4 *)
                             (*(long *)(lVar10 + 0x20) + (ulong)*(uint *)(lVar10 + 0x28) * 4));
        }
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(undefined4 *)(lVar10 + 0x28) = 0;
        FUN_034de108(puVar13[2]);
        puVar11 = (undefined8 *)*puVar13;
        if (puVar11 != (undefined8 *)0x0) {
          iVar1 = *(int *)(puVar11 + 0x10);
          uVar5 = iVar1 - 1;
          *(uint *)(puVar11 + 0x10) = uVar5;
          if (iVar1 == 0 || uVar5 == 0) {
            if (uVar5 == 0) {
LAB_034de3bc:
              lVar10 = puVar11[5];
              if (lVar10 != 0) {
                uVar5 = ((uint)lVar10 ^ (uint)lVar10 >> 0x10) * -0x7a143595;
                uVar5 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
                local_68 = lVar10;
                FUN_034c6294(&DAT_048b02b8,&local_68,uVar5 ^ uVar5 >> 0x10);
                uVar5 = *(uint *)(puVar11 + 0x10);
              }
              goto LAB_034de400;
            }
          }
          else if (uVar5 < 2) {
            if (*(char *)((long)puVar11 + 0x84) != '\0') goto LAB_034de3bc;
LAB_034de400:
            if (uVar5 == 0) {
              (**(code **)*puVar11)(puVar11);
              (**(code **)(puVar3 + 0x30))(4,puVar11);
            }
          }
        }
        plVar4 = (long *)puVar13[2];
        if (plVar4 != (long *)0x0) {
          if (plVar4[2] != 0) {
            *(undefined4 *)(plVar4 + 3) = 0;
            (**(code **)(puVar3 + 0x30))(0);
            plVar4[2] = 0;
            *(undefined4 *)((long)plVar4 + 0x1c) = 0;
          }
          if (plVar4[4] != 0) {
            *(undefined4 *)(plVar4 + 5) = 0;
            (**(code **)(puVar3 + 0x30))(0);
            plVar4[4] = 0;
            *(undefined4 *)((long)plVar4 + 0x2c) = 0;
          }
          if (*plVar4 != 0) {
            *(undefined4 *)(plVar4 + 1) = 0;
            (**(code **)(puVar3 + 0x30))(0);
            *plVar4 = 0;
            *(undefined4 *)((long)plVar4 + 0xc) = 0;
          }
          (**(code **)(puVar3 + 0x30))(0,puVar13[2]);
          puVar13[2] = 0;
        }
        puVar11 = DAT_048b0500;
        puVar6 = DAT_048b0500 + (ulong)DAT_048b0508 * 3 + -3;
        if (puVar13 < puVar6) {
          puVar12 = puVar13;
          do {
            puVar7 = puVar12 + 3;
            puVar12[2] = puVar12[5];
            *puVar12 = *puVar7;
            puVar12[1] = puVar12[4];
            puVar12 = puVar7;
          } while (puVar7 < puVar6);
        }
        uVar5 = DAT_048b0508 - 1;
        DAT_048b0508 = uVar5;
      }
      else {
        puVar13 = puVar13 + 3;
      }
    } while (puVar11 + (ulong)uVar5 * 3 != puVar13);
  }
  if ((puVar11 != (undefined8 *)0x0) && (uVar5 == 0)) {
    DAT_048b0508 = 0;
    (**(code **)(puVar3 + 0x30))(0);
    DAT_048b0500 = (undefined8 *)0x0;
    DAT_048b050c = 0;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_048b0510);
  return;
}


