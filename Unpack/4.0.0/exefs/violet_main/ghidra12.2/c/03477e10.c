/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03477e10; name: FUN_03477e10
 */


void FUN_03477e10(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  
  uVar2 = FUN_03477304();
  if (*(int *)(param_2 + 0x18) != 0) {
    plVar5 = *(long **)(param_2 + 0x10);
    bVar1 = true;
    do {
      lVar4 = *plVar5;
      lVar3 = FUN_03478100(param_1 + 0x20,lVar4,0,auStack_68);
      if (lVar4 != -1 && lVar3 != 0) {
        if ((((long *)(lVar3 - 0x18U) < *(long **)(param_1 + 0x40)) ||
            (*(long *)(lVar3 - 0x18U) != lVar4)) &&
           ((*(long **)(param_1 + 0x40) + (ulong)*(uint *)(param_1 + 0x48) * 3 + -3 <
             (long *)(lVar3 + 0x18U) || (*(long *)(lVar3 + 0x18U) != lVar4)))) {
          FUN_03411c9c(param_1 + 0x50,lVar4,auStack_64);
        }
      }
      bVar1 = (bool)(bVar1 & lVar3 != 0);
      plVar5 = plVar5 + 1;
    } while (plVar5 != (long *)(*(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_2 + 0x18) * 8));
    if ((uVar2 & 1) == 0 && !bVar1) {
      return;
    }
  }
  FUN_03477638(param_1);
  return;
}


