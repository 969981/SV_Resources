/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0245fa08; name: FUN_0245fa08
 */


undefined1  [16] FUN_0245fa08(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  switch(param_3) {
  case 1:
    uVar2 = 0x3ff0000000000000;
    if (*(char *)(param_1 + param_2) == '\0') {
      uVar2 = 0;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar2;
    return auVar3;
  case 2:
    iVar1 = (int)*(char *)(param_1 + param_2);
    goto LAB_0245fa70;
  case 3:
    uVar2 = (ulong)*(byte *)(param_1 + param_2);
    break;
  case 4:
    iVar1 = (int)*(short *)(param_1 + param_2);
    goto LAB_0245fa70;
  case 5:
    uVar2 = (ulong)*(ushort *)(param_1 + param_2);
    break;
  case 6:
    iVar1 = *(int *)(param_1 + param_2);
LAB_0245fa70:
    auVar4._0_8_ = (double)iVar1;
    auVar4._8_8_ = 0;
    return auVar4;
  case 7:
    uVar2 = (ulong)*(uint *)(param_1 + param_2);
    break;
  case 8:
    auVar5._0_8_ = (double)*(long *)(param_1 + param_2);
    auVar5._8_8_ = 0;
    return auVar5;
  case 9:
    uVar2 = *(ulong *)(param_1 + param_2);
    break;
  case 10:
    auVar7._0_8_ = (double)*(float *)(param_1 + param_2);
    auVar7._8_8_ = 0;
    return auVar7;
  case 0xb:
    auVar8._0_8_ = *(ulong *)(param_1 + param_2);
    auVar8._8_8_ = 0;
    return auVar8;
  default:
    return ZEXT816(0);
  }
  auVar6._0_8_ = NEON_ucvtf(uVar2);
  auVar6._8_8_ = 0;
  return auVar6;
}


