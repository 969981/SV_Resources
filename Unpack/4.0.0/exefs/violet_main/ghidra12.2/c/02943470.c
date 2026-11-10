/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02943470; name: FUN_02943470
 */


void FUN_02943470(long param_1,int param_2)

{
  short sVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x20);
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0xc);
  }
  if (iVar3 == param_2) {
    plVar2 = (long *)FUN_01079790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
    sVar1 = (**(code **)(*plVar2 + 0x2a8))();
    *(uint *)(*(long *)(param_1 + 0x48) + 0x48) = (uint)(sVar1 != 0);
  }
  return;
}


