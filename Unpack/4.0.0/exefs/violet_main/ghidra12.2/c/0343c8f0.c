/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0343c8f0; name: FUN_0343c8f0
 */


long * FUN_0343c8f0(long param_1,float *param_2)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x288));
  uVar6 = nn::os::GetSystemTick();
  plVar1 = (long *)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x270) = uVar6;
  puVar3 = PTR_DAT_047e2fd0;
  plVar9 = *(long **)(param_1 + 0x278);
  if (*(char *)(param_1 + 0x218) != '\0') {
    if (plVar9 != (long *)0x0) {
      plVar8 = (long *)0x0;
      do {
        plVar11 = plVar9;
        if ((char)plVar9[0xd] == '\0') {
          if (*(char *)((long)plVar9 + 0x65) == '\0') {
            nn::os::LockMutex((MutexType *)(plVar9 + 5));
            cVar2 = *(char *)((long)plVar9 + 0x6c);
            nn::os::UnlockMutex((MutexType *)(plVar9 + 5));
            if (cVar2 != '\0') {
              fVar13 = (float)(**(code **)(*plVar9 + 0x38))(plVar9);
              puVar4 = PTR_DAT_047e6d28;
              plVar8 = (long *)plVar9[2];
              if (plVar8 == (long *)0x0) goto LAB_0343cd5c;
              goto LAB_0343cc38;
            }
          }
          plVar10 = (long *)plVar9[2];
        }
        else {
          uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
          plVar10 = (long *)plVar9[2];
          if ((uVar7 & 1) != 0) {
            plVar11 = plVar1;
            if ((long *)*plVar1 != plVar9) {
              plVar11 = plVar8 + 2;
            }
            *plVar11 = (long)plVar10;
            (**(code **)*plVar9)(plVar9);
            (**(code **)(puVar3 + 0x30))(7,plVar9);
            plVar11 = plVar8;
          }
        }
        plVar9 = plVar10;
        plVar8 = plVar11;
      } while (plVar9 != (long *)0x0);
    }
    plVar9 = (long *)0x0;
    goto LAB_0343ca84;
  }
  if (plVar9 != (long *)0x0) {
    plVar8 = (long *)0x0;
    do {
      if ((char)plVar9[0xd] == '\0') {
        nn::os::LockMutex((MutexType *)(plVar9 + 5));
        cVar2 = *(char *)((long)plVar9 + 0x6c);
        nn::os::UnlockMutex((MutexType *)(plVar9 + 5));
        if (cVar2 != '\0') {
          fVar13 = (float)(**(code **)(*plVar9 + 0x38))(plVar9);
          bVar5 = *(char *)((long)plVar9 + 0x6a) != '\0';
          plVar8 = (long *)plVar9[2];
          if (plVar8 == (long *)0x0) goto LAB_0343cd4c;
          plVar11 = plVar9;
          goto LAB_0343cadc;
        }
        plVar11 = (long *)plVar9[2];
      }
      else {
        uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
        plVar11 = (long *)plVar9[2];
        if ((uVar7 & 1) != 0) {
          plVar10 = plVar1;
          if ((long *)*plVar1 != plVar9) {
            plVar10 = plVar8 + 2;
          }
          *plVar10 = (long)plVar11;
          (**(code **)*plVar9)(plVar9);
          (**(code **)(puVar3 + 0x30))(7,plVar9);
          plVar9 = plVar8;
        }
      }
      plVar8 = plVar9;
      plVar9 = plVar11;
    } while (plVar11 != (long *)0x0);
  }
  goto LAB_0343ca78;
