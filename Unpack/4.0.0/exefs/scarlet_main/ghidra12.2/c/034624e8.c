/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034624e8; name: FUN_034624e8
 */


void FUN_034624e8(long param_1,uint *param_2)

{
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lStack_38;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
  if (*(uint *)(param_1 + 0xb8) == 0) {
LAB_03462688:
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
  }
  else {
    lVar6 = -((ulong)*(uint *)(param_1 + 0xb8) * 8 + 0xf & 0xffffffff0);
    if (*(int *)(param_1 + 0xb0) == 0) goto LAB_03462688;
    lVar9 = **(long **)(param_1 + 0xa8);
    if (lVar9 == 0) {
      uVar7 = 0;
      do {
        if (*(int *)(param_1 + 0xb0) - 1 == uVar7) goto LAB_03462688;
        uVar7 = uVar7 + 1;
        lVar9 = (*(long **)(param_1 + 0xa8))[uVar7 & 0xffffffff];
      } while (lVar9 == 0);
    }
    else {
      uVar7 = 0;
    }
    uVar16 = 0;
    lVar14 = 0;
    do {
      lVar10 = lVar9;
      if ((*(byte *)(lVar10 + 0x68) & 1) == 0) {
        lVar9 = *(long *)(lVar10 + 0x10);
        if (lVar9 == 0) {
          uVar3 = (int)uVar7 + 1;
          if (*(uint *)(param_1 + 0xb0) <= uVar3) break;
          uVar13 = (ulong)uVar3;
          while (lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + uVar13 * 8), lVar9 == 0) {
            uVar13 = uVar13 + 1;
            if (*(uint *)(param_1 + 0xb0) == uVar13) goto LAB_03462654;
          }
          lVar10 = 0;
        }
        else {
          uVar13 = uVar7 & 0xffffffff;
        }
      }
      else {
        *(long *)((long)register0x00000008 + (long)(int)uVar16 * 8 + lVar6 + -0x30) = lVar10;
        lVar15 = *(long *)(lVar10 + 0x10);
        uVar13 = uVar7 & 0xffffffff;
        lVar10 = lVar14;
        lVar9 = lVar15;
        if (lVar15 == 0) {
          uVar4 = *(uint *)(param_1 + 0xb0);
          uVar3 = (int)uVar7 + 1;
          uVar13 = (ulong)uVar3;
          if (uVar3 < uVar4) {
            do {
              lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + uVar13 * 8);
              if (lVar9 != 0) {
                lVar10 = 0;
                goto LAB_0346261c;
              }
              uVar3 = (int)uVar13 + 1;
              uVar13 = (ulong)uVar3;
            } while (uVar4 != uVar3);
            lVar9 = 0;
            uVar13 = (ulong)uVar4;
            lVar10 = 0;
          }
          else {
            lVar9 = 0;
          }
        }
LAB_0346261c:
        uVar16 = uVar16 + 1;
        if (lVar14 == 0) {
          plVar8 = (long *)(*(long *)(param_1 + 0xa8) + (uVar7 & 0xffffffff) * 8);
        }
        else {
          plVar8 = (long *)(lVar14 + 0x10);
        }
        *plVar8 = lVar15;
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
      }
      uVar7 = uVar13 & 0xffffffff;
      lVar14 = lVar10;
    } while (lVar9 != 0);
LAB_03462654:
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
    if (0 < (int)uVar16) {
      uVar7 = (ulong)uVar16;
      do {
        FUN_03467988(param_1,*(undefined8 *)((long)&lStack_38 + uVar7 * 8 + lVar6));
        uVar13 = uVar7 - 1;
        bVar1 = 0 < (long)uVar7;
        uVar7 = uVar13;
      } while (uVar13 != 0 && bVar1);
    }
  }
  uVar3 = *param_2;
  uVar16 = 0;
  if (7 < uVar3) goto LAB_034626e4;
  uVar4 = 1 << (ulong)(uVar3 & 0x1f);
  if ((uVar4 & 3) == 0) {
    if ((uVar4 & 0xc) != 0) {
      uVar16 = param_2[0xe];
      if (param_2[0xc] != 1) {
        uVar16 = 0;
      }
      goto LAB_034626e4;
    }
    if ((1 << (ulong)(uVar3 & 0x1f) & 0xc0U) == 0) goto LAB_034626e4;
  }
  uVar16 = param_2[1];
LAB_034626e4:
  uVar11 = *(undefined8 *)(param_2 + 0xc);
  pcVar2 = *(code **)(param_2 + 6);
  uVar7 = *(ulong *)(param_2 + 8);
  if (param_2[10] != 2) {
    uVar11 = 0;
  }
  *(undefined4 *)(param_1 + 0xf4) = 1;
  if (pcVar2 != (code *)0x0) {
    for (puVar12 = *(ulong **)(param_1 + 0xf8); puVar12 != (ulong *)0x0;
        puVar12 = (ulong *)(*puVar12 & 0x3fffffffffffffff)) {
      if ((*puVar12 >> 0x3e == 0) && (puVar12[1] == uVar7)) {
        (*pcVar2)(uVar16,uVar11,1,uVar7);
        puVar12 = *(ulong **)(param_1 + 0xf8);
        do {
          if (puVar12 == (ulong *)0x0) {
            return;
          }
          while ((uVar13 = *puVar12, uVar13 >> 0x3e == 0 && (puVar12[1] == uVar7))) {
            while (*puVar12 == uVar13) {
              cVar5 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(puVar12,0x10);
              if (bVar1) {
                *puVar12 = uVar13 | 0x4000000000000000;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                return;
              }
            }
            ClearExclusiveLocal();
          }
          puVar12 = (ulong *)(*puVar12 & 0x3fffffffffffffff);
        } while( true );
      }
    }
  }
  return;
}


