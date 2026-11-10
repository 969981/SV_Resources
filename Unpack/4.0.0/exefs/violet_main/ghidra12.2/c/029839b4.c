/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029839b4; name: FUN_029839b4
 */


undefined8 FUN_029839b4(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = FUN_0124a808();
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_014603fc(param_1), (uVar2 & 1) == 0)) {
    plVar3 = (long *)FUN_014813f4(param_1,param_2);
    uVar2 = FUN_0294393c();
    if (((uVar2 & 1) == 0) && (uVar2 = (**(code **)(*plVar3 + 0x210))(plVar3), (uVar2 & 1) != 0)) {
      FUN_0123de68(param_1);
      FUN_0123de70();
      cVar1 = FUN_01245aa0();
      if (cVar1 != '\0') {
        FUN_0123de68(param_1);
        FUN_0123de70();
        cVar1 = FUN_01245aa0();
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}


