/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029500d0; name: FUN_029500d0
 */


undefined8 FUN_029500d0(long param_1,int param_2,short param_3)

{
  byte bVar1;
  short sVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  int local_64 [9];
  undefined4 local_28;
  char local_24;
  
  local_24 = FUN_0293d770();
  if (local_24 != '\n') {
    local_28 = 8;
    bVar1 = FUN_02943d30(param_1,&local_28,local_64);
    if (bVar1 != 0) {
      uVar4 = (ulong)bVar1;
      piVar5 = local_64;
      do {
        if (*piVar5 != param_2) {
          plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
          sVar2 = (**(code **)(*plVar3 + 0xf8))();
          if (sVar2 == param_3) {
            return 1;
          }
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  return 0;
}


