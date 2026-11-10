/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024922f4; name: FUN_024922f4
 */


void FUN_024922f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  for (plVar1 = *(long **)(param_1 + 0xd0); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar4 = *plVar1;
    for (lVar5 = *(long *)(lVar4 + 0x70); lVar5 != lVar4 + 0x68; lVar5 = *(long *)(lVar5 + 8)) {
      if ((*(char *)param_4[1] == '\0') || (*(long *)(*(long *)(lVar5 + 0x10) + 0x30) == *param_4))
      {
        plVar3 = (long *)(*(long *)(*(long *)(lVar5 + 0x10) + 0x100) + 0x30);
        (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3);
      }
    }
  }
  return;
}


