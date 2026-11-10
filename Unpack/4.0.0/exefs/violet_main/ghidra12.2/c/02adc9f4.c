/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02adc9f4; name: FUN_02adc9f4
 */


void FUN_02adc9f4(undefined8 *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  short *psVar11;
  long lVar12;
  char *pcVar13;
  undefined4 uVar14;
  
  *(int *)*param_1 = *(int *)*param_1 + 1;
  plVar9 = (long *)*param_2;
  if ((((plVar9 != (long *)0x0) && (psVar11 = (short *)plVar9[1], psVar11 != (short *)0x0)) &&
      (*psVar11 == *(short *)param_1[1])) &&
     ((*(int *)param_1[2] == -1 || (*(int *)(psVar11 + 4) == *(int *)param_1[2])))) {
    if ((*(char *)param_1[3] == '\0') && (*(char *)param_1[4] == '\0')) {
      if (DAT_048407a0 == (code *)0x0) {
        return;
      }
      uVar10 = (*DAT_048407a0)(&DAT_048407c0);
      if ((uVar10 & 1) == 0) {
        return;
      }
      plVar9 = (long *)*param_2;
    }
    if (*(char *)param_1[4] == '\0') {
      bVar7 = *(char *)param_1[7] == '\0';
      lVar12 = *plVar9;
    }
    else {
      lVar12 = *plVar9;
      bVar7 = false;
    }
    (**(code **)(lVar12 + 0x10))
              (*(undefined4 *)param_1[5],plVar9,*(char *)param_1[4] != '\0',
               *(undefined8 *)param_1[6],bVar7);
    *(undefined1 *)param_1[7] = 1;
    puVar4 = PTR_DAT_047d62a0;
    if (*(char *)param_1[4] == '\0') {
      pcVar13 = (char *)param_1[8];
      if (((*PTR_DAT_047d62a0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d62a0), iVar8 != 0)) {
        FUN_00100190(&LAB_00b12850,PTR_DAT_047d62a8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d62a0);
      }
      puVar6 = PTR_DAT_047d62b0;
      puVar5 = PTR_DAT_047d62a8;
      lVar12 = *(long *)PTR_DAT_047d62a8;
      *(long *)PTR_DAT_047d62b0 = lVar12;
      if ((((lVar12 != 0) && (*(int *)(lVar12 + 0x40) == 5)) &&
          (uVar10 = (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,1), (uVar10 & 1) != 0))
         && (*pcVar13 == '\0')) {
        *pcVar13 = '\x01';
        uVar3 = *(undefined2 *)param_1[1];
        uVar1 = *(undefined4 *)param_1[2];
        uVar2 = *(undefined4 *)param_1[9];
        uVar14 = *(undefined4 *)(*param_2 + 0x1c);
        if (((*puVar4 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d62a0,uVar3,uVar2), iVar8 != 0)) {
          FUN_00100190(uVar14,&LAB_00b12850,PTR_DAT_047d62a8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d62a0);
        }
        lVar12 = *(long *)puVar5;
        *(long *)puVar6 = lVar12;
        if (lVar12 != 0) {
          FUN_00b0d908(uVar14,lVar12,uVar3,uVar2,uVar1);
        }
        *(undefined4 *)(*param_2 + 0x1c) = 0;
      }
    }
  }
  return;
}


