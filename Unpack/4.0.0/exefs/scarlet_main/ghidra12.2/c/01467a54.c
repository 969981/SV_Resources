/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01467a54; name: FUN_01467a54
 */


byte * FUN_01467a54(long param_1,byte *param_2,byte *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  
  if (param_2 == param_3) {
    return param_2;
  }
  bVar2 = *param_2;
  uVar6 = (uint)bVar2;
  if (bVar2 < 0x3f) {
    if (bVar2 == 0x2e) goto LAB_01467af0;
    if (bVar2 != 0x28) {
      if (1 < uVar6 - 0x2a) goto LAB_01467cd0;
      goto LAB_01467aec;
    }
    pbVar10 = param_2 + 1;
    if (pbVar10 != param_3) {
      if (((param_2 + 2 == param_3) || (*pbVar10 != 0x3f)) || (param_2[2] != 0x3a)) {
        FUN_01469e70(param_1);
        uVar1 = *(undefined4 *)(param_1 + 0x1c);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        pbVar5 = (byte *)FUN_0146758c(param_1,pbVar10,param_3);
        if ((pbVar5 == param_3) || (param_2 = pbVar5, *pbVar5 != 0x29)) goto LAB_01467ca0;
        FUN_01469d80(param_1,uVar1);
      }
      else {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        pbVar5 = (byte *)FUN_0146758c(param_1,param_2 + 3,param_3);
        if ((pbVar5 == param_3) || (param_2 = pbVar5, *pbVar5 != 0x29)) goto LAB_01467ca0;
      }
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      goto LAB_01467b48;
    }
LAB_01467ca0:
    FUN_028a5c70();
LAB_01467ca4:
    iVar3 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar3 != 0) {
      *(undefined8 *)(pbVar10 + 0x430) = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_01467c84:
    plVar7 = *(long **)(pbVar10 + 0x430);
    *(long **)(param_3 + 0x30) = plVar7;
    pbVar5 = param_2;
  }
  else {
    if (bVar2 < 0x5c) {
      if (bVar2 == 0x5b) {
        pbVar10 = (byte *)FUN_01469f68(param_1,param_2,param_3);
        return pbVar10;
      }
      if (uVar6 != 0x3f) {
LAB_01467cd0:
        if (((param_2 != param_3) &&
            (uVar6 = *param_2 - 0x24,
            0x3a < uVar6 || (1L << ((ulong)uVar6 & 0x3f) & 0x7800000080004f1U) == 0)) &&
           (2 < *param_2 - 0x7b)) {
          FUN_01467d38(param_1);
          param_2 = param_2 + 1;
        }
        return param_2;
      }
    }
    else {
      if (bVar2 == 0x5c) {
        pbVar10 = (byte *)FUN_0146b998(param_1,param_2,param_3);
        return pbVar10;
      }
      if (uVar6 != 0x7b) goto LAB_01467cd0;
    }
LAB_01467aec:
    FUN_028a5c80();
LAB_01467af0:
    param_3 = (byte *)tpidr_el0;
    plVar7 = *(long **)(param_3 + 0x30);
    pbVar5 = param_2;
    if (plVar7 == (long *)0x0) {
      pbVar10 = (byte *)&DAT_04859000;
      if ((DAT_04859438 & 1) == 0) goto LAB_01467ca4;
      goto LAB_01467c84;
    }
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x10,8);
  lVar8 = *(long *)(param_1 + 0x38);
  uVar9 = *(undefined8 *)(lVar8 + 8);
  *puVar4 = &PTR_LAB_045e6340;
  puVar4[1] = uVar9;
  *(undefined8 **)(lVar8 + 8) = puVar4;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
LAB_01467b48:
  return pbVar5 + 1;
}


