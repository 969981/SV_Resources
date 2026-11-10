/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004515c0; name: FUN_004515c0
 */


undefined8 FUN_004515c0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  code *pcVar20;
  
  uVar12 = *(uint *)(param_1 + 3);
  uVar10 = 0;
  if ((ulong)uVar12 != 0) {
    uVar10 = (ulong)(param_1[7] << 8) / (ulong)uVar12;
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((ulong)param_1[5] <= uVar10) {
    uVar3 = *(uint *)((long)param_1 + 0x1c);
    uVar10 = (ulong)uVar3;
    uVar4 = *(uint *)(param_1 + 4);
    uVar14 = uVar4 + 1;
    uVar5 = *(uint *)((long)param_1 + 0x24);
    if (uVar5 <= uVar14) {
      lVar9 = FUN_00452db0(*param_1,(ulong)(uVar3 << 1) << 3,"external/openssl/crypto/lhash/lhash.c"
                           ,0xe1);
      if (lVar9 == 0) goto LAB_004517f0;
      *param_1 = lVar9;
      memset((void *)(lVar9 + uVar10 * 8),0,uVar10 * 8);
      param_1[9] = param_1[9] + 1;
      uVar12 = *(uint *)(param_1 + 3);
      uVar14 = 0;
      *(uint *)((long)param_1 + 0x24) = uVar3;
      *(uint *)((long)param_1 + 0x1c) = uVar3 << 1;
    }
    *(uint *)(param_1 + 3) = uVar12 + 1;
    param_1[8] = param_1[8] + 1;
    lVar9 = *param_1;
    *(uint *)(param_1 + 4) = uVar14;
    plVar15 = (long *)(lVar9 + (ulong)uVar4 * 8);
    uVar17 = (ulong)(uVar5 + uVar4);
    *(undefined8 *)(lVar9 + uVar17 * 8) = 0;
    lVar16 = *plVar15;
    if (lVar16 != 0) {
      lVar18 = uVar17 * 8;
      do {
        while( true ) {
          uVar17 = 0;
          if (uVar10 != 0) {
            uVar17 = *(ulong *)(lVar16 + 0x10) / uVar10;
          }
          if (*(ulong *)(lVar16 + 0x10) - uVar17 * uVar10 != (ulong)uVar4) break;
          plVar15 = (long *)(lVar16 + 8);
          lVar16 = *plVar15;
          if (lVar16 == 0) goto LAB_004516d4;
        }
        *plVar15 = *(long *)(lVar16 + 8);
        *(undefined8 *)(lVar16 + 8) = *(undefined8 *)(lVar9 + lVar18);
        *(long *)(lVar9 + lVar18) = lVar16;
        lVar16 = *plVar15;
      } while (lVar16 != 0);
    }
  }
LAB_004516d4:
  uVar10 = (*(code *)param_1[2])(param_2);
  plVar15 = param_1 + 0xc;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = *plVar15 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  uVar17 = (ulong)*(uint *)((long)param_1 + 0x24);
  uVar13 = 0;
  if (uVar17 != 0) {
    uVar13 = uVar10 / uVar17;
  }
  uVar17 = uVar10 - uVar13 * uVar17;
  if (uVar17 < *(uint *)(param_1 + 4)) {
    uVar13 = (ulong)*(uint *)((long)param_1 + 0x1c);
    uVar17 = 0;
    if (uVar13 != 0) {
      uVar17 = uVar10 / uVar13;
    }
    uVar17 = uVar10 - uVar17 * uVar13;
  }
  plVar15 = (long *)(*param_1 + ((long)(uVar17 << 0x20) >> 0x1d));
  puVar19 = (undefined8 *)*plVar15;
  if (puVar19 != (undefined8 *)0x0) {
    pcVar20 = (code *)param_1[1];
    plVar1 = param_1 + 0xd;
    plVar2 = param_1 + 0x14;
    do {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = *plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (puVar19[2] == uVar10) {
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        iVar8 = (*pcVar20)(*puVar19,param_2);
        if (iVar8 == 0) {
          puVar19 = (undefined8 *)*plVar15;
          if (puVar19 != (undefined8 *)0x0) {
            uVar11 = *puVar19;
            *puVar19 = param_2;
            param_1[0xf] = param_1[0xf] + 1;
            return uVar11;
          }
          break;
        }
      }
      plVar15 = puVar19 + 1;
      puVar19 = (undefined8 *)*plVar15;
    } while (puVar19 != (undefined8 *)0x0);
  }
  puVar19 = (undefined8 *)FUN_00452c30(0x18,"external/openssl/crypto/lhash/lhash.c",0x6d);
  if (puVar19 != (undefined8 *)0x0) {
    puVar19[2] = uVar10;
    *puVar19 = param_2;
    puVar19[1] = 0;
    *plVar15 = (long)puVar19;
    param_1[0xe] = param_1[0xe] + 1;
    param_1[7] = param_1[7] + 1;
    return 0;
  }
LAB_004517f0:
  *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
  return 0;
}


