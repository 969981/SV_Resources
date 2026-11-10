/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f439b4; name: FUN_00f439b4
 */


uint FUN_00f439b4(long param_1,undefined2 *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *local_150 [4];
  byte local_130;
  undefined1 local_120 [16];
  undefined1 auStack_110 [48];
  byte local_e0;
  undefined1 auStack_df [143];
  
  if ((((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_2 + 4) == 0)) ||
      (lVar4 = *(long *)(*(long *)(param_2 + 4) + 0x10), lVar4 == 0)) ||
     ((*(long *)(param_2 + 0x1c) == 0 ||
      (lVar3 = *(long *)(*(long *)(param_2 + 0x1c) + 0x10), lVar3 == 0)))) {
    uVar2 = 1;
  }
  else {
    local_120[0] = 0;
    FUN_01667884(auStack_110);
    memset(&local_e0,0,0x81);
    local_120[0] = *(undefined1 *)(param_2 + 0x40);
    FUN_015f8734(*(undefined8 *)(lVar4 + 0x98),*(undefined8 *)(lVar4 + 0xa8),
                 *(undefined8 *)(lVar4 + 0xb8),local_150);
    memcpy(auStack_110,local_150,0x30);
    FUN_01a47a74(local_150,lVar3 + -0x28,*(undefined8 *)(param_1 + 0x38));
    if ((ulong)local_130 < 0x81) {
      memcpy(auStack_df,local_150[0],(ulong)local_130);
      local_e0 = local_130;
      uVar1 = *param_2;
      *(undefined1 *)(param_1 + 0x58) = 3;
      *(undefined2 *)(param_1 + 0x5a) = uVar1;
      memcpy((void *)(param_1 + 0x5c),local_120,0xd0);
      uVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x68))
                        (*(long **)(param_1 + 0x48),(undefined1 *)(param_1 + 0x58),0xd4,param_3);
    }
    else {
      uVar2 = 1;
    }
    FUN_01ea57bc(local_150);
  }
  return uVar2 & 1;
}


