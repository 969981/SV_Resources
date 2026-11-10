/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf0248; name: FUN_00bf0248
 */


ulong FUN_00bf0248(long param_1,long param_2,long param_3,int param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  if (*(long *)(param_3 + 0x50) != *(long *)(param_1 + 8)) {
    FUN_00be9330(*(long *)(param_1 + 8),param_3,"GetRepeatedEnumValue",
                 "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x40) != 3) {
    FUN_00be9330(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedEnumValue",
                 "Field is singular; the method requires a repeated field.");
  }
  if (*(int *)(param_3 + 0x3c) != 0xe) {
    FUN_00beafb0(*(undefined8 *)(param_1 + 8),param_3,"GetRepeatedEnumValue",8);
  }
  if (*(char *)(param_3 + 0x44) != '\0') {
    uVar1 = FUN_00c23360(param_2 + *(int *)(param_1 + 0x34),*(undefined4 *)(param_3 + 0x38),param_4)
    ;
    return uVar1;
  }
  lVar3 = *(long *)(param_3 + 0x58);
  if (lVar3 == 0) {
    iVar2 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) * 0x38e38e39;
  }
  else {
    lVar3 = lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x40) >> 4;
    uVar1 = lVar3 * -0x5555555555555555;
    if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                (-(uVar1 >> 0x1f & 1) & 0xfffffffc00000000 |
                lVar3 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
      param_2 = *(long *)(param_1 + 0x18);
      piVar4 = (int *)(*(long *)(param_1 + 0x20) +
                      ((long)((ulong)(uint)((int)((ulong)(param_3 -
                                                         *(long *)(*(long *)(param_3 + 0x50) + 0x30)
                                                         ) >> 4) * 0x38e38e39) << 0x20) >> 0x1e));
      goto LAB_00bf03a4;
    }
    iVar2 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar1;
  }
  piVar4 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
LAB_00bf03a4:
  return (ulong)*(uint *)(*(long *)(param_2 + *piVar4 + 8) + (long)param_4 * 4 + 8);
}


