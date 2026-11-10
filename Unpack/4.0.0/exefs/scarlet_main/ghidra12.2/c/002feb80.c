/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002feb80; name: FUN_002feb80
 */


int FUN_002feb80(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  size_t sVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  char *__s;
  long lVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  ulong uVar18;
  
  FUN_0038dcd0(&DAT_047ef3a0,&LAB_002fef00);
  if ((param_2 == (undefined8 *)0x0) || ((*param_2 = 0, param_1[1] == 0 && (param_1[2] == 0)))) {
    return 2;
  }
  FUN_003a0d40();
  lVar6 = FUN_003b4900();
  if (lVar6 == 0) {
    return 2;
  }
  FUN_003b3f20(lVar6,0x7b,0x303,0);
  FUN_003b3f20(lVar6,0x7c,0x303,0);
  plVar7 = (long *)FUN_0038c7b0(0x30);
  if (plVar7 == (long *)0x0) goto LAB_002feef8;
  *plVar7 = (long)&DAT_047ef3a8;
  FUN_0038da50(plVar7 + 1,1);
  *plVar7 = (long)&PTR_FUN_04494470;
  plVar7[2] = lVar6;
  lVar15 = param_1[6];
  if (lVar15 != 0) {
    plVar1 = (long *)(lVar15 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar14 = (undefined8 *)plVar7[5];
    if (puVar14 != (undefined8 *)0x0) {
      plVar1 = puVar14 + 1;
      do {
        lVar13 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)*puVar14)(puVar14);
        FUN_0049e790(PTR_LAB_047cba48,puVar14);
      }
    }
    plVar7[5] = lVar15;
    FUN_003b54b0(lVar6,DAT_04494468,plVar7);
    FUN_003b9ee0(lVar6,&LAB_002fef70);
    FUN_003b3f20(lVar6,0x2c,1,0);
  }
  iVar4 = FUN_002ff010(lVar6,*param_1,param_1[3]);
  if (iVar4 != 0) goto LAB_002fecd4;
  if ((undefined8 *)param_1[2] == (undefined8 *)0x0) {
LAB_002fed4c:
    __s = (char *)param_1[1];
    sVar8 = strlen(__s);
    uVar9 = FUN_003b54d0(lVar6);
    FUN_00485670(uVar9,0x88000);
    iVar4 = FUN_002fe630(uVar9,__s,sVar8,0);
    if (iVar4 != 0) goto LAB_002fecd4;
  }
  else {
    FUN_004847f0(*(undefined8 *)param_1[2]);
    FUN_003b54e0(lVar6,*(undefined8 *)param_1[2]);
    if (param_1[2] == 0) goto LAB_002fed4c;
  }
  uVar12 = param_1[5];
  if (uVar12 == 0) {
LAB_002feea0:
    puVar10 = &LAB_002ff2f0;
    if (*(char *)(param_1 + 7) != '\0') {
      puVar10 = &LAB_002ff2e0;
    }
    FUN_003b4ce0(lVar6,1,puVar10);
    *param_2 = plVar7;
    return 0;
  }
  puVar14 = (undefined8 *)param_1[4];
  puVar17 = (ulong *)(plVar7 + 3);
  *puVar17 = 0;
  plVar7[4] = 0;
  if ((uVar12 & 0xffff) != 0) {
    lVar15 = 0;
    puVar16 = puVar14;
    uVar18 = uVar12 & 0xffff;
    do {
      if (((char *)*puVar16 == (char *)0x0) || (sVar8 = strlen((char *)*puVar16), 0xfe < sVar8 - 1))
      goto LAB_002fee74;
      lVar15 = lVar15 + sVar8 + 1;
      uVar18 = uVar18 - 1;
      puVar16 = puVar16 + 1;
      plVar7[4] = lVar15;
    } while (uVar18 != 0);
    puVar10 = (undefined1 *)FUN_0038c780(lVar15);
    *puVar17 = (ulong)puVar10;
    if (puVar10 == (undefined1 *)0x0) {
      iVar4 = 0xc;
      goto LAB_002fecd4;
    }
    uVar18 = 0;
    do {
      sVar8 = strlen((char *)puVar14[uVar18]);
      *puVar10 = (char)sVar8;
      memcpy(puVar10 + 1,(void *)puVar14[uVar18],sVar8);
      uVar18 = uVar18 + 1;
      puVar10 = puVar10 + 1 + sVar8;
    } while (uVar18 < (uVar12 & 0xffff));
    uVar12 = (long)puVar10 - (long)*puVar17;
    if ((puVar10 < (undefined1 *)*puVar17) || (uVar12 != plVar7[4])) {
      iVar4 = 7;
      goto LAB_002fecd4;
    }
    if (0xfffffffe < uVar12) {
LAB_002feef8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar4 = FUN_003b47d0(lVar6);
    if (iVar4 == 0) {
      FUN_003b47c0(lVar6,&LAB_002ff220,plVar7);
      goto LAB_002feea0;
    }
  }
LAB_002fee74:
  iVar4 = 2;
LAB_002fecd4:
  iVar5 = FUN_0038dac0(plVar7 + 1);
  if (iVar5 == 0) {
    return iVar4;
  }
  if ((undefined8 *)*plVar7 == (undefined8 *)0x0) {
    return iVar4;
  }
  pcVar11 = *(code **)*plVar7;
  if (pcVar11 == (code *)0x0) {
    return iVar4;
  }
  (*pcVar11)(plVar7);
  return iVar4;
}


