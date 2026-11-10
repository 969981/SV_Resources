/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d72c8; name: FUN_001d72c8
 */


int FUN_001d72c8(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  char *__s1;
  
  FUN_001cb790(param_2);
  if (param_3 == (long *)0x0) {
    iVar1 = 0;
  }
  else {
    lVar2 = FUN_001cbdd8(param_1);
    if (lVar2 == 0) {
      iVar1 = 0x1b;
    }
    else {
      iVar1 = FUN_001cbe54(param_2,lVar2);
      if (iVar1 == 0) {
        uVar6 = *(undefined8 *)PTR_stdin_047cb840;
        do {
          lVar4 = lVar2;
          if (param_3[9] == 0) {
            iVar1 = 0;
          }
          else {
            lVar3 = FUN_001cbe5c(lVar2);
            if (lVar3 == 0) {
              iVar1 = 0x1b;
            }
            else {
              iVar1 = FUN_001d7580(lVar3,param_3[1],param_3[2]);
              if (iVar1 != 0) goto LAB_001d7544;
              lVar4 = FUN_001cbdd8(param_1);
              if (lVar4 == 0) {
                iVar1 = 0x1b;
                goto LAB_001d7544;
              }
              iVar1 = FUN_001cbe54(lVar3,lVar4);
            }
          }
          if (iVar1 == 0) {
            plVar9 = param_3;
            do {
              lVar3 = FUN_001cbe5c(lVar4);
              if (lVar3 == 0) {
                iVar1 = 0x1b;
                break;
              }
              iVar1 = FUN_001cbedc(lVar3,plVar9[8],0);
              if (((iVar1 != 0) || ((plVar9[7] != 0 && (iVar1 = FUN_001cbf54(lVar3), iVar1 != 0))))
                 || ((param_3[9] == 0 &&
                     (iVar1 = FUN_001d7580(lVar3,param_3[1],param_3[2]), iVar1 != 0))))
              goto LAB_001d7544;
              uVar7 = param_3[10];
              lVar8 = 0x20;
              if ((uVar7 & 0x80) != 0) {
                lVar8 = 0x68;
              }
              lVar8 = *(long *)((long)param_3 + lVar8);
              if (lVar8 == 0) {
                lVar8 = -1;
              }
              if ((uVar7 & 3) == 0) {
                if (((uint)uVar7 >> 4 & 1) == 0) {
                  if (((uint)uVar7 >> 6 & 1) != 0) {
                    iVar1 = FUN_001cbd44(lVar3,lVar8,param_4,0,0,param_3[0xc]);
                    goto LAB_001d74f0;
                  }
                  lVar5 = param_3[3];
                }
                else {
                  lVar5 = param_3[5];
                  lVar8 = param_3[6];
                  if (lVar8 == 0) {
                    lVar8 = -1;
                  }
                }
                iVar1 = FUN_001cbad8(lVar3,lVar5,lVar8);
LAB_001d74f0:
                if (iVar1 != 0) goto LAB_001d7544;
              }
              else {
                __s1 = (char *)plVar9[3];
                iVar1 = strcmp(__s1,"-");
                if (iVar1 == 0) {
                  iVar1 = FUN_001cbd44(lVar3,0xffffffffffffffff,PTR_FUN_047cb988,PTR_FUN_047cb990,0,
                                       uVar6);
                }
                else {
                  iVar1 = FUN_001cbbc4(lVar3,__s1);
                }
                if (iVar1 != 0) goto LAB_001d7544;
                if ((*(byte *)(param_3 + 10) >> 1 & 1) != 0) {
                  iVar1 = FUN_001cc004(lVar3,0);
                  goto LAB_001d74f0;
                }
              }
              if ((param_3[0xb] == 0) ||
                 ((param_3[9] == 0 && ((*(byte *)(param_3 + 10) & 0x51) == 0)))) {
                iVar1 = 0;
              }
              else {
                iVar1 = FUN_001cc004(lVar3);
                if (iVar1 != 0) break;
              }
              plVar9 = (long *)plVar9[9];
            } while (plVar9 != (long *)0x0);
          }
          param_3 = (long *)*param_3;
        } while ((param_3 != (long *)0x0) && (iVar1 == 0));
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
LAB_001d7544:
    FUN_001cb790(param_2);
  }
  return iVar1;
}


