/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019f80c8; name: FUN_019f80c8
 */


ulong FUN_019f80c8(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *local_70;
  long local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uStack_50 = *(undefined8 *)(param_1 + 8);
  local_68 = 0;
  lStack_60 = 0;
  local_38 = 0;
  local_58 = 0;
  local_48 = 0x1fffffffffffffff;
  uStack_40 = 0;
  local_70 = &local_68;
  lVar1 = FUN_013fcac4(*param_2);
  lVar4 = *(long *)(lVar1 + 0x20);
  lVar3 = lVar4;
  if (*(long *)(lVar1 + 0x28) != 0) {
    lVar3 = lVar4 + *(long *)(lVar1 + 0x28) * 8;
  }
  if ((lVar4 != lVar3) && (FUN_019cbb0c(&local_70,lVar4), lVar4 + 8 != lVar3)) {
    FUN_019cbb0c(&local_70);
    for (lVar4 = lVar4 + 0x10; lVar4 != lVar3; lVar4 = lVar4 + 8) {
      FUN_019cbb0c(&local_70,lVar4);
    }
  }
  uVar2 = FUN_013fcabc(*param_2);
  lVar4 = *(long *)(param_1 + 0x270);
  lVar3 = *(long *)(param_1 + 0x278);
  if (lVar4 != lVar3) {
    if (uVar2 == *(byte *)(lVar4 + 8)) {
      FUN_019cbb0c(&local_70,lVar4 + 0x10);
    }
    if (lVar4 + 0x18 != lVar3) {
      if (uVar2 == *(byte *)(lVar4 + 0x20)) {
        FUN_019cbb0c(&local_70,lVar4 + 0x28);
      }
      for (lVar4 = lVar4 + 0x30; lVar4 != lVar3; lVar4 = lVar4 + 0x18) {
        if (uVar2 == *(byte *)(lVar4 + 8)) {
          FUN_019cbb0c(&local_70,lVar4 + 0x10);
        }
      }
    }
  }
  uVar2 = lStack_60 - local_68;
  FUN_019f8220(&local_68);
  return uVar2 >> 3 & 0xffffffff;
}


