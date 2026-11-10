/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00801318; name: FUN_00801318
 */


void FUN_00801318(ushort *param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = *param_1;
  uVar3 = (ulong)uVar2;
  if (iVar1 < (int)(uint)uVar2 && uVar2 != 0) {
    plVar4 = *(long **)(param_1 + 0x14);
    do {
      if (*plVar4 == param_2) {
        return;
      }
      if (*plVar4 == -1) {
        *plVar4 = param_2;
        *(int *)(param_1 + 0x10) = iVar1 + 1;
        return;
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}


