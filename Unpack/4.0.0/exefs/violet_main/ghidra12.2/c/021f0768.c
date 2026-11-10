/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f0768; name: FUN_021f0768
 */


void FUN_021f0768(long param_1)

{
  char cVar1;
  uint *puVar2;
  ulong uVar3;
  char *pcVar4;
  
  puVar2 = (uint *)FUN_00f739f4(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x2a));
  if ((puVar2 != (uint *)0x0) && (uVar3 = (ulong)*puVar2, *puVar2 != 0)) {
    pcVar4 = (char *)((long)puVar2 + 6);
    do {
      cVar1 = FUN_021f0c8c(*pcVar4);
      if (cVar1 != '\0') {
        if ((int)(uint)*(ushort *)(param_1 + 0x2e) < (int)*pcVar4) {
          return;
        }
        FUN_021f0cc0(param_1,*(undefined2 *)(pcVar4 + -2));
      }
      uVar3 = uVar3 - 1;
      pcVar4 = pcVar4 + 4;
    } while (uVar3 != 0);
  }
  return;
}


