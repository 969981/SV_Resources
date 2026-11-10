/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c52e20; name: FUN_00c52e20
 */


void FUN_00c52e20(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
  pcVar5 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar7 + 0x70) + 0x110),lVar7 + 0x30);
  cVar2 = *pcVar5;
  if ((*(char *)(param_2 + 0x300) == '\0') || (cVar2 == '\0')) {
    if (cVar2 != '\0' && (cVar2 != '\0' || *(char *)(param_2 + 0x300) != '\0')) {
      lVar7 = *(long *)(pcVar5 + 8);
      goto LAB_00c531f4;
    }
  }
  else {
    lVar7 = *(long *)(pcVar5 + 8);
    if (*(long *)(param_2 + 0x308) != lVar7) {
LAB_00c531f4:
      lVar1 = 0;
      if (cVar2 != '\0') {
        lVar1 = lVar7;
      }
      uVar6 = (**(code **)PTR_DAT_047e0be8)(*(undefined8 *)(lVar1 + 0x20));
      *(undefined8 *)(param_2 + 0x310) = uVar6;
      uVar6 = *(undefined8 *)(pcVar5 + 8);
      *(undefined8 *)(param_2 + 0x300) = *(undefined8 *)pcVar5;
      *(undefined8 *)(param_2 + 0x308) = uVar6;
    }
  }
  puVar4 = PTR_DAT_047e0c00;
  puVar3 = PTR_DAT_047e0bf8;
  plVar8 = *(long **)(param_1 + 0x38);
  if ((char)plVar8[5] != '\0') {
    FUN_00c59d54(param_2);
    return;
  }
  lVar7 = *plVar8;
  if (lVar7 != 0) {
    pcVar5 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar7 + 0x70) + 0x110),lVar7 + 0x30);
    cVar2 = *pcVar5;
    if ((*(char *)(param_2 + 0x318) == '\0') || (cVar2 == '\0')) {
      if (cVar2 != '\0' || *(char *)(param_2 + 0x318) != '\0') {
        if (cVar2 != '\0') {
          lVar7 = *(long *)(pcVar5 + 8);
          goto LAB_00c52ed4;
        }
        goto LAB_00c52f20;
      }
    }
    else {
      lVar7 = *(long *)(pcVar5 + 8);
      if (*(long *)(param_2 + 800) != lVar7) {
LAB_00c52ed4:
        lVar1 = 0;
        if (cVar2 != '\0') {
          lVar1 = lVar7;
        }
        uVar9 = *(undefined8 *)(lVar1 + 0x20);
        uVar10 = *(undefined8 *)(param_2 + 0x28);
        uVar6 = (**(code **)PTR_DAT_047e0be8)(uVar9);
        uVar9 = (**(code **)puVar3)(uVar9);
        (**(code **)puVar4)(uVar10,0,uVar6,uVar9);
LAB_00c52f20:
        uVar6 = *(undefined8 *)(pcVar5 + 8);
        *(undefined8 *)(param_2 + 0x318) = *(undefined8 *)pcVar5;
        *(undefined8 *)(param_2 + 800) = uVar6;
      }
    }
    plVar8 = *(long **)(param_1 + 0x38);
  }
  lVar7 = plVar8[1];
  if (lVar7 != 0) {
    pcVar5 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar7 + 0x70) + 0x110),lVar7 + 0x30);
    cVar2 = *pcVar5;
    if ((*(char *)(param_2 + 0x328) == '\0') || (cVar2 == '\0')) {
      if (cVar2 != '\0' || *(char *)(param_2 + 0x328) != '\0') {
        if (cVar2 != '\0') {
          lVar7 = *(long *)(pcVar5 + 8);
          goto LAB_00c52f6c;
        }
        goto LAB_00c52fb8;
      }
    }
    else {
      lVar7 = *(long *)(pcVar5 + 8);
      if (*(long *)(param_2 + 0x330) != lVar7) {
LAB_00c52f6c:
        lVar1 = 0;
        if (cVar2 != '\0') {
          lVar1 = lVar7;
        }
        uVar9 = *(undefined8 *)(lVar1 + 0x20);
        uVar10 = *(undefined8 *)(param_2 + 0x28);
        uVar6 = (**(code **)PTR_DAT_047e0be8)(uVar9);
        uVar9 = (**(code **)puVar3)(uVar9);
        (**(code **)puVar4)(uVar10,1,uVar6,uVar9);
LAB_00c52fb8:
        uVar6 = *(undefined8 *)(pcVar5 + 8);
        *(undefined8 *)(param_2 + 0x328) = *(undefined8 *)pcVar5;
        *(undefined8 *)(param_2 + 0x330) = uVar6;
      }
    }
    plVar8 = *(long **)(param_1 + 0x38);
  }
  lVar7 = plVar8[2];
  if (lVar7 != 0) {
    pcVar5 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar7 + 0x70) + 0x110),lVar7 + 0x30);
    cVar2 = *pcVar5;
    if ((*(char *)(param_2 + 0x338) == '\0') || (cVar2 == '\0')) {
      if (cVar2 != '\0' || *(char *)(param_2 + 0x338) != '\0') {
        if (cVar2 != '\0') {
          lVar7 = *(long *)(pcVar5 + 8);
          goto LAB_00c53004;
        }
        goto LAB_00c53050;
      }
    }
    else {
      lVar7 = *(long *)(pcVar5 + 8);
      if (*(long *)(param_2 + 0x340) != lVar7) {
LAB_00c53004:
        lVar1 = 0;
        if (cVar2 != '\0') {
          lVar1 = lVar7;
        }
        uVar9 = *(undefined8 *)(lVar1 + 0x20);
        uVar10 = *(undefined8 *)(param_2 + 0x28);
        uVar6 = (**(code **)PTR_DAT_047e0be8)(uVar9);
        uVar9 = (**(code **)puVar3)(uVar9);
        (**(code **)puVar4)(uVar10,2,uVar6,uVar9);
LAB_00c53050:
        uVar6 = *(undefined8 *)(pcVar5 + 8);
        *(undefined8 *)(param_2 + 0x338) = *(undefined8 *)pcVar5;
        *(undefined8 *)(param_2 + 0x340) = uVar6;
      }
    }
    plVar8 = *(long **)(param_1 + 0x38);
  }
  lVar7 = plVar8[3];
  if (lVar7 == 0) goto LAB_00c530f8;
  pcVar5 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar7 + 0x70) + 0x110),lVar7 + 0x30);
  cVar2 = *pcVar5;
  if ((*(char *)(param_2 + 0x348) == '\0') || (cVar2 == '\0')) {
    if (cVar2 != '\0' || *(char *)(param_2 + 0x348) != '\0') {
      if (cVar2 != '\0') {
        lVar7 = *(long *)(pcVar5 + 8);
        goto LAB_00c5309c;
      }
      goto LAB_00c530e8;
    }
  }
  else {
    lVar7 = *(long *)(pcVar5 + 8);
    if (*(long *)(param_2 + 0x350) != lVar7) {
LAB_00c5309c:
      lVar1 = 0;
      if (cVar2 != '\0') {
        lVar1 = lVar7;
      }
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      uVar6 = (**(code **)PTR_DAT_047e0be8)(uVar9);
      uVar9 = (**(code **)puVar3)(uVar9);
      (**(code **)puVar4)(uVar10,3,uVar6,uVar9);
LAB_00c530e8:
      uVar6 = *(undefined8 *)(pcVar5 + 8);
      *(undefined8 *)(param_2 + 0x348) = *(undefined8 *)pcVar5;
      *(undefined8 *)(param_2 + 0x350) = uVar6;
    }
  }
  plVar8 = *(long **)(param_1 + 0x38);
LAB_00c530f8:
  puVar3 = PTR_DAT_047e0c08;
  (**(code **)PTR_DAT_047e0c08)
            (*(undefined8 *)(param_2 + 0x28),*(undefined1 *)((long)plVar8 + 0x29));
  (**(code **)PTR_DAT_047e0c10)(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x310));
  FUN_00c51ef8(param_1,param_2);
  (**(code **)PTR_DAT_047e0c18)(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x310));
                    /* WARNING: Could not recover jumptable at 0x00c5316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)puVar3)(*(undefined8 *)(param_2 + 0x28),0);
  return;
}


