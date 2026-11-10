/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01acb394; name: FUN_01acb394
 */


void FUN_01acb394(undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  short *psVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  short sVar18;
  long *plVar19;
  undefined1 *puVar20;
  long lVar21;
  byte local_4c [12];
  
  if (*(char *)(param_2 + 0x40) != '\0') {
    if (((*PTR_DAT_047d91f8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d91f8), iVar9 != 0)) {
      FUN_00100190(&LAB_00aa89a4,PTR_DAT_047d9200,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d91f8);
    }
    lVar12 = *(long *)PTR_DAT_047d9200;
    *(long *)PTR_DAT_047d9208 = lVar12;
    if ((((*(long *)(lVar12 + 0x40) != 0) && (*(short *)(*(long *)(lVar12 + 0x40) + 0x1a) != 0)) &&
        (lVar12 = *(long *)(lVar12 + 0x40), lVar12 != 0)) && (*(short *)(lVar12 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar12 + 0x1a);
      sVar18 = *(short *)(lVar12 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar18) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_01acb4e4;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01acb4e4:
          bVar7 = false;
        }
        if (bVar7) {
          lVar12 = *(long *)(lVar12 + 0x10);
          if (lVar12 != 0) {
            plVar19 = (long *)(lVar12 + -0x28);
            puVar20 = &DAT_cbf29ce484222645;
            FUN_01acb7ec(plVar19,param_3,param_4,param_5,0,local_4c);
            if (local_4c[0] != 0) {
              pbVar10 = (byte *)((ulong)local_4c | 1);
              do {
                puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)local_4c[0]) * 0x100000001b3);
                local_4c[0] = *pbVar10;
                pbVar10 = pbVar10 + 1;
              } while (local_4c[0] != 0);
            }
            puVar11 = *(undefined1 **)(param_2 + 0x7a8);
            if (puVar11 != (undefined1 *)0x0) {
              uVar13 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
              uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
              uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar13 < 2) {
                puVar14 = (undefined1 *)((ulong)(puVar11 + -1) & (ulong)puVar20);
              }
              else {
                puVar14 = puVar20;
                if (puVar11 <= puVar20) {
                  uVar8 = 0;
                  if (puVar11 != (undefined1 *)0x0) {
                    uVar8 = (ulong)puVar20 / (ulong)puVar11;
                  }
                  puVar14 = puVar20 + -(uVar8 * (long)puVar11);
                }
              }
              plVar15 = *(long **)(*(long *)(param_2 + 0x7a0) + (long)puVar14 * 8);
              if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0))
              {
                if (uVar13 < 2) {
                  do {
                    if ((undefined1 *)plVar15[1] == puVar20) {
                      if ((undefined1 *)plVar15[2] == puVar20) goto LAB_01acb6ac;
                    }
                    else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar11 + -1)) != puVar14)
                    break;
                    plVar15 = (long *)*plVar15;
                  } while (plVar15 != (long *)0x0);
                }
                else {
                  do {
                    puVar17 = (undefined1 *)plVar15[1];
                    if (puVar17 == puVar20) {
                      if ((undefined1 *)plVar15[2] == puVar20) {
LAB_01acb6ac:
                        lVar21 = plVar15[3];
                        memset(param_1,0,0x60);
                        if (*(char *)(param_2 + 0x40) != '\0') {
                          lVar2 = param_2 + (long)*(int *)(lVar21 + 0x40) * 0x10;
                          iVar9 = *(int *)(lVar2 + 0x23c);
                          lVar3 = param_2 + (long)*(int *)(lVar2 + 0x234) * 0x10;
                          uVar16 = *(undefined8 *)(lVar3 + 0x50);
                          iVar4 = *(int *)(lVar2 + 0x238);
                          *param_1 = *(undefined8 *)(lVar3 + 0x48);
                          param_1[1] = uVar16;
                          memcpy(param_1 + 2,(void *)(param_2 + (long)iVar9 * 0x40 + 0xa0),0x40);
                          param_2 = param_2 + (long)iVar4 * 0x10;
                          uVar16 = *(undefined8 *)(param_2 + 0x1e8);
                          param_1[10] = *(undefined8 *)(param_2 + 0x1e0);
                          param_1[0xb] = uVar16;
                          if (*(char *)(lVar21 + 0x50) != '\0') {
                            *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(lVar21 + 0x58);
                            *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(lVar21 + 0x54);
                            uVar16 = *(undefined8 *)(lVar21 + 0x68);
                            param_1[4] = *(undefined8 *)(lVar21 + 0x60);
                            param_1[5] = uVar16;
                          }
                          if (*(char *)(lVar21 + 0x70) != '\0') {
                            *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar21 + 0x78);
                            *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(lVar21 + 0x74);
                            uVar16 = *(undefined8 *)(lVar21 + 0x88);
                            param_1[6] = *(undefined8 *)(lVar21 + 0x80);
                            param_1[7] = uVar16;
                          }
                          if (*(char *)(lVar21 + 0x90) != '\0') {
                            *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(lVar21 + 0x98);
                            *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)(lVar21 + 0x94);
                            uVar16 = *(undefined8 *)(lVar21 + 0xa8);
                            param_1[8] = *(undefined8 *)(lVar21 + 0xa0);
                            param_1[9] = uVar16;
                          }
                        }
                        lVar12 = *(long *)(lVar12 + 8);
                        psVar1 = (short *)(lVar12 + 0x1a);
                        do {
                          sVar18 = *psVar1;
                          cVar6 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                          if (bVar7) {
                            *psVar1 = sVar18 + -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (sVar18 == 1) {
                          *(undefined8 *)(lVar12 + 0x10) = 0;
                          (**(code **)(*plVar19 + 0x50))(plVar19);
                          return;
                        }
                        if (sVar18 != 0) {
                          return;
                        }
                        goto LAB_01acb788;
                      }
                    }
                    else {
                      if (puVar11 <= puVar17) {
                        uVar13 = 0;
                        if (puVar11 != (undefined1 *)0x0) {
                          uVar13 = (ulong)puVar17 / (ulong)puVar11;
                        }
                        puVar17 = puVar17 + -(uVar13 * (long)puVar11);
                      }
                      if (puVar17 != puVar14) break;
                    }
                    plVar15 = (long *)*plVar15;
                  } while (plVar15 != (long *)0x0);
                }
              }
            }
            lVar12 = *(long *)(lVar12 + 8);
            psVar1 = (short *)(lVar12 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar12 + 0x10) = 0;
              (**(code **)(*plVar19 + 0x50))(plVar19);
            }
            else if (sVar18 == 0) {
LAB_01acb788:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar18 = sVar5;
      } while (sVar5 != 0);
    }
  }
  memset(param_1,0,0x60);
  return;
}


