/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353bce0; name: FUN_0353bce0
 */


long * FUN_0353bce0(int param_1,long param_2,long *param_3,uint param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  
  plVar19 = (long *)param_3[1];
  if (plVar19 == (long *)0x0) {
    puVar4 = (undefined8 *)FUN_0353c070(param_1,param_2,param_3,1);
    if (puVar4 == (undefined8 *)0x0) {
      plVar18 = (long *)0x0;
    }
    else {
      *(uint *)(puVar4 + 5) = *(uint *)(puVar4 + 5) & 0xfffffffb;
      lVar8 = (ulong)param_4 * 8 + (long)param_1 * 0x638;
      *(uint *)((long)puVar4 + 0xc) = param_4;
      puVar4[8] = param_2;
      puVar12 = (uint *)(&DAT_048d2100 + lVar8 + 0x90);
      *(uint *)((long)puVar4 + 0x24) = *puVar12;
      *(uint *)(puVar4 + 1) = (uint)*(ushort *)(&DAT_048d2100 + lVar8 + 0x94);
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 4) = 0;
      puVar4[3] = 0;
      uVar7 = (ulong)*(ushort *)(&DAT_048d2100 + lVar8 + 0x94);
      plVar18 = puVar4 + 0x10;
      if (uVar7 < 2) {
        plVar19 = param_3;
      }
      else {
        uVar10 = (ulong)*puVar12;
        plVar9 = (long *)((long)plVar18 + uVar10 * uVar7);
        plVar19 = (long *)((long)plVar18 + uVar10);
        uVar7 = *(ulong *)(&DAT_048d2150 + (long)param_1 * 0x638);
        *param_3 = (long)plVar19;
        plVar17 = (long *)((long)puVar4 + uVar7);
        if (plVar9 <= plVar17 || uVar7 >> 1 <= uVar10) {
          plVar17 = plVar9;
        }
        if ((long *)((long)plVar19 + uVar10) < plVar17) {
          plVar19 = puVar4 + 0x10;
          uVar7 = 2;
          do {
            lVar8 = (long)plVar19 + uVar10 * 2;
            plVar19 = (long *)((long)plVar19 + uVar10);
            *plVar19 = lVar8;
            uVar7 = (ulong)((int)uVar7 + 1);
          } while ((long *)((long)plVar19 + uVar10 * 2) < plVar17);
          plVar19 = (long *)((long)plVar19 + uVar10);
        }
        else {
          uVar7 = 2;
        }
      }
      *plVar19 = 0;
      *(uint *)(puVar4 + 2) = (uint)uVar7;
      if ((uint)uVar7 < *(uint *)(puVar4 + 1)) {
        lVar8 = 0;
        if (param_3[1] != 0) {
          *(undefined8 **)(param_3[1] + 0x50) = puVar4;
          lVar8 = param_3[1];
        }
        puVar4[9] = lVar8;
        param_3[1] = (long)puVar4;
        uVar6 = *(undefined4 *)(puVar4 + 2);
      }
      else {
        lVar8 = param_2 + (ulong)param_4 * 8;
        puVar1 = (undefined8 *)(lVar8 + 0x7a80);
        lVar8 = *(long *)(lVar8 + 0x7a80);
        uVar13 = 0;
        if (lVar8 != 0) {
          *(undefined8 **)(lVar8 + 0x50) = puVar4;
          uVar13 = *puVar1;
        }
        puVar4[9] = uVar13;
        *puVar1 = puVar4;
        *(long *)(param_2 + 0x1868) = *(long *)(param_2 + 0x1868) + 1;
        uVar6 = *(undefined4 *)(puVar4 + 1);
      }
      *(undefined4 *)((long)puVar4 + 0x14) = uVar6;
    }
  }
  else {
    plVar18 = (long *)*plVar19;
    if (plVar18 == (long *)0x0) {
      uVar7 = (ulong)*(uint *)(plVar19 + 2);
      uVar10 = (ulong)*(uint *)((long)plVar19 + 0x24);
      plVar18 = (long *)((long)plVar19 + uVar10 * uVar7 + 0x80);
      uVar14 = (int)plVar19[1] - *(uint *)(plVar19 + 2);
      if (uVar14 < 2) {
        plVar17 = param_3;
      }
      else {
        uVar16 = *(ulong *)(&DAT_048d2150 + (long)param_1 * 0x638);
        plVar15 = (long *)((long)plVar18 + uVar14 * uVar10);
        plVar9 = (long *)(((ulong)plVar18 & -uVar16) + uVar16);
        plVar17 = (long *)((long)plVar18 + uVar10);
        *param_3 = (long)plVar17;
        if (plVar15 <= plVar9 || uVar16 >> 1 <= uVar10) {
          plVar9 = plVar15;
        }
        if ((long *)((long)plVar17 + uVar10) < plVar9) {
          lVar8 = (uVar7 + 2) * uVar10;
          plVar17 = plVar19 + 0x10;
          uVar14 = 2;
          do {
            *(long **)((long)plVar17 + (uVar7 + 1) * uVar10) = (long *)((long)plVar17 + lVar8);
            plVar17 = (long *)((long)plVar17 + uVar10);
            uVar14 = uVar14 + 1;
          } while ((long *)((long)plVar17 + lVar8) < plVar9);
          plVar17 = (long *)((long)plVar17 + (uVar7 + 1) * uVar10);
        }
        else {
          uVar14 = 2;
        }
      }
      *plVar17 = 0;
      iVar5 = (int)plVar19[2] + uVar14;
      *(int *)(plVar19 + 2) = iVar5;
    }
    else {
      *param_3 = *plVar18;
      iVar5 = (int)plVar19[2];
      *plVar19 = 0;
    }
    *(int *)((long)plVar19 + 0x14) = iVar5;
    plVar17 = plVar19 + 3;
    if (*plVar17 != 0) {
      do {
        lVar8 = *plVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *plVar17 = -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == -1) {
        iVar5 = 1000;
        do {
          Yield();
          iVar5 = iVar5 + -1;
          do {
            lVar8 = *plVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar3) {
              *plVar17 = -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        } while ((iVar5 != 0) && (lVar8 == -1));
        if (iVar5 == 0) {
          while (lVar8 == -1) {
            nn::os::SleepThread(100000);
            do {
              lVar8 = *plVar17;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar3) {
                *plVar17 = -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
      }
      *plVar19 = lVar8;
      *(int *)((long)plVar19 + 0x14) = *(int *)((long)plVar19 + 0x14) - (int)plVar19[4];
      *(undefined4 *)(plVar19 + 4) = 0;
      plVar19[3] = 0;
    }
    if ((*plVar19 == 0) && (*(uint *)(plVar19 + 1) <= *(uint *)(plVar19 + 2))) {
      lVar8 = param_2 + (ulong)param_4 * 8;
      param_3[1] = *(long *)(param_3[1] + 0x48);
      plVar17 = (long *)(lVar8 + 0x7a80);
      lVar11 = *(long *)(lVar8 + 0x7a80);
      lVar8 = 0;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 0x50) = plVar19;
        lVar8 = *plVar17;
      }
      plVar19[9] = lVar8;
      *plVar17 = (long)plVar19;
      *(long *)(param_2 + 0x1868) = *(long *)(param_2 + 0x1868) + 1;
    }
  }
  return plVar18;
}