LAB_0343cc38:
  do {
    plVar10 = plVar8;
    if ((char)plVar8[0xd] == '\0') {
      if (*(char *)((long)plVar8 + 0x65) == '\0') {
        nn::os::LockMutex((MutexType *)(plVar8 + 5));
        cVar2 = *(char *)((long)plVar8 + 0x6c);
        nn::os::UnlockMutex((MutexType *)(plVar8 + 5));
        if (cVar2 != '\0') {
          fVar14 = (float)(**(code **)(*plVar8 + 0x38))(plVar8);
          if (fVar14 == 0.0) {
            if ((0.0 < fVar13) || (*(char *)((long)plVar9 + 100) < *(char *)((long)plVar8 + 100)))
            goto LAB_0343cd3c;
            if (*(char *)((long)plVar8 + 100) == *(char *)((long)plVar9 + 100)) {
              if ((float)(*(long *)(param_1 + 0x270) - plVar9[9]) / *(float *)puVar4 <
                  (float)(*(long *)(param_1 + 0x270) - plVar8[9]) / *(float *)puVar4)
              goto LAB_0343cd3c;
            }
          }
          else if (fVar14 < fVar13) {
LAB_0343cd3c:
            plVar9 = plVar8;
            fVar13 = fVar14;
          }
        }
      }
      plVar12 = (long *)plVar8[2];
    }
    else {
      uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar12 = (long *)plVar8[2];
      if ((uVar7 & 1) != 0) {
        plVar10 = plVar1;
        if ((long *)*plVar1 != plVar8) {
          plVar10 = plVar11 + 2;
        }
        *plVar10 = (long)plVar12;
        (**(code **)*plVar8)(plVar8);
        (**(code **)(puVar3 + 0x30))(7,plVar8);
        plVar10 = plVar11;
      }
    }
    plVar8 = plVar12;
    plVar11 = plVar10;
  } while (plVar8 != (long *)0x0);
LAB_0343cd5c:
  *param_2 = fVar13;
  goto LAB_0343ca84;
LAB_0343cadc:
  do {
    plVar10 = plVar8;
    if ((char)plVar8[0xd] == '\0') {
      nn::os::LockMutex((MutexType *)(plVar8 + 5));
      cVar2 = *(char *)((long)plVar8 + 0x6c);
      nn::os::UnlockMutex((MutexType *)(plVar8 + 5));
      if (cVar2 != '\0') {
        fVar14 = (float)(**(code **)(*plVar8 + 0x38))(plVar8);
        cVar2 = *(char *)((long)plVar8 + 0x6a);
        if (bVar5) {
          if (cVar2 != '\0') goto LAB_0343cb84;
          bVar5 = true;
        }
        else {
          if (cVar2 == '\0') {
LAB_0343cb84:
            if (fVar14 == 0.0) {
              if ((fVar13 <= 0.0) &&
                 (*(char *)((long)plVar8 + 100) <= *(char *)((long)plVar9 + 100))) {
                if ((*(char *)((long)plVar8 + 100) != *(char *)((long)plVar9 + 100)) ||
                   ((float)(*(long *)(param_1 + 0x270) - plVar8[9]) / *(float *)PTR_DAT_047e6d28 <=
                    (float)(*(long *)(param_1 + 0x270) - plVar9[9]) / *(float *)PTR_DAT_047e6d28))
                goto LAB_0343cbfc;
              }
            }
            else if (fVar13 <= fVar14) goto LAB_0343cbfc;
            bVar5 = cVar2 != '\0';
          }
          else {
            bVar5 = true;
          }
          plVar9 = plVar8;
          fVar13 = fVar14;
        }
      }
LAB_0343cbfc:
      plVar12 = (long *)plVar8[2];
    }
    else {
      uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar12 = (long *)plVar8[2];
      if ((uVar7 & 1) != 0) {
        plVar10 = plVar1;
        if ((long *)*plVar1 != plVar8) {
          plVar10 = plVar11 + 2;
        }
        *plVar10 = (long)plVar12;
        (**(code **)*plVar8)(plVar8);
        (**(code **)(puVar3 + 0x30))(7,plVar8);
        plVar10 = plVar11;
      }
    }
    plVar8 = plVar12;
    plVar11 = plVar10;
  } while (plVar8 != (long *)0x0);
LAB_0343cd4c:
  *param_2 = fVar13;
  if (bVar5) goto LAB_0343ca84;
LAB_0343ca78:
  plVar9 = (long *)FUN_0343c69c(param_1);
LAB_0343ca84:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
  return plVar9;
}


