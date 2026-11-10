/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00451820; name: FUN_00451820
 */


undefined8 FUN_00451820(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  code *pcVar18;
  
  *(undefined4 *)(param_1 + 0x15) = 0;
  uVar7 = (*(code *)param_1[2])(param_2);
  plVar16 = param_1 + 0xc;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = *plVar16 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar9 = (ulong)*(uint *)((long)param_1 + 0x24);
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar7 / uVar9;
  }
  uVar9 = uVar7 - uVar10 * uVar9;
  if (uVar9 < *(uint *)(param_1 + 4)) {
    uVar10 = (ulong)*(uint *)((long)param_1 + 0x1c);
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = uVar7 / uVar10;
    }
    uVar9 = uVar7 - uVar9 * uVar10;
  }
  plVar16 = (long *)(*param_1 + ((long)(uVar9 << 0x20) >> 0x1d));
  puVar17 = (undefined8 *)*plVar16;
  if (puVar17 != (undefined8 *)0x0) {
    pcVar18 = (code *)param_1[1];
    plVar1 = param_1 + 0xd;
    plVar2 = param_1 + 0x14;
    do {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar17[2] == uVar7) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        iVar6 = (*pcVar18)(*puVar17,param_2);
        if (iVar6 == 0) {
          puVar17 = (undefined8 *)*plVar16;
          if (puVar17 != (undefined8 *)0x0) {
            *plVar16 = puVar17[1];
            uVar14 = *puVar17;
            FUN_00452f80(puVar17,"external/openssl/crypto/lhash/lhash.c",0x90);
            lVar12 = param_1[7];
            param_1[0x10] = param_1[0x10] + 1;
            uVar8 = *(uint *)(param_1 + 3);
            param_1[7] = lVar12 + -1;
            if (uVar8 < 0x11) {
              return uVar14;
            }
            uVar7 = 0;
            if ((ulong)uVar8 != 0) {
              uVar7 = (ulong)((lVar12 + -1) * 0x100) / (ulong)uVar8;
            }
            if ((ulong)param_1[6] < uVar7) {
              return uVar14;
            }
            lVar12 = param_1[4];
            iVar6 = *(int *)((long)param_1 + 0x24);
            iVar11 = (int)lVar12 + -1;
            lVar13 = (ulong)(uint)(iVar11 + iVar6) * 8;
            uVar15 = *(undefined8 *)(*param_1 + lVar13);
            *(undefined8 *)(*param_1 + lVar13) = 0;
            if ((int)lVar12 == 0) {
              lVar12 = FUN_00452db0(*param_1,iVar6 << 3,"external/openssl/crypto/lhash/lhash.c",
                                    0x10c);
              if (lVar12 == 0) {
                *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
                return uVar14;
              }
              param_1[0xb] = param_1[0xb] + 1;
              uVar8 = *(uint *)(param_1 + 3);
              uVar3 = *(uint *)((long)param_1 + 0x24) >> 1;
              *(uint *)((long)param_1 + 0x24) = uVar3;
              iVar11 = uVar3 - 1;
              *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_1 + 0x1c) >> 1;
              *(int *)(param_1 + 4) = iVar11;
              *param_1 = lVar12;
            }
            else {
              lVar12 = *param_1;
              *(int *)(param_1 + 4) = iVar11;
            }
            *(uint *)(param_1 + 3) = uVar8 - 1;
            param_1[10] = param_1[10] + 1;
            lVar13 = *(long *)(lVar12 + (long)iVar11 * 8);
            if (lVar13 == 0) {
              *(undefined8 *)(lVar12 + (long)iVar11 * 8) = uVar15;
              return uVar14;
            }
            do {
              lVar12 = lVar13;
              lVar13 = *(long *)(lVar12 + 8);
            } while (lVar13 != 0);
            *(undefined8 *)(lVar12 + 8) = uVar15;
            return uVar14;
          }
          break;
        }
      }
      plVar16 = puVar17 + 1;
      puVar17 = (undefined8 *)*plVar16;
    } while (puVar17 != (undefined8 *)0x0);
  }
  param_1[0x11] = param_1[0x11] + 1;
  return 0;
}


