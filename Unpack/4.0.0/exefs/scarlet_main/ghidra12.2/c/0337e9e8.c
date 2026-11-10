/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0337e9e8; name: FUN_0337e9e8
 */


void FUN_0337e9e8(long param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_38;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar4 = uVar5;
  if ((int)uVar5 <= param_2 + 1) {
    uVar4 = param_2 + 1;
  }
  local_38 = param_3;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < (int)uVar4) {
    FUN_031d93e4(param_1 + 8,PTR_PTR_047d1a50,(long)(int)uVar4);
    uVar5 = *(uint *)(param_1 + 0x10);
  }
  if ((int)uVar5 < (int)uVar4) {
    *(uint *)(param_1 + 0x10) = uVar4;
    memset((void *)(*(long *)(param_1 + 8) + (long)(int)uVar5 * 8),0,(ulong)(uVar4 + ~uVar5) * 8 + 8
          );
  }
  else if ((int)uVar4 < (int)uVar5) {
    *(uint *)(param_1 + 0x10) = uVar4;
  }
  *(undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 8) = param_3;
  plVar3 = (long *)(param_1 + 0xd8);
  uVar4 = FUN_03335048(plVar3,&local_38);
  if (*(uint *)(param_1 + 0xe0) == uVar4) {
    iVar2 = uVar4 + 1;
    if ((int)(*(uint *)(param_1 + 0xe4) & 0x7fffffff) <= (int)uVar4) {
      FUN_03335164(plVar3,PTR_PTR_047d1a50,(long)iVar2);
      uVar4 = *(uint *)(param_1 + 0xe0);
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0xd8) + (long)(int)uVar4 * 0x10);
    *puVar1 = local_38;
    *(int *)(puVar1 + 1) = param_2;
    *(int *)(param_1 + 0xe0) = iVar2;
  }
  else {
    *(int *)(*plVar3 + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8) = param_2;
  }
  return;
}


