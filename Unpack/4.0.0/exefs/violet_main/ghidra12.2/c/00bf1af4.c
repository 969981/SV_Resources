/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf1af4; name: FUN_00bf1af4
 */


undefined8 FUN_00bf1af4(long param_1,long param_2,long param_3,int param_4)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 0x50) != *(long *)(param_1 + 8)) {
    FUN_00be9330(*(long *)(param_1 + 8),param_3,"MutableRepeatedMessage",
                 "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x40) != 3) {
    FUN_00be9330(*(undefined8 *)(param_1 + 8),param_3,"MutableRepeatedMessage",
                 "Field is singular; the method requires a repeated field.");
  }
  if ((*(uint *)(param_3 + 0x3c) & 0xfffffffe) != 10) {
    FUN_00beafb0(*(undefined8 *)(param_1 + 8),param_3,"MutableRepeatedMessage",10);
  }
  if (*(char *)(param_3 + 0x44) != '\0') {
    uVar2 = FUN_00c24578(param_2 + *(int *)(param_1 + 0x34),*(undefined4 *)(param_3 + 0x38),param_4)
    ;
    return uVar2;
  }
  if (*(int *)(param_3 + 0x3c) == 0xb) {
    lVar4 = *(long *)(param_3 + 0x58);
    if (*(char *)(*(long *)(*(long *)(param_3 + 0x68) + 0x20) + 0x53) != '\0') {
      if (lVar4 == 0) {
        iVar3 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) *
                0x38e38e39;
      }
      else {
        iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c) +
                (int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x10) + 0x40)) >> 4) * -0x55555555
        ;
      }
      plVar1 = (long *)(param_2 + *(int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4));
      if ((int)plVar1[6] == 0) {
        FUN_00bb1344(plVar1 + 5);
        if ((int)plVar1[6] == 0) {
          (**(code **)(*plVar1 + 0x50))(plVar1);
          *(undefined4 *)(plVar1 + 6) = 2;
        }
        FUN_00bb14b8(plVar1 + 5);
      }
      *(undefined4 *)(plVar1 + 6) = 1;
      param_2 = plVar1[2];
      goto LAB_00bf1cd4;
    }
  }
  else {
    lVar4 = *(long *)(param_3 + 0x58);
  }
  if (lVar4 == 0) {
    iVar3 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) * 0x38e38e39;
  }
  else {
    iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c) +
            (int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x10) + 0x40)) >> 4) * -0x55555555;
  }
  param_2 = param_2 + *(int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
LAB_00bf1cd4:
  return *(undefined8 *)(*(long *)(param_2 + 0x10) + (long)param_4 * 8 + 8);
}


