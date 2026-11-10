/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5c2f8; name: FUN_00c5c2f8
 */


/* WARNING: Removing unreachable block (ram,0x00c5cb94) */
/* WARNING: Removing unreachable block (ram,0x00c5cbb8) */
/* WARNING: Removing unreachable block (ram,0x00c5cbc0) */
/* WARNING: Removing unreachable block (ram,0x00c5cbc8) */
/* WARNING: Removing unreachable block (ram,0x00c5cbd0) */
/* WARNING: Removing unreachable block (ram,0x00c5cbe8) */
/* WARNING: Removing unreachable block (ram,0x00c5cbd8) */
/* WARNING: Removing unreachable block (ram,0x00c5cbdc) */
/* WARNING: Removing unreachable block (ram,0x00c5cba0) */
/* WARNING: Removing unreachable block (ram,0x00c5cbe0) */
/* WARNING: Removing unreachable block (ram,0x00c5cbb4) */
/* WARNING: Removing unreachable block (ram,0x00c5cb28) */
/* WARNING: Removing unreachable block (ram,0x00c5cb74) */
/* WARNING: Removing unreachable block (ram,0x00c5cb4c) */
/* WARNING: Removing unreachable block (ram,0x00c5cb54) */
/* WARNING: Removing unreachable block (ram,0x00c5cb5c) */
/* WARNING: Removing unreachable block (ram,0x00c5cb80) */
/* WARNING: Removing unreachable block (ram,0x00c5cb64) */
/* WARNING: Removing unreachable block (ram,0x00c5cb68) */
/* WARNING: Removing unreachable block (ram,0x00c5cb34) */
/* WARNING: Removing unreachable block (ram,0x00c5cb6c) */
/* WARNING: Removing unreachable block (ram,0x00c5cb48) */
/* WARNING: Removing unreachable block (ram,0x00c5cbfc) */
/* WARNING: Removing unreachable block (ram,0x00c5cc08) */
/* WARNING: Removing unreachable block (ram,0x00c5cc10) */
/* WARNING: Removing unreachable block (ram,0x00c5cc18) */
/* WARNING: Removing unreachable block (ram,0x00c5cc20) */
/* WARNING: Removing unreachable block (ram,0x00c5cc48) */
/* WARNING: Removing unreachable block (ram,0x00c5cc28) */
/* WARNING: Removing unreachable block (ram,0x00c5cc2c) */
/* WARNING: Removing unreachable block (ram,0x00c5cc40) */

void FUN_00c5c2f8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong *puVar16;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [96];
  
  if (*(char *)(param_1 + 0x109) != '\0') {
    plVar15 = (long *)**(undefined8 **)(param_1 + 0x68);
    plVar11 = (long *)(*(undefined8 **)(param_1 + 0x68))[1];
    if (plVar15 == plVar11) goto LAB_00c5c6fc;
    lVar12 = *(long *)(param_1 + 8);
    do {
      lVar13 = *plVar15;
      uVar7 = (ulong)*(uint *)(lVar13 + 200) & 0xffffff;
      if (((((uint)uVar7 == 0xffffff) || (*(uint *)(lVar12 + 0x40) <= (uint)uVar7)) ||
          ((*(byte *)(*(long *)(lVar12 + 0x38) + uVar7 * 0xc0 + 0x54) & 3) == 0)) ||
         (*(uint *)(*(long *)(lVar12 + 0x38) + uVar7 * 0xc0 + 0x50) != *(uint *)(lVar13 + 200)))
      goto LAB_00c5c6fc;
      if (*(char *)(lVar13 + 0xc1) != '\0') {
        puVar10 = (ulong *)FUN_00f64ddc(*(undefined8 *)(lVar12 + 0x908),
                                        *(undefined4 *)(lVar13 + 0xc4));
        local_e0 = 0;
        local_d8 = (code *)0x0;
        local_d0 = 0;
        local_c8 = 0;
        if (*(code **)(lVar13 + 0xe0) != (code *)0x0) {
          (**(code **)(lVar13 + 0xe0))(lVar13 + 0xf0,auStack_c0);
          local_c8 = *(undefined8 *)(lVar13 + 0xe8);
          local_d8 = *(code **)(lVar13 + 0xd8);
          local_e0 = *(undefined8 *)(lVar13 + 0xd0);
          local_d0 = *(undefined8 *)(lVar13 + 0xe0);
        }
        plVar8 = (long *)(*puVar10 & 0xfffffffffffffffc);
        if (plVar8 == (long *)0x0) goto LAB_00c5c6e0;
        puVar16 = puVar10;
        goto LAB_00c5c6ac;
      }
      plVar15 = plVar15 + 1;
    } while (plVar11 != plVar15);
    plVar15 = plVar11;
    goto LAB_00c5c8bc;
  }
  goto LAB_00c5c324;
  while( true ) {
    puVar16 = (ulong *)(plVar8 + 1);
    plVar8 = (long *)(*puVar16 & 0xfffffffffffffffc);
    if (plVar8 == (long *)0x0) break;
LAB_00c5c6ac:
    if ((plVar8[2] == 0) &&
       (iVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,&local_e0,0x80), iVar6 != 0)) {
      if ((*puVar10 & 3) == 0) {
        *puVar16 = plVar8[1] & 0xfffffffffffffffcU | *puVar16 & 3;
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      else {
        plVar8[1] = plVar8[1] & 0xfffffffffffffffcU | 1;
      }
      break;
    }
  }
