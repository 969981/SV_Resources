/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004131e0; name: FUN_004131e0
 */


int FUN_004131e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  FUN_003ed410(param_3);
  puVar4 = (undefined8 *)FUN_003ed5c0(param_3);
  puVar5 = (undefined8 *)FUN_003ed5c0(param_3);
  if (((puVar5 != (undefined8 *)0x0) && (lVar6 = FUN_003eb8f0(puVar4,param_1), lVar6 != 0)) &&
     (lVar6 = FUN_003eb8f0(puVar5,param_2), lVar6 != 0)) {
    iVar1 = FUN_003eb480(puVar5);
    if (iVar1 != 0) {
      iVar1 = FUN_003ec570(puVar4,1);
      goto LAB_00413418;
    }
    iVar1 = FUN_003ec640(puVar4);
    if ((iVar1 == 0) && (iVar1 = FUN_003ec640(puVar5), iVar1 == 0)) {
      iVar1 = 0;
      goto LAB_00413418;
    }
    uVar8 = 0xffffffff;
    do {
      uVar8 = uVar8 + 1;
      iVar1 = FUN_003ec150(puVar5,uVar8);
    } while (iVar1 == 0);
    iVar1 = FUN_003f23a0(puVar5,puVar5,uVar8);
    if (iVar1 != 0) {
      if ((uVar8 & 1) == 0) {
        iVar1 = 1;
      }
      else {
        if (*(int *)(puVar4 + 1) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (ulong)*(uint *)*puVar4 & 7;
        }
        iVar1 = (&DAT_03cbf440)[uVar7];
      }
      iVar3 = iVar1;
      if (*(int *)(puVar5 + 2) != 0) {
        *(undefined4 *)(puVar5 + 2) = 0;
        iVar3 = -iVar1;
        if (*(int *)(puVar4 + 2) == 0) {
          iVar3 = iVar1;
        }
      }
      iVar1 = FUN_003eb480(puVar4);
      if (iVar1 == 0) {
        do {
          puVar9 = puVar4;
          uVar8 = 0xffffffff;
          do {
            uVar8 = uVar8 + 1;
            iVar1 = FUN_003ec150(puVar9,uVar8);
          } while (iVar1 == 0);
          iVar1 = FUN_003f23a0(puVar9,puVar9,uVar8);
          if (iVar1 == 0) goto LAB_00413414;
          iVar1 = iVar3;
          if ((uVar8 & 1) != 0) {
            uVar8 = 0;
            if (*(int *)(puVar5 + 1) != 0) {
              uVar8 = *(uint *)*puVar5;
            }
            iVar1 = (&DAT_03cbf440)[uVar8 & 7] * iVar3;
          }
          if (*(int *)(puVar9 + 2) == 0) {
            if (*(int *)(puVar9 + 1) == 0) {
              uVar8 = 0;
              iVar3 = *(int *)(puVar5 + 1);
              goto joined_r0x0041340c;
            }
            uVar8 = *(uint *)*puVar9;
            if (*(int *)(puVar5 + 1) != 0) goto LAB_004133a4;
LAB_004133c4:
            uVar10 = 0;
          }
          else {
            uVar8 = 0;
            if (*(int *)(puVar9 + 1) != 0) {
              uVar8 = *(uint *)*puVar9;
            }
            uVar8 = ~uVar8;
            iVar3 = *(int *)(puVar5 + 1);
joined_r0x0041340c:
            if (iVar3 == 0) goto LAB_004133c4;
LAB_004133a4:
            uVar10 = *(uint *)*puVar5;
          }
          iVar3 = FUN_003f0870(puVar5,puVar5,puVar9,param_3);
          if (iVar3 == 0) goto LAB_00413414;
          *(undefined4 *)(puVar9 + 2) = 0;
          iVar3 = -iVar1;
          if ((uVar8 & uVar10 & 2) == 0) {
            iVar3 = iVar1;
          }
          iVar1 = FUN_003eb480(puVar5);
          puVar4 = puVar5;
          puVar5 = puVar9;
        } while (iVar1 == 0);
      }
      else {
        puVar9 = puVar5;
      }
      iVar2 = FUN_003ec5b0(puVar9);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = iVar3;
      }
      goto LAB_00413418;
    }
  }
LAB_00413414:
  iVar1 = -2;
LAB_00413418:
  FUN_003ed530(param_3);
  return iVar1;
}


