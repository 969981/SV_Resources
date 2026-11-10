/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ae740; name: FUN_003ae740
 */


undefined8 FUN_003ae740(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar7 = param_1 + 4;
  lVar5 = *plVar7;
  if ((lVar5 != param_2) || (param_1[5] == 0)) {
    plVar11 = param_1 + 9;
    if ((*plVar11 == param_2) && (param_1[10] != 0)) {
      plVar7 = plVar11;
    }
    else {
      plVar10 = param_1 + 0xe;
      if ((*plVar10 == param_2) && (param_1[0xf] != 0)) {
        plVar7 = plVar10;
      }
      else {
        plVar9 = param_1 + 0x13;
        if ((*plVar9 == param_2) && (param_1[0x14] != 0)) {
          plVar7 = plVar9;
        }
        else {
          plVar8 = param_1 + 0x18;
          if ((*plVar8 == param_2) && (param_1[0x19] != 0)) {
            plVar7 = plVar8;
          }
          else {
            plVar6 = param_1 + 0x1d;
            if ((*plVar6 == param_2) && (param_1[0x1e] != 0)) {
              plVar7 = plVar6;
            }
            else {
              plVar1 = param_1 + 0x22;
              if ((param_1[0x22] == param_2) && (param_1[0x23] != 0)) {
                plVar7 = plVar1;
              }
              else {
                plVar2 = param_1 + 0x27;
                if ((param_1[0x27] == param_2) && (param_1[0x28] != 0)) {
                  plVar7 = plVar2;
                }
                else {
                  plVar3 = param_1 + 0x2c;
                  if ((param_1[0x2c] == param_2) && (param_1[0x2d] != 0)) {
                    plVar7 = plVar3;
                  }
                  else if ((((((param_1[5] == 0) ||
                              ((lVar5 == 0 || (iVar4 = FUN_00483b60(lVar5,param_2), iVar4 != 0))))
                             && ((param_1[10] == 0 ||
                                 ((*plVar11 == 0 ||
                                  (iVar4 = FUN_00483b60(*plVar11,param_2), plVar7 = plVar11,
                                  iVar4 != 0)))))) &&
                            ((param_1[0xf] == 0 ||
                             ((*plVar10 == 0 ||
                              (iVar4 = FUN_00483b60(*plVar10,param_2), plVar7 = plVar10, iVar4 != 0)
                              ))))) &&
                           ((param_1[0x14] == 0 ||
                            ((*plVar9 == 0 ||
                             (iVar4 = FUN_00483b60(*plVar9,param_2), plVar7 = plVar9, iVar4 != 0))))
                           )) && ((((param_1[0x19] == 0 ||
                                    ((*plVar8 == 0 ||
                                     (iVar4 = FUN_00483b60(*plVar8,param_2), plVar7 = plVar8,
                                     iVar4 != 0)))) &&
                                   ((param_1[0x1e] == 0 ||
                                    ((*plVar6 == 0 ||
                                     (iVar4 = FUN_00483b60(*plVar6,param_2), plVar7 = plVar6,
                                     iVar4 != 0)))))) &&
                                  (((param_1[0x23] == 0 ||
                                    ((*plVar1 == 0 ||
                                     (iVar4 = FUN_00483b60(*plVar1,param_2), plVar7 = plVar1,
                                     iVar4 != 0)))) &&
                                   ((param_1[0x28] == 0 ||
                                    ((*plVar2 == 0 ||
                                     (iVar4 = FUN_00483b60(*plVar2,param_2), plVar7 = plVar2,
                                     iVar4 != 0)))))))))) {
                    if (param_1[0x2d] != 0) {
                      if (*plVar3 == 0) {
                        return 0;
                      }
                      iVar4 = FUN_00483b60(*plVar3,param_2);
                      plVar7 = plVar3;
                      if (iVar4 == 0) goto LAB_003ae99c;
                    }
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_003ae99c:
  *param_1 = (long)plVar7;
  return 1;
}


