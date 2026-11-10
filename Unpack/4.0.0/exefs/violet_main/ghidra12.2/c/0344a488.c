/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344a488; name: FUN_0344a488
 */


void FUN_0344a488(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
  puVar4 = PTR_DAT_047e6d38;
  lVar5 = 0;
  uVar9 = 0;
  do {
    if ((uVar9 >> 4 & 1) != 0) {
      puVar11 = *(undefined8 **)(puVar4 + lVar5 * 0x10);
      puVar10 = (uint *)(puVar4 + lVar5 * 0x10 + 8);
      uVar9 = *puVar10;
      puVar13 = puVar11 + (ulong)uVar9 * 3;
      if ((uVar9 != 0) && ((undefined1 *)*puVar11 != &LAB_0344a30c)) {
        lVar14 = (ulong)uVar9 * 0x18;
        do {
          lVar14 = lVar14 + -0x18;
          if (lVar14 == 0) {
            puVar11 = puVar13;
            break;
          }
          puVar1 = puVar11 + 3;
          puVar12 = puVar11 + 3;
          puVar11 = puVar1;
        } while ((undefined1 *)*puVar12 != &LAB_0344a30c);
      }
      if (puVar13 != puVar11) {
        if (puVar11 < puVar13 + -3) {
          do {
            puVar12 = puVar11 + 3;
            *puVar11 = *puVar12;
            puVar11[1] = puVar11[4];
            *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar11 + 5);
            puVar11 = puVar12;
          } while (puVar12 < puVar13 + -3);
          uVar9 = *puVar10;
        }
        *puVar10 = uVar9 - 1;
      }
    }
    lVar5 = lVar5 + 1;
    uVar9 = 1 << (ulong)((uint)lVar5 & 0x1f);
    if (lVar5 == 5) {
      nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
      puVar4 = PTR_DAT_047e2fd0;
      plVar15 = (long *)param_1[1];
      if (plVar15 != (long *)0x0) {
        do {
          plVar16 = (long *)plVar15[1];
          FUN_0344bd98(param_1,plVar15);
          plVar6 = (long *)param_1[1];
          plVar7 = (long *)0x0;
          plVar8 = plVar6;
          if ((plVar6 != (long *)0x0) && (plVar6 != plVar15)) {
            do {
              plVar7 = plVar8;
              plVar8 = (long *)plVar7[1];
            } while (plVar8 != (long *)0x0 && plVar8 != plVar15);
          }
          if (plVar8 != (long *)0x0) {
            plVar2 = param_1 + 1;
            if (plVar8 != plVar6) {
              plVar2 = plVar7 + 1;
            }
            *plVar2 = plVar8[1];
          }
          (**(code **)(*plVar15 + 0x40))(plVar15);
          iVar3 = *(int *)((long)plVar15 + 0x4c) + -1;
          *(int *)((long)plVar15 + 0x4c) = iVar3;
          if (iVar3 == 0) {
            (**(code **)*plVar15)(plVar15);
            (**(code **)(puVar4 + 0x30))(0,plVar15);
          }
          plVar15 = plVar16;
        } while (plVar16 != (long *)0x0);
        if (param_1 == (undefined8 *)0x0) {
          return;
        }
      }
      *param_1 = &PTR_FUN_047c05a0;
      DAT_048afc28 = 0;
      FUN_0344b12c(param_1);
                    /* WARNING: Could not recover jumptable at 0x0344a680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar4 + 0x30))(0,param_1);
      return;
    }
  } while( true );
}


