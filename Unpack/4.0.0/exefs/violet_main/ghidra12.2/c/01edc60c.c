/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01edc60c; name: FUN_01edc60c
 */


void FUN_01edc60c(long param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  piVar1 = (int *)(param_1 + 0x7cb0);
  iVar2 = *(int *)(param_2 + 8);
  piVar6 = piVar1;
  if ((((((*piVar1 == iVar2) ||
         (piVar3 = (int *)(param_1 + 0x7cc0), piVar6 = piVar3, *piVar3 == iVar2)) ||
        (piVar4 = (int *)(param_1 + 0x7cd0), piVar6 = piVar4, *piVar4 == iVar2)) ||
       ((piVar5 = (int *)(param_1 + 0x7ce0), piVar6 = piVar5, *piVar5 == iVar2 ||
        (piVar7 = (int *)(param_1 + 0x7cf0), piVar6 = piVar7, *piVar7 == iVar2)))) ||
      ((piVar8 = (int *)(param_1 + 32000), piVar6 = piVar8, *piVar8 == iVar2 ||
       ((piVar9 = (int *)(param_1 + 0x7d10), piVar6 = piVar9, *piVar9 == iVar2 ||
        (piVar10 = (int *)(param_1 + 0x7d20), piVar6 = piVar10, *piVar10 == iVar2)))))) ||
     ((piVar11 = (int *)(param_1 + 0x7d30), piVar6 = piVar11, *piVar11 == iVar2 ||
      (piVar6 = (int *)(param_1 + 0x7d40), *piVar6 == iVar2)))) {
    piVar6 = piVar6 + 2;
  }
  else {
    *(undefined8 *)piVar1 = *(undefined8 *)piVar3;
    *(undefined8 *)(param_1 + 0x7cb8) = *(undefined8 *)(param_1 + 0x7cc8);
    *(undefined8 *)piVar3 = *(undefined8 *)piVar4;
    *(undefined8 *)(param_1 + 0x7cc8) = *(undefined8 *)(param_1 + 0x7cd8);
    *(undefined8 *)piVar4 = *(undefined8 *)piVar5;
    *(undefined8 *)(param_1 + 0x7cd8) = *(undefined8 *)(param_1 + 0x7ce8);
    *(undefined8 *)piVar5 = *(undefined8 *)piVar7;
    *(undefined8 *)(param_1 + 0x7ce8) = *(undefined8 *)(param_1 + 0x7cf8);
    *(undefined8 *)piVar7 = *(undefined8 *)piVar8;
    *(undefined8 *)(param_1 + 0x7cf8) = *(undefined8 *)(param_1 + 0x7d08);
    *(undefined8 *)piVar8 = *(undefined8 *)piVar9;
    *(undefined8 *)(param_1 + 0x7d08) = *(undefined8 *)(param_1 + 0x7d18);
    *(undefined8 *)piVar9 = *(undefined8 *)piVar10;
    *(undefined8 *)(param_1 + 0x7d18) = *(undefined8 *)(param_1 + 0x7d28);
    *(undefined8 *)piVar10 = *(undefined8 *)piVar11;
    *(undefined8 *)(param_1 + 0x7d28) = *(undefined8 *)(param_1 + 0x7d38);
    *(undefined8 *)piVar11 = *(undefined8 *)piVar6;
    *(undefined8 *)(param_1 + 0x7d38) = *(undefined8 *)(param_1 + 0x7d48);
    *(int *)(param_1 + 0x7d40) = iVar2;
    piVar6 = (int *)(param_1 + 0x7d48);
  }
  *(undefined8 *)piVar6 = param_3;
  return;
}


