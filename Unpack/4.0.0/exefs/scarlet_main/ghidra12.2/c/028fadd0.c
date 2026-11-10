/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028fadd0; name: FUN_028fadd0
 */


bool FUN_028fadd0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar6 = *param_1;
    if (*(int *)(param_2[-1] + 0x350) < *(int *)(lVar6 + 0x350)) {
      *param_1 = param_2[-1];
LAB_028fae20:
      param_2[-1] = lVar6;
      return true;
    }
    break;
  case 3:
    lVar6 = *param_1;
    lVar4 = param_1[1];
    lVar5 = param_2[-1];
    iVar7 = *(int *)(lVar4 + 0x350);
    if (iVar7 < *(int *)(lVar6 + 0x350)) {
      if (*(int *)(lVar5 + 0x350) < iVar7) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar4;
        param_1[1] = lVar6;
        if (*(int *)(lVar6 + 0x350) <= *(int *)(param_2[-1] + 0x350)) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      goto LAB_028fae20;
    }
    if (iVar7 <= *(int *)(lVar5 + 0x350)) {
      return true;
    }
    param_1[1] = lVar5;
    param_2[-1] = lVar4;
    lVar4 = param_1[1];
    goto LAB_028faf78;
  case 4:
    lVar6 = *param_1;
    lVar4 = param_1[1];
    lVar5 = param_1[2];
    iVar7 = *(int *)(lVar4 + 0x350);
    if (iVar7 < *(int *)(lVar6 + 0x350)) {
      if (*(int *)(lVar5 + 0x350) < iVar7) {
        *param_1 = lVar5;
        param_1[2] = lVar6;
      }
      else {
        *param_1 = lVar4;
        param_1[1] = lVar6;
        if (*(int *)(lVar6 + 0x350) <= *(int *)(lVar5 + 0x350)) goto LAB_028faf40;
        param_1[1] = lVar5;
        param_1[2] = lVar6;
      }
    }
    else if (*(int *)(lVar5 + 0x350) < iVar7) {
      param_1[1] = lVar5;
      param_1[2] = lVar4;
      if (*(int *)(lVar5 + 0x350) < *(int *)(lVar6 + 0x350)) {
        *param_1 = lVar5;
        param_1[1] = lVar6;
      }
      lVar6 = lVar4;
    }
    else {
LAB_028faf40:
      lVar6 = lVar5;
    }
    if (*(int *)(lVar6 + 0x350) <= *(int *)(param_2[-1] + 0x350)) {
      return true;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = lVar6;
    lVar6 = param_1[1];
    lVar4 = param_1[2];
    if (*(int *)(lVar6 + 0x350) <= *(int *)(lVar4 + 0x350)) {
      return true;
    }
    param_1[1] = lVar4;
    param_1[2] = lVar6;
LAB_028faf78:
    lVar6 = *param_1;
    if (*(int *)(lVar4 + 0x350) < *(int *)(lVar6 + 0x350)) {
      *param_1 = lVar4;
      param_1[1] = lVar6;
      return true;
    }
    break;
  case 5:
    FUN_00e23820(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    lVar6 = *param_1;
    lVar4 = param_1[1];
    lVar5 = param_1[2];
    iVar7 = *(int *)(lVar4 + 0x350);
    if (iVar7 < *(int *)(lVar6 + 0x350)) {
      if (*(int *)(lVar5 + 0x350) < iVar7) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar4;
        param_1[1] = lVar6;
        if (*(int *)(lVar6 + 0x350) <= *(int *)(lVar5 + 0x350)) goto LAB_028fae50;
        param_1[1] = lVar5;
      }
      param_1[2] = lVar6;
      lVar4 = lVar6;
    }
    else if (*(int *)(lVar5 + 0x350) < iVar7) {
      param_1[1] = lVar5;
      param_1[2] = lVar4;
      if (*(int *)(lVar5 + 0x350) < *(int *)(lVar6 + 0x350)) {
        *param_1 = lVar5;
        param_1[1] = lVar6;
      }
    }
    else {
LAB_028fae50:
      lVar4 = lVar5;
    }
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      plVar1 = param_1 + 3;
      do {
        lVar5 = *plVar1;
        if (*(int *)(lVar5 + 0x350) < *(int *)(lVar4 + 0x350)) {
          lVar4 = lVar6;
          do {
            lVar2 = lVar4;
            *(undefined8 *)((long)param_1 + lVar2 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar2 + 0x10);
            if (lVar2 == -0x10) {
              plVar3 = param_1;
              goto LAB_028faebc;
            }
            lVar4 = lVar2 + -8;
          } while (*(int *)(lVar5 + 0x350) < *(int *)(*(long *)((long)param_1 + lVar2 + 8) + 0x350))
          ;
          plVar3 = (long *)((long)param_1 + lVar2 + 0x10);
LAB_028faebc:
          iVar7 = iVar7 + 1;
          *plVar3 = lVar5;
          if (iVar7 == 8) {
            return plVar1 + 1 == param_2;
          }
        }
        if (plVar1 + 1 == param_2) {
          return true;
        }
        lVar4 = *plVar1;
        lVar6 = lVar6 + 8;
        plVar1 = plVar1 + 1;
      } while( true );
    }
  }
  return true;
}


