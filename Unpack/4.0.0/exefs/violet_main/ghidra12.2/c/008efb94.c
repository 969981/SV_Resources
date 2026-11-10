/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008efb94; name: FUN_008efb94
 */


void FUN_008efb94(long param_1,undefined8 param_2)

{
  byte bVar1;
  char *pcVar2;
  ulong uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x4d);
  if ((ulong)bVar1 != 0) {
    uVar3 = 0;
    do {
      *(ulong *)(*(long *)(param_1 + 0x28) + uVar3 * 8) = *(long *)(param_1 + 0x20) + uVar3 * 0x48;
      pcVar2 = *(char **)(*(long *)(param_1 + 0x28) + uVar3 * 8);
      if (*pcVar2 != '\0') {
        FUN_008f08f0(pcVar2,param_2);
        FUN_008f080c(pcVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != bVar1);
  }
  return;
}


