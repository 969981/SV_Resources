/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00317670; name: FUN_00317670
 */


ulong FUN_00317670(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 auStack_28 [8];
  
  lVar4 = *(long *)(param_1 + 0x1150);
  uVar1 = (**(code **)(param_1 + 0x1158))
                    (*(undefined8 *)(param_1 + 0x1148),param_1,lVar4,param_2,param_3);
  if ((uVar1 != 0) && (uVar2 = FUN_00351f40(uVar1,2,auStack_28), (uVar2 & 1) != 0)) {
    if (PTR_DAT_047ccac0[0x10] != '\0') {
      FUN_00352270(uVar1);
    }
    if (*(undefined **)(param_1 + 0x1158) == PTR_LAB_047ccb60) {
      *(undefined **)(param_1 + 0x1158) = PTR_LAB_047ccb60;
      *(undefined1 **)(param_1 + 0xef8) = &LAB_003182d0;
      *(long *)(param_1 + 0x1148) = param_1 + 0xef8;
      *(undefined8 *)(param_1 + 0xf00) = 0;
      *(bool *)(param_1 + 0xfc5) = *(int *)(param_1 + 0x1138) != 0;
      uVar3 = 0;
      if (*(int *)(param_1 + 0x1138) != 0) {
        uVar3 = *(undefined1 *)(param_1 + 0x1136);
      }
      *(undefined1 *)(param_1 + 0xfc6) = uVar3;
    }
    else {
      *(undefined1 **)(param_1 + 0x1158) = &LAB_00318320;
    }
    if (lVar4 == 0) {
      if (4 < uVar1) {
        FUN_00350fd0(uVar1);
      }
    }
    else {
      *(ulong *)(lVar4 + 0x8f8) = uVar1;
      FUN_003101c0(param_1,*(undefined4 *)(param_1 + 0x1140),1,lVar4 + 0x198);
    }
  }
  return uVar1;
}


