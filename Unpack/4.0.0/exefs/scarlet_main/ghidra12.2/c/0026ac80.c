/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026ac80; name: FUN_0026ac80
 */


void FUN_0026ac80(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_0026ba58(param_1 + 0x10);
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar3 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar3 + 8) & 1) != 0) {
      **(undefined1 **)(uVar3 + 0x18) = 0;
      *(undefined8 *)(uVar3 + 0x10) = 0;
      uVar3 = *(ulong *)(param_2 + 8);
      goto joined_r0x0026acc4;
    }
    *(undefined2 *)(uVar3 + 8) = 0;
  }
  uVar3 = *(ulong *)(param_2 + 8);
joined_r0x0026acc4:
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar3 & 0xfffffffffffffffe;
    uVar4 = *(ulong *)(param_1 + 8);
    if ((uVar4 & 1) == 0) {
      lVar2 = FUN_0021d48c();
    }
    else {
      lVar2 = (uVar4 & 0xfffffffffffffffe) + 8;
    }
    uVar4 = *(ulong *)(uVar3 + 0x10);
    lVar1 = *(long *)(uVar3 + 0x18);
    if ((*(byte *)(uVar3 + 8) & 1) == 0) {
      lVar1 = uVar3 + 9;
      uVar4 = (ulong)(*(byte *)(uVar3 + 8) >> 1);
    }
    FUN_0021d540(lVar2,lVar1,uVar4);
  }
  FUN_0026a0a0(param_1 + 0x10,param_2 + 0x10);
  return;
}


