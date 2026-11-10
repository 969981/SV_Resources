/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0133a350; name: FUN_0133a350
 */


ulong FUN_0133a350(long param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong *puVar14;
  ulong *puVar15;
  int *piVar16;
  
  if ((*param_2 == 0) && (0 < (int)*(uint *)(param_1 + 0x48))) {
    lVar10 = 0;
    piVar16 = (int *)(*(long *)(param_1 + 0x40) + 0x38);
    do {
      if (((((((piVar16[-0xe] == 0) && (piVar16[-0xd] == param_2[1])) &&
             (piVar16[-0xc] == param_2[2])) &&
            ((piVar16[-0xb] == param_2[3] && (piVar16[-10] == param_2[4])))) &&
           (piVar16[-9] == param_2[5])) &&
          (((((piVar16[-8] == param_2[6] && (piVar16[-7] == param_2[7])) &&
             ((piVar16[-6] == param_2[8] &&
              (((piVar16[-5] == param_2[9] && (piVar16[-4] == param_2[10])) &&
               (piVar16[-3] == param_2[0xb])))))) &&
            ((piVar16[-2] == param_2[0xc] && (piVar16[-1] == param_2[0xd])))) &&
           (*piVar16 == param_2[0xe])))) &&
         ((((piVar16[1] == param_2[0xf] && (piVar16[2] == param_2[0x10])) &&
           ((piVar16[3] == param_2[0x11] &&
            (((piVar16[4] == param_2[0x12] && (piVar16[5] == param_2[0x13])) &&
             (piVar16[6] == param_2[0x14])))))) &&
          (((piVar16[7] == param_2[0x15] && (piVar16[8] == param_2[0x16])) &&
           ((piVar16[9] == param_2[0x17] &&
            (((piVar16[10] == param_2[0x18] && (piVar16[0xb] == param_2[0x19])) &&
             ((piVar16[0xc] == param_2[0x1a] && (piVar16[0xd] == param_2[0x1b])))))))))))) {
        if ((int)lVar10 != 1) {
          uVar12 = -lVar10;
          goto LAB_0133a5ec;
        }
        break;
      }
      lVar10 = lVar10 + -1;
      piVar16 = piVar16 + 0x1c;
    } while (-lVar10 != (ulong)*(uint *)(param_1 + 0x48));
  }
  puVar1 = (uint *)(param_1 + 0x5c);
  if ((~*(uint *)(param_1 + 0x5c) & 0xffffff) == 0) {
    puVar11 = (ulong *)(param_1 + 0x38);
    plVar9 = (long *)(*puVar11 & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      *puVar11 = (ulong)plVar9 | 1;
      puVar14 = puVar11;
      do {
        puVar15 = (ulong *)(plVar9 + 1);
        plVar13 = (long *)(*puVar15 & 0xfffffffffffffffc);
        if ((*puVar15 & 3) == 0) {
          (**(code **)(*plVar9 + 0x20))(plVar9,param_1);
        }
        else {
          (**(code **)(*plVar9 + 8))();
          *puVar14 = *puVar14 & 3 | (ulong)plVar13;
          puVar15 = puVar14;
        }
        plVar9 = plVar13;
        puVar14 = puVar15;
      } while (plVar13 != (long *)0x0);
      *puVar11 = *puVar11 & 0xfffffffffffffffc;
    }
  }
  uVar3 = *puVar1;
  do {
    while( true ) {
      uVar6 = uVar3;
      uVar7 = uVar6 & 0xffffff;
      if (uVar7 == 0xffffff) {
        uVar12 = 0xffff;
        goto LAB_0133a5ec;
      }
      uVar12 = (ulong)uVar7;
      uVar3 = *puVar1;
      if (uVar3 == uVar6) break;
      ClearExclusiveLocal();
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar6 + 0x1000000 & 0xff000000 |
                *(uint *)(*(long *)(param_1 + 0x40) + uVar12 * 0x70) & 0xffffff;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  piVar16 = (int *)(param_1 + 0x60);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar5) {
      *piVar16 = *piVar16 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar3 = *(uint *)(param_1 + 100);
  if (uVar3 + 1 <= uVar7) {
    puVar1 = (uint *)(param_1 + 100);
    uVar2 = uVar3;
    if (uVar3 + 1 <= uVar7 + 1) {
      uVar2 = uVar7;
    }
    do {
      if (*puVar1 != uVar3) {
        do {
          ClearExclusiveLocal();
          uVar2 = *puVar1;
          uVar3 = uVar2;
          if (uVar2 + 1 <= uVar7 + 1) {
            uVar3 = uVar7;
          }
          while (*puVar1 == uVar2) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar3;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_0133a688;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
LAB_0133a688:
  puVar8 = (undefined4 *)(*(long *)(param_1 + 0x40) + uVar12 * 0x70);
  *puVar8 = 0;
  FUN_00cb4dc0(0x411cf5c3,puVar8,1);
  memcpy((void *)(*(long *)(param_1 + 0x40) + (ulong)(uVar6 & 0xffff) * 0x70),param_2,0x70);
  puVar11 = (ulong *)(param_1 + 0x20);
  plVar9 = (long *)(*puVar11 & 0xfffffffffffffffc);
  if (plVar9 != (long *)0x0) {
    *puVar11 = (ulong)plVar9 | 1;
    puVar14 = puVar11;
    do {
      puVar15 = (ulong *)(plVar9 + 1);
      plVar13 = (long *)(*puVar15 & 0xfffffffffffffffc);
      if ((*puVar15 & 3) == 0) {
        (**(code **)(*plVar9 + 0x20))(plVar9,param_1,(ulong)(uVar6 & 0xffff));
      }
      else {
        (**(code **)(*plVar9 + 8))();
        *puVar14 = *puVar14 & 3 | (ulong)plVar13;
        puVar15 = puVar14;
      }
      plVar9 = plVar13;
      puVar14 = puVar15;
    } while (plVar13 != (long *)0x0);
    *puVar11 = *puVar11 & 0xfffffffffffffffc;
  }
LAB_0133a5ec:
  return uVar12 & 0xffff;
}


