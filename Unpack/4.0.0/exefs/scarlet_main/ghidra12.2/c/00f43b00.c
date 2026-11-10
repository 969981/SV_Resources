/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f43b00; name: FUN_00f43b00
 */


uint FUN_00f43b00(long param_1,undefined2 *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  void *local_150 [4];
  byte local_130;
  undefined2 local_120;
  undefined1 auStack_110 [48];
  byte local_e0;
  undefined1 auStack_df [143];
  
  if ((((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_2 + 4) == 0)) ||
      (lVar5 = *(long *)(*(long *)(param_2 + 4) + 0x10), lVar5 == 0)) ||
     ((*(long *)(param_2 + 0x1c) == 0 ||
      (lVar4 = *(long *)(*(long *)(param_2 + 0x1c) + 0x10), lVar4 == 0)))) {
    uVar3 = 1;
  }
  else {
    local_120 = 0x300;
    FUN_01667884(auStack_110);
    memset(&local_e0,0,0x81);
    local_120 = CONCAT11(local_120._1_1_,*(undefined1 *)(param_2 + 0x40));
    uVar2 = FUN_01b2b560();
    local_120 = CONCAT11(uVar2,(undefined1)local_120);
    FUN_015f8734(*(undefined8 *)(lVar5 + 0x98),*(undefined8 *)(lVar5 + 0xa8),
                 *(undefined8 *)(lVar5 + 0xb8),local_150);
    memcpy(auStack_110,local_150,0x30);
    FUN_018b7350(local_150,lVar4 + -0x28,*(undefined8 *)(param_1 + 0x38));
    uVar3 = 1;
    if ((ulong)local_130 < 0x81) {
      memcpy(auStack_df,local_150[0],(ulong)local_130);
      local_e0 = local_130;
      uVar1 = *param_2;
      *(undefined1 *)(param_1 + 0x58) = 1;
      *(undefined2 *)(param_1 + 0x5a) = uVar1;
      memcpy((void *)(param_1 + 0x5c),&local_120,0xd0);
      uVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x68))
                        (*(long **)(param_1 + 0x48),(undefined1 *)(param_1 + 0x58),0xd4,param_3);
    }
    FUN_01ea57bc(local_150);
  }
  return uVar3 & 1;
}


