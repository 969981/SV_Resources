/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012de380; name: FUN_012de380
 */


undefined8 FUN_012de380(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_047d1a08;
  if (DAT_048855b8 != '\0') {
    return 0;
  }
  uVar5 = *param_1;
  uVar8 = param_1[2];
  *(undefined8 *)(PTR_DAT_047d1a08 + 8) = param_1[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 *)puVar2 = uVar5;
  DAT_04885688 = param_1[7];
  if (DAT_04885688 == 0) {
    DAT_04885678 = param_1[5];
    DAT_04885680 = param_1[6];
    uVar5 = param_1[8];
  }
  else {
    uVar5 = param_1[8];
    DAT_04885678 = 0;
    DAT_04885680 = 0;
  }
  DAT_04885670 = 0;
  DAT_04885668 = 1;
  DAT_04885660 = 0xffffffff;
  DAT_04885658 = &PTR_LAB_046ab0d8;
  DAT_046aaf68 = 0;
  DAT_04885628 = &DAT_04885658;
  DAT_04885690 = uVar5;
  if (*(char *)((long)param_1 + 0x49) == '\0') {
    DAT_046ab098 = *param_1;
    DAT_046ab0a0 = param_1[1];
    ppuVar4 = &PTR_PTR_046ab088;
    DAT_046ab0a8 = param_1[2];
  }
  else {
    ppuVar4 = (undefined **)param_1[10];
    plVar1 = (long *)PTR_DAT_047e5fb8;
    if ((long *)param_1[0xb] != (long *)0x0) {
      plVar1 = (long *)param_1[0xb];
    }
    if (ppuVar4 == (undefined **)0x0) {
      local_38 = 0x90;
      ppuVar4 = (undefined **)(**(code **)(*plVar1 + 0x10))(plVar1,&local_38);
      FUN_0322f5e8(ppuVar4,plVar1);
      uVar5 = param_1[8];
      DAT_04885698 = ppuVar4;
      DAT_048856a0 = plVar1;
    }
  }
  FUN_03240e4c(ppuVar4,param_1[3],param_1[4],uVar5,*(undefined1 *)(param_1 + 9));
  nn::os::GetSystemTickFrequency();
  puVar6 = (undefined8 *)PTR_DAT_047e5fd8;
  puVar12 = (undefined8 *)PTR_DAT_047e5fd0;
  puVar11 = (undefined8 *)PTR_DAT_047e5fc8;
  puVar2 = PTR_DAT_047e5fc0;
  if (DAT_048855b0 != &DAT_04885580) {
    puVar7 = DAT_048855b0;
    do {
      puVar9 = puVar7;
      if (puVar9 == (undefined8 *)0x0) {
        puVar7 = DAT_048855b0;
        if (DAT_048855b0 != (undefined8 *)PTR_DAT_047e5fd0) goto LAB_012de534;
        goto LAB_012de570;
      }
      puVar7 = (undefined8 *)puVar9[4];
    } while ((undefined8 *)puVar9[4] != &DAT_04885580);
    puVar9[4] = DAT_048855a0;
    DAT_048855a0 = DAT_048855b0;
    DAT_048855b0 = &DAT_04885580;
  }
  puVar7 = &DAT_04885580;
LAB_012de534:
  puVar9 = puVar7;
  do {
    puVar10 = puVar9;
    if (puVar10 == (undefined8 *)0x0) {
      if (puVar7 == puVar6) goto LAB_012de59c;
      puVar12 = puVar7;
      goto LAB_012de570;
    }
    puVar9 = (undefined8 *)puVar10[4];
  } while ((undefined8 *)puVar10[4] != puVar12);
  puVar10[4] = *(undefined8 *)((long)puVar12 + 0x20);
  *(undefined8 **)((long)puVar12 + 0x20) = puVar7;
  DAT_048855b0 = puVar12;
  puVar7 = puVar12;
LAB_012de570:
  puVar9 = puVar12;
  do {
    puVar10 = puVar9;
    if (puVar10 == (undefined8 *)0x0) {
      puVar6 = puVar12;
      if (puVar12 != puVar11) goto LAB_012de5b0;
      goto LAB_012de5dc;
    }
    puVar9 = (undefined8 *)puVar10[4];
  } while ((undefined8 *)puVar10[4] != puVar6);
  puVar10[4] = *(undefined8 *)((long)puVar6 + 0x20);
  *(undefined8 **)((long)puVar6 + 0x20) = puVar7;
  DAT_048855b0 = puVar6;
  puVar7 = puVar6;
LAB_012de59c:
  puVar12 = puVar6;
LAB_012de5b0:
  do {
    puVar9 = puVar6;
    if (puVar9 == (undefined8 *)0x0) goto LAB_012de5dc;
    puVar6 = (undefined8 *)puVar9[4];
  } while ((undefined8 *)puVar9[4] != puVar11);
  puVar9[4] = *(undefined8 *)((long)puVar11 + 0x20);
  *(undefined8 **)((long)puVar11 + 0x20) = puVar12;
  DAT_048855b0 = puVar11;
LAB_012de5e4:
  puVar12 = puVar11;
  do {
    puVar6 = puVar12;
    if (puVar6 == (undefined8 *)0x0) {
      if (puVar11 != &DAT_04884e00) goto LAB_012de61c;
      goto LAB_012de644;
    }
    puVar12 = (undefined8 *)puVar6[4];
  } while ((undefined8 *)puVar6[4] != &DAT_048834d0);
  puVar6[4] = DAT_048834f0;
  DAT_048855b0 = &DAT_048834d0;
  DAT_048834f0 = puVar11;
LAB_012de60c:
  puVar11 = &DAT_048834d0;
LAB_012de61c:
  puVar12 = puVar11;
  do {
    puVar6 = puVar12;
    if (puVar6 == (undefined8 *)0x0) {
      if (puVar11 != (undefined8 *)puVar2) goto LAB_012de654;
      goto LAB_012de67c;
    }
    puVar12 = (undefined8 *)puVar6[4];
  } while ((undefined8 *)puVar6[4] != &DAT_04884e00);
  puVar6[4] = DAT_04884e20;
  DAT_048855b0 = &DAT_04884e00;
  DAT_04884e20 = puVar11;
LAB_012de644:
  puVar11 = &DAT_04884e00;
LAB_012de654:
  puVar12 = puVar11;
  do {
    puVar6 = puVar12;
    if (puVar6 == (undefined8 *)0x0) {
      if (puVar11 != (undefined8 *)0x0) goto LAB_012de688;
      goto LAB_012de6f4;
    }
    puVar12 = (undefined8 *)puVar6[4];
  } while ((undefined8 *)puVar6[4] != (undefined8 *)puVar2);
  puVar6[4] = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 **)(puVar2 + 0x20) = puVar11;
  DAT_048855b0 = (undefined8 *)puVar2;
