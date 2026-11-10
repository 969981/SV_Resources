/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f6e40; name: FUN_026f6e40
 */


bool FUN_026f6e40(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long local_70;
  ulong *local_68;
  ulong *puStack_60;
  ulong *local_58;
  ulong *puStack_50;
  long local_48;
  ulong *puStack_40;
  ulong *local_38;
  ulong *local_30;
  ulong local_28;
  ulong local_20;
  ulong uStack_18;
  
  local_70 = *param_2;
  puStack_50 = (ulong *)*param_1;
  switch((local_70 - (long)puStack_50 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    *param_2 = local_70 + -0x18;
    puStack_50 = (ulong *)*param_1;
    if (*(ulong *)(local_70 + -0x18) <= *puStack_50) {
      return true;
    }
LAB_026f6ea8:
    local_28 = *puStack_50;
    local_20 = puStack_50[1];
    uStack_18 = puStack_50[2];
    uVar7 = *(ulong *)(local_70 + -8);
    uVar6 = *(ulong *)(local_70 + -0x18);
    puStack_50[1] = *(ulong *)(local_70 + -0x10);
    puStack_50[2] = uVar7;
    *puStack_50 = uVar6;
    goto LAB_026f6ec8;
  case 3:
    puVar2 = (ulong *)(local_70 + -0x18);
    *param_2 = (long)puVar2;
    puVar5 = puStack_50 + 3;
    uVar7 = *puVar5;
    if (uVar7 <= *puStack_50) {
      if (*(ulong *)(local_70 + -0x18) <= uVar7) {
        return true;
      }
      uVar7 = *puVar5;
      uVar6 = puStack_50[4];
      uVar9 = puStack_50[5];
      uVar10 = *(ulong *)(local_70 + -8);
      uVar8 = *puVar2;
      puStack_50[4] = *(ulong *)(local_70 + -0x10);
      puStack_50[5] = uVar10;
      *puVar5 = uVar8;
      *(ulong *)(local_70 + -0x10) = uVar6;
      *(ulong *)(local_70 + -8) = uVar9;
      *puVar2 = uVar7;
      if (*puStack_50 < puStack_50[3]) {
        uVar7 = *puStack_50;
        uVar6 = puStack_50[1];
        uVar10 = puStack_50[2];
        puStack_50[1] = puStack_50[4];
        puStack_50[2] = puStack_50[5];
        *puStack_50 = *puVar5;
        puStack_50[4] = uVar6;
        puStack_50[5] = uVar10;
        *puVar5 = uVar7;
        return true;
      }
      return true;
    }
    if (uVar7 < *(ulong *)(local_70 + -0x18)) goto LAB_026f6ea8;
    uVar7 = *puStack_50;
    uVar6 = puStack_50[1];
    uVar10 = puStack_50[2];
    puStack_50[1] = puStack_50[4];
    puStack_50[2] = puStack_50[5];
    *puStack_50 = *puVar5;
    puStack_50[4] = uVar6;
    puStack_50[5] = uVar10;
    *puVar5 = uVar7;
    if (*puVar2 <= puStack_50[3]) {
      return true;
    }
    local_28 = *puVar5;
    local_20 = puStack_50[4];
    uStack_18 = puStack_50[5];
    uVar7 = *(ulong *)(local_70 + -8);
    uVar6 = *puVar2;
    puStack_50[4] = *(ulong *)(local_70 + -0x10);
    puStack_50[5] = uVar7;
    *puVar5 = uVar6;
LAB_026f6ec8:
    *(ulong *)(local_70 + -0x10) = local_20;
    *(ulong *)(local_70 + -8) = uStack_18;
    *(ulong *)(local_70 + -0x18) = local_28;
    break;
  case 4:
    local_38 = puStack_50 + 3;
    local_48 = local_70 + -0x18;
    puStack_40 = puStack_50 + 6;
    *param_2 = local_48;
    local_30 = puStack_50;
    FUN_00c4f310(&local_30,&local_38,&puStack_40,&local_48);
    break;
  case 5:
    local_58 = puStack_50 + 3;
    puStack_60 = puStack_50 + 6;
    local_68 = puStack_50 + 9;
    local_70 = local_70 + -0x18;
    *param_2 = local_70;
    FUN_00c4f570(&puStack_50,&local_58,&puStack_60,&local_68,&local_70);
    break;
  default:
    puVar2 = puStack_50 + 6;
    puVar5 = puStack_50 + 3;
    uVar7 = *puVar5;
    if (*puStack_50 < uVar7) {
      if (uVar7 < *puVar2) {
        local_28 = *puStack_50;
        local_20 = puStack_50[1];
        uStack_18 = puStack_50[2];
        puStack_50[1] = puStack_50[7];
        puStack_50[2] = puStack_50[8];
        *puStack_50 = *puVar2;
      }
      else {
        uVar7 = *puStack_50;
        uVar6 = puStack_50[1];
        uVar10 = puStack_50[2];
        puStack_50[1] = puStack_50[4];
        puStack_50[2] = puStack_50[5];
        *puStack_50 = *puVar5;
        puStack_50[4] = uVar6;
        puStack_50[5] = uVar10;
        *puVar5 = uVar7;
        if (puStack_50[6] <= puStack_50[3]) goto LAB_026f6f00;
        local_28 = *puVar5;
        local_20 = puStack_50[4];
        uStack_18 = puStack_50[5];
        puStack_50[4] = puStack_50[7];
        puStack_50[5] = puStack_50[8];
        *puVar5 = *puVar2;
      }
      puStack_50[7] = local_20;
      puStack_50[8] = uStack_18;
      *puVar2 = local_28;
    }
    else if (uVar7 < *puVar2) {
      uVar7 = *puVar5;
      uVar6 = puStack_50[4];
      uVar10 = puStack_50[5];
      puStack_50[4] = puStack_50[7];
      puStack_50[5] = puStack_50[8];
      *puVar5 = *puVar2;
      puStack_50[7] = uVar6;
      puStack_50[8] = uVar10;
      *puVar2 = uVar7;
      if (*puStack_50 < puStack_50[3]) {
        uVar7 = *puStack_50;
        uVar6 = puStack_50[1];
        uVar10 = puStack_50[2];
        puStack_50[1] = puStack_50[4];
        puStack_50[2] = puStack_50[5];
        *puStack_50 = *puVar5;
        puStack_50[4] = uVar6;
        puStack_50[5] = uVar10;
        *puVar5 = uVar7;
      }
    }
LAB_026f6f00:
    puVar5 = (ulong *)*param_2;
    if (puStack_50 + 9 != puVar5) {
      iVar4 = 0;
      puVar3 = puStack_50 + 9;
      do {
        uVar7 = *puVar3;
        if (*puVar2 < uVar7) {
          uVar6 = puVar3[1];
          uVar10 = puVar3[2];
          puVar5 = puVar3;
          do {
            puVar1 = puVar2;
            uVar8 = puVar1[1];
            uVar9 = puVar1[2];
            *puVar5 = *puVar1;
            puVar5[1] = uVar8;
            puVar5[2] = uVar9;
            if ((ulong *)*param_1 == puVar1) break;
            puVar2 = puVar1 + -3;
            puVar5 = puVar1;
          } while (puVar1[-3] < uVar7);
          *puVar1 = uVar7;
          iVar4 = iVar4 + 1;
          puVar1[1] = uVar6;
          puVar1[2] = uVar10;
          if (iVar4 == 8) {
            return puVar3 + 3 == (ulong *)*param_2;
          }
          puVar5 = (ulong *)*param_2;
        }
        puVar1 = puVar3 + 3;
        puVar2 = puVar3;
        puVar3 = puVar1;
      } while (puVar1 != puVar5);
    }
  }
  return true;
}


