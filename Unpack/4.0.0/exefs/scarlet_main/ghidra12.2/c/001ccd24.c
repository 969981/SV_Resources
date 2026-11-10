/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ccd24; name: FUN_001ccd24
 */


int FUN_001ccd24(long param_1,char *param_2,char *param_3,int param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  byte bVar12;
  char *pcVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 *puVar16;
  
  puVar10 = (undefined8 *)(param_1 + 0x50);
  FUN_001e04f0(*puVar10);
  *puVar10 = 0;
  if (*(int *)(param_1 + 0x88) == 1) {
    *(undefined4 *)(param_1 + 0x88) = 1;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  pcVar13 = *(char **)(param_1 + 0x60);
  if (pcVar13 == (char *)0x0) {
    pcVar13 = (char *)FUN_001cd0f0(*(undefined8 *)(param_1 + 0x58),"Content-Type");
  }
  pcVar11 = pcVar13;
  if (pcVar13 == (char *)0x0) {
    pcVar11 = param_2;
  }
  if (pcVar11 == (char *)0x0) {
    if (*(int *)(param_1 + 0x18) == 4) {
      pcVar11 = "multipart/mixed";
    }
    else if (*(int *)(param_1 + 0x18) == 2) {
      pcVar11 = (char *)FUN_001ccc9c(*(undefined8 *)(param_1 + 0x68));
      if (((pcVar11 == (char *)0x0) &&
          (pcVar11 = (char *)FUN_001ccc9c(*(undefined8 *)(param_1 + 0x20)), pcVar11 == (char *)0x0))
         && (pcVar11 = (char *)0x0, *(long *)(param_1 + 0x68) != 0)) {
        pcVar11 = "application/octet-stream";
      }
    }
    else {
      pcVar11 = (char *)FUN_001ccc9c(*(undefined8 *)(param_1 + 0x68));
    }
  }
  if (*(int *)(param_1 + 0x18) == 4) {
    lVar15 = *(long *)(param_1 + 0x40);
    puVar16 = (undefined1 *)0x0;
    if (lVar15 != 0) {
      puVar16 = (undefined1 *)(lVar15 + 0x20);
    }
  }
  else {
    lVar15 = 0;
    if ((pcVar13 == (char *)0x0) && (pcVar11 != (char *)0x0)) {
      iVar6 = FUN_001e0990(pcVar11,"text/plain");
      if ((iVar6 != 0) && ((param_4 == 0 || (*(long *)(param_1 + 0x68) == 0)))) {
        pcVar11 = (char *)0x0;
      }
      lVar15 = 0;
      puVar16 = (undefined1 *)0x0;
    }
    else {
      puVar16 = (undefined1 *)0x0;
    }
  }
  lVar7 = FUN_001cd0f0(*(undefined8 *)(param_1 + 0x58),"Content-Disposition");
  if (lVar7 != 0) goto LAB_001cce60;
  if (param_3 == (char *)0x0) {
    if ((*(long *)(param_1 + 0x68) != 0) || (*(long *)(param_1 + 0x70) != 0)) {
LAB_001cceb8:
      param_3 = "attachment";
      goto LAB_001ccec0;
    }
    if (pcVar11 != (char *)0x0) {
      iVar6 = FUN_001e0a34(pcVar11,"multipart/",10);
      if (iVar6 == 0) goto LAB_001cceb8;
      goto LAB_001cce64;
    }
LAB_001ccfdc:
    bVar12 = 0;
  }
  else {
LAB_001ccec0:
    iVar6 = thunk_FUN_001e0990(param_3,"attachment");
    if ((iVar6 == 0) || (*(long *)(param_1 + 0x70) != 0)) {
      if (param_3 != (char *)0x0) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_001ccf24;
        puVar8 = (undefined1 *)FUN_001cd14c();
        if (puVar8 != (undefined1 *)0x0) goto LAB_001ccf28;
        puVar14 = (undefined1 *)0x0;
LAB_001ccf3c:
        iVar6 = 0x1b;
        goto LAB_001ccfa4;
      }
    }
    else if ((param_3 != (char *)0x0) && (*(long *)(param_1 + 0x68) != 0)) {
LAB_001ccf24:
      puVar8 = (undefined1 *)0x0;
LAB_001ccf28:
      if (*(long *)(param_1 + 0x68) == 0) {
        puVar14 = (undefined1 *)0x0;
      }
      else {
        puVar14 = (undefined1 *)FUN_001cd14c();
        if (puVar14 == (undefined1 *)0x0) goto LAB_001ccf3c;
      }
      bVar5 = puVar8 != (undefined1 *)0x0;
      pcVar13 = "";
      if (bVar5) {
        pcVar13 = "; name=\"";
      }
      puVar1 = &DAT_03c886bc;
      if (bVar5) {
        puVar1 = puVar8;
      }
      puVar9 = &DAT_03c886bc;
      if (bVar5) {
        puVar9 = &DAT_03c246d6;
      }
      bVar5 = puVar14 != (undefined1 *)0x0;
      pcVar2 = "";
      if (bVar5) {
        pcVar2 = "; filename=\"";
      }
      puVar3 = &DAT_03c886bc;
      if (bVar5) {
        puVar3 = puVar14;
      }
      puVar4 = &DAT_03c886bc;
      if (bVar5) {
        puVar4 = &DAT_03c246d6;
      }
      iVar6 = FUN_001ccbe0(puVar10,"Content-Disposition: %s%s%s%s%s%s%s",param_3,pcVar13,puVar1,
                           puVar9,pcVar2,puVar3,puVar4);
LAB_001ccfa4:
      FUN_001ec308(puVar8);
      FUN_001ec308(puVar14);
      if (iVar6 != 0) {
        return iVar6;
      }
    }
LAB_001cce60:
    if (pcVar11 == (char *)0x0) goto LAB_001ccfdc;
LAB_001cce64:
    pcVar13 = "";
    if (puVar16 != (undefined1 *)0x0) {
      pcVar13 = "; boundary=";
    }
    puVar8 = &DAT_03c886bc;
    if (puVar16 != (undefined1 *)0x0) {
      puVar8 = puVar16;
    }
    iVar6 = FUN_001ccbe0(puVar10,"Content-Type: %s%s%s",pcVar11,pcVar13,puVar8);
    if (iVar6 != 0) {
      return iVar6;
    }
    bVar12 = 1;
  }
  lVar7 = FUN_001cd0f0(*(undefined8 *)(param_1 + 0x58),"Content-Transfer-Encoding");
  if (lVar7 == 0) {
    if (*(undefined8 **)(param_1 + 0xa0) == (undefined8 *)0x0) {
      if (((bool)(param_4 != 0 | bVar12 ^ 1)) || (*(int *)(param_1 + 0x18) == 4)) goto LAB_001ccff4;
      puVar9 = &DAT_03bec9e5;
    }
    else {
      puVar9 = (undefined *)**(undefined8 **)(param_1 + 0xa0);
      if (puVar9 == (undefined *)0x0) goto LAB_001ccff4;
    }
    iVar6 = FUN_001ccbe0(puVar10,"Content-Transfer-Encoding: %s",puVar9);
    if (iVar6 != 0) {
      return iVar6;
    }
  }
LAB_001ccff4:
  if (*(int *)(param_1 + 0x88) == 1) {
    *(undefined4 *)(param_1 + 0x88) = 1;
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if ((lVar15 != 0) && (*(int *)(param_1 + 0x18) == 4)) {
    iVar6 = FUN_001e0990(pcVar11,"multipart/form-data");
    lVar15 = *(long *)(lVar15 + 0x10);
    pcVar13 = (char *)0x0;
    if (iVar6 != 0) {
      pcVar13 = "form-data";
    }
    for (; lVar15 != 0; lVar15 = *(long *)(lVar15 + 0x10)) {
      iVar6 = FUN_001ccd24(lVar15,0,pcVar13,param_4);
      if (iVar6 != 0) {
        return iVar6;
      }
    }
  }
  return 0;
}


