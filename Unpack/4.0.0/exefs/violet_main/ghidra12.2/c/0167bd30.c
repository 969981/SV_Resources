/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167bd30; name: FUN_0167bd30
 */


void FUN_0167bd30(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  long *plVar9;
  
  if (*(char *)(param_3[3] + 0xa6) != '\0') {
    *(undefined1 *)(param_3[3] + 0xa8) = 0;
    while( true ) {
      lVar6 = param_3[3];
      bVar1 = *(byte *)(lVar6 + 0xa8);
      if (*(byte *)(lVar6 + 0xa6) <= bVar1) break;
      *(byte *)(lVar6 + 0xa8) = bVar1 + 1;
      plVar9 = *(long **)(lVar6 + (ulong)bVar1 * 8);
      if (plVar9 == (long *)0x0) break;
      iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
      piVar8 = (int *)param_3[2];
      piVar7 = piVar8;
      if (((((((*piVar8 == iVar3) || (piVar7 = piVar8 + 2, *piVar7 == iVar3)) ||
             (piVar7 = piVar8 + 4, *piVar7 == iVar3)) ||
            (((piVar7 = piVar8 + 6, *piVar7 == iVar3 || (piVar7 = piVar8 + 8, *piVar7 == iVar3)) ||
             ((piVar7 = piVar8 + 10, *piVar7 == iVar3 ||
              ((piVar7 = piVar8 + 0xc, *piVar7 == iVar3 || (piVar7 = piVar8 + 0xe, *piVar7 == iVar3)
               ))))))) || (piVar7 = piVar8 + 0x10, *piVar7 == iVar3)) ||
          (piVar7 = piVar8 + 0x12, *piVar7 == iVar3)) && ((char)piVar7[1] == '\0')) {
        bVar1 = *(byte *)(param_3[3] + 0xa6);
        cVar2 = *(char *)(param_3[1] + 0x13);
        FUN_0167bf08(param_3[3],plVar9);
        if ((bVar1 < 2) || (cVar2 == '\0')) {
          FUN_0297ef48(param_1,*param_3,plVar9,param_3[2]);
        }
        FUN_0168137c(param_1,*param_3,plVar9);
      }
    }
    if ((param_3[4] != 0) &&
       (((lVar6 = param_3[3], *(char *)(lVar6 + 0xa7) != '\0' || (*(char *)(lVar6 + 0xa9) != '\0'))
        && (*(char *)(lVar6 + 0xa6) == '\0')))) {
      uVar5 = FUN_01243584(param_1);
      uVar4 = (**(code **)(*(long *)*param_3 + 0x98))();
      FUN_0167bf90(uVar5,uVar4,3);
      return;
    }
  }
  return;
}


