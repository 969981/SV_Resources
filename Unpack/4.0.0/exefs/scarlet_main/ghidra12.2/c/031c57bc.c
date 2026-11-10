/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c57bc; name: FUN_031c57bc
 */


void FUN_031c57bc(long *param_1,undefined4 param_2,long *param_3,byte *param_4,char *param_5,
                 int param_6)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  uint uVar17;
  byte *pbVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  long local_80;
  byte *local_78;
  ulong local_70;
  ulong local_68;
  
  if (*param_3 != 0) {
    lVar19 = param_3[1];
    if (param_5 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      sVar6 = strlen(param_5);
      pcVar10 = param_5 + sVar6;
    }
    uVar7 = FUN_031e198c(lVar19,param_5,pcVar10,1);
    if (1 < uVar7) {
      FUN_031e32f0(&local_80,param_3,uVar7);
      pbVar18 = local_78;
      if (local_78 != (byte *)0x0) {
        pbVar13 = local_78;
        if ((*local_78 & 1) == 0) {
          do {
            pbVar13 = *(byte **)(pbVar13 + 8);
          } while ((*pbVar13 & 1) == 0);
        }
        if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) == 8) {
          lVar19 = local_80;
          uVar7 = local_70;
          if ((local_70 & 1) != 0) {
            piVar1 = (int *)((local_70 & 0xfffffffffffffffe) + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          goto LAB_031c58cc;
        }
        pbVar18 = (byte *)0x0;
      }
      uVar7 = 0;
      lVar19 = 0;
      goto LAB_031c58cc;
    }
  }
  uVar7 = 0;
  pbVar18 = (byte *)0x0;
  local_80 = 0;
  lVar19 = 0;
  local_78 = (byte *)0x0;
  local_70 = 0;
LAB_031c58cc:
  if ((local_70 & 1) != 0) {
    plVar8 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar16 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar16 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  if (lVar19 != 0) {
    pbVar13 = param_4;
    if ((*param_4 & 1) == 0) {
      do {
        pbVar13 = *(byte **)(pbVar13 + 8);
      } while ((*pbVar13 & 1) == 0);
    }
    if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) != 7) {
      param_4 = (byte *)0x0;
    }
    puVar9 = (undefined8 *)FUN_031e1c40(param_4,param_5,1);
    pbVar13 = (byte *)0x0;
    if ((undefined8 *)0x1 < puVar9) {
      uVar11 = (uint)*puVar9;
      if ((uVar11 >> 0x11 & 1) == 0) {
        pbVar13 = (byte *)0x0;
      }
      else {
        uVar22 = CONCAT44(uVar11,uVar11) & 0x1ffff0001ffff;
        pbVar13 = (byte *)((ulong)puVar9 &
                          (long)(puVar9[(ulong)(byte)(POPCOUNT((char)uVar22) +
                                                      POPCOUNT((char)(uVar22 >> 8)) +
                                                     POPCOUNT((char)(uVar22 >> 0x10))) + 2] << 0x2a)
                          >> 0x3f);
      }
    }
    pbVar14 = pbVar13;
    if ((*pbVar13 & 1) == 0) {
      do {
        pbVar14 = *(byte **)(pbVar14 + 8);
      } while ((*pbVar14 & 1) == 0);
    }
    pbVar15 = pbVar13;
    if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) != 8) {
      pbVar15 = (byte *)0x0;
    }
    do {
      if ((*pbVar15 >> 1 & 1) != 0) {
        puVar20 = *(ulong **)(pbVar15 + 0x18);
        goto LAB_031c59d0;
      }
      pbVar15 = *(byte **)(pbVar15 + 8);
    } while (pbVar15 != (byte *)0x0);
    puVar20 = (ulong *)0x0;
LAB_031c59d0:
    iVar12 = (int)param_1[1];
    lVar16 = (long)iVar12;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar12) {
      FUN_031c627c(param_1,lVar16 + 1);
      iVar12 = (int)param_1[1];
    }
    lVar21 = *param_1;
    *(int *)(param_1 + 1) = (int)(lVar16 + 1);
    local_70 = 0;
    local_68 = 0;
    local_80 = 0;
    local_78 = (byte *)0x0;
    (**(code **)(*(long *)(uVar7 & 0xfffffffffffffffe) + 0x50))
              ((long *)(uVar7 & 0xfffffffffffffffe),lVar19,pbVar18,&local_80);
    iVar5 = (int)local_70;
    if ((local_68 & 1) != 0) {
      plVar8 = (long *)(local_68 & 0xfffffffffffffffe);
      plVar2 = plVar8 + 1;
      do {
        lVar19 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)lVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar8 != (long *)0x0) && ((int)lVar19 == 1)) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    *(int *)(lVar21 + (long)iVar12 * 0x10) = iVar5;
    while( true ) {
      uVar11 = (uint)*puVar20;
      if ((uVar11 >> 0x14 & 1) != 0) break;
      if (((*puVar20 & 1) != 0) || (puVar20 = (ulong *)puVar20[1], puVar20 == (ulong *)0x0))
      goto LAB_031c5ab0;
    }
    if (puVar20 != (ulong *)0x0) {
      uVar22 = CONCAT44(uVar11,uVar11) & 0xfffff000fffff;
      uVar11 = (uint)(ushort)puVar20[(ulong)(byte)(POPCOUNT((char)uVar22) +
                                                   POPCOUNT((char)(uVar22 >> 8)) +
                                                  POPCOUNT((char)(uVar22 >> 0x10))) + 2];
      goto LAB_031c5ab4;
    }
LAB_031c5ab0:
    uVar11 = 0;
LAB_031c5ab4:
    lVar21 = lVar21 + (long)iVar12 * 0x10;
    *(uint *)(lVar21 + 8) = uVar11;
    uVar17 = (uint)*(undefined8 *)pbVar13;
    if ((uVar17 >> 0x11 & 1) == 0) {
      uVar17 = 0;
    }
    else {
      uVar22 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
      uVar17 = (uint)*(ushort *)
                      (pbVar13 +
                      (ulong)(byte)(POPCOUNT((char)uVar22) + POPCOUNT((char)(uVar22 >> 8)) +
                                   POPCOUNT((char)(uVar22 >> 0x10))) * 8 + 0x10);
    }
    *(uint *)(lVar21 + 4) = uVar17 + param_6;
    *(undefined4 *)(lVar21 + 0xc) = param_2;
    *(uint *)((long)param_1 + 0x114) =
         *(int *)((long)param_1 + 0x114) + (uVar11 * iVar5 + 0xf & 0xfffffff0);
  }
  if ((uVar7 & 1) != 0) {
    plVar8 = (long *)(uVar7 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar19 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar19 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  return;
}


