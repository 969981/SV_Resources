/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e82af0; name: FUN_02e82af0
 */


void FUN_02e82af0(long *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  long local_80 [2];
  byte local_68 [8];
  
  *param_1 = (long)(PTR_DAT_047e3350 + 0x10);
  FUN_02e8304c(param_1 + 0x15,param_1);
  puVar5 = PTR_DAT_047d19f0;
  if (*(char *)((long)param_1 + 0x94) != '\0') {
    plVar11 = param_1 + 9;
    uVar2 = 0;
    do {
      uVar12 = uVar2;
      if ((*(uint *)(param_1 + 10) & ((int)*(uint *)(param_1 + 10) >> 0x1f ^ 0xffffffffU)) == uVar12
         ) goto LAB_02e82d48;
      lVar8 = *plVar11;
      uVar2 = uVar12 + 1;
    } while ((*(byte *)((long)plVar11 + (ulong)(uVar12 & 0xffff) * 0x40 + lVar8 + 0x1e) & 1) != 0);
    if (uVar12 + 1 != 0) {
      NEON_fmov(0x3f800000,4);
      do {
        lVar8 = (ulong)(uVar12 & 0xffff) * 0x40 + lVar8;
        plVar9 = (long *)((long)plVar11 + lVar8 + 0x30);
        local_80[1] = *(undefined8 *)((long)plVar11 + lVar8 + 0x38);
        lVar8 = *plVar9;
        local_80[0] = 0;
        if (lVar8 != 0) {
          local_80[0] = (long)plVar9 + (lVar8 - (long)local_80);
        }
        lVar8 = local_80[0];
        if (((local_80[0] != 0) && (local_80[0] + (long)local_80 != 0)) &&
           (*(long *)((long)local_80 + local_80[0] + 8) != 0)) {
          plVar9 = (long *)((long)local_80 + local_80[0] + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = *plVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar8 = local_80[0];
        }
        if (((local_80[0] + (long)local_80 != 0) && (lVar8 != 0)) &&
           (lVar8 = (**(code **)(*(long *)puVar5 + (ulong)local_68[local_80[0]] * 0x200 + 0x48))(),
           lVar8 != 0)) {
          lVar8 = 0;
          if (local_80[0] != 0) {
            lVar8 = local_80[0] + (long)local_80;
          }
          lVar8 = (**(code **)(*(long *)puVar5 + (ulong)*(byte *)(lVar8 + 0x18) * 0x200 + 0x48))();
          FUN_02e8ad6c(lVar8,param_1,FUN_02e8aae4,0,uVar12);
          FUN_02e8af44(lVar8 + 8,param_1,&LAB_02e8ac1c,0,uVar12);
        }
        if ((local_80[0] != 0) &&
           (plVar9 = (long *)(local_80[0] + (long)local_80), plVar9 != (long *)0x0)) {
          if (*(long *)((long)local_80 + local_80[0] + 8) != 0) {
            plVar13 = (long *)((long)local_80 + local_80[0] + 0x10);
            do {
              lVar8 = *plVar13;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar8 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))();
            }
          }
          local_80[0] = 0;
        }
        uVar2 = uVar12 + 1;
        do {
          uVar12 = uVar2;
          if ((int)param_1[10] <= (int)uVar12) goto LAB_02e82d48;
          lVar8 = *plVar11;
          uVar2 = uVar12 + 1;
        } while ((*(byte *)((long)plVar11 + (ulong)(uVar12 & 0xffff) * 0x40 + lVar8 + 0x1e) & 1) !=
                 0);
      } while (uVar12 + 1 != 0);
    }
  }
