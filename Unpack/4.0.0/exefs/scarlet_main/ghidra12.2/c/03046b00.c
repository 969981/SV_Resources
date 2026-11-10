/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03046b00; name: FUN_03046b00
 */


void FUN_03046b00(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long *local_48;
  
  plVar5 = (long *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x2c)) {
    lVar6 = 0;
    lVar16 = (ulong)*(uint *)(param_1 + 0x2c) + 1;
    do {
      plVar4 = (long *)(*plVar5 + lVar6);
      if (*plVar4 != -1 && plVar4[1] != -1) {
        *plVar4 = -1;
        plVar4[1] = -1;
      }
      lVar16 = lVar16 + -1;
      lVar6 = lVar6 + 0x18;
    } while (lVar16 != 0);
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0x80000000;
  iVar15 = 8;
  do {
    bVar1 = iVar15 < *(int *)(param_2 + 0x28) * 2;
    iVar15 = iVar15 << 1;
  } while (bVar1);
  FUN_03046038(plVar5);
  uVar10 = *(uint *)(param_2 + 0x2c);
  if (-1 < (int)uVar10) {
    lVar16 = *(long *)(param_2 + 0x20);
    uVar8 = 0xffffffffffffffff;
    plVar4 = (long *)(lVar16 + 8);
    do {
      if (plVar4[-1] != -1 && *plVar4 != -1) {
        uVar7 = (uint)uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
      plVar4 = plVar4 + 3;
      uVar7 = uVar10;
    } while (uVar10 != uVar8);
    iVar15 = uVar7 + 1;
    if (iVar15 <= (int)uVar10) {
      do {
        uVar10 = *(uint *)(param_1 + 0x2c);
        plVar4 = (long *)(lVar16 + (long)iVar15 * 0x18);
        lVar6 = (long)iVar15;
        if ((int)uVar10 < *(int *)(param_1 + 0x28) * 2) {
          FUN_03046038(plVar5,uVar10 * 2 + 2);
          uVar10 = *(uint *)(param_1 + 0x2c);
        }
        lVar12 = *(long *)(lVar16 + lVar6 * 0x18 + 8);
        lVar9 = *plVar5;
        uVar7 = (int)lVar12 * -0x61c8864f & uVar10;
        plVar13 = (long *)(lVar9 + (ulong)uVar7 * 0x18);
        lVar16 = *plVar13;
        lVar14 = plVar13[1];
        if (lVar16 != -1 && lVar14 != -1) {
          do {
            if ((lVar14 == lVar12) && (lVar16 == *plVar4)) {
              iVar11 = 0;
              goto LAB_03046d78;
            }
            uVar7 = uVar7 + 1 & uVar10;
            plVar13 = (long *)(lVar9 + (ulong)uVar7 * 0x18);
            lVar16 = *plVar13;
            lVar14 = plVar13[1];
          } while (lVar16 != -1 && lVar14 != -1);
        }
        iVar11 = 1;
LAB_03046d78:
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar11;
        lVar16 = plVar4[1];
        plVar13 = (long *)(lVar9 + (long)(int)uVar7 * 0x18);
        *plVar13 = *plVar4;
        plVar13[1] = lVar16;
        *(int *)(*(long *)(param_1 + 0x20) + (long)(int)uVar7 * 0x18 + 0x10) = (int)plVar4[2];
        iVar2 = *(int *)(param_2 + 0x2c);
        iVar11 = iVar2;
        if (iVar2 <= iVar15) {
          iVar11 = iVar15;
        }
        lVar16 = lVar6 * 0x18;
        lVar6 = iVar11 - lVar6;
        do {
          if (lVar6 == 0) {
            iVar15 = iVar11 + 1;
            break;
          }
          lVar14 = *(long *)(param_2 + 0x20) + lVar16;
          lVar6 = lVar6 + -1;
          iVar15 = iVar15 + 1;
          lVar16 = lVar16 + 0x18;
        } while (*(long *)(lVar14 + 0x18) == -1 || *(long *)(lVar14 + 0x20) == -1);
        if (iVar2 < iVar15) break;
        lVar16 = *(long *)(param_2 + 0x20);
      } while( true );
    }
  }
  if (*(long **)(param_2 + 0x30) == (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar4 = plVar5 + 2;
      do {
        lVar16 = *plVar4;
        cVar3 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar1) {
          *plVar4 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x03046cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x18))();
        return;
      }
    }
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x30) + 0x68))(&local_48);
    plVar5 = local_48;
    local_48 = (long *)0x0;
    plVar4 = *(long **)(param_1 + 0x30);
    *(long **)(param_1 + 0x30) = plVar5;
    if (plVar4 != (long *)0x0) {
      if (plVar4[1] != 0) {
        plVar5 = plVar4 + 2;
        do {
          lVar16 = *plVar5;
          cVar3 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar1) {
            *plVar5 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      if ((local_48 != (long *)0x0) && (local_48[1] != 0)) {
        plVar5 = local_48 + 2;
        do {
          lVar16 = *plVar5;
          cVar3 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar1) {
            *plVar5 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 + -1 == 0) {
          (**(code **)(*local_48 + 0x18))();
        }
      }
    }
  }
  return;
}


