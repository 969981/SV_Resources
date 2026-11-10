/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029408bc; name: FUN_029408bc
 */


void FUN_029408bc(long param_1,undefined1 *param_2,undefined4 *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined2 local_50;
  undefined2 local_4e;
  undefined1 local_4c;
  undefined4 local_4a;
  undefined2 local_46;
  
  *param_2 = 0;
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),param_3[1]);
  uVar2 = (**(code **)(*plVar1 + 0x200))();
  if (((uVar2 & 1) == 0) &&
     (lVar3 = FUN_02944fd0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8),plVar1,
                           *(undefined2 *)(param_3 + 2)), lVar3 != 0)) {
    local_4a = 0xffffffff;
    local_4c = 0;
    local_46 = 0xffff;
    local_50 = (undefined2)param_3[1];
    local_4e = *(undefined2 *)(param_3 + 2);
    FUN_011afc5c(*(undefined8 *)(param_1 + 0x20),&local_50);
    uVar2 = FUN_02938a5c(*(undefined8 *)(param_1 + 0x38),plVar1,*param_3,(ulong)&local_50 | 4);
    if (((uVar2 & 1) != 0) && (*(char *)(param_3 + 4) != '\0')) {
      local_4c = 1;
    }
    if ((param_3[3] != 2) && ((param_3[3] != 0 || ((uVar2 & 1) != 0)))) {
      FUN_0298907c(*(undefined8 *)(param_1 + 0x20),&local_50);
    }
    FUN_014608b0(*(undefined8 *)(param_1 + 0x30),lVar3);
    if ((*(char *)((long)param_3 + 10) != '\0') &&
       (uVar4 = FUN_019d69c4(*(undefined8 *)(param_1 + 8),*(undefined2 *)(param_3 + 2)),
       (uVar4 & 1) != 0)) {
      FUN_019fb330(*(undefined8 *)(param_1 + 0x20),plVar1,0);
    }
    if ((uVar2 & 1) != 0) {
      FUN_029849a0(param_1,plVar1,*(undefined2 *)(param_3 + 2));
    }
    *param_2 = 1;
  }
  return;
}


