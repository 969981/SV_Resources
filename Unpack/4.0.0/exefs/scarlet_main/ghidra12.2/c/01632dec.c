/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01632dec; name: FUN_01632dec
 */


void FUN_01632dec(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  uint local_38;
  undefined1 local_34;
  
  if ((char)param_3[4] != '\0') {
    uVar2 = 0;
    do {
      lVar3 = *(long *)(*param_3 + uVar2 * 8);
      uVar1 = FUN_0163570c(*(undefined8 *)(param_1 + 0x38),*(undefined2 *)param_3[2],param_3[3]);
      local_50 = CONCAT44(local_50._4_4_,uVar1);
      local_58 = lVar3;
      FUN_016333f0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1780),auStack_60,&local_58);
      local_48 = *(undefined8 *)(*param_3 + uVar2 * 8);
      local_58 = param_3[2];
      local_50 = param_3[3];
      local_40 = CONCAT44(local_40._4_4_,(uint)*(ushort *)(*param_3 + uVar2 * 2 + 0x30));
      FUN_0163314c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x560),auStack_60,&local_58);
      local_58 = param_3[1];
      local_50 = param_3[2];
      local_48 = param_3[3];
      local_40 = *(undefined8 *)(*param_3 + uVar2 * 8);
      local_38 = (uint)*(ushort *)(*param_3 + uVar2 * 2 + 0x30);
      local_34 = 0;
      FUN_01633028(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1a00),auStack_60,&local_58);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_3 + 4));
  }
  local_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = param_3[3];
  FUN_01632efc(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1a20),auStack_60,&local_58);
  return;
}


