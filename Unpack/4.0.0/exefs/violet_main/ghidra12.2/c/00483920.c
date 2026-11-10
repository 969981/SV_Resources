/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00483920; name: FUN_00483920
 */


int FUN_00483920(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x48);
  lVar4 = *(long *)(param_2 + 0x48);
  if (((*(long *)(lVar3 + 0x18) == 0) || (*(int *)(lVar3 + 8) != 0)) &&
     (iVar2 = FUN_0048b9c0(lVar3,0), iVar2 < 0)) {
    iVar2 = -2;
  }
  else {
    if (((*(long *)(lVar4 + 0x18) == 0) || (*(int *)(lVar4 + 8) != 0)) &&
       (iVar2 = FUN_0048b9c0(lVar4,0), iVar2 < 0)) {
      return -2;
    }
    iVar1 = *(int *)(lVar3 + 0x20);
    iVar2 = iVar1 - *(int *)(lVar4 + 0x20);
    if ((iVar1 != 0) && (iVar2 == 0)) {
      iVar2 = memcmp(*(void **)(lVar3 + 0x18),*(void **)(lVar4 + 0x18),(long)iVar1);
      return iVar2;
    }
  }
  return iVar2;
}


