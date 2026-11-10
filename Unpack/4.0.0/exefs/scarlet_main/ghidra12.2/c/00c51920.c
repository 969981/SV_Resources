/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c51920; name: FUN_00c51920
 */


void FUN_00c51920(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  pcVar10 = *(char **)(param_1 + 0x1a0);
  cVar4 = *pcVar10;
  if (cVar4 == '\0' || *(char *)(param_2 + 0x6b) == '\0') {
    if (*(char *)(param_2 + 0x6b) != '\0' || cVar4 != '\0') {
      uVar7 = *(undefined8 *)(pcVar10 + 8);
      param_2[0x6b] = *(undefined8 *)pcVar10;
      param_2[0x6c] = uVar7;
      if (cVar4 != '\0') goto LAB_00c51974;
    }
  }
  else if (*(long *)(pcVar10 + 8) != param_2[0x6c]) {
    uVar7 = *(undefined8 *)(pcVar10 + 8);
    param_2[0x6b] = *(undefined8 *)pcVar10;
    param_2[0x6c] = uVar7;
LAB_00c51974:
    plVar6 = (long *)FUN_00c53224(*param_2,pcVar10);
    (**(code **)PTR_DAT_047e0d20)(param_2[5],(ulong)(plVar6[1] - *plVar6) >> 2);
  }
  pcVar8 = pcVar10 + 0x10;
  cVar4 = *pcVar8;
  if ((cVar4 == '\0') || (*(char *)(param_2 + 0x6d) == '\0')) {
    if (*(char *)(param_2 + 0x6d) == '\0' && cVar4 == '\0') goto LAB_00c519f8;
    uVar7 = *(undefined8 *)(pcVar10 + 0x18);
    param_2[0x6d] = *(undefined8 *)pcVar8;
    param_2[0x6e] = uVar7;
    if (cVar4 == '\0') goto LAB_00c519f8;
  }
  else {
    if (*(long *)(pcVar10 + 0x18) == param_2[0x6e]) goto LAB_00c519f8;
    uVar7 = *(undefined8 *)(pcVar10 + 0x18);
    param_2[0x6d] = *(undefined8 *)pcVar8;
    param_2[0x6e] = uVar7;
  }
  plVar6 = (long *)FUN_00c533c4(*param_2);
  (**(code **)PTR_DAT_047e0d28)(param_2[5],(ulong)(plVar6[1] - *plVar6) >> 3);
LAB_00c519f8:
  puVar5 = PTR_DAT_047e0d30;
  puVar2 = *(uint **)(pcVar10 + 0x20);
  puVar3 = *(uint **)(pcVar10 + 0x28);
  do {
    if (puVar2 == puVar3) {
      return;
    }
    uVar11 = (ulong)*puVar2;
    pcVar10 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(*(long *)(puVar2 + 2) + 0x70) + 0x110),
                                   *(long *)(puVar2 + 2) + 0x30);
    cVar4 = *pcVar10;
    if (*(char *)(param_2 + uVar11 * 2 + 0x3b) == '\0' || cVar4 == '\0') {
      if (cVar4 != '\0' || *(char *)(param_2 + uVar11 * 2 + 0x3b) != '\0') {
        if (cVar4 != '\0') {
          lVar9 = *(long *)(pcVar10 + 8);
          goto LAB_00c51a50;
        }
LAB_00c51aa4:
        uVar7 = *(undefined8 *)(pcVar10 + 8);
        param_2[uVar11 * 2 + 0x3b] = *(undefined8 *)pcVar10;
        param_2[uVar11 * 2 + 0x3c] = uVar7;
      }
    }
    else {
      lVar9 = *(long *)(pcVar10 + 8);
      if (param_2[uVar11 * 2 + 0x3c] != lVar9) {
LAB_00c51a50:
        lVar1 = 0;
        if (cVar4 != '\0') {
          lVar1 = lVar9;
        }
        uVar12 = *(undefined8 *)(lVar1 + 0x20);
        uVar13 = param_2[5];
        uVar7 = (**(code **)PTR_DAT_047e0be8)(uVar12);
        uVar12 = (**(code **)PTR_DAT_047e0bf8)(uVar12);
        (**(code **)puVar5)(uVar13,uVar11,uVar7,uVar12);
        goto LAB_00c51aa4;
      }
    }
    puVar2 = puVar2 + 4;
  } while( true );
}


