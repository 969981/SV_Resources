/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293d160; name: FUN_0293d160
 */


undefined8 FUN_0293d160(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((*(char *)((long)param_1 + 0x1a) == '\x04') &&
     (iVar1 = FUN_010803c8(param_1[2]), *(int *)(param_1 + 4) != iVar1)) {
    uVar3 = FUN_00f7e284(param_1[1]);
    plVar4 = (long *)FUN_01021c94(uVar3,*(undefined4 *)(param_1 + 4));
    uVar3 = FUN_0158253c(param_1[1]);
    uVar6 = *param_1;
    uVar2 = (**(code **)(*plVar4 + 0x2b8))(plVar4,uVar3);
    uVar5 = FUN_0161bb5c(uVar6,0x50fc5612cd4b7875,uVar2);
    if (((uVar5 & 1) == 0) &&
       (uVar5 = thunk_FUN_021fa828(*(undefined2 *)((long)param_1 + 0x1c)), (uVar5 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}


