/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167c404; name: FUN_0167c404
 */


void FUN_0167c404(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  undefined2 local_38;
  byte local_36;
  char local_18 [8];
  
  *(undefined1 *)(param_3[2] + 0xa8) = 0;
  lVar3 = param_3[2];
  bVar1 = *(byte *)(lVar3 + 0xa8);
  if (bVar1 < *(byte *)(lVar3 + 0xa6)) {
    *(byte *)(lVar3 + 0xa8) = bVar1 + 1;
    for (lVar3 = *(long *)(lVar3 + (ulong)bVar1 * 8); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + (ulong)bVar1 * 8)) {
      if ((*(char *)((long)param_3 + 0x22) == '\0') ||
         (uVar2 = FUN_0167c614(*(undefined8 *)(param_1 + 0x10),param_3[1],lVar3), (uVar2 & 1) == 0))
      {
        lStack_40 = param_3[3];
        local_58 = *param_3;
        lStack_50 = param_3[1];
        local_38 = (undefined2)param_3[4];
        local_36 = *(byte *)(local_58 + 0x13) ^ 1 | *(byte *)(param_3[2] + 0xa6) < 2;
        local_48 = lVar3;
        FUN_0167c508(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x300),local_18,&local_58);
        if (local_18[0] != '\0') {
          FUN_0167bf08(param_3[2],lVar3);
        }
      }
      lVar3 = param_3[2];
      bVar1 = *(byte *)(lVar3 + 0xa8);
      if (*(byte *)(lVar3 + 0xa6) <= bVar1) {
        return;
      }
      *(byte *)(lVar3 + 0xa8) = bVar1 + 1;
    }
  }
  return;
}


