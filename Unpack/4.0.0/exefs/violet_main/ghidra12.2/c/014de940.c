/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014de940; name: FUN_014de940
 */


undefined1  [16] FUN_014de940(ulong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_34;
  undefined1 local_32;
  
  if ((param_1[2] == 0) || (*(int *)(param_1[2] + (long)(int)param_1[3] * 4) != 3)) {
    uVar3 = 0;
    iVar1 = 0;
    uVar4 = 0x100000000;
    uVar5 = 7;
  }
  else {
    iVar1 = nn::fs::EnsureSaveData((Uid *)(param_1 + 9));
    if (iVar1 == 0) {
      pcVar6 = (char *)param_1[5];
      plVar7 = (long *)param_1[7];
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      iVar1 = nn::fs::MountSaveData(pcVar6,(Uid *)(param_1 + 9));
      local_34 = local_38;
      local_32 = local_36;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      if (iVar1 == 0) {
        *(undefined4 *)(param_1[2] + (long)(int)param_1[3] * 4) = 3;
      }
      uVar2 = 7;
    }
    else {
      uVar2 = 6;
    }
    *(undefined4 *)param_1 = uVar2;
    *(undefined1 *)((long)param_1 + 4) = 1;
    *(undefined1 *)((long)param_1 + 7) = local_32;
    *(undefined2 *)((long)param_1 + 5) = local_34;
    uVar5 = *param_1;
    uVar3 = uVar5 & 0xffffff0000000000;
    uVar4 = uVar5 & 0xff00000000;
    uVar5 = uVar5 & 0xffffffff;
    *(int *)(param_1 + 1) = iVar1;
  }
  auVar8._0_8_ = uVar4 | uVar5 | uVar3;
  auVar8._8_4_ = iVar1;
  auVar8._12_4_ = 0;
  return auVar8;
}


