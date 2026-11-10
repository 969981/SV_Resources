/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0343c69c; name: FUN_0343c69c
 */


long * FUN_0343c69c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  bool bVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x288));
  puVar2 = PTR_DAT_047e2fd0;
  plVar8 = *(long **)(param_1 + 0x280);
  if (plVar8 == (long *)0x0) {
    iVar12 = 0;
    plVar8 = (long *)0x0;
    goto LAB_0343c8c4;
  }
  iVar12 = 0;
  bVar10 = false;
  plVar9 = (long *)0x0;
  plVar1 = (long *)(param_1 + 0x280);
  do {
    if (((char)plVar8[0xd] == '\0') ||
       (uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8), (uVar5 & 1) == 0)) {
      iVar3 = (**(code **)(*plVar8 + 0x50))(plVar8);
      iVar12 = iVar3 + iVar12;
      plVar9 = plVar8;
      plVar8 = (long *)plVar8[2];
    }
    else {
      plVar13 = (long *)plVar8[2];
      plVar11 = plVar1;
      if ((long *)*plVar1 != plVar8) {
        plVar11 = plVar9 + 2;
      }
      *plVar11 = (long)plVar13;
      (**(code **)*plVar8)(plVar8);
      (**(code **)(puVar2 + 0x30))(7,plVar8);
      bVar10 = true;
      plVar8 = plVar13;
    }
  } while (plVar8 != (long *)0x0);
  plVar9 = (long *)*plVar1;
  if (plVar9 != (long *)0x0) {
    plVar8 = (long *)0x0;
    if (bVar10) {
      do {
        (**(code **)(*plVar9 + 0x58))(plVar9);
        if ((*(char *)((long)plVar9 + 0x6a) != '\0') &&
           ((plVar8 == (long *)0x0 ||
            (*(char *)((long)plVar8 + 100) < *(char *)((long)plVar9 + 100))))) {
          plVar8 = plVar9;
        }
        plVar9 = (long *)plVar9[2];
      } while (plVar9 != (long *)0x0);
    }
    else {
      do {
        if ((*(char *)((long)plVar9 + 0x6a) != '\0') &&
           ((plVar8 == (long *)0x0 ||
            (*(char *)((long)plVar8 + 100) < *(char *)((long)plVar9 + 100))))) {
          plVar8 = plVar9;
        }
        plVar9 = (long *)plVar9[2];
      } while (plVar9 != (long *)0x0);
    }
    if (plVar8 == (long *)0x0) goto LAB_0343c8c4;
    iVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
    iVar4 = (**(code **)(*plVar8 + 0x50))(plVar8);
    uVar6 = *(uint *)(param_1 + 0x624);
    iVar3 = iVar3 - iVar4;
    if ((uint)(iVar3 + iVar12) <= uVar6) goto LAB_0343c8c4;
    do {
      plVar9 = (long *)*plVar1;
      if (plVar9 == (long *)0x0) {
LAB_0343c8a0:
        uVar7 = iVar12 + iVar3;
        break;
      }
      plVar11 = (long *)0x0;
      do {
        iVar4 = (**(code **)(*plVar9 + 0x50))(plVar9);
        if (((iVar4 != 0) && (*(char *)((long)plVar9 + 100) < *(char *)((long)plVar8 + 100))) &&
           ((plVar11 == (long *)0x0 ||
            (*(char *)((long)plVar9 + 100) < *(char *)((long)plVar11 + 100))))) {
          plVar11 = plVar9;
        }
        plVar9 = (long *)plVar9[2];
      } while (plVar9 != (long *)0x0);
      if (plVar11 == (long *)0x0) {
        uVar6 = *(uint *)(param_1 + 0x624);
        goto LAB_0343c8a0;
      }
      iVar4 = (**(code **)(*plVar11 + 0x60))(plVar11,iVar3);
      uVar6 = *(uint *)(param_1 + 0x624);
      iVar12 = iVar12 - iVar4;
      uVar7 = iVar12 + iVar3;
    } while (uVar6 < uVar7);
    if (uVar7 <= uVar6) goto LAB_0343c8c4;
    (**(code **)(*plVar8 + 0x60))(plVar8,0);
  }
  plVar8 = (long *)0x0;
LAB_0343c8c4:
  *(int *)(param_1 + 0x628) = iVar12;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
  return plVar8;
}


