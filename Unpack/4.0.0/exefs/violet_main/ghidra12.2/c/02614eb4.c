/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02614eb4; name: FUN_02614eb4
 */


int FUN_02614eb4(int *param_1,char *param_2)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(ushort *)((long)param_1 - (long)*param_1) < 5) {
    lVar4 = 0;
  }
  else {
    uVar3 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2];
    lVar4 = 0;
    if (uVar3 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar3);
      lVar4 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  iVar2 = strcmp((char *)(lVar4 + 4),param_2);
  return iVar2;
}


