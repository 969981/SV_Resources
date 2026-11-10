/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034889bc; name: FUN_034889bc
 */


void FUN_034889bc(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  bool bVar8;
  uint uVar9;
  ulong *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  MutexType *pMVar14;
  long lVar15;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar9 = *(uint *)(param_1 + 0x20), uVar9 != 0)) {
    lVar11 = *(long *)(param_1 + 0x18);
    lVar15 = lVar11;
    do {
      plVar7 = *(long **)(lVar15 + 0x10);
      if (plVar7 != (long *)0x0) {
        puVar10 = (ulong *)plVar7[0x1d];
        if (puVar10 != (ulong *)0x0) {
          plVar13 = (long *)*puVar10;
          uVar9 = (uint)puVar10[1];
          plVar1 = plVar13 + uVar9;
          if ((uVar9 != 0) && (*plVar13 != param_1)) {
            lVar11 = (ulong)uVar9 * 8;
            do {
              lVar11 = lVar11 + -8;
              if (lVar11 == 0) {
                plVar13 = plVar1;
                break;
              }
              plVar2 = plVar13 + 1;
              plVar12 = plVar13 + 1;
              plVar13 = plVar2;
            } while (*plVar12 != param_1);
          }
          if (plVar1 != plVar13) {
            if (plVar13 < plVar1 + -1) {
              do {
                plVar12 = plVar13 + 1;
                *plVar13 = *plVar12;
                plVar13 = plVar12;
              } while (plVar12 < plVar1 + -1);
              uVar9 = (uint)puVar10[1];
            }
            *(uint *)(puVar10 + 1) = uVar9 - 1;
            (**(code **)(*plVar7 + 0x180))(plVar7,0,0);
          }
        }
        *(undefined8 *)(lVar15 + 0x10) = 0;
        lVar11 = *(long *)(param_1 + 0x18);
        uVar9 = *(uint *)(param_1 + 0x20);
      }
      lVar15 = lVar15 + 0x48;
    } while (lVar15 != lVar11 + (ulong)uVar9 * 0x48);
  }
  *(long *)(param_1 + 0x30) = param_2;
  puVar5 = PTR_DAT_047e6f28;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar15 = *(long *)(param_1 + 0x18);
      do {
        if (*(long *)(lVar15 + 0x10) == 0) {
          pMVar14 = *(MutexType **)puVar5;
          uVar9 = *(uint *)(lVar15 + 8);
          nn::os::LockMutex(pMVar14);
          uVar3 = *(uint *)(pMVar14 + 0x28);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar9 / uVar3;
            }
            for (lVar11 = *(long *)(*(long *)(pMVar14 + 0x20) + (ulong)(uVar9 - uVar4 * uVar3) * 8);
                lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
              if (*(uint *)(lVar11 + 0x10) == uVar9) {
                plVar7 = (long *)(lVar11 + -8);
                *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
                nn::os::UnlockMutex(pMVar14);
                if (((*(long *)(param_1 + 0x30) != 0) && (*(long *)(lVar11 + 0x90) != 0)) &&
                   (*(long *)(lVar11 + 0x90) == *(long *)(param_1 + 0x30))) {
                  *(long **)(lVar15 + 0x10) = plVar7;
                  iVar6 = FUN_034a946c(plVar7,param_1);
                  if (iVar6 != 1) {
                    *(undefined8 *)(lVar15 + 0x10) = 0;
                  }
                }
                (**(code **)(*plVar7 + 0x30))(plVar7);
                goto LAB_03488b2c;
              }
            }
          }
          nn::os::UnlockMutex(pMVar14);
        }
LAB_03488b2c:
        lVar15 = lVar15 + 0x48;
      } while (lVar15 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x48);
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar15 = *(long *)(*(long *)(param_1 + 0x30) + 0x90);
      bVar8 = false;
      if (lVar15 != 0) {
        if (*(short *)(lVar15 + 0x90) < 1) {
          bVar8 = 0 < *(short *)(lVar15 + 0x94);
        }
        else {
          bVar8 = true;
        }
      }
      local_58 = 0xff;
      local_50 = 0xff;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_48 = 0;
      iVar6 = FUN_034b5ad4(*(undefined8 *)PTR_DAT_047e6fd8,param_1,*(int *)(param_1 + 0x38),
                           *(undefined4 *)(param_1 + 0x3c),1,0x3c,0,0,0,0,&local_70,5,bVar8);
      if (iVar6 != 1) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
  }
  return;
}


