/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e7cad4; name: FUN_00e7cad4
 */


void FUN_00e7cad4(undefined8 param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  
  uVar3 = (**(code **)(*(long *)param_2[0x10] + 0x10))();
  if ((uVar3 & 1) != 0) {
    (**(code **)(*(long *)param_2[0x10] + 0x90))(param_1,(long *)param_2[0x10],param_3 & 1);
  }
  if ((long *)param_2[0x12] != (long *)0x0) {
    uVar3 = (**(code **)(*(long *)param_2[0x12] + 0x70))();
    if ((uVar3 & 1) != 0) {
      (**(code **)(*(long *)param_2[0x12] + 0x78))(param_1,(long *)param_2[0x12],param_3 & 1);
      if (((long *)param_2[0x12] == (long *)0x0) ||
         (uVar3 = (**(code **)(*(long *)param_2[0x12] + 0x70))(), (uVar3 & 1) != 0))
      goto LAB_00e7cb24;
    }
    param_2[0x12] = 0;
  }
LAB_00e7cb24:
  if (((long *)param_2[2] != (long *)0x0) && ((char)param_2[0x13] != '\x02')) {
    if ((char)param_2[0x13] == '\x01') {
      plVar4 = (long *)(**(code **)(*(long *)param_2[2] + 0x38))();
      if ((plVar4 == (long *)0x0) || (lVar7 = (**(code **)(*plVar4 + 0x60))(), lVar7 == 0)) {
        *(undefined1 *)(param_2 + 0x13) = 2;
        lVar7 = param_2[2];
        if (lVar7 != 0) {
          plVar10 = *(long **)(lVar7 + 0x18);
          lVar13 = *(long *)(lVar7 + 0x28);
          lVar7 = *(long *)(lVar7 + 0x20) * lVar13;
          plVar4 = plVar10;
          if (lVar7 != 0) {
            lVar12 = 0;
            do {
              iVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
              if (iVar2 == 3) goto LAB_00e7cfb4;
              plVar4 = (long *)((long)plVar10 + lVar12 + lVar13);
              lVar12 = lVar12 + lVar13;
            } while (lVar7 != lVar12);
            plVar4 = (long *)((long)plVar10 + lVar7);
          }
LAB_00e7cfb4:
          lVar7 = param_2[8];
          lVar13 = param_2[7] * lVar7;
          plVar11 = (long *)param_2[6];
          plVar10 = plVar11;
          if (lVar13 != 0) {
            lVar12 = 0;
            do {
              plVar8 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10);
              plVar9 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4);
              if (*plVar8 == *plVar9) goto LAB_00e7d004;
              plVar10 = (long *)((long)plVar11 + lVar12 + lVar7);
              lVar12 = lVar12 + lVar7;
            } while (lVar13 != lVar12);
            plVar10 = (long *)((long)plVar11 + lVar13);
          }
LAB_00e7d004:
          (**(code **)(*plVar10 + 0x68))(plVar10,param_2,plVar4);
        }
      }
    }
    else {
      uVar16 = *(undefined4 *)((long)param_2 + 0x9c);
      uVar3 = (**(code **)(*(long *)param_2[0x10] + 0x10))();
      if ((uVar3 & 1) == 0) {
        if (((long *)param_2[0x11] == (long *)0x0) ||
           (uVar3 = (**(code **)(*(long *)param_2[0x11] + 0x160))(), (uVar3 & 1) == 0)) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0x3f800000;
        }
      }
      else {
        uVar15 = (**(code **)(*(long *)param_2[0x10] + 0x60))();
      }
      *(int *)((long)param_2 + 0x9c) = (int)uVar15;
      if (param_2[7] != 0) {
        iVar2 = (**(code **)(*(long *)param_2[1] + 0x30))();
        lVar12 = (**(code **)(*(long *)param_2[2] + 0x60))();
        lVar7 = param_2[7];
        lVar13 = param_2[8];
        if (lVar7 * lVar13 != 0) {
          plVar10 = (long *)param_2[6];
          lVar14 = 0;
          plVar4 = plVar10;
          do {
            plVar11 = (long *)(**(code **)(*(long *)param_2[2] + 0x60))();
            if ((plVar11 != plVar4) &&
               (uVar3 = (**(code **)(*plVar4 + 0x58))(uVar16,uVar15,plVar4,iVar2 == 2,lVar12 != 0),
               (uVar3 & 1) != 0)) {
              if (plVar4 != (long *)0x0) goto LAB_00e7ccec;
              break;
            }
            plVar4 = (long *)((long)plVar10 + lVar14 + lVar13);
            lVar14 = lVar14 + lVar13;
          } while (lVar7 * lVar13 != lVar14);
        }
      }
      plVar4 = (long *)param_2[0x15];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_2[2] + 0x118))();
        param_2[0x15] = (long)plVar4;
        if (plVar4 == (long *)0x0) goto LAB_00e7cba0;
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x128))(uVar16,uVar15);
      if (plVar4 != (long *)0x0) {
LAB_00e7ccec:
        puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4);
        local_a0 = *puVar6;
        uStack_98 = puVar6[1];
        local_90 = puVar6[2];
        local_88 = (long *)puVar6[3];
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x18))();
        }
        plVar10 = (long *)(**(code **)(*(long *)param_2[2] + 0x120))((long *)param_2[2],&local_a0);
        uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
        if ((param_2 != plVar10) || ((uVar3 & 1) != 0)) {
          (**(code **)(*plVar4 + 0xb0))(plVar4);
          iVar2 = (**(code **)(*plVar10 + 0x30))(plVar10);
          if (iVar2 == 3) {
            plVar4 = (long *)(**(code **)(*(long *)param_2[2] + 0x38))();
            if ((plVar4 == (long *)0x0) || (lVar7 = (**(code **)(*plVar4 + 0x60))(), lVar7 == 0)) {
              *(undefined1 *)(param_2 + 0x13) = 2;
              lVar7 = param_2[2];
              if (lVar7 != 0) {
                plVar10 = *(long **)(lVar7 + 0x18);
                lVar13 = *(long *)(lVar7 + 0x28);
                lVar7 = *(long *)(lVar7 + 0x20) * lVar13;
                plVar4 = plVar10;
                if (lVar7 != 0) {
                  lVar12 = 0;
                  do {
                    iVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
                    if (iVar2 == 3) goto LAB_00e7cebc;
                    plVar4 = (long *)((long)plVar10 + lVar12 + lVar13);
                    lVar12 = lVar12 + lVar13;
                  } while (lVar7 != lVar12);
                  plVar4 = (long *)((long)plVar10 + lVar7);
                }
LAB_00e7cebc:
                lVar7 = param_2[8];
                lVar13 = param_2[7] * lVar7;
                plVar11 = (long *)param_2[6];
                plVar10 = plVar11;
                if (lVar13 != 0) {
                  lVar12 = 0;
                  do {
                    plVar8 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10);
                    plVar9 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4);
                    if (*plVar8 == *plVar9) goto LAB_00e7cf0c;
                    plVar10 = (long *)((long)plVar11 + lVar12 + lVar7);
                    lVar12 = lVar12 + lVar7;
                  } while (lVar13 != lVar12);
                  plVar10 = (long *)((long)plVar11 + lVar13);
                }
LAB_00e7cf0c:
                (**(code **)(*plVar10 + 0x68))(plVar10,param_2,plVar4);
              }
            }
            else {
              *(undefined1 *)(param_2 + 0x13) = 1;
            }
          }
          else {
            (**(code **)(*plVar10 + 0x158))(plVar10,0);
            (**(code **)(*(long *)param_2[2] + 0x138))
                      (param_1,(long *)param_2[2],param_2,plVar10,plVar4);
          }
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
      }
    }
  }
