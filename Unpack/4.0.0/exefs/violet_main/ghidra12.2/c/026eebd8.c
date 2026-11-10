/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026eebd8; name: FUN_026eebd8
 */


void FUN_026eebd8(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *plStack_28;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    local_40 = *(undefined8 *)(lVar2 + 0x1d0);
    uStack_38 = *(undefined8 *)(lVar2 + 0x1d8);
    lVar3 = *param_1;
    local_30 = *(undefined8 *)(lVar2 + 0x1e0);
    plVar1 = *(long **)(lVar2 + 0x1e8);
    plStack_28 = plVar1;
    if (plVar1 == (long *)0x0) {
      FUN_026eec60(lVar3 + 0x350,&local_40);
    }
    else {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      FUN_026eec60(lVar3 + 0x350,&local_40);
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  return;
}


