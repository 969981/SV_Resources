/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307ef7c; name: FUN_0307ef7c
 */


void FUN_0307ef7c(undefined8 *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  int iVar17;
  ulong uVar18;
  long *plVar19;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  plVar7 = (long *)(**(code **)(*param_2 + 0x18))(param_2,param_3 * 0x18);
  puVar6 = PTR_PTR_047d1a50;
  iVar2 = *(int *)(param_1 + 1);
  if (0 < iVar2) {
    plVar16 = (long *)*param_1;
    iVar17 = 0;
    plVar9 = plVar16;
    plVar19 = plVar7;
    do {
      *plVar19 = 0;
      plVar19[1] = -0x8000000000000000;
      uVar3 = *(uint *)(plVar9 + 1);
      if ((int)uVar3 < 1) {
        *plVar19 = 0;
        plVar19[1] = -0x8000000000000000;
      }
      else {
        plVar14 = (long *)*plVar9;
        plVar8 = (long *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar3 * 0x18);
        *plVar19 = (long)plVar8;
        *(uint *)(plVar19 + 1) = uVar3;
        *(uint *)((long)plVar19 + 0xc) = uVar3;
        if (uVar3 != 1) {
          uVar10 = uVar3 & 0xfffffffe;
          plVar13 = plVar8;
          plVar15 = plVar14;
          do {
            lVar11 = *plVar15;
            *plVar13 = lVar11;
            if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
              plVar8 = (long *)(lVar11 + 0x10);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar5) {
                  *plVar8 = *plVar8 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            lVar11 = plVar15[1];
            plVar8 = plVar13 + 6;
            *(int *)(plVar13 + 2) = (int)plVar15[2];
            plVar13[1] = lVar11;
            lVar11 = plVar15[3];
            plVar14 = plVar15 + 6;
            plVar13[3] = lVar11;
            if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
              plVar1 = (long *)(lVar11 + 0x10);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = *plVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            lVar11 = plVar15[4];
            uVar10 = uVar10 - 2;
            *(int *)(plVar13 + 5) = (int)plVar15[5];
            plVar13[4] = lVar11;
            plVar13 = plVar8;
            plVar15 = plVar14;
          } while (uVar10 != 0);
        }
        if ((uVar3 & 1) != 0) {
          lVar11 = *plVar14;
          *plVar8 = lVar11;
          if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
            plVar13 = (long *)(lVar11 + 0x10);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = *plVar13 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar11 = plVar14[1];
          *(int *)(plVar8 + 2) = (int)plVar14[2];
          plVar8[1] = lVar11;
        }
      }
      plVar8 = plVar9 + 2;
      iVar17 = iVar17 + 1;
      plVar9 = plVar9 + 3;
      plVar19[2] = *plVar8;
      plVar19 = plVar19 + 3;
    } while (iVar17 != iVar2);
    iVar17 = 0;
    do {
      uVar3 = *(uint *)(plVar16 + 1);
      if (0 < (int)uVar3) {
        lVar11 = *plVar16;
        uVar18 = 0;
        do {
          if (((0.0 <= *(float *)(lVar11 + uVar18 * 0x18 + 8)) &&
              (plVar9 = *(long **)(lVar11 + uVar18 * 0x18), plVar9 != (long *)0x0)) &&
             (plVar9[1] != 0)) {
            plVar19 = plVar9 + 2;
            do {
              lVar12 = *plVar19;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar5) {
                *plVar19 = lVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar12 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))();
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar3);
      }
      *(undefined4 *)(plVar16 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar16 + 0xc)) && (*plVar16 != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))
                  (puVar6,*plVar16,(ulong)*(uint *)((long)plVar16 + 0xc) * 0x18);
      }
      iVar17 = iVar17 + 1;
      *plVar16 = 0;
      *(undefined4 *)((long)plVar16 + 0xc) = 0x80000000;
      plVar16 = plVar16 + 3;
    } while (iVar17 != iVar2);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = plVar7;
  return;
}


