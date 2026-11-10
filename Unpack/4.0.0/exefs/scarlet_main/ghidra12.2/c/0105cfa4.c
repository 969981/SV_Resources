/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0105cfa4; name: FUN_0105cfa4
 */


undefined4 FUN_0105cfa4(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *__src;
  undefined8 uVar5;
  uint local_3c;
  void *local_38;
  
  FUN_010b00d0(*(undefined8 *)(param_1 + 0x58));
  FUN_010af048();
  local_38 = (void *)0x0;
  local_3c = 0;
  piVar4 = (int *)FUN_019a8688(*param_2);
  iVar3 = *piVar4;
  __src = (void *)FUN_01843160(*param_2);
  uVar2 = FUN_019f4bcc(*param_2);
  uVar1 = iVar3 - 0x13;
  if (uVar1 < 0x3b) {
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x400000000051055U) == 0) {
      if ((ulong)uVar1 == 10) {
        uVar5 = FUN_010b00b8(*(undefined8 *)(param_1 + 0x58));
        FUN_0105ce10(uVar5,__src);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x2d4) = 0;
      *(undefined4 *)(param_1 + 0x2d0) = 0;
      memcpy((void *)(param_1 + 0xa0),__src,0x238);
    }
  }
  FUN_019f4ae0(*(undefined8 *)(param_1 + 0x78),&local_38,&local_3c,param_1 + 0x2d8,iVar3,0);
  if ((local_3c == uVar2) && (iVar3 = memcmp(local_38,__src,(ulong)uVar2), iVar3 == 0)) {
    return 0;
  }
  return 1;
}


