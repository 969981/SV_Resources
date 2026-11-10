/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb57e0; name: FUN_00fb57e0
 */


long * FUN_00fb57e0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_68;
  long lStack_60;
  long local_58;
  
  if (*(char *)((long)param_1 + 0x3c) != '\0') {
    FUN_00fc2774(param_1);
  }
  if ((int)param_1[7] <= *(int *)((long)param_1 + 0x34)) {
    if ((*(byte *)(param_1 + 0xb) >> 2 & 1) == 0) goto LAB_00fb58c4;
    local_68 = &DAT_04546a50;
    lStack_60 = (long)*(int *)((long)param_1 + 0x34);
    local_58 = (long)(int)param_1[7];
    FUN_00fb9b60(&local_68);
    std::exception::~exception((exception *)&local_68);
  }
  piVar5 = (int *)*param_1;
  piVar6 = (int *)param_1[1];
  if (piVar6 != piVar5) {
    plVar1 = param_1 + 0xc;
    plVar2 = param_1 + 0x18;
    if (*piVar5 == *(int *)((long)param_1 + 0x34)) {
      plVar4 = (long *)0x0;
      if ((char)param_1[0x17] != '\0') {
        plVar4 = plVar2;
      }
      FUN_00fb8230(param_2,piVar5,piVar5 + 2,plVar1,plVar4);
      piVar5 = (int *)*param_1;
      piVar6 = (int *)param_1[1];
    }
    if (1 < (ulong)(((long)piVar6 - (long)piVar5 >> 3) * -0x1111111111111111)) {
      if (piVar5[0x1e] == *(int *)((long)param_1 + 0x34)) {
        plVar4 = (long *)0x0;
        if ((char)param_1[0x17] != '\0') {
          plVar4 = plVar2;
        }
        FUN_00fb8230(param_2,piVar5 + 0x1e,piVar5 + 0x20,plVar1,plVar4);
        piVar5 = (int *)*param_1;
        piVar6 = (int *)param_1[1];
      }
      if (2 < (ulong)(((long)piVar6 - (long)piVar5 >> 3) * -0x1111111111111111)) {
        uVar8 = 2;
        lVar9 = 0xf0;
        do {
          piVar3 = (int *)((long)piVar5 + lVar9);
          if (*piVar3 == *(int *)((long)param_1 + 0x34)) {
            plVar4 = (long *)0x0;
            if ((char)param_1[0x17] != '\0') {
              plVar4 = plVar2;
            }
            FUN_00fb8230(param_2,piVar3,piVar3 + 2,plVar1,plVar4);
            piVar5 = (int *)*param_1;
            piVar6 = (int *)param_1[1];
          }
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x78;
        } while (uVar8 < (ulong)(((long)piVar6 - (long)piVar5 >> 3) * -0x1111111111111111));
      }
    }
  }
LAB_00fb58c4:
  iVar7 = *(int *)((long)param_1 + 0x34);
  uVar8 = (long)iVar7 + 1;
  *(int *)((long)param_1 + 0x34) = (int)uVar8;
  if ((param_1[4] != 0) && ((int)uVar8 < (int)param_1[7])) {
    iVar7 = iVar7 + 2;
    do {
      if ((*(ulong *)(param_1[3] + (uVar8 >> 3 & 0x1ffffffffffffff8)) >> (uVar8 & 0x3f) & 1) == 0) {
        return param_1;
      }
      uVar8 = uVar8 + 1;
      *(int *)((long)param_1 + 0x34) = iVar7;
      iVar7 = iVar7 + 1;
    } while ((long)(int)param_1[7] != uVar8);
  }
  return param_1;
}


