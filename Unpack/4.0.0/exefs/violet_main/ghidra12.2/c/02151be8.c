/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02151be8; name: FUN_02151be8
 */


undefined8 FUN_02151be8(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  
  if (**(char **)(param_1 + 0x130) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1c8);
    lVar4 = param_1 + 0x128;
    if (iVar1 == 6) {
      plVar2 = *(long **)(param_1 + 200);
    }
    else {
      if (iVar1 == 0) {
        return 1;
      }
      if (iVar1 != 7) {
        if (**(char **)(param_1 + 400) == '\0') {
          plVar2 = *(long **)(param_1 + 200);
          pcVar7 = *(code **)(*plVar2 + 0x88);
        }
        else {
          lVar9 = *(long *)PTR_DAT_047dd0f8;
          plVar2 = *(long **)(PTR_DAT_047dd0f8 + 0x18);
          if (plVar2 == (long *)0x0) {
            plVar2 = *(long **)(param_1 + 200);
            lVar6 = *plVar2;
            lVar8 = *param_2;
          }
          else {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            lVar8 = *param_2;
            (**(code **)(*plVar2 + 0x20))(plVar2);
            plVar2 = *(long **)(param_1 + 200);
            lVar6 = *plVar2;
          }
          pcVar7 = *(code **)(lVar6 + 0x88);
          if (lVar8 == lVar9) {
            (*pcVar7)(plVar2,param_1 + 0x188);
            FUN_01282188(param_1 + 0x1f0);
            if (**(char **)(param_1 + 0x1b0) != '\0') {
              (**(code **)(**(long **)(param_1 + 200) + 0x90))
                        (*(long **)(param_1 + 200),param_1 + 0x1a8);
            }
            uVar5 = 7;
            goto LAB_02151ca4;
          }
        }
        (*pcVar7)(plVar2,lVar4);
        uVar5 = 6;
LAB_02151ca4:
        *(undefined4 *)(param_1 + 0x1c8) = uVar5;
        return 0;
      }
      plVar2 = *(long **)(param_1 + 200);
      lVar4 = param_1 + 0x188;
    }
    uVar3 = (**(code **)(*plVar2 + 0x98))(plVar2,lVar4);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return 1;
}


