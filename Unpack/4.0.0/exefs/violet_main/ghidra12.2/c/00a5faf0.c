/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a5faf0; name: FUN_00a5faf0
 */


bool FUN_00a5faf0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  undefined8 local_50;
  undefined8 uStack_48;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    if (*param_1 <= param_2[-4]) {
      return true;
    }
LAB_00a5fb70:
    local_50 = *(undefined8 *)param_1;
    uStack_48 = *(undefined8 *)(param_1 + 2);
    uVar10 = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -4);
    *(undefined8 *)(param_1 + 2) = uVar10;
    goto LAB_00a5fb80;
  case 3:
    piVar4 = param_1 + 4;
    iVar8 = *piVar4;
    piVar6 = param_2 + -4;
    if (*param_1 <= iVar8) {
      if (iVar8 <= *piVar6) {
        return true;
      }
      uVar10 = *(undefined8 *)piVar4;
      uVar5 = *(undefined8 *)(param_1 + 6);
      uVar2 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)piVar4 = *(undefined8 *)piVar6;
      *(undefined8 *)(param_1 + 6) = uVar2;
      *(undefined8 *)piVar6 = uVar10;
      *(undefined8 *)(param_2 + -2) = uVar5;
      if (param_1[4] < *param_1) {
        uVar10 = *(undefined8 *)param_1;
        uVar5 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_1 = *(undefined8 *)piVar4;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)piVar4 = uVar10;
        *(undefined8 *)(param_1 + 6) = uVar5;
        return true;
      }
      return true;
    }
    if (*piVar6 < iVar8) goto LAB_00a5fb70;
    uVar10 = *(undefined8 *)param_1;
    uVar5 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)piVar4;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)piVar4 = uVar10;
    *(undefined8 *)(param_1 + 6) = uVar5;
    if (param_1[4] <= *piVar6) {
      return true;
    }
    local_50 = *(undefined8 *)piVar4;
    uStack_48 = *(undefined8 *)(param_1 + 6);
    uVar10 = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)piVar4 = *(undefined8 *)piVar6;
    *(undefined8 *)(param_1 + 6) = uVar10;
LAB_00a5fb80:
    *(undefined8 *)(param_2 + -4) = local_50;
    *(undefined8 *)(param_2 + -2) = uStack_48;
    break;
  case 4:
    FUN_00a5f970(param_1,param_1 + 4,param_1 + 8,param_2 + -4);
    break;
  case 5:
    piVar4 = param_1 + 4;
    piVar6 = param_1 + 8;
    piVar1 = param_1 + 0xc;
    FUN_00a5f970(param_1,piVar4,piVar6,piVar1);
    piVar12 = param_2 + -4;
    if (*piVar12 < param_1[0xc]) {
      uVar10 = *(undefined8 *)piVar1;
      uVar5 = *(undefined8 *)(param_1 + 0xe);
      uVar2 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)piVar1 = *(undefined8 *)piVar12;
      *(undefined8 *)(param_1 + 0xe) = uVar2;
      *(undefined8 *)piVar12 = uVar10;
      *(undefined8 *)(param_2 + -2) = uVar5;
      if (*piVar1 < *piVar6) {
        uVar10 = *(undefined8 *)piVar6;
        uVar5 = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)piVar6 = *(undefined8 *)piVar1;
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)piVar1 = uVar10;
        *(undefined8 *)(param_1 + 0xe) = uVar5;
        if (*piVar6 < *piVar4) {
          uVar10 = *(undefined8 *)piVar4;
          uVar5 = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)piVar4 = *(undefined8 *)piVar6;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)piVar6 = uVar10;
          *(undefined8 *)(param_1 + 10) = uVar5;
          if (param_1[4] < *param_1) {
            uVar10 = *(undefined8 *)param_1;
            uVar5 = *(undefined8 *)(param_1 + 2);
            *(undefined8 *)param_1 = *(undefined8 *)piVar4;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
            *(undefined8 *)piVar4 = uVar10;
            *(undefined8 *)(param_1 + 6) = uVar5;
          }
        }
      }
    }
    break;
  default:
    piVar4 = param_1 + 8;
    iVar8 = *piVar4;
    piVar6 = param_1 + 4;
    iVar9 = *piVar6;
    if (iVar9 < *param_1) {
      if (iVar8 < iVar9) {
        local_50 = *(undefined8 *)param_1;
        uStack_48 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_1 = *(undefined8 *)piVar4;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
      }
      else {
        uVar10 = *(undefined8 *)param_1;
        uVar5 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_1 = *(undefined8 *)piVar6;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)piVar6 = uVar10;
        *(undefined8 *)(param_1 + 6) = uVar5;
        if (param_1[4] <= iVar8) goto LAB_00a5fdac;
        local_50 = *(undefined8 *)piVar6;
        uStack_48 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)piVar6 = *(undefined8 *)piVar4;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      }
      *(undefined8 *)piVar4 = local_50;
      *(undefined8 *)(param_1 + 10) = uStack_48;
    }
    else if (iVar8 < iVar9) {
      uVar10 = *(undefined8 *)piVar6;
      uVar5 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)piVar6 = *(undefined8 *)piVar4;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)piVar4 = uVar10;
      *(undefined8 *)(param_1 + 10) = uVar5;
      if (*piVar6 < *param_1) {
        uVar10 = *(undefined8 *)param_1;
        uVar5 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_1 = *(undefined8 *)piVar6;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)piVar6 = uVar10;
        *(undefined8 *)(param_1 + 6) = uVar5;
      }
    }
LAB_00a5fdac:
    if (param_1 + 0xc != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      piVar6 = param_1 + 0xc;
      do {
        uVar10 = *(undefined8 *)piVar6;
        iVar9 = (int)uVar10;
        if (iVar9 < *piVar4) {
          uVar5 = *(undefined8 *)(piVar6 + 2);
          lVar3 = lVar7;
          do {
            lVar11 = lVar3;
            *(undefined8 *)((long)param_1 + lVar11 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x20);
            *(undefined8 *)((long)param_1 + lVar11 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x28);
            if (lVar11 == -0x20) {
              piVar4 = param_1;
              goto LAB_00a5fe0c;
            }
            lVar3 = lVar11 + -0x10;
          } while (iVar9 < *(int *)((long)param_1 + lVar11 + 0x10));
          piVar4 = (int *)((long)param_1 + lVar11 + 0x20);
LAB_00a5fe0c:
          iVar8 = iVar8 + 1;
          *(undefined8 *)piVar4 = uVar10;
          *(undefined8 *)(piVar4 + 2) = uVar5;
          if (iVar8 == 8) {
            return piVar6 + 4 == param_2;
          }
        }
        piVar1 = piVar6 + 4;
        lVar7 = lVar7 + 0x10;
        piVar4 = piVar6;
        piVar6 = piVar1;
      } while (piVar1 != param_2);
    }
  }
  return true;
}


