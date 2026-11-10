/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ecc70; name: FUN_007ecc70
 */


void FUN_007ecc70(long param_1)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
    iVar1 = *(int *)(param_1 + 0x24);
    plVar3 = (long *)(*(long *)(param_1 + 0x18) - (long)iVar1);
    do {
      cVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
      if (cVar2 == ',') {
        FUN_007ec4f8(plVar3,0xfd);
      }
      else {
        (**(code **)(*plVar3 + 0x48))(plVar3);
      }
      plVar3 = (long *)(*(long *)((long)plVar3 + (long)*(int *)(param_1 + 0x24) + 8) -
                       (long)*(int *)(param_1 + 0x24));
    } while (plVar3 != (long *)((param_1 + 0x10) - (long)iVar1));
  }
  return;
}


