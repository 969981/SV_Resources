/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b3c28; name: FUN_008b3c28
 */


void FUN_008b3c28(long param_1,code *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  for (lVar3 = *(long *)(param_1 + 8); param_1 != lVar3; lVar3 = *(long *)(lVar3 + 8)) {
    if ((*(char *)(lVar3 + 0x98) != '\0') && (plVar1 = *(long **)(lVar3 + 0x90), plVar1[1] != -1)) {
      uVar2 = (**(code **)(*plVar1 + 0x40))();
      (*param_2)(plVar1 + 1,uVar2,param_3);
      *(undefined8 *)(*(long *)(lVar3 + 0x90) + 8) = 0xffffffffffffffff;
    }
  }
  return;
}


