/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0026ac0c; name: FUN_0026ac0c
 */


void FUN_0026ac0c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar3 = FUN_0021d48c();
    }
    else {
      lVar3 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar4 + 0x10);
    lVar2 = *(long *)(uVar4 + 0x18);
    if ((*(byte *)(uVar4 + 8) & 1) == 0) {
      lVar2 = uVar4 + 9;
      uVar1 = (ulong)(*(byte *)(uVar4 + 8) >> 1);
    }
    FUN_0021d540(lVar3,lVar2,uVar1);
  }
  FUN_0026a0a0(param_1 + 0x10,param_2 + 0x10);
  return;
}


