/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347df74; name: FUN_0347df74
 */


undefined4
FUN_0347df74(uint param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  
  uVar5 = DAT_048afd58;
  uVar10 = (ulong)DAT_048afd58;
  iVar2 = (param_1 & 0xf | param_2 << 4) + param_3 * 0x10000;
  piVar6 = DAT_048afd50;
  if ((DAT_048afd58 != 0) && (*DAT_048afd50 != iVar2)) {
    lVar8 = uVar10 * 0x20;
    piVar9 = DAT_048afd50;
    do {
      lVar8 = lVar8 + -0x20;
      if (lVar8 == 0) goto LAB_0347e008;
      piVar6 = piVar9 + 8;
      piVar1 = piVar9 + 8;
      piVar9 = piVar6;
    } while (*piVar1 != iVar2);
  }
  if (piVar6 != DAT_048afd50 + uVar10 * 8) {
    return 1;
  }
LAB_0347e008:
  piVar6 = DAT_048afd50;
  if ((DAT_048afd58 != 0) && (*DAT_048afd50 != iVar2)) {
    lVar8 = uVar10 * 0x20;
    piVar9 = DAT_048afd50;
    do {
      lVar8 = lVar8 + -0x20;
      if (lVar8 == 0) goto LAB_0347e060;
      piVar6 = piVar9 + 8;
      piVar1 = piVar9 + 8;
      piVar9 = piVar6;
    } while (*piVar1 != iVar2);
  }
  if (piVar6 != DAT_048afd50 + uVar10 * 8) {
    piVar9 = piVar6 + 2;
    *(undefined8 *)piVar9 = param_4;
    *(undefined8 *)(piVar6 + 4) = param_5;
    *(undefined8 *)(piVar6 + 6) = param_6;
    goto LAB_0347e0e0;
  }
LAB_0347e060:
  if (DAT_048afd58 < DAT_048afd5c) {
LAB_0347e0a8:
    if (uVar5 < DAT_048afd5c) {
      uVar10 = (ulong)DAT_048afd58;
      DAT_048afd58 = DAT_048afd58 + 1;
      if (DAT_048afd50 != (int *)0x0) {
        piVar6 = DAT_048afd50 + uVar10 * 8;
        *piVar6 = iVar2;
        piVar9 = piVar6 + 2;
        *(undefined8 *)piVar9 = param_4;
        *(undefined8 *)(piVar6 + 4) = param_5;
        *(undefined8 *)(piVar6 + 6) = param_6;
        goto LAB_0347e0e0;
      }
    }
  }
  else {
    iVar3 = DAT_048afd5c + (DAT_048afd5c >> 1);
    if (DAT_048afd5c == 0) {
      iVar3 = 1;
    }
    uVar4 = iVar3 + DAT_048afd5c;
    piVar6 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,DAT_048afd50,(ulong)uVar4 << 5);
    if (piVar6 != (int *)0x0) {
      DAT_048afd50 = piVar6;
      DAT_048afd5c = uVar4;
      goto LAB_0347e0a8;
    }
  }
  piVar9 = (int *)0x0;
LAB_0347e0e0:
  uVar7 = 1;
  if (piVar9 == (int *)0x0) {
    uVar7 = 2;
  }
  return uVar7;
}


