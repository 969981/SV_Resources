/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00520770; name: FUN_00520770
 */


void FUN_00520770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = tpidr_el0;
  if (*(long *)(lVar2 + 0x10) == *(long *)(param_1 + 0x20)) {
    lVar3 = *(long *)(lVar2 + 0x18);
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 8) != lVar2 + 0x10)) {
      lVar2 = tpidr_el0;
      if (*(long *)(lVar2 + 0x10) == *(long *)(param_1 + 0x20)) {
        lVar3 = *(long *)(lVar2 + 0x18);
      }
      else {
        lVar3 = *(long *)(param_1 + 8);
        if ((lVar3 == 0) || (*(long *)(lVar3 + 8) != lVar2 + 0x10)) {
          lVar3 = FUN_005209d8(param_1,lVar2 + 0x10);
        }
      }
      puVar1 = *(undefined8 **)(lVar3 + 0x38);
      if (puVar1 == *(undefined8 **)(lVar3 + 0x40)) {
        FUN_00520494(lVar3,param_2);
        return;
      }
      *puVar1 = param_2;
      puVar1[1] = param_3;
      *(undefined8 **)(lVar3 + 0x38) = puVar1 + 2;
      return;
    }
  }
  puVar1 = *(undefined8 **)(lVar3 + 0x38);
  if (puVar1 == *(undefined8 **)(lVar3 + 0x40)) {
    FUN_00520494(lVar3,param_2);
    return;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 **)(lVar3 + 0x38) = puVar1 + 2;
  return;
}


