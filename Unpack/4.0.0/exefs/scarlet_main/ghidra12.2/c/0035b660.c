/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035b660; name: FUN_0035b660
 */


long FUN_0035b660(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_34;
  
  *param_4 = -1;
  iVar1 = FUN_0035a150(param_2,param_3);
  if (iVar1 == 0) {
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    uVar8 = param_2[6];
    uVar10 = param_2[9];
    uVar9 = param_2[8];
    param_3[7] = param_2[7];
    param_3[6] = uVar8;
    param_3[9] = uVar10;
    param_3[8] = uVar9;
    param_3[3] = uVar5;
    param_3[2] = uVar4;
    param_3[5] = uVar7;
    param_3[4] = uVar6;
    uVar9 = param_2[0xf];
    uVar8 = param_2[0xe];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    uVar7 = param_2[0xd];
    uVar6 = param_2[0xc];
    *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    param_3[0xd] = uVar7;
    param_3[0xc] = uVar6;
    param_3[0xf] = uVar9;
    param_3[0xe] = uVar8;
    param_3[0xb] = uVar5;
    param_3[10] = uVar4;
  }
  lVar3 = FUN_0035b290(param_3,1,0,&local_34,param_4);
  if (lVar3 == 0) {
    if ((local_34 == 1) && (iVar1 = FUN_0035a0c0(param_2,param_3), iVar1 == 0)) {
      uVar4 = *param_2;
      param_3[1] = param_2[1];
      *param_3 = uVar4;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      uVar7 = param_2[5];
      uVar6 = param_2[4];
      uVar8 = param_2[6];
      uVar10 = param_2[9];
      uVar9 = param_2[8];
      param_3[7] = param_2[7];
      param_3[6] = uVar8;
      param_3[9] = uVar10;
      param_3[8] = uVar9;
      param_3[3] = uVar5;
      param_3[2] = uVar4;
      param_3[5] = uVar7;
      param_3[4] = uVar6;
      uVar9 = param_2[0xf];
      uVar8 = param_2[0xe];
      uVar5 = param_2[0xb];
      uVar4 = param_2[10];
      uVar7 = param_2[0xd];
      uVar6 = param_2[0xc];
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      param_3[0xd] = uVar7;
      param_3[0xc] = uVar6;
      param_3[0xf] = uVar9;
      param_3[0xe] = uVar8;
      param_3[0xb] = uVar5;
      param_3[10] = uVar4;
    }
    iVar1 = *param_4;
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = FUN_0035a9f0(iVar1,1);
    if ((((lVar3 != 0) || (lVar3 = FUN_0035aab0(iVar1,1), lVar3 != 0)) ||
        ((iVar2 = FUN_00362300(param_3), iVar2 == 0 &&
         (((lVar3 = FUN_0035ae60(iVar1,1), lVar3 != 0 || (lVar3 = FUN_0035ab60(iVar1,1), lVar3 != 0)
           ) || (lVar3 = FUN_0035af70(iVar1,param_1,1), lVar3 != 0)))))) ||
       ((lVar3 = FUN_0035aaa0(iVar1), lVar3 != 0 ||
        (lVar3 = FUN_0035b150(iVar1,param_1), lVar3 != 0)))) {
      nnsocketClose(iVar1);
    }
  }
  return lVar3;
}


