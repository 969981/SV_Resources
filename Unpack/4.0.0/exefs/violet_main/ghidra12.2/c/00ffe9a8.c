/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ffe9a8; name: FUN_00ffe9a8
 */


void FUN_00ffe9a8(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  local_58 = *(long *)(DAT_0485a0d8 + 0x38);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x20) + 0x10))();
  }
  FUN_00ebbcc0(*(undefined8 *)(param_1 + 0x80),&local_58,1);
  FUN_00fff1a4(&local_60,local_58,*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x70));
  *(undefined4 *)(local_60[0x11] + 0x44) = 3;
  lVar10 = *(long *)(param_1 + 0x78);
  lVar14 = *(long *)(lVar10 + 0x70);
  lVar12 = lVar10 + 0x68;
  if (lVar14 != lVar12) {
    do {
      lVar10 = *(long *)(lVar14 + 0x10);
      if ((int)((ulong)(*(long *)(lVar10 + 0x58) - *(long *)(lVar10 + 0x50)) >> 3) != 0) {
        lVar10 = **(long **)(lVar10 + 0x50);
        *(long *)(lVar10 + 0xe8) = local_60[6];
        *(long *)(lVar10 + 0xf0) = local_60[7];
        *(long *)(lVar10 + 0xf8) = local_60[8];
        plVar9 = (long *)local_60[9];
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        plVar6 = *(long **)(lVar10 + 0x100);
        *(long **)(lVar10 + 0x100) = plVar9;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))();
        }
        lVar10 = *(long *)(lVar14 + 0x10);
        if ((*(long *)(lVar10 + 0x58) - *(long *)(lVar10 + 0x50) & 0x7fffffff0U) != 0) {
          lVar10 = *(long *)(*(long *)(lVar10 + 0x50) + 8);
          *(long *)(lVar10 + 0xe8) = local_60[6];
          *(long *)(lVar10 + 0xf0) = local_60[7];
          *(long *)(lVar10 + 0xf8) = local_60[8];
          plVar9 = (long *)local_60[9];
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
          plVar6 = *(long **)(lVar10 + 0x100);
          *(long **)(lVar10 + 0x100) = plVar9;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))();
          }
          lVar10 = *(long *)(lVar14 + 0x10);
          if (0x10 < (*(long *)(lVar10 + 0x58) - *(long *)(lVar10 + 0x50) & 0x7fffffff8U)) {
            uVar8 = 2;
            do {
              lVar10 = *(long *)(*(long *)(lVar10 + 0x50) + uVar8 * 8);
              *(long *)(lVar10 + 0xe8) = local_60[6];
              *(long *)(lVar10 + 0xf0) = local_60[7];
              *(long *)(lVar10 + 0xf8) = local_60[8];
              plVar9 = (long *)local_60[9];
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x18))(plVar9);
              }
              plVar6 = *(long **)(lVar10 + 0x100);
              *(long **)(lVar10 + 0x100) = plVar9;
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x20))();
              }
              lVar10 = *(long *)(lVar14 + 0x10);
              uVar8 = uVar8 + 1;
            } while (uVar8 < ((ulong)(*(long *)(lVar10 + 0x58) - *(long *)(lVar10 + 0x50)) >> 3 &
                             0xffffffff));
          }
        }
      }
      lVar14 = *(long *)(lVar14 + 8);
    } while (lVar14 != lVar12);
    lVar10 = *(long *)(param_1 + 0x78);
    lVar12 = *(long *)(lVar10 + 0x70);
  }
  for (; lVar12 != lVar10 + 0x68; lVar12 = *(long *)(lVar12 + 8)) {
    lVar14 = *(long *)(lVar12 + 0x10);
    plVar9 = *(long **)(lVar14 + 0x50);
    plVar6 = *(long **)(lVar14 + 0x58);
    if (plVar9 != plVar6) {
      lVar16 = *plVar9;
      *(undefined8 *)(lVar16 + 0x108) = *(undefined8 *)(lVar14 + 0x160);
      *(undefined8 *)(lVar16 + 0x110) = *(undefined8 *)(lVar14 + 0x168);
      *(undefined8 *)(lVar16 + 0x118) = *(undefined8 *)(lVar14 + 0x170);
      plVar11 = *(long **)(lVar14 + 0x178);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      plVar7 = *(long **)(lVar16 + 0x120);
      *(long **)(lVar16 + 0x120) = plVar11;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      FUN_00eb0770(*plVar9,&local_58);
      if (plVar9 + 1 != plVar6) {
        lVar16 = plVar9[1];
        *(undefined8 *)(lVar16 + 0x108) = *(undefined8 *)(lVar14 + 0x160);
        *(undefined8 *)(lVar16 + 0x110) = *(undefined8 *)(lVar14 + 0x168);
        *(undefined8 *)(lVar16 + 0x118) = *(undefined8 *)(lVar14 + 0x170);
        plVar11 = *(long **)(lVar14 + 0x178);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
        plVar7 = *(long **)(lVar16 + 0x120);
        *(long **)(lVar16 + 0x120) = plVar11;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
        FUN_00eb0770(plVar9[1],&local_58);
        for (plVar9 = plVar9 + 2; plVar9 != plVar6; plVar9 = plVar9 + 1) {
          lVar16 = *plVar9;
          *(undefined8 *)(lVar16 + 0x108) = *(undefined8 *)(lVar14 + 0x160);
          *(undefined8 *)(lVar16 + 0x110) = *(undefined8 *)(lVar14 + 0x168);
          *(undefined8 *)(lVar16 + 0x118) = *(undefined8 *)(lVar14 + 0x170);
          plVar11 = *(long **)(lVar14 + 0x178);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
          plVar7 = *(long **)(lVar16 + 0x120);
          *(long **)(lVar16 + 0x120) = plVar11;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x20))();
          }
          FUN_00eb0770(*plVar9,&local_58);
        }
      }
    }
  }
  lVar14 = *(long *)(param_1 + 0x80);
  lVar10 = *(long *)(lVar14 + 0x78);
  for (lVar12 = *(long *)(lVar14 + 0x70); lVar12 != lVar10; lVar12 = lVar12 + 0x28) {
    FUN_00c5ecb4(&local_80,*(undefined8 *)(lVar14 + 0x30),lVar12);
    FUN_00eaabc4(local_80);
    if (local_80 != (long *)0x0) {
      plVar9 = local_80 + 5;
      do {
        lVar16 = *plVar9;
        iVar5 = (int)lVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
      else if ((int)lVar16 == 0) goto LAB_00fff03c;
    }
  }
  local_80 = (long *)0x4292f1208598d1cc;
  pcStack_78 = "HeightMap";
  local_70 = 9;
  local_68 = (long *)0x0;
  uVar8 = (**(code **)(*DAT_0485a020 + 0x18))(DAT_0485a020,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if ((uVar8 & 0xff) != 0) {
    for (piVar1 = (int *)local_60[0x18]; piVar1 != (int *)local_60[0x19]; piVar1 = piVar1 + 0xe) {
      if (*piVar1 == (int)(uVar8 >> 0x20)) {
        puVar2 = (undefined8 *)local_60[0xb];
        if ((undefined8 *)local_60[10] != puVar2) {
          puVar13 = (undefined8 *)local_60[10];
          goto LAB_00ffee2c;
        }
        break;
      }
    }
    goto LAB_00ffed04;
  }
  goto LAB_00ffed38;
  while (puVar13 = puVar15, puVar2 != puVar15) {
LAB_00ffee60:
    puVar15 = puVar13 + 1;
    FUN_00fff044(&local_80,*puVar13,piVar1 + 2);
    if (local_80 != (long *)0x0) goto LAB_00ffedb4;
  }
  goto LAB_00ffedb0;
  while (puVar13 = puVar15, puVar2 != puVar15) {
LAB_00ffee2c:
    puVar15 = puVar13 + 1;
    FUN_00fff044(&local_80,*puVar13,piVar1 + 2);
    if (local_80 != (long *)0x0) goto LAB_00ffed08;
  }
LAB_00ffed04:
  local_80 = (long *)0x0;
LAB_00ffed08:
  plVar9 = *(long **)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 5;
    do {
      lVar12 = *plVar6;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_00fff03c;
  }
  *(long **)(param_1 + 0x140) = local_80;
LAB_00ffed38:
  local_80 = (long *)0xfc76c39cd4503c8d;
  pcStack_78 = "HeightNormalMap";
  local_70 = 0xf;
  local_68 = (long *)0x0;
  uVar8 = (**(code **)(*DAT_0485a020 + 0x18))(DAT_0485a020,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if ((uVar8 & 0xff) != 0) {
    for (piVar1 = (int *)local_60[0x18]; piVar1 != (int *)local_60[0x19]; piVar1 = piVar1 + 0xe) {
      if (*piVar1 == (int)(uVar8 >> 0x20)) {
        puVar2 = (undefined8 *)local_60[0xb];
        if ((undefined8 *)local_60[10] != puVar2) {
          puVar13 = (undefined8 *)local_60[10];
          goto LAB_00ffee60;
        }
        break;
      }
    }
LAB_00ffedb0:
    local_80 = (long *)0x0;
LAB_00ffedb4:
    plVar9 = *(long **)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = 0;
    if (plVar9 != (long *)0x0) {
      plVar6 = plVar9 + 5;
      do {
        lVar12 = *plVar6;
        iVar5 = (int)lVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar12 == 0) goto LAB_00fff03c;
    }
    *(long **)(param_1 + 0x148) = local_80;
  }
  if (local_60 != (long *)0x0) {
    plVar9 = local_60 + 5;
    do {
      lVar12 = *plVar9;
      iVar5 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
LAB_00fff03c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x20) + 0x18))();
  }
  return;
}


