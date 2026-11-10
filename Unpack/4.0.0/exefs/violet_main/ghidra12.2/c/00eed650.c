/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eed650; name: FUN_00eed650
 */


void FUN_00eed650(long param_1)

{
  short sVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  char *pcVar18;
  undefined1 auStack_7c [28];
  
  plVar16 = (long *)(param_1 + 0x70);
  FUN_00eeef6c(*plVar16,*(undefined1 *)(*(long *)PTR_DAT_047d90c8 + 0x3d0));
  FUN_00eee5f0(*plVar16,0,0);
  FUN_00eee290(*plVar16,0,0);
  FUN_00eedf30(*plVar16,0,0);
  FUN_00eee5f0(*plVar16,1,0);
  FUN_00eee290(*plVar16,1,0);
  FUN_00eedf30(*plVar16,1,0);
  FUN_00eee5f0(*plVar16,2,0);
  FUN_00eee290(*plVar16,2,0);
  FUN_00eedf30(*plVar16,2,0);
  FUN_00eee5f0(*plVar16,3,0);
  FUN_00eee290(*plVar16,3,0);
  FUN_00eedf30(*plVar16,3,0);
  uVar5 = FUN_00cf44f4(*plVar16);
  uVar6 = FUN_00cf41a8(*plVar16);
  if (*(long *)(*plVar16 + 8) == 0) {
    uVar8 = FUN_00cf44f4();
    uVar9 = FUN_00cf41a8(*plVar16);
    uVar10 = FUN_00f14b64(*plVar16);
    uVar7 = FUN_00f13da0(uVar8,uVar9,uVar10);
    uVar7 = uVar7 & 0xff;
  }
  else {
    uVar7 = FUN_00e9987c();
  }
  if (((*PTR_DAT_047d7430 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar12 = *(undefined8 *)PTR_DAT_047d7438;
  *(undefined8 *)PTR_DAT_047d7440 = uVar12;
  puVar13 = (uint *)FUN_00f73a90(uVar12,uVar5,uVar6);
  if ((puVar13 != (uint *)0x0) && (uVar17 = (ulong)*puVar13, *puVar13 != 0)) {
    pcVar18 = (char *)((long)puVar13 + 6);
    do {
      if ((int)*pcVar18 != 0xfffffffd) {
        if ((uVar7 & 0xff) < ((int)*pcVar18 & 0xffffU)) break;
        sVar1 = *(short *)(pcVar18 + -2);
        sVar4 = FUN_00eedbc8(*plVar16,0);
        if ((((sVar1 != sVar4) && (sVar4 = FUN_00eedbc8(*plVar16,1), sVar1 != sVar4)) &&
            (sVar4 = FUN_00eedbc8(*plVar16,2), sVar1 != sVar4)) &&
           (sVar4 = FUN_00eedbc8(*plVar16,3), sVar1 != sVar4)) {
          sVar4 = FUN_00eedbc8(*plVar16,0);
          if (sVar4 == 0) {
            uVar12 = 0;
LAB_00eeda00:
            uVar5 = FUN_00cf5fe0(sVar1,0);
            FUN_00eee5f0(*plVar16,uVar12,sVar1);
            FUN_00eee290(*plVar16,uVar12,0);
            lVar14 = *plVar16;
          }
          else {
            uVar12 = 1;
            sVar4 = FUN_00eedbc8(*plVar16,1);
            if (sVar4 == 0) goto LAB_00eeda00;
            uVar12 = 2;
            sVar4 = FUN_00eedbc8(*plVar16,2);
            if (sVar4 == 0) goto LAB_00eeda00;
            uVar12 = 3;
            sVar4 = FUN_00eedbc8(*plVar16,3);
            if (sVar4 == 0) goto LAB_00eeda00;
            uVar5 = FUN_00eedbc8(*plVar16,1);
            uVar6 = FUN_00eee950(*plVar16,1);
            uVar8 = FUN_00cf61d4(*plVar16,1);
            FUN_00eee5f0(*plVar16,0,uVar5);
            FUN_00eedf30(*plVar16,0,uVar6);
            FUN_00eee290(*plVar16,0,uVar8);
            uVar5 = FUN_00eedbc8(*plVar16,2);
            uVar6 = FUN_00eee950(*plVar16,2);
            uVar8 = FUN_00cf61d4(*plVar16,2);
            FUN_00eee5f0(*plVar16,1,uVar5);
            FUN_00eedf30(*plVar16,1,uVar6);
            FUN_00eee290(*plVar16,1,uVar8);
            uVar5 = FUN_00eedbc8(*plVar16,3);
            uVar6 = FUN_00eee950(*plVar16,3);
            uVar8 = FUN_00cf61d4(*plVar16,3);
            FUN_00eee5f0(*plVar16,2,uVar5);
            FUN_00eedf30(*plVar16,2,uVar6);
            FUN_00eee290(*plVar16,2,uVar8);
            uVar5 = FUN_00cf5fe0(sVar1,0);
            FUN_00eee5f0(*plVar16,3,sVar1);
            FUN_00eee290(*plVar16,3,0);
            lVar14 = *plVar16;
            uVar12 = 3;
          }
          FUN_00eedf30(lVar14,uVar12,uVar5);
        }
      }
      uVar17 = uVar17 - 1;
      pcVar18 = pcVar18 + 4;
    } while (uVar17 != 0);
  }
  uVar5 = FUN_00cf44f4(*plVar16);
  lVar15 = *plVar16;
  plVar16 = (long *)(lVar15 + 0x20);
  lVar14 = nn::os::GetCurrentThread();
  while (*plVar16 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar3) {
      *plVar16 = lVar14;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00eeda6c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x28));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x28));
        while (*plVar16 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar14;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00eeda6c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar3) {
      *plVar16 = lVar14;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00eeda6c:
  uVar6 = FUN_0100bd94(lVar15);
  *(undefined8 *)(lVar15 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x28));
  FUN_0100bbbc(auStack_7c,uVar5,uVar6);
  FUN_0100c3a8(*(undefined8 *)(param_1 + 0x70),auStack_7c);
  FUN_0100c048(*(undefined8 *)(param_1 + 0x70),0);
  FUN_00f8921c(*(undefined8 *)(param_1 + 0x70),0x13);
  FUN_00eeecb8(*(undefined8 *)(param_1 + 0x70),0x13);
  uVar5 = FUN_00d75438(*(undefined8 *)(param_1 + 0x70));
  FUN_00f14810(*(undefined8 *)(param_1 + 0x70),uVar5);
  FUN_00deb388(*(undefined8 *)(param_1 + 0x70),0);
  FUN_00deb1b4(param_1);
  return;
}