LAB_00c5c6e0:
  pcVar5 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar5)(auStack_c0);
  }
LAB_00c5c6fc:
  plVar8 = plVar15 + 1;
  if (plVar15 != plVar11 && plVar8 != plVar11) {
    do {
      lVar12 = *plVar8;
      uVar7 = (ulong)*(uint *)(lVar12 + 200) & 0xffffff;
      if ((((uint)uVar7 != 0xffffff) &&
          (lVar13 = *(long *)(param_1 + 8), (uint)uVar7 < *(uint *)(lVar13 + 0x40))) &&
         (((*(byte *)(*(long *)(lVar13 + 0x38) + uVar7 * 0xc0 + 0x54) & 3) != 0 &&
          (*(uint *)(*(long *)(lVar13 + 0x38) + uVar7 * 0xc0 + 0x50) == *(uint *)(lVar12 + 200)))))
      {
        if (*(char *)(lVar12 + 0xc1) == '\0') {
          plVar9 = (long *)*plVar15;
          *plVar15 = 0;
          if (plVar9 != (long *)0x0) {
            lVar12 = plVar9[6];
            psVar1 = (short *)(lVar12 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar12 + 0x10) = 0;
              (**(code **)(*plVar9 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_00c5cb00;
          }
          lVar12 = *plVar8;
          *plVar8 = 0;
          *plVar15 = lVar12;
          plVar15 = plVar15 + 1;
        }
        else {
          puVar10 = (ulong *)FUN_00f64ddc(*(undefined8 *)(lVar13 + 0x908),
                                          *(undefined4 *)(lVar12 + 0xc4));
          local_e0 = 0;
          local_d8 = (code *)0x0;
          local_d0 = 0;
          local_c8 = 0;
          if (*(code **)(lVar12 + 0xe0) != (code *)0x0) {
            (**(code **)(lVar12 + 0xe0))(lVar12 + 0xf0,auStack_c0);
            local_c8 = *(undefined8 *)(lVar12 + 0xe8);
            local_d8 = *(code **)(lVar12 + 0xd8);
            local_e0 = *(undefined8 *)(lVar12 + 0xd0);
            local_d0 = *(undefined8 *)(lVar12 + 0xe0);
          }
          plVar9 = (long *)(*puVar10 & 0xfffffffffffffffc);
          if (plVar9 != (long *)0x0) {
            puVar16 = puVar10;
            do {
              if ((plVar9[2] == 0) &&
                 (iVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,&local_e0,0x80), iVar6 != 0)) {
                if ((*puVar10 & 3) == 0) {
                  *puVar16 = plVar9[1] & 0xfffffffffffffffcU | *puVar16 & 3;
                  (**(code **)(*plVar9 + 8))(plVar9);
                }
                else {
                  plVar9[1] = plVar9[1] & 0xfffffffffffffffcU | 1;
                }
                break;
              }
              puVar16 = (ulong *)(plVar9 + 1);
              plVar9 = (long *)(*puVar16 & 0xfffffffffffffffc);
            } while (plVar9 != (long *)0x0);
          }
          pcVar5 = local_d8;
          if (local_d8 != (code *)0x0) {
            local_d0 = 0;
            local_c8 = 0;
            local_e0 = 0;
            local_d8 = (code *)0x0;
            (*pcVar5)(auStack_c0);
          }
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar11);
  }
LAB_00c5c8bc:
  lVar12 = *(long *)(param_1 + 0x68);
  plVar11 = *(long **)(lVar12 + 8);
  if (plVar15 != plVar11) {
    do {
      while( true ) {
        do {
          if (plVar11 == plVar15) {
            *(long **)(lVar12 + 8) = plVar15;
            goto LAB_00c5c918;
          }
          plVar11 = plVar11 + -1;
          plVar8 = (long *)*plVar11;
        } while (plVar8 == (long *)0x0);
        lVar13 = plVar8[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 != 1) break;
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))();
      }
    } while (sVar2 != 0);
    goto LAB_00c5cb00;
  }
LAB_00c5c918:
  *(undefined1 *)(param_1 + 0x109) = 0;
LAB_00c5c324:
  plVar15 = (long *)**(undefined8 **)(param_1 + 0x28);
  plVar11 = (long *)(*(undefined8 **)(param_1 + 0x28))[1];
  if ((plVar15 != plVar11) && (uVar7 = FUN_00c5cc5c(param_1,plVar15), (uVar7 & 1) == 0)) {
    do {
      if (plVar11 + -1 == plVar15) {
        plVar8 = plVar11;
        goto LAB_00c5c3ec;
      }
      plVar15 = plVar15 + 1;
      uVar7 = FUN_00c5cc5c(param_1,plVar15);
    } while ((uVar7 & 1) == 0);
  }
  plVar9 = plVar15 + 1;
  plVar8 = plVar15;
  if (plVar15 != plVar11 && plVar9 != plVar11) {
    do {
      uVar7 = FUN_00c5cc5c(param_1,plVar9);
      plVar8 = plVar15;
      if ((uVar7 & 1) == 0) {
        plVar8 = (long *)*plVar15;
        *plVar15 = 0;
        if (plVar8 != (long *)0x0) {
          lVar12 = plVar8[6];
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*plVar8 + 0x50))();
          }
          else if (sVar2 == 0) goto LAB_00c5cb00;
        }
        lVar12 = *plVar9;
        *plVar9 = 0;
        plVar8 = plVar15 + 1;
        *plVar15 = lVar12;
      }
      plVar9 = plVar9 + 1;
      plVar15 = plVar8;
    } while (plVar9 != plVar11);
  }
