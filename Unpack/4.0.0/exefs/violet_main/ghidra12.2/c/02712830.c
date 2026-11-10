/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02712830; name: FUN_02712830
 */


bool FUN_02712830(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    plVar9 = (long *)*param_1;
    iVar2 = (**(code **)(*(long *)param_2[-1] + 0x20))();
    iVar3 = (**(code **)(*plVar9 + 0x20))(plVar9);
    if (iVar2 < iVar3) {
      uVar5 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar5;
    }
    break;
  case 3:
    FUN_011e5340(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_011e5210(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_011e50a0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_011e5340(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar11 = 0;
      iVar2 = 0;
      puVar7 = param_1 + 3;
      puVar8 = param_1 + 2;
      do {
        puVar6 = puVar7;
        plVar9 = (long *)*puVar8;
        iVar3 = (**(code **)(*(long *)*puVar6 + 0x20))();
        iVar4 = (**(code **)(*plVar9 + 0x20))(plVar9);
        if (iVar3 < iVar4) {
          plVar9 = (long *)*puVar6;
          lVar1 = lVar11;
          do {
            lVar12 = lVar1;
            *(undefined8 *)((long)param_1 + lVar12 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar12 + 0x10);
            if (lVar12 == -0x10) {
              puVar7 = param_1;
              goto LAB_02712980;
            }
            plVar10 = *(long **)((long)param_1 + lVar12 + 8);
            iVar3 = (**(code **)(*plVar9 + 0x20))(plVar9);
            iVar4 = (**(code **)(*plVar10 + 0x20))(plVar10);
            lVar1 = lVar12 + -8;
          } while (iVar3 < iVar4);
          puVar7 = (undefined8 *)((long)param_1 + lVar12 + 0x10);
LAB_02712980:
          iVar2 = iVar2 + 1;
          *puVar7 = plVar9;
          if (iVar2 == 8) {
            return puVar6 + 1 == param_2;
          }
        }
        lVar11 = lVar11 + 8;
        puVar7 = puVar6 + 1;
        puVar8 = puVar6;
      } while (puVar6 + 1 != param_2);
    }
  }
  return true;
}