LAB_00e7cba0:
  if ((long *)param_2[0x11] != (long *)0x0) {
    uVar3 = (**(code **)(*(long *)param_2[0x11] + 0x160))();
    (**(code **)(*(long *)param_2[0x11] + 0xa0))(param_1,(long *)param_2[0x11],param_3 & 1);
    uVar5 = (**(code **)(*(long *)param_2[0x11] + 0x160))();
    if (((uVar3 & 1) == 0) && ((uVar5 & 1) != 0)) {
      FUN_00e7cad4(param_1,param_2,param_3 & 1);
    }
  }
  if (param_2[9] == param_2[10]) {
    return;
  }
  puVar6 = (undefined8 *)param_2[9];
  puVar1 = (undefined8 *)param_2[10];
  do {
    if (puVar6 == puVar1) {
      return;
    }
    plVar4 = (long *)(**(code **)(*(long *)*puVar6 + 0x128))(0xbf800000,0xbf800000);
    if (plVar4 != (long *)0x0) {
      if ((long *)param_2[0x11] == (long *)0x0) {
        plVar10 = param_2;
      }
      else {
        plVar10 = (long *)(**(code **)(*(long *)param_2[0x11] + 0x48))();
      }
      plVar11 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4);
      if ((plVar10 == (long *)0x0) ||
         (plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10), *plVar10 != *plVar11)) {
        (**(code **)(*plVar4 + 0xb0))(plVar4);
        lVar7 = param_2[4];
        lVar13 = param_2[5];
        if (lVar7 * lVar13 == 0) goto LAB_00e7d188;
        plVar10 = (long *)param_2[3];
        lVar12 = 0;
        plVar4 = plVar10;
        break;
      }
    }
    puVar6 = puVar6 + 1;
  } while( true );
  while( true ) {
    plVar4 = (long *)((long)plVar10 + lVar12 + lVar13);
    lVar12 = lVar12 + lVar13;
    if (lVar7 * lVar13 == lVar12) break;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,plVar11);
    if (plVar4 != (long *)0x0) goto LAB_00e7d1b0;
  }
LAB_00e7d188:
  plVar10 = (long *)(**(code **)(*(long *)param_2[1] + 0x10))();
  if (param_2 == (long *)0x0) {
    return;
  }
  plVar4 = param_2;
  if (*plVar10 != *plVar11) {
    return;
  }
LAB_00e7d1b0:
  FUN_01403d78(param_2,plVar4);
  return;
}


