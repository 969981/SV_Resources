/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02151a74; name: FUN_02151a74
 */


undefined8 FUN_02151a74(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (**(char **)(param_1 + 0x110) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1c8);
    if (iVar1 == 3) {
      plVar2 = *(long **)(param_1 + 200);
      lVar4 = param_1 + 0x168;
    }
    else {
      lVar4 = param_1 + 0x108;
      if (iVar1 != 2) {
        if (iVar1 == 4) {
          return 1;
        }
        if (**(char **)(param_1 + 0x170) == '\0') {
          plVar2 = *(long **)(param_1 + 200);
          lVar6 = *plVar2;
        }
        else {
          lVar8 = *(long *)PTR_DAT_047dd0f8;
          plVar2 = *(long **)(PTR_DAT_047dd0f8 + 0x18);
          if (plVar2 == (long *)0x0) {
            plVar2 = *(long **)(param_1 + 200);
            lVar7 = *param_2;
          }
          else {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            lVar7 = *param_2;
            (**(code **)(*plVar2 + 0x20))(plVar2);
            plVar2 = *(long **)(param_1 + 200);
          }
          lVar6 = *plVar2;
          if (lVar7 == lVar8) {
            (**(code **)(lVar6 + 0x90))(plVar2,lVar4);
            (**(code **)(**(long **)(param_1 + 200) + 0x88))
                      (*(long **)(param_1 + 200),param_1 + 0x168);
            if (**(char **)(param_1 + 0x1b0) != '\0') {
              (**(code **)(**(long **)(param_1 + 200) + 0x88))
                        (*(long **)(param_1 + 200),param_1 + 0x1a8);
            }
            FUN_01282188(param_1 + 0x1d0);
            uVar5 = 3;
            goto LAB_02151b74;
          }
        }
        (**(code **)(lVar6 + 0x88))(plVar2,lVar4);
        uVar5 = 2;
LAB_02151b74:
        *(undefined4 *)(param_1 + 0x1c8) = uVar5;
        return 0;
      }
      plVar2 = *(long **)(param_1 + 200);
    }
    uVar3 = (**(code **)(*plVar2 + 0x98))(plVar2,lVar4);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x1c8) = 4;
  }
  return 1;
}


