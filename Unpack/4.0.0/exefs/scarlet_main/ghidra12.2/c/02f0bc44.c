/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0bc44; name: FUN_02f0bc44
 */


uint FUN_02f0bc44(long param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  
  uVar5 = param_2[6];
  lVar6 = (long)(int)uVar5;
  if (uVar5 == 0x7fffffff) {
    uVar5 = *(uint *)(param_1 + 0x54) & 0xffffff;
    if (uVar5 != 0xffffff) {
      puVar10 = (uint *)(param_1 + 0x54);
      uVar12 = *(uint *)(param_1 + 0x54);
      do {
        uVar11 = *puVar10;
        if (uVar11 == uVar12) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar10,0x10);
          if (bVar4) {
            *puVar10 = uVar12 + 0x1000000 & 0xff000000 |
                       *(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar5 * 0x38 + 0x18) & 0xffffff;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            piVar1 = (int *)(param_1 + 0x58);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            uVar12 = *(uint *)(param_1 + 0x5c);
            if (uVar12 + 1 <= uVar5) {
              puVar10 = (uint *)(param_1 + 0x5c);
              uVar11 = uVar12;
              if (uVar12 + 1 <= uVar5 + 1) {
                uVar11 = uVar5;
              }
              do {
                if (*puVar10 != uVar12) {
                  do {
                    ClearExclusiveLocal();
                    uVar11 = *puVar10;
                    uVar12 = uVar11;
                    if (uVar11 + 1 <= uVar5 + 1) {
                      uVar12 = uVar5;
                    }
                    while (*puVar10 == uVar11) {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(puVar10,0x10);
                      if (bVar4) {
                        *puVar10 = uVar12;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      if (cVar3 == '\0') goto LAB_02f0bda0;
                    }
                  } while( true );
                }
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar10,0x10);
                if (bVar4) {
                  *puVar10 = uVar11;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
LAB_02f0bda0:
            puVar7 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)uVar5 * 0x38);
            *puVar7 = 0;
            puVar7[1] = 0x3f0000003089705f;
            *(undefined1 *)puVar7 = 1;
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[3] = 0x7fffffff;
            puVar7[4] = 0;
            puVar7[2] = 0x7fffffff3f000000;
            *(undefined2 *)((long)puVar7 + 4) = 0;
            *(undefined1 *)((long)puVar7 + 6) = 0;
            *(undefined2 *)(puVar7 + 4) = 0xff00;
            goto LAB_02f0beac;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        uVar5 = uVar11 & 0xffffff;
        uVar12 = uVar11;
      } while (uVar5 != 0xffffff);
    }
    return 0x7fffffff;
  }
  if (*(int *)(param_1 + 0x40) <= (int)uVar5) {
    return 0x7fffffff;
  }
  lVar9 = *(long *)(param_1 + 0x38);
  if (*(int *)(lVar9 + lVar6 * 0x38 + 0x14) != 0x7fffffff) {
    return 0x7fffffff;
  }
  uVar12 = *(uint *)(param_1 + 0x54) & 0xffffff;
  if (uVar12 == uVar5) {
    uVar12 = *(uint *)(lVar9 + lVar6 * 0x38 + 0x18);
  }
  else {
    do {
      uVar11 = uVar12;
      puVar10 = (uint *)(lVar9 + (long)(int)uVar11 * 0x38 + 0x18);
      uVar12 = *puVar10;
    } while (uVar12 != uVar5 && uVar12 != 0xffffffff);
    if (uVar12 == 0xffffffff) {
      return 0x7fffffff;
    }
    uVar12 = *(uint *)(lVar9 + (long)(int)uVar12 * 0x38 + 0x18);
    if (uVar11 != 0xffffffff) {
      *puVar10 = uVar12;
      goto LAB_02f0be30;
    }
  }
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) + 0x1000000 & 0xff000000 | uVar12 & 0xffffff
  ;
LAB_02f0be30:
  uVar12 = *(uint *)(param_1 + 0x5c);
  if ((int)(*(uint *)(param_1 + 0x5c) + 1) <= (int)uVar5) {
    uVar12 = uVar5;
  }
  *(uint *)(param_1 + 0x5c) = uVar12;
  piVar1 = (int *)(param_1 + 0x58);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar6 * 0x38);
  *puVar7 = 0;
  puVar7[1] = 0x3f0000003089705f;
  *(undefined1 *)puVar7 = 1;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *(undefined2 *)((long)puVar7 + 4) = 0;
  *(undefined1 *)((long)puVar7 + 6) = 0;
  puVar7[6] = 0;
  puVar7[2] = 0x7fffffff3f000000;
  puVar7[3] = 0x7fffffff;
  *(undefined2 *)(puVar7 + 4) = 0xff00;
  uVar5 = param_2[6];
LAB_02f0beac:
  puVar8 = (undefined1 *)(*(long *)(param_1 + 0x38) + (long)(int)uVar5 * 0x38);
  *puVar8 = (char)*param_2;
  *(undefined4 *)(puVar8 + 0x1c) = 0;
  *(undefined8 *)(puVar8 + 0x30) = 0;
  puVar8[0x20] = *(undefined1 *)(param_2 + 1);
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(puVar8 + 0xc) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(puVar8 + 4) = uVar2;
  *(undefined8 *)(puVar8 + 0x30) = *(undefined8 *)(param_2 + 8);
  *(uint *)(puVar8 + 0x14) = uVar5;
  return uVar5;
}


