/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030af8fc; name: FUN_030af8fc
 */


/* WARNING: Removing unreachable block (ram,0x030afa98) */

void FUN_030af8fc(long param_1,long param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint uVar19;
  uint local_78 [2];
  undefined4 local_70 [2];
  uint local_68 [2];
  
  if (*(char *)(param_1 + 100) == '\x04') {
    return;
  }
  if (param_3 == 0) {
    if (param_2 == 0) {
      return;
    }
    uVar14 = (ulong)*(uint *)(param_1 + 0x58);
  }
  else {
    if (0 < (int)*(uint *)(param_1 + 0x40)) {
      pcVar1 = (char *)(param_1 + 100);
      uVar14 = (ulong)*(uint *)(param_1 + 0x40);
      do {
        uVar18 = uVar14 - 1;
        local_70[0] = *(undefined4 *)(*(long *)(param_1 + 0x38) + uVar18 * 0x20 + 0x10);
        lVar6 = FUN_030b04f4((long *)(param_3 + 0x18),local_70);
        if (lVar6 == 0) {
          uVar13 = 0;
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = (ulong)*(uint *)(lVar6 + 4);
          uVar13 = (lVar6 - *(long *)(param_3 + 0x28)) * 0x20000000;
        }
        if ((-1 < (int)(uVar16 | uVar13)) &&
           ((*(byte *)(*(long *)(param_3 + 0x18) + ((long)((uVar16 | uVar13) << 0x20) >> 0x1d) + 4)
             >> 1 & 1) != 0)) {
          iVar11 = *(int *)(param_1 + 0x40);
          lVar6 = (long)iVar11 + -1;
          *(int *)(param_1 + 0x40) = (int)lVar6;
          if (iVar11 != (int)uVar14) {
            puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar6 * 0x20);
            puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar18 * 0x20);
            uVar17 = puVar3[1];
            *puVar4 = *puVar3;
            puVar4[1] = uVar17;
            uVar17 = puVar3[3];
            puVar4[2] = puVar3[2];
            puVar4[3] = uVar17;
          }
          iVar11 = *(int *)(param_1 + 0x78);
          lVar6 = (long)iVar11;
          if ((int)(*(uint *)(param_1 + 0x7c) & 0x7fffffff) <= iVar11) {
            FUN_0133bb88(param_1 + 0x70,PTR_PTR_047d1a50,lVar6 + 1);
            iVar11 = *(int *)(param_1 + 0x78);
          }
          *(int *)(*(long *)(param_1 + 0x70) + (long)iVar11 * 4) = (int)uVar18;
          *(int *)(param_1 + 0x78) = (int)(lVar6 + 1);
        }
        if (*(int *)(param_1 + 0x40) == 0) {
          cVar10 = *pcVar1;
          do {
            while (cVar10 == '\x01') {
              cVar10 = *pcVar1;
              if (cVar10 == '\x01') {
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                if (bVar15) {
                  *pcVar1 = '\x03';
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') {
                  *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x20) = 3;
                  plVar7 = *(long **)(param_1 + 0x68);
                  *(undefined8 *)(param_1 + 0x68) = 0;
                  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
                    plVar2 = plVar7 + 2;
                    do {
                      lVar6 = *plVar2;
                      cVar10 = '\x01';
                      bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar15) {
                        *plVar2 = lVar6 + -1;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar10 != '\0');
                    if (lVar6 + -1 == 0) {
                      (**(code **)(*plVar7 + 0x18))();
                    }
                  }
                  goto LAB_030afa3c;
                }
              }
              else {
                ClearExclusiveLocal();
              }
            }
            if (cVar10 != '\0') break;
            cVar10 = *pcVar1;
            if (cVar10 == '\0') {
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar15) {
                *pcVar1 = '\x02';
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_030afaa4;
              bVar15 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_030afaa4:
              bVar15 = false;
            }
          } while (!bVar15);
        }
LAB_030afa3c:
        bVar15 = 1 < (long)uVar14;
        uVar14 = uVar18;
      } while (bVar15);
    }
    lVar6 = (long)*(int *)(param_1 + 0x60);
    uVar14 = (ulong)*(uint *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x60) < (int)*(uint *)(param_1 + 0x58)) {
      uVar19 = 0xffffffff;
      do {
        uVar12 = *(uint *)(*(long *)(param_1 + 0x50) + lVar6 * 4);
        if (uVar19 != uVar12 >> 0x16) {
          uVar19 = uVar12 >> 0x16;
          local_78[0] = uVar19;
          lVar8 = FUN_030b04f4((long *)(param_3 + 0x18),local_78);
          if (lVar8 == 0) {
            uVar14 = 0;
            uVar18 = 0xffffffff;
          }
          else {
            uVar18 = (ulong)*(uint *)(lVar8 + 4);
            uVar14 = (lVar8 - *(long *)(param_3 + 0x28)) * 0x20000000;
          }
          if ((-1 < (int)(uVar18 | uVar14)) &&
             ((*(byte *)(*(long *)(param_3 + 0x18) + ((long)((uVar18 | uVar14) << 0x20) >> 0x1d) + 4
                        ) >> 1 & 1) != 0)) goto LAB_030afc38;
        }
        uVar14 = (ulong)*(int *)(param_1 + 0x58);
        lVar6 = lVar6 + 1;
      } while (lVar6 < (long)uVar14);
    }
    if (param_2 == 0) {
      return;
    }
  }
  lVar6 = (long)*(int *)(param_1 + 0x60);
  if ((int)uVar14 <= *(int *)(param_1 + 0x60)) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x50);
  uVar19 = 0xffffffff;
  do {
    local_68[0] = *(uint *)(lVar8 + lVar6 * 4);
    if (uVar19 != local_68[0]) {
      lVar8 = *(long *)(param_2 + 0x18) + (ulong)(local_68[0] >> 0x16) * 0x20;
      local_68[0] = local_68[0] & 0x3fffff;
      lVar9 = FUN_0305c290(lVar8,local_68);
      if (lVar9 == 0) {
        uVar12 = 0;
        uVar19 = 0xffffffff;
      }
      else {
        uVar19 = *(uint *)(lVar9 + 4);
        uVar12 = ((int)lVar9 - (int)*(undefined8 *)(lVar8 + 0x10)) * 0x20000000;
      }
      if (-1 < (int)(uVar19 | uVar12)) {
LAB_030afc38:
        FUN_030afc5c(param_1,param_4);
        return;
      }
      lVar8 = *(long *)(param_1 + 0x50);
      uVar19 = *(uint *)(lVar8 + lVar6 * 4);
      uVar14 = (ulong)*(uint *)(param_1 + 0x58);
    }
    lVar6 = lVar6 + 1;
    if ((int)uVar14 <= lVar6) {
      return;
    }
  } while( true );
}


