/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0157f96c; name: FUN_0157f96c
 */


undefined1  [16] FUN_0157f96c(undefined8 *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined2 local_14;
  undefined1 local_12;
  
  pcVar4 = (char *)param_1[5];
  plVar2 = (long *)param_1[7];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  uVar1 = nn::fs::Commit(pcVar4);
  *(undefined4 *)param_1 = 9;
  *(undefined1 *)((long)param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 7) = local_12;
  *(undefined2 *)((long)param_1 + 5) = local_14;
  uVar3 = *param_1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  auVar5._8_4_ = uVar1;
  auVar5._0_8_ = uVar3;
  auVar5._12_4_ = 0;
  return auVar5;
}


