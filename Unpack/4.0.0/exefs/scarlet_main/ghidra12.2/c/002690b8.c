/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002690b8; name: FUN_002690b8
 */


void FUN_002690b8(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    if ((int)*(uint *)(param_1 + 0x10) < 0) {
      iVar2 = 0xb;
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      iVar2 = (((uint)LZCOUNT(*(uint *)(param_1 + 0x10) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar4 = *(ulong *)(param_1 + 8);
    }
    break;
  case 2:
    iVar2 = 2;
    uVar4 = *(ulong *)(param_1 + 8);
    break;
  case 3:
    iVar2 = (int)((LZCOUNT(*(ulong *)(param_1 + 0x10) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
    uVar4 = *(ulong *)(param_1 + 8);
    break;
  case 4:
    iVar2 = 5;
    uVar4 = *(ulong *)(param_1 + 8);
    break;
  case 5:
    iVar2 = 9;
    uVar4 = *(ulong *)(param_1 + 8);
    break;
  case 6:
    uVar3 = FUN_00514094(*(undefined8 *)(param_1 + 0x10));
    goto LAB_002691e8;
  case 7:
  case 8:
  case 0xb:
    bVar1 = **(byte **)(param_1 + 0x10);
    uVar3 = (uint)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar3 = (uint)*(undefined8 *)(*(byte **)(param_1 + 0x10) + 8);
    }
    iVar2 = uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    uVar4 = *(ulong *)(param_1 + 8);
    break;
  case 9:
    uVar3 = FUN_00269da0(*(undefined8 *)(param_1 + 0x10));
    goto LAB_002691e8;
  case 10:
    uVar3 = FUN_0026aac8(*(undefined8 *)(param_1 + 0x10));
LAB_002691e8:
    iVar2 = uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    uVar4 = *(ulong *)(param_1 + 8);
    break;
  default:
    iVar2 = 0;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((uVar4 & 1) == 0) {
    *(int *)(param_1 + 0x18) = iVar2;
    return;
  }
  bVar1 = *(byte *)((uVar4 & 0xfffffffffffffffe) + 8);
  if ((bVar1 & 1) == 0) {
    uVar3 = (uint)(bVar1 >> 1);
  }
  else {
    uVar3 = (uint)*(undefined8 *)((uVar4 & 0xfffffffffffffffe) + 0x10);
  }
  *(uint *)(param_1 + 0x18) = uVar3 + iVar2;
  return;
}