LAB_012de67c:
  puVar11 = (undefined8 *)puVar2;
LAB_012de688:
  puVar12 = puVar11;
  do {
    if (((char *)*puVar12 != (char *)0x0) &&
       (iVar3 = strcmp((char *)*puVar12,"Set Keycodes"), iVar3 == 0)) {
      if (puVar11 != (undefined8 *)0x0) {
        goto LAB_012de6bc;
      }
      break;
    }
    puVar12 = (undefined8 *)puVar12[4];
  } while (puVar12 != (undefined8 *)0x0);
LAB_012de6f4:
  puVar11 = &DAT_04885630;
  do {
    if ((code *)puVar11[1] != (code *)0x0) {
      (*(code *)puVar11[1])(puVar11[3]);
    }
    puVar11 = (undefined8 *)puVar11[4];
  } while (puVar11 != (undefined8 *)0x0);
  DAT_048855b8 = 1;
  return 0;
LAB_012de5dc:
  puVar11 = puVar7;
  if (puVar11 != &DAT_048834d0) goto LAB_012de5e4;
  goto LAB_012de60c;
LAB_012de6bc:
  puVar6 = puVar11 + 4;
  puVar7 = (undefined8 *)*puVar6;
  if (puVar7 == (undefined8 *)0x0) goto LAB_012de6e4;
  if (puVar7 == puVar12) {
    puVar7 = (undefined8 *)puVar12[4];
    *puVar6 = puVar7;
    if (puVar7 == (undefined8 *)0x0) goto LAB_012de6e4;
  }
  puVar11 = puVar7;
  goto LAB_012de6bc;
LAB_012de6e4:
  if (puVar11 != puVar12) {
    *puVar6 = puVar12;
    puVar12[4] = 0;
  }
  goto LAB_012de6f4;
}