LAB_00c5c3ec:
  lVar12 = *(long *)(param_1 + 0x28);
  plVar15 = *(long **)(lVar12 + 8);
  if (plVar8 == plVar15) {
LAB_00c5c3fc:
    plVar15 = (long *)**(undefined8 **)(param_1 + 0x48);
    plVar11 = (long *)(*(undefined8 **)(param_1 + 0x48))[1];
    if ((plVar15 != plVar11) && (uVar7 = FUN_00c5cdb4(param_1,plVar15), (uVar7 & 1) == 0)) {
      do {
        if (plVar11 + -1 == plVar15) {
          plVar8 = plVar11;
          goto LAB_00c5c4a8;
        }
        plVar15 = plVar15 + 1;
        uVar7 = FUN_00c5cdb4(param_1,plVar15);
      } while ((uVar7 & 1) == 0);
    }
    plVar8 = plVar15;
    if (plVar15 != plVar11) {
      while (plVar15 = plVar15 + 1, plVar15 != plVar11) {
        uVar7 = FUN_00c5cdb4(param_1,plVar15);
        if ((uVar7 & 1) == 0) {
          plVar9 = (long *)*plVar8;
          *plVar8 = 0;
          if (plVar9 != (long *)0x0) {
            lVar12 = plVar9[6];
            psVar1 = (short *)(lVar12 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar12 + 0x10) = 0;
              (**(code **)(*plVar9 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_00c5cb00;
          }
          lVar12 = *plVar15;
          *plVar15 = 0;
          *plVar8 = lVar12;
          plVar8 = plVar8 + 1;
        }
      }
    }
LAB_00c5c4a8:
    lVar12 = *(long *)(param_1 + 0x48);
    plVar15 = *(long **)(lVar12 + 8);
    if (plVar8 == plVar15) {
LAB_00c5c4b8:
      if (*(char *)(param_1 + 0x108) != '\0') {
        *(undefined1 *)(param_1 + 0x108) = 0;
        puVar14 = (undefined8 *)**(long **)(param_1 + 0xe8);
        if (puVar14 != (undefined8 *)(*(long **)(param_1 + 0xe8))[1]) {
          local_e0 = *puVar14;
          lVar12 = (**(code **)(**(long **)(param_1 + 8) + 0x2f0))();
          if (*(int *)(lVar12 + 0x34) != 0x7fffffff) {
            (**(code **)(**(long **)(param_1 + 8) + 0x328))();
          }
          (**(code **)(**(long **)(param_1 + 8) + 0x2a0))(*(long **)(param_1 + 8),&local_e0,1,0);
          puVar14 = puVar14 + 1;
          if (puVar14 != *(undefined8 **)(*(long *)(param_1 + 0xe8) + 8)) {
            do {
              local_e0 = *puVar14;
              lVar12 = (**(code **)(**(long **)(param_1 + 8) + 0x2f0))();
              if (*(int *)(lVar12 + 0x34) != 0x7fffffff) {
                (**(code **)(**(long **)(param_1 + 8) + 0x328))();
              }
              (**(code **)(**(long **)(param_1 + 8) + 0x2a0))(*(long **)(param_1 + 8),&local_e0,1,0)
              ;
              puVar14 = puVar14 + 1;
            } while (puVar14 != *(undefined8 **)(*(long *)(param_1 + 0xe8) + 8));
          }
        }
        if (0 < (int)((ulong)((*(long **)(param_1 + 0xa8))[1] - **(long **)(param_1 + 0xa8)) >> 3))
        {
          (**(code **)(**(long **)(param_1 + 8) + 0xe0))();
        }
        if (0 < (int)((ulong)((*(long **)(param_1 + 200))[1] - **(long **)(param_1 + 200)) >> 1)) {
          (**(code **)(**(long **)(param_1 + 8) + 0x98))();
        }
        if (0 < (int)((ulong)((*(long **)(param_1 + 0x88))[1] - **(long **)(param_1 + 0x88)) >> 1))
        {
          (**(code **)(**(long **)(param_1 + 8) + 0x88))();
        }
        (*(undefined8 **)(param_1 + 0xe8))[1] = **(undefined8 **)(param_1 + 0xe8);
        (*(undefined8 **)(param_1 + 0xa8))[1] = **(undefined8 **)(param_1 + 0xa8);
        (*(undefined8 **)(param_1 + 200))[1] = **(undefined8 **)(param_1 + 200);
        (*(undefined8 **)(param_1 + 0x88))[1] = **(undefined8 **)(param_1 + 0x88);
      }
      return;
    }
    do {
      while( true ) {
        do {
          if (plVar15 == plVar8) {
            *(long **)(lVar12 + 8) = plVar8;
            goto LAB_00c5c4b8;
          }
          plVar15 = plVar15 + -1;
          plVar11 = (long *)*plVar15;
        } while (plVar11 == (long *)0x0);
        lVar13 = plVar11[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 != 1) break;
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))();
      }
    } while (sVar2 != 0);
  }
  else {
    do {
      while( true ) {
        do {
          if (plVar15 == plVar8) {
            *(long **)(lVar12 + 8) = plVar8;
            goto LAB_00c5c3fc;
          }
          plVar15 = plVar15 + -1;
          plVar11 = (long *)*plVar15;
        } while (plVar11 == (long *)0x0);
        lVar13 = plVar11[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 != 1) break;
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))();
      }
    } while (sVar2 != 0);
  }
LAB_00c5cb00:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


