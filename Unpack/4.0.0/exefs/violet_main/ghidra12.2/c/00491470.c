/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00491470; name: FUN_00491470
 */


undefined8 FUN_00491470(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar4 = 1;
  if ((param_2 != 0) && (param_1 != param_2)) {
    if (param_1 == 0) {
LAB_004915a0:
      uVar4 = 0;
    }
    else {
      iVar2 = FUN_0047e430(param_2);
      if (iVar2 < 1) {
        uVar4 = 1;
      }
      else {
        iVar6 = 0;
        iVar2 = 0;
        do {
          piVar5 = (int *)FUN_0047e450(param_2,iVar6);
          if (piVar5 == (int *)0x0) {
            return 0;
          }
          if (*piVar5 == 1) {
            uVar4 = **(undefined8 **)(piVar5 + 2);
            uVar1 = (*(undefined8 **)(piVar5 + 2))[1];
            iVar3 = FUN_0047e430(param_1);
          }
          else {
            if (*piVar5 != 0) goto LAB_004915a0;
            uVar4 = *(undefined8 *)(piVar5 + 2);
            iVar3 = FUN_0047e430(param_1);
            uVar1 = uVar4;
          }
          if (iVar3 <= iVar2) goto LAB_004915a0;
          while( true ) {
            piVar5 = (int *)FUN_0047e450(param_1,iVar2);
            if (piVar5 == (int *)0x0) {
              return 0;
            }
            if (*piVar5 == 1) {
              uVar7 = **(undefined8 **)(piVar5 + 2);
              iVar3 = FUN_003e0620((*(undefined8 **)(piVar5 + 2))[1],uVar1);
            }
            else {
              if (*piVar5 != 0) goto LAB_004915a0;
              uVar7 = *(undefined8 *)(piVar5 + 2);
              iVar3 = FUN_003e0620(uVar7,uVar1);
            }
            if (-1 < iVar3) break;
            iVar2 = iVar2 + 1;
            iVar3 = FUN_0047e430(param_1);
            if (iVar3 <= iVar2) goto LAB_004915a0;
          }
          iVar3 = FUN_003e0620(uVar7,uVar4);
          if (0 < iVar3) goto LAB_004915a0;
          iVar6 = iVar6 + 1;
          iVar3 = FUN_0047e430(param_2);
          uVar4 = 1;
        } while (iVar6 < iVar3);
      }
    }
  }
  return uVar4;
}