LAB_02e82d48:
  lVar8 = param_1[0x1d];
  param_1[0x16] = (long)(PTR_DAT_047e3358 + 0x10);
  if (*(int *)((long)param_1 + 0xf4) < 0) {
    lVar10 = 0;
    if (lVar8 != 0) {
      lVar10 = lVar8 + (long)(param_1 + 0x1d);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar10,0);
  }
  lVar8 = param_1[0x19];
  if (*(int *)((long)param_1 + 0xd4) < 0) {
    lVar10 = 0;
    if (lVar8 != 0) {
      lVar10 = lVar8 + (long)(param_1 + 0x19);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar10,0);
  }
  puVar5 = PTR_DAT_047d1a00;
  param_1[0x16] = (long)(PTR_DAT_047d1a00 + 0x10);
  puVar6 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar11 = (long *)(param_1[0x15] & 0xfffffffffffffffc);
    if (plVar11 != (long *)0x0) {
      if ((param_1[0x15] & 3U) == 0) {
        param_1[0x15] = (ulong)plVar11 | 1;
        do {
          lVar8 = *plVar11;
          plVar11 = (long *)(plVar11[1] & 0xfffffffffffffffc);
          (**(code **)(lVar8 + 8))();
        } while (plVar11 != (long *)0x0);
        param_1[0x15] = 0;
        if (*puVar6 == '\0') goto LAB_02e82e90;
      }
      else {
        do {
          plVar9 = (long *)(plVar11[1] & 0xfffffffffffffffc);
          plVar11[1] = (ulong)plVar9 | 1;
          plVar11 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
    plVar11 = (long *)(param_1[0x14] & 0xfffffffffffffffc);
    if (plVar11 != (long *)0x0) {
      if ((param_1[0x14] & 3U) == 0) {
        param_1[0x14] = (ulong)plVar11 | 1;
        do {
          lVar8 = *plVar11;
          plVar11 = (long *)(plVar11[1] & 0xfffffffffffffffc);
          (**(code **)(lVar8 + 8))();
        } while (plVar11 != (long *)0x0);
        param_1[0x14] = 0;
      }
      else {
        do {
          plVar9 = (long *)(plVar11[1] & 0xfffffffffffffffc);
          plVar11[1] = (ulong)plVar9 | 1;
          plVar11 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_02e82e90:
  lVar8 = param_1[0xc];
  if (*(int *)((long)param_1 + 0x6c) < 0) {
    lVar10 = 0;
    if (lVar8 != 0) {
      lVar10 = lVar8 + (long)(param_1 + 0xc);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar10,0);
  }
  iVar7 = (int)param_1[10];
  plVar11 = param_1 + 9;
  if (0 < iVar7) {
    lVar8 = 0;
    do {
      lVar10 = lVar8 * 0x40 + *plVar11;
      if ((*(byte *)((long)plVar11 + lVar10 + 0x1e) & 1) == 0) {
        plVar13 = (long *)((long)plVar11 + lVar10 + 0x30);
        plVar9 = (long *)(*plVar13 + (long)plVar13);
        if (*plVar13 != 0 && plVar9 != (long *)0x0) {
          if (plVar9[1] != 0) {
            plVar1 = plVar9 + 2;
            do {
              lVar10 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar10 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))();
            }
          }
          *plVar13 = 0;
          iVar7 = (int)param_1[10];
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar7);
  }
  if (*(int *)((long)param_1 + 0x54) < 0) {
    lVar8 = 0;
    if (param_1[9] != 0) {
      lVar8 = param_1[9] + (long)plVar11;
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar8,0);
  }
  *param_1 = (long)(PTR_DAT_047e3368 + 0x10);
  plVar11 = param_1 + 6;
  uVar2 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar2) {
    lVar8 = 0;
    if (*plVar11 != 0) {
      lVar8 = *plVar11 + (long)plVar11;
    }
    plVar9 = (long *)(lVar8 + (ulong)uVar2 * 8);
    uVar12 = 0;
    do {
      plVar9 = plVar9 + -1;
      if (((*plVar9 != 0) && (plVar13 = (long *)(*plVar9 + (long)plVar9), plVar13 != (long *)0x0))
         && (plVar13[1] != 0)) {
        plVar1 = plVar13 + 2;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar13 + 0x18))();
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar2);
  }
  if (*(int *)((long)param_1 + 0x3c) < 0) {
    lVar8 = 0;
    if (*plVar11 != 0) {
      lVar8 = *plVar11 + (long)plVar11;
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar8,0);
  }
  *param_1 = (long)(puVar5 + 0x10);
  return;
}


