/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf1860; name: FUN_00bf1860
 */


undefined8 FUN_00bf1860(long param_1,long param_2,long param_3,int param_4)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if (*(long *)(param_3 + 0x50) != *(long *)(param_1 + 8)) {
    FUN_00be9330(*(long *)(param_1 + 8),param_3,"GetRepeatedMessage",
                 "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x40) != 3) {
    FUN_00be9330(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedMessage",
                 "Field is singular; the method requires a repeated field.");
  }
  if ((*(uint *)(param_3 + 0x3c) & 0xfffffffe) != 10) {
    FUN_00beafb0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedMessage",10);
  }
  if (*(char *)(param_3 + 0x44) != '\0') {
    uVar2 = FUN_00c244a0(param_2 + *(int *)(param_1 + 0x34),*(undefined4 *)(param_3 + 0x38),param_4)
    ;
    return uVar2;
  }
  if (*(int *)(param_3 + 0x3c) == 0xb) {
    lVar4 = *(long *)(param_3 + 0x58);
    if (*(char *)(*(long *)(*(long *)(param_3 + 0x68) + 0x20) + 0x53) != '\0') {
      if (lVar4 == 0) {
        iVar3 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) *
                0x38e38e39;
LAB_00bf1a54:
        piVar6 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
      }
      else {
        lVar4 = lVar4 - *(long *)(*(long *)(lVar4 + 0x10) + 0x40) >> 4;
        uVar5 = lVar4 * -0x5555555555555555;
        if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                    (-(uVar5 >> 0x1f & 1) & 0xfffffffc00000000 |
                    lVar4 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(param_3 + 0x38)) {
          iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar5;
          goto LAB_00bf1a54;
        }
        param_2 = *(long *)(param_1 + 0x18);
        piVar6 = (int *)(*(long *)(param_1 + 0x20) +
                        ((long)((ulong)(uint)((int)((ulong)(param_3 -
                                                           *(long *)(*(long *)(param_3 + 0x50) +
                                                                    0x30)) >> 4) * 0x38e38e39) <<
                               0x20) >> 0x1e));
      }
      plVar1 = (long *)(param_2 + *piVar6);
      if ((int)plVar1[6] == 0) {
        FUN_00bb1344(plVar1 + 5);
        if ((int)plVar1[6] == 0) {
          (**(code **)(*plVar1 + 0x50))(plVar1);
          *(undefined4 *)(plVar1 + 6) = 2;
        }
        FUN_00bb14b8(plVar1 + 5);
      }
      param_2 = plVar1[2];
      goto LAB_00bf1ad8;
    }
  }
  else {
    lVar4 = *(long *)(param_3 + 0x58);
  }
  if (lVar4 == 0) {
    iVar3 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) * 0x38e38e39;
LAB_00bf19f8:
    piVar6 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
  }
  else {
    lVar4 = lVar4 - *(long *)(*(long *)(lVar4 + 0x10) + 0x40) >> 4;
    uVar5 = lVar4 * -0x5555555555555555;
    if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                (-(uVar5 >> 0x1f & 1) & 0xfffffffc00000000 |
                lVar4 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(param_3 + 0x38)) {
      iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar5;
      goto LAB_00bf19f8;
    }
    param_2 = *(long *)(param_1 + 0x18);
    piVar6 = (int *)(*(long *)(param_1 + 0x20) +
                    ((long)((ulong)(uint)((int)((ulong)(param_3 -
                                                       *(long *)(*(long *)(param_3 + 0x50) + 0x30))
                                               >> 4) * 0x38e38e39) << 0x20) >> 0x1e));
  }
  param_2 = param_2 + *piVar6;
LAB_00bf1ad8:
  return *(undefined8 *)(*(long *)(param_2 + 0x10) + (long)param_4 * 8 + 8);
}


