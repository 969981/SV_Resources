/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00490a20; name: FUN_00490a20
 */


undefined8 FUN_00490a20(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 1;
  }
  if ((*param_1 != 1) || (iVar1 = FUN_0047e430(*(undefined8 *)(param_1 + 2)), iVar1 == 0)) {
    return 0;
  }
  iVar1 = 0;
  lVar6 = 0;
  lVar7 = 0;
  do {
    iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 2));
    if (iVar2 + -1 <= iVar1) {
      iVar1 = FUN_0047e430(*(undefined8 *)(param_1 + 2));
      piVar3 = (int *)FUN_0047e450(*(undefined8 *)(param_1 + 2),iVar1 + -1);
      if (((piVar3 == (int *)0x0) || (*piVar3 != 1)) ||
         (iVar1 = FUN_003e0620(**(undefined8 **)(piVar3 + 2),(*(undefined8 **)(piVar3 + 2))[1]),
         iVar1 < 1)) {
        uVar8 = 1;
      }
      else {
LAB_00490c04:
        uVar8 = 0;
      }
      goto LAB_00490c08;
    }
    piVar3 = (int *)FUN_0047e450(*(undefined8 *)(param_1 + 2),iVar1);
    iVar1 = iVar1 + 1;
    piVar4 = (int *)FUN_0047e450(*(undefined8 *)(param_1 + 2),iVar1);
    if (piVar3 == (int *)0x0) goto LAB_00490c04;
    if (*piVar3 == 1) {
      uVar8 = **(undefined8 **)(piVar3 + 2);
      uVar10 = (*(undefined8 **)(piVar3 + 2))[1];
    }
    else {
      if (*piVar3 != 0) goto LAB_00490c04;
      uVar10 = *(undefined8 *)(piVar3 + 2);
      uVar8 = uVar10;
    }
    if (piVar4 == (int *)0x0) goto LAB_00490c04;
    if (*piVar4 == 1) {
      uVar9 = **(undefined8 **)(piVar4 + 2);
      uVar11 = (*(undefined8 **)(piVar4 + 2))[1];
    }
    else {
      if (*piVar4 != 0) goto LAB_00490c04;
      uVar9 = *(undefined8 *)(piVar4 + 2);
      uVar11 = uVar9;
    }
    iVar2 = FUN_003e0620(uVar8,uVar9);
    if (((-1 < iVar2) || (iVar2 = FUN_003e0620(uVar8,uVar10), 0 < iVar2)) ||
       (iVar2 = FUN_003e0620(uVar9,uVar11), 0 < iVar2)) goto LAB_00490c04;
    if (((lVar6 == 0) && (lVar6 = FUN_003eb5b0(), lVar6 == 0)) ||
       ((lVar5 = FUN_003e1230(uVar10,lVar6), lVar5 == 0 ||
        (iVar2 = FUN_003f2e00(lVar6,1), iVar2 == 0)))) {
      uVar8 = 0x130;
LAB_00490c00:
      FUN_004806c0(0x22,0xa2,0x41,"external/openssl/crypto/x509v3/v3_asid.c",uVar8);
      goto LAB_00490c04;
    }
    lVar5 = FUN_003e10e0(lVar6,lVar7);
    if (lVar5 == 0) {
      uVar8 = 0x138;
      goto LAB_00490c00;
    }
    iVar2 = FUN_003e0620(lVar5,uVar9);
    lVar7 = lVar5;
  } while (iVar2 < 0);
  uVar8 = 0;
LAB_00490c08:
  thunk_FUN_003df2e0(lVar7);
  FUN_003eb520(lVar6);
  return uVar8;
}


