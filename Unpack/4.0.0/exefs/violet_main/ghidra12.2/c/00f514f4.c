/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f514f4; name: FUN_00f514f4
 */


undefined8 FUN_00f514f4(long *param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = (int)param_1[0x2e];
  if (iVar1 == 2) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x2d);
LAB_00f51514:
    uVar2 = (**(code **)(*param_1 + 0x270))(param_1,uVar3,(long)param_1 + 0x16c,param_1 + 0x12);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (*(int *)(param_1[10] + 0x6c) != *(int *)(param_1[10] + 0x68)) {
LAB_00f51590:
      *(undefined4 *)(param_1 + 0x2e) = 1;
      return 1;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        goto LAB_00f51590;
      }
      if (iVar1 != 3) {
        return 1;
      }
      uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      uVar4 = 4;
      goto LAB_00f515c8;
    }
    uVar3 = FUN_00f515ec(param_1[10],param_1 + 0x12,0x10,0);
    *(short *)(param_1 + 0x2d) = (short)uVar3;
    if ((uVar3 & 0xffff) != 0xce) {
      *(undefined8 *)((long)param_1 + 0x16c) = 0x200000000;
      goto LAB_00f51514;
    }
  }
  uVar4 = 3;
LAB_00f515c8:
  *(undefined4 *)(param_1 + 0x2e) = uVar4;
  return 1;
}


