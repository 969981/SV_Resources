/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0232810c; name: FUN_0232810c
 */


int FUN_0232810c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x200) + 0x60);
  iVar1 = (**(code **)(*plVar2 + 0xd0))
                    (plVar2,*(undefined8 *)(param_2 + 8),param_3,1,&LAB_01080c70,param_1,0,0,0);
  if (iVar1 != 0) {
    FUN_0173ba88(*(undefined8 *)(param_1 + 0x220),param_2,iVar1,param_3,0,param_4,0);
  }
  return iVar1;
}


