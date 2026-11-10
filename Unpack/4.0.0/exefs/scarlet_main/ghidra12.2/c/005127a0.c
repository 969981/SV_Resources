/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005127a0; name: FUN_005127a0
 */


bool FUN_005127a0(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    return true;
  case 2:
    lVar5 = param_2[-1];
    lVar2 = *param_1;
    if (*(char *)(lVar5 + 0x43) == '\0') {
      if ((*(char *)(lVar2 + 0x43) != '\0') ||
         ((int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
          (int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
      goto LAB_00512a28;
    }
    else if ((*(char *)(lVar2 + 0x43) != '\0') && (*(int *)(lVar5 + 0x44) < *(int *)(lVar2 + 0x44)))
    {
LAB_00512a28:
      *param_1 = lVar5;
      param_2[-1] = lVar2;
      return true;
    }
    break;
  case 3:
    FUN_005121c0(param_1,param_1 + 1,param_2 + -1);
    return true;
  case 4:
    FUN_005123e0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    return true;
  case 5:
    FUN_00512580(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  default:
    FUN_005121c0(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar2 = 0;
      iVar3 = 0;
      plVar8 = param_1 + 3;
      plVar6 = param_1 + 2;
      do {
        plVar4 = plVar8;
        lVar5 = *plVar4;
        lVar7 = *plVar6;
        if (*(char *)(lVar5 + 0x43) == '\0') {
          if ((*(char *)(lVar7 + 0x43) != '\0') ||
             ((int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
              (int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
          {
            *plVar4 = lVar7;
            if (plVar6 != param_1) {
              lVar7 = lVar2;
              do {
                lVar9 = *(long *)((long)param_1 + lVar7 + 8);
                if ((*(char *)(lVar9 + 0x43) == '\0') &&
                   ((int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x50) + 0x28)) >> 3) *
                    0x286bca1b <=
                    (int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x50) + 0x28)) >> 3) *
                    0x286bca1b)) {
                  plVar6 = (long *)((long)param_1 + lVar7 + 0x10);
                  goto LAB_00512820;
                }
                bVar1 = lVar7 != -8;
                *(long *)((long)param_1 + lVar7 + 0x10) = lVar9;
                lVar7 = lVar7 + -8;
              } while (bVar1);
              goto LAB_0051281c;
            }
            goto LAB_00512820;
          }
        }
        else if ((*(char *)(lVar7 + 0x43) != '\0') &&
                (*(int *)(lVar5 + 0x44) < *(int *)(lVar7 + 0x44))) {
          *plVar4 = lVar7;
          if (plVar6 != param_1) {
            do {
              plVar8 = plVar6 + -1;
              lVar7 = *plVar8;
              if ((*(char *)(lVar7 + 0x43) == '\0') ||
                 (*(int *)(lVar7 + 0x44) <= *(int *)(lVar5 + 0x44))) goto LAB_00512820;
              *plVar6 = lVar7;
              plVar6 = plVar8;
            } while (param_1 != plVar8);
LAB_0051281c:
            plVar6 = param_1;
          }
LAB_00512820:
          iVar3 = iVar3 + 1;
          *plVar6 = lVar5;
          if (iVar3 == 8) {
            return plVar4 + 1 == param_2;
          }
        }
        lVar2 = lVar2 + 8;
        plVar8 = plVar4 + 1;
        plVar6 = plVar4;
      } while (plVar4 + 1 != param_2);
    }
  }
  return true;
}


