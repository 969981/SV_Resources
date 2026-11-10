/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003688f0; name: FUN_003688f0
 */


void FUN_003688f0(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = *(long *)(param_1 + 0x10) + -1;
    *(long *)(param_1 + 0x10) = lVar2;
    plVar1 = (long *)(*(long *)(param_1 + 8) + lVar2 * 0x20);
    puVar3 = (ulong *)(plVar1 + 1);
    if (*plVar1 == 0) {
      uVar4 = (ulong)(byte)*puVar3;
    }
    else {
      uVar4 = *puVar3;
    }
    *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - uVar4;
  }
  return;
}


