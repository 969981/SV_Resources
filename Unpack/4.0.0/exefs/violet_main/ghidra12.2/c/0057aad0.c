/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0057aad0; name: FUN_0057aad0
 */


void FUN_0057aad0(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined *puVar6;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    uVar3 = FUN_0057d458(*(undefined8 *)(param_1 + 0x10));
    break;
  case 2:
    puVar6 = *(undefined **)(param_1 + 0x10);
    if ((puVar6 == PTR_DAT_047ce2d0) || (*(long *)(puVar6 + 0x10) == 0)) {
      uVar3 = 0;
      uVar4 = *(ulong *)(puVar6 + 8);
    }
    else {
      uVar3 = FUN_00577bfc();
      uVar3 = uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar4 = *(ulong *)(puVar6 + 8);
    }
    if ((uVar4 & 1) != 0) {
      bVar1 = *(byte *)((uVar4 & 0xfffffffffffffffe) + 8);
      if ((bVar1 & 1) == 0) {
        uVar5 = (uint)(bVar1 >> 1);
      }
      else {
        uVar5 = (uint)*(undefined8 *)((uVar4 & 0xfffffffffffffffe) + 0x10);
      }
      uVar3 = uVar5 + uVar3;
    }
    *(uint *)(puVar6 + 0x18) = uVar3;
    iVar2 = uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    goto LAB_0057abc4;
  case 3:
    uVar3 = FUN_0057e5c4(*(undefined8 *)(param_1 + 0x10));
    break;
  case 4:
    uVar3 = FUN_0057ee0c(*(undefined8 *)(param_1 + 0x10));
    break;
  default:
    iVar2 = 0;
    goto LAB_0057abc8;
  }
  iVar2 = uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
LAB_0057abc4:
  iVar2 = iVar2 + 1;
LAB_0057abc8:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x18) = iVar2;
    return;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar1 = *(byte *)(uVar4 + 8);
  if ((bVar1 & 1) == 0) {
    uVar3 = (uint)(bVar1 >> 1);
  }
  else {
    uVar3 = (uint)*(undefined8 *)(uVar4 + 0x10);
  }
  *(uint *)(param_1 + 0x18) = uVar3 + iVar2;
  return;
}


