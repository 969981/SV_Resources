/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b1300; name: FUN_003b1300
 */


void FUN_003b1300(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                 uint param_7,int param_8,int param_9,long *param_10,long *param_11)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  plVar2 = (long *)*param_10;
  plVar3 = (long *)*param_11;
  if ((param_8 == 6) || (param_8 == 3)) {
    plVar4 = plVar3;
    plVar5 = plVar2;
    if (plVar3 == (long *)0x0 || plVar2 == (long *)0x0) goto LAB_003b1350;
  }
  else {
    plVar4 = plVar2;
    plVar5 = plVar3;
    if (plVar2 == (long *)0x0 || plVar3 == (long *)0x0) goto LAB_003b1350;
  }
  do {
    if ((param_8 == 6) || (param_8 == 3)) {
      plVar6 = (long *)plVar4[3];
      lVar7 = *plVar4;
      if (param_9 < 0) goto LAB_003b1420;
LAB_003b13a0:
      if (*(int *)(lVar7 + 0x44) == param_9) {
LAB_003b13ac:
        switch(param_8) {
        case 1:
          if ((int)plVar4[1] == 0) {
            if (plVar4 != plVar3) {
              if (plVar4 == plVar2) {
                plVar2 = (long *)plVar4[2];
              }
              lVar7 = plVar4[3];
              if (lVar7 != 0) {
                *(long *)(lVar7 + 0x10) = plVar4[2];
              }
              if (plVar4[2] != 0) {
                *(long *)(plVar4[2] + 0x18) = lVar7;
              }
              plVar3[2] = (long)plVar4;
              plVar4[2] = 0;
              plVar4[3] = (long)plVar3;
              plVar3 = plVar4;
            }
            *(undefined4 *)(plVar4 + 1) = 1;
          }
          break;
        case 2:
          plVar8 = (long *)plVar4[2];
          if (plVar4 != plVar2) {
            *(long **)(plVar4[3] + 0x10) = plVar8;
            plVar8 = plVar2;
          }
          plVar2 = plVar8;
          if (plVar4 == plVar3) {
            plVar3 = (long *)plVar4[3];
          }
          lVar7 = plVar4[2];
          *(undefined4 *)(plVar4 + 1) = 0;
          if (lVar7 != 0) {
            *(long *)(lVar7 + 0x18) = plVar4[3];
          }
          if (plVar4[3] != 0) {
            *(long *)(plVar4[3] + 0x10) = lVar7;
          }
          plVar4[2] = 0;
          plVar4[3] = 0;
          break;
        case 3:
          if ((int)plVar4[1] != 0) {
            if (plVar4 != plVar2) {
              if (plVar4 == plVar3) {
                plVar3 = (long *)plVar4[3];
              }
              lVar7 = plVar4[2];
              if (lVar7 != 0) {
                *(long *)(lVar7 + 0x18) = plVar4[3];
              }
              if (plVar4[3] != 0) {
                *(long *)(plVar4[3] + 0x10) = lVar7;
              }
              plVar2[3] = (long)plVar4;
              plVar4[2] = (long)plVar2;
              plVar4[3] = 0;
              plVar2 = plVar4;
            }
            *(undefined4 *)(plVar4 + 1) = 0;
          }
          break;
        case 4:
          if (((int)plVar4[1] != 0) && (plVar4 != plVar3)) {
            if (plVar4 == plVar2) {
              plVar2 = (long *)plVar4[2];
            }
            lVar7 = plVar4[3];
            if (lVar7 != 0) {
              *(long *)(lVar7 + 0x10) = plVar4[2];
            }
            if (plVar4[2] != 0) {
              *(long *)(plVar4[2] + 0x18) = lVar7;
            }
            plVar3[2] = (long)plVar4;
            plVar4[2] = 0;
            plVar4[3] = (long)plVar3;
            plVar3 = plVar4;
          }
          break;
        case 6:
          if (((int)plVar4[1] != 0) && (plVar4 != plVar2)) {
            if (plVar4 == plVar3) {
              plVar3 = (long *)plVar4[3];
            }
            lVar7 = plVar4[2];
            if (lVar7 != 0) {
              *(long *)(lVar7 + 0x18) = plVar4[3];
            }
            if (plVar4[3] != 0) {
              *(long *)(plVar4[3] + 0x10) = lVar7;
            }
            plVar2[3] = (long)plVar4;
            plVar4[2] = (long)plVar2;
            plVar4[3] = 0;
            plVar2 = plVar4;
          }
        }
      }
    }
    else {
      plVar6 = (long *)plVar4[2];
      lVar7 = *plVar4;
      if (-1 < param_9) goto LAB_003b13a0;
LAB_003b1420:
      if (((((((param_1 == 0) || (*(int *)(lVar7 + 0x18) == param_1)) &&
             ((param_2 == 0 || ((*(uint *)(lVar7 + 0x1c) & param_2) != 0)))) &&
            ((param_3 == 0 || ((*(uint *)(lVar7 + 0x20) & param_3) != 0)))) &&
           ((param_4 == 0 || ((*(uint *)(lVar7 + 0x24) & param_4) != 0)))) &&
          ((((param_5 == 0 || ((*(uint *)(lVar7 + 0x28) & param_5) != 0)) &&
            ((param_6 == 0 || (*(int *)(lVar7 + 0x2c) == param_6)))) &&
           (((param_7 & 0x1f) == 0 || ((*(uint *)(lVar7 + 0x3c) & param_7 & 0x1f) != 0)))))) &&
         (((param_7 & 0x20) == 0 || ((*(uint *)(lVar7 + 0x3c) & param_7 & 0x20) != 0))))
      goto LAB_003b13ac;
    }
  } while ((plVar6 != (long *)0x0) && (bVar1 = plVar4 != plVar5, plVar4 = plVar6, bVar1));
LAB_003b1350:
  *param_10 = (long)plVar2;
  *param_11 = (long)plVar3;
  return;
}


