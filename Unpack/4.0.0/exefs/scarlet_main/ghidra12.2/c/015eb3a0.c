/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015eb3a0; name: FUN_015eb3a0
 */


ulong FUN_015eb3a0(long param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (((*(long *)(param_1 + 0x18) != 0) &&
      (bVar2 = **(byte **)(*(long *)(param_1 + 0x18) + 0x38), uVar3 = (ulong)bVar2, bVar2 != 0)) &&
     (uVar3 = (ulong)*(byte *)(param_1 + 0x24), *(byte *)(param_1 + 0x24) != 0)) {
    if (*(char *)(param_1 + 0x25) == '\0') {
      iVar1 = *(int *)(param_1 + 0x28);
      if (((iVar1 != 1) && (iVar1 != 4)) && (iVar1 != 5)) {
        uVar3 = FUN_0159c22c(param_1,param_2,0);
        return uVar3;
      }
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x25) = 1;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


