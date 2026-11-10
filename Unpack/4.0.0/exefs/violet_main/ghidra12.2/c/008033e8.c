/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008033e8; name: FUN_008033e8
 */


void FUN_008033e8(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong local_38;
  
  uVar6 = *(uint *)(param_1 + 0xc0);
  local_38 = 0;
  FUN_007935cc(&local_38);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = 60000 / uVar6;
    }
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0xb8) + lVar5;
      if (((*(long *)(lVar1 + 0x10) != -1) && (*(int *)(lVar1 + 0x20) == 0xd)) &&
         (plVar3 = (long *)FUN_0079365c(),
         uVar4 = *(long *)(param_1 + 200) + *plVar3 * (long)(int)(uVar6 * uVar2),
         *(ulong *)(param_1 + 0xd0) < uVar4 && uVar4 <= local_38)) {
        FUN_008034d8(param_1,*(long *)(param_1 + 0xb8) + lVar5);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x80;
    } while (uVar6 < *(uint *)(param_1 + 0xc0));
  }
  *(ulong *)(param_1 + 0xd0) = local_38;
  plVar3 = (long *)FUN_0079365c();
  if ((ulong)(*(long *)(param_1 + 200) + *plVar3 * 60000) <= local_38) {
    *(ulong *)(param_1 + 200) = local_38;
  }
  return;
}


