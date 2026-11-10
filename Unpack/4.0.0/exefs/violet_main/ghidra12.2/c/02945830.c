/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02945830; name: FUN_02945830
 */


uint FUN_02945830(long param_1)

{
  byte bVar1;
  short sVar2;
  long *plVar3;
  uint uVar4;
  
  plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  bVar1 = (**(code **)(*plVar3 + 0x708))();
  if (bVar1 != 0) {
    uVar4 = 0;
    do {
      sVar2 = (**(code **)(*plVar3 + 0x690))(plVar3,uVar4);
      if (sVar2 == 0) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (bVar1 != uVar4);
  }
  return 4;
}


