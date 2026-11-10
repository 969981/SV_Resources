/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034620e8; name: FUN_034620e8
 */


undefined8 FUN_034620e8(long *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined *puVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long lVar18;
  char acStack_60 [32];
  
  nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
  uVar11 = param_2[1];
  if (param_2[10] == 2) {
    lVar18 = *(long *)(param_2 + 0xc);
  }
  else {
    lVar18 = 0;
  }
  nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
  puVar10 = PTR_DAT_047e70e0;
  uVar6 = *(uint *)(param_1 + 0x16);
  if (uVar6 != 0) {
    uVar3 = uVar11 + (int)lVar18;
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar3 / uVar6;
    }
    for (puVar17 = *(uint **)(param_1[0x15] + (ulong)(uVar3 - uVar9 * uVar6) * 8);
        puVar17 != (uint *)0x0; puVar17 = *(uint **)(puVar17 + 4)) {
      if ((*puVar17 == uVar11) && (*(long *)(puVar17 + 2) == lVar18)) {
        nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
        if ((puVar17[0x1a] & 1) == 0) {
          nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
          uVar6 = *param_2;
          uVar11 = 0;
          if (7 < uVar6) goto LAB_034623b4;
          uVar3 = 1 << (ulong)(uVar6 & 0x1f);
          if ((uVar3 & 3) == 0) {
            if ((uVar3 & 0xc) != 0) {
              uVar11 = param_2[0xe];
              if (param_2[0xc] != 1) {
                uVar11 = 0;
              }
              goto LAB_034623b4;
            }
            if ((1 << (ulong)(uVar6 & 0x1f) & 0xc0U) == 0) goto LAB_034623b4;
          }
          uVar11 = param_2[1];
LAB_034623b4:
          uVar12 = *(undefined8 *)(param_2 + 0xc);
          pcVar4 = *(code **)(param_2 + 6);
          uVar5 = *(ulong *)(param_2 + 8);
          if (param_2[10] != 2) {
            uVar12 = 0;
          }
          *(undefined4 *)((long)param_1 + 0xf4) = 2;
          if (pcVar4 == (code *)0x0) {
            return 2;
          }
          puVar13 = (ulong *)param_1[0x1f];
          if (puVar13 == (ulong *)0x0) {
            return 2;
          }
          while ((*puVar13 >> 0x3e != 0 || (puVar13[1] != uVar5))) {
            puVar13 = (ulong *)(*puVar13 & 0x3fffffffffffffff);
            if (puVar13 == (ulong *)0x0) {
              return 2;
            }
          }
          (*pcVar4)(uVar11,uVar12,2,uVar5);
          puVar13 = (ulong *)param_1[0x1f];
          do {
            if (puVar13 == (ulong *)0x0) {
              return 2;
            }
            while ((uVar14 = *puVar13, uVar14 >> 0x3e == 0 && (puVar13[1] == uVar5))) {
              while (*puVar13 == uVar14) {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(puVar13,0x10);
                if (bVar8) {
                  *puVar13 = uVar14 | 0x4000000000000000;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') {
                  return 2;
                }
              }
              ClearExclusiveLocal();
            }
            puVar13 = (ulong *)(*puVar13 & 0x3fffffffffffffff);
          } while( true );
        }
        nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
        uVar6 = *(uint *)(param_1 + 0x16);
        if (uVar6 == 0) goto LAB_03462434;
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar3 / uVar6;
        }
        puVar2 = (uint *)(param_1[0x15] + (ulong)(uVar3 - uVar9 * uVar6) * 8);
        puVar16 = *(uint **)puVar2;
        if (puVar16 == (uint *)0x0) goto LAB_03462434;
        puVar15 = (uint *)0x0;
        goto LAB_03462378;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
  nn::os::UnlockMutex((MutexType *)puVar10);
  if (*(long *)(param_2 + 2) == 0) {
    snprintf(acStack_60,0x20,"%u",(ulong)param_2[1]);
  }
  uVar6 = *param_2;
  uVar11 = 0;
  if (7 < uVar6) goto LAB_03462204;
  uVar3 = 1 << (ulong)(uVar6 & 0x1f);
  if ((uVar3 & 3) == 0) {
    if ((uVar3 & 0xc) != 0) {
      uVar11 = param_2[0xe];
      if (param_2[0xc] != 1) {
        uVar11 = 0;
      }
      goto LAB_03462204;
    }
    if ((1 << (ulong)(uVar6 & 0x1f) & 0xc0U) == 0) goto LAB_03462204;
  }
  uVar11 = param_2[1];
LAB_03462204:
  uVar12 = *(undefined8 *)(param_2 + 0xc);
  pcVar4 = *(code **)(param_2 + 6);
  uVar5 = *(ulong *)(param_2 + 8);
  if (param_2[10] != 2) {
    uVar12 = 0;
  }
  *(undefined4 *)((long)param_1 + 0xf4) = 0x36;
  if (pcVar4 != (code *)0x0) {
    for (puVar13 = (ulong *)param_1[0x1f]; puVar13 != (ulong *)0x0;
        puVar13 = (ulong *)(*puVar13 & 0x3fffffffffffffff)) {
      if ((*puVar13 >> 0x3e == 0) && (puVar13[1] == uVar5)) {
        (*pcVar4)(uVar11,uVar12,0x36,uVar5);
        puVar13 = (ulong *)param_1[0x1f];
        if (puVar13 == (ulong *)0x0) {
          return 0x36;
        }
        do {
          while ((uVar14 = *puVar13, uVar14 >> 0x3e != 0 || (puVar13[1] != uVar5))) {
            puVar13 = (ulong *)(*puVar13 & 0x3fffffffffffffff);
            if (puVar13 == (ulong *)0x0) {
              return 0x36;
            }
          }
          while (*puVar13 == uVar14) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar13,0x10);
            if (bVar8) {
              *puVar13 = uVar14 | 0x4000000000000000;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              return 0x36;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
    }
  }
  return 0x36;
LAB_03462378:
  if ((*puVar16 == uVar11) && (*(long *)(puVar16 + 2) == lVar18)) {
    if (puVar15 != (uint *)0x0) {
      puVar2 = puVar15 + 4;
    }
    *(undefined8 *)puVar2 = *(undefined8 *)(puVar16 + 4);
    *(int *)(param_1 + 0x17) = (int)param_1[0x17] + -1;
    goto LAB_03462434;
  }
  puVar1 = puVar16 + 4;
  puVar15 = puVar16;
  puVar16 = *(uint **)puVar1;
  if (*(uint **)puVar1 == (uint *)0x0) {
LAB_03462434:
    puVar10 = PTR_DAT_047e70e0;
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
    nn::os::UnlockMutex((MutexType *)puVar10);
                    /* WARNING: Could not recover jumptable at 0x03462474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(*param_1 + 0x48))
                       (param_1,puVar17,*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8));
    return uVar12;
  }
  goto LAB_03462378;
}


