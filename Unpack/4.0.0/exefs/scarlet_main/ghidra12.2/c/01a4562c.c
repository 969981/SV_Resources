/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a4562c; name: FUN_01a4562c
 */


void FUN_01a4562c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  
  puVar14 = *(undefined1 **)(param_1 + 0x170);
  puVar12 = *(undefined1 **)(param_1 + 0x178);
  if (puVar14 != puVar12) {
    if (*(long *)(puVar14 + 8) != *param_2) {
      do {
        puVar10 = puVar14 + 0x10;
        if (puVar12 == puVar10) {
          puVar14 = puVar12;
          break;
        }
        plVar1 = (long *)(puVar14 + 0x18);
        puVar14 = puVar10;
      } while (*plVar1 != *param_2);
    }
  }
  if (puVar12 == puVar14) {
    return;
  }
  uVar8 = FUN_014bfb64(param_1);
  puVar6 = PTR_DAT_047d6ca8;
  puVar5 = PTR_DAT_047d6ca0;
  puVar4 = PTR_DAT_047d6c98;
  puVar3 = PTR_DAT_047d0a08;
  if ((uVar8 & 1) == 0) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar9 = *(long *)puVar5;
    *(long *)puVar6 = lVar9;
    if (((lVar9 == 0) || (lVar9 = *(long *)puVar3, lVar9 == 0)) ||
       (lVar9 = *(long *)(lVar9 + 0xb8), lVar9 == 0)) goto LAB_01a456b8;
    lVar11 = *(long *)(param_1 + 0x170);
    lVar13 = *(long *)(param_1 + 0x178);
    if (lVar11 != lVar13) {
      do {
        if (*(long *)(lVar11 + 8) == lVar9) goto LAB_01a45774;
        lVar11 = lVar11 + 0x10;
      } while (lVar13 != lVar11);
      goto LAB_01a456b8;
    }
LAB_01a45774:
    if ((lVar11 == lVar13) || (*(long *)(lVar11 + 8) == 0)) goto LAB_01a456b8;
  }
  FUN_019b6ee4(param_1,1,*param_2);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar11 = *(long *)puVar5;
  *(long *)puVar6 = lVar11;
  lVar9 = 0;
  if (lVar11 != 0) {
    lVar11 = *(long *)puVar3;
    lVar9 = 0;
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0xb8);
      if (lVar11 == 0) {
LAB_01a458a0:
        lVar9 = 0;
      }
      else {
        lVar13 = *(long *)(param_1 + 0x170);
        lVar2 = *(long *)(param_1 + 0x178);
        if (lVar13 == lVar2) {
LAB_01a45844:
          if (lVar13 == lVar2) goto LAB_01a458a0;
          lVar9 = *(long *)(lVar13 + 8);
        }
        else {
          do {
            if (*(long *)(lVar13 + 8) == lVar11) goto LAB_01a45844;
            lVar13 = lVar13 + 0x10;
            lVar9 = 0;
          } while (lVar2 != lVar13);
        }
      }
    }
  }
  if (*param_2 == lVar9) {
    lVar11 = *(long *)(param_1 + 0x170);
    lVar13 = *(long *)(param_1 + 0x178);
    if (lVar11 != lVar13) {
      while( true ) {
        if (*(long *)(lVar11 + 8) != lVar9) {
          FUN_019b6ee4(param_1,1);
        }
        if (lVar13 == lVar11 + 0x10) break;
        lVar9 = *param_2;
        lVar11 = lVar11 + 0x10;
      }
    }
  }
LAB_01a456b8:
  puVar10 = *(undefined1 **)(param_1 + 0x178);
  puVar12 = puVar14;
  if (puVar14 + 0x10 != puVar10) {
    lVar9 = *(long *)(param_1 + 0x170);
    puVar12 = puVar14 + 0x10;
    *puVar14 = *puVar12;
    *(undefined8 *)(lVar9 + ((long)puVar14 - lVar9 >> 4) * 0x10 + 8) =
         *(undefined8 *)(puVar14 + 0x18);
    if (puVar14 + 0x20 != puVar10) {
      *puVar12 = puVar14[0x20];
      *(undefined8 *)(puVar14 + 0x18) = *(undefined8 *)(puVar14 + 0x28);
      if (puVar14 + 0x30 == puVar10) {
        puVar12 = puVar14 + 0x20;
      }
      else {
        do {
          puVar12 = puVar14;
          puVar12[0x20] = puVar12[0x30];
          *(undefined8 *)(puVar12 + 0x28) = *(undefined8 *)(puVar12 + 0x38);
          puVar14 = puVar12 + 0x10;
        } while (puVar10 + -0x30 != puVar12 + 0x10);
        puVar12 = puVar12 + 0x30;
      }
    }
  }
  *(undefined1 **)(param_1 + 0x178) = puVar12;
  if (*(long *)(param_1 + 0x168) == *param_2) {
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  return;
}


