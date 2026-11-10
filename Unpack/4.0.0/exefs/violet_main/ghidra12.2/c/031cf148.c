/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cf148; name: FUN_031cf148
 */


void FUN_031cf148(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_046a5250;
  if (param_1[7] != 0) {
    (**(code **)(*(long *)param_1[3] + 0x18))
              ((long *)param_1[3],**(undefined8 **)(param_1[6] + 0x10),param_1[5]);
    *(int *)(param_1[6] + 0x20) = *(int *)(param_1[6] + 0x20) + -1;
  }
  if (param_1[10] != 0) {
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],param_1[10],param_1[5]);
    *(int *)(param_1[6] + 0x20) = *(int *)(param_1[6] + 0x20) + -1;
  }
  lVar2 = param_1[6];
  plVar1 = (long *)param_1[4];
  *(undefined4 *)(lVar2 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(lVar2 + 0x1c)) && (*(long *)(lVar2 + 0x10) != 0)) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,*(long *)(lVar2 + 0x10),(ulong)*(uint *)(lVar2 + 0x1c) << 3);
  }
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar2 + 0x1c) = 0x80000000;
  plVar3 = (long *)param_1[6];
  plVar1 = (long *)param_1[4];
  *(undefined4 *)(plVar3 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)plVar3 + 0xc)) && (*plVar3 != 0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,*plVar3,(ulong)*(uint *)((long)plVar3 + 0xc) * 0x18);
  }
  *plVar3 = 0;
  *(undefined4 *)((long)plVar3 + 0xc) = 0x80000000;
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],param_1[6],0x28);
  param_1[6] = 0;
  (*(code *)**(undefined8 **)param_1[4])();
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],param_1[4],0x10);
  param_1[4] = 0;
  return;
}


