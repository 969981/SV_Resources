/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ece60; name: FUN_007ece60
 */


void FUN_007ece60(long param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
      iVar1 = *(int *)(param_1 + 0x24);
      plVar4 = (long *)(*(long *)(param_1 + 0x18) - (long)iVar1);
      do {
        uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
        if (((uVar3 >> 0x10 & 0xff) == 0) || (cVar2 = FUN_007ec4f0(plVar4), cVar2 != -3)) {
          (**(code **)(*plVar4 + 0x50))(plVar4);
        }
        plVar4 = (long *)(*(long *)((long)plVar4 + (long)*(int *)(param_1 + 0x24) + 8) -
                         (long)*(int *)(param_1 + 0x24));
      } while (plVar4 != (long *)((param_1 + 0x10) - (long)iVar1));
    }
  }
  return;
}


