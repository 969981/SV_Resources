/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e6ee0; name: FUN_008e6ee0
 */


bool FUN_008e6ee0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_50;
  undefined8 uStack_48;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(uint *)(param_1 + 1) < *(uint *)(param_2 + -1)) {
      uVar12 = *param_1;
      uVar3 = param_1[1];
      uVar2 = param_2[-1];
      *param_1 = param_2[-2];
      param_1[1] = uVar2;
      param_2[-2] = uVar12;
      param_2[-1] = uVar3;
      return true;
    }
    break;
  case 3:
    uVar4 = *(uint *)(param_1 + 3);
    puVar8 = param_1 + 2;
    puVar11 = param_2 + -2;
    if (*(uint *)(param_1 + 1) < uVar4) {
      if (uVar4 < *(uint *)(param_2 + -1)) {
        local_50 = *param_1;
        uStack_48 = param_1[1];
        uVar12 = param_2[-1];
        *param_1 = *puVar11;
        param_1[1] = uVar12;
      }
      else {
        uVar12 = *param_1;
        uVar3 = param_1[1];
        *param_1 = *puVar8;
        param_1[1] = param_1[3];
        *puVar8 = uVar12;
        param_1[3] = uVar3;
        if (*(uint *)(param_2 + -1) <= *(uint *)(param_1 + 3)) {
          return true;
        }
        local_50 = *puVar8;
        uStack_48 = param_1[3];
        uVar12 = param_2[-1];
        *puVar8 = *puVar11;
        param_1[3] = uVar12;
      }
      *puVar11 = local_50;
      param_2[-1] = uStack_48;
      return true;
    }
    if (uVar4 < *(uint *)(param_2 + -1)) {
      uVar12 = *puVar8;
      uVar3 = param_1[3];
      uVar2 = param_2[-1];
      *puVar8 = *puVar11;
      param_1[3] = uVar2;
      *puVar11 = uVar12;
      param_2[-1] = uVar3;
      if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 3)) {
        uVar12 = *param_1;
        uVar3 = param_1[1];
        *param_1 = *puVar8;
        param_1[1] = param_1[3];
        *puVar8 = uVar12;
        param_1[3] = uVar3;
        return true;
      }
    }
    break;
  case 4:
    FUN_008e6d30(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
    break;
  case 5:
    puVar8 = param_1 + 2;
    puVar11 = param_1 + 4;
    puVar1 = param_1 + 6;
    FUN_008e6d30(param_1,puVar8,puVar11,puVar1,param_3);
    if (*(uint *)(param_1 + 7) < *(uint *)(param_2 + -1)) {
      uVar12 = *puVar1;
      uVar3 = param_1[7];
      uVar2 = param_2[-1];
      *puVar1 = param_2[-2];
      param_1[7] = uVar2;
      param_2[-2] = uVar12;
      param_2[-1] = uVar3;
      if (*(uint *)(param_1 + 5) < *(uint *)(param_1 + 7)) {
        uVar12 = *puVar11;
        uVar3 = param_1[5];
        *puVar11 = *puVar1;
        param_1[5] = param_1[7];
        *puVar1 = uVar12;
        param_1[7] = uVar3;
        if (*(uint *)(param_1 + 3) < *(uint *)(param_1 + 5)) {
          uVar12 = *puVar8;
          uVar3 = param_1[3];
          *puVar8 = *puVar11;
          param_1[3] = param_1[5];
          *puVar11 = uVar12;
          param_1[5] = uVar3;
          if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 3)) {
            uVar12 = *param_1;
            uVar3 = param_1[1];
            *param_1 = *puVar8;
            param_1[1] = param_1[3];
            *puVar8 = uVar12;
            param_1[3] = uVar3;
            return true;
          }
        }
      }
    }
    break;
  default:
    uVar4 = *(uint *)(param_1 + 3);
    puVar8 = param_1 + 4;
    puVar11 = param_1 + 2;
    uVar5 = *(uint *)(param_1 + 5);
    if (*(uint *)(param_1 + 1) < uVar4) {
      if (uVar4 < uVar5) {
        local_50 = *param_1;
        uStack_48 = param_1[1];
        *param_1 = *puVar8;
        param_1[1] = param_1[5];
      }
      else {
        uVar12 = *param_1;
        uVar3 = param_1[1];
        *param_1 = *puVar11;
        param_1[1] = param_1[3];
        *puVar11 = uVar12;
        param_1[3] = uVar3;
        if (uVar5 <= *(uint *)(param_1 + 3)) goto LAB_008e71cc;
        local_50 = *puVar11;
        uStack_48 = param_1[3];
        *puVar11 = *puVar8;
        param_1[3] = param_1[5];
      }
      *puVar8 = local_50;
      param_1[5] = uStack_48;
    }
    else if (uVar4 < uVar5) {
      uVar12 = *puVar11;
      uVar3 = param_1[3];
      *puVar11 = *puVar8;
      param_1[3] = param_1[5];
      *puVar8 = uVar12;
      param_1[5] = uVar3;
      if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 3)) {
        uVar12 = *param_1;
        uVar3 = param_1[1];
        *param_1 = *puVar11;
        param_1[1] = param_1[3];
        *puVar11 = uVar12;
        param_1[3] = uVar3;
      }
    }
LAB_008e71cc:
    if (param_1 + 6 != param_2) {
      lVar9 = 0;
      iVar10 = 0;
      puVar11 = param_1 + 6;
      do {
        uVar4 = *(uint *)(puVar11 + 1);
        if (*(uint *)(puVar8 + 1) < uVar4) {
          uVar12 = *puVar11;
          uVar6 = *(undefined4 *)((long)puVar11 + 0xc);
          lVar7 = lVar9;
          do {
            lVar13 = lVar7;
            *(undefined8 *)((long)param_1 + lVar13 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x20);
            *(undefined8 *)((long)param_1 + lVar13 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x28);
            if (lVar13 == -0x20) {
              puVar8 = param_1;
              goto LAB_008e71e8;
            }
            lVar7 = lVar13 + -0x10;
          } while (*(uint *)((long)param_1 + lVar13 + 0x18) < uVar4);
          puVar8 = (undefined8 *)((long)param_1 + lVar13 + 0x20);
LAB_008e71e8:
          iVar10 = iVar10 + 1;
          *puVar8 = uVar12;
          *(uint *)(puVar8 + 1) = uVar4;
          *(undefined4 *)((long)puVar8 + 0xc) = uVar6;
          if (iVar10 == 8) {
            return puVar11 + 2 == param_2;
          }
        }
        puVar1 = puVar11 + 2;
        lVar9 = lVar9 + 0x10;
        puVar8 = puVar11;
        puVar11 = puVar1;
      } while (puVar1 != param_2);
    }
  }
  return true;
}


