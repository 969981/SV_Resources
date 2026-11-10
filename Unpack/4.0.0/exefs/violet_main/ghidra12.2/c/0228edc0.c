/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0228edc0; name: FUN_0228edc0
 */


undefined8 FUN_0228edc0(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0228e700(param_1,1);
  if ((DAT_04842c78 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04842c78);
    if (iVar3 != 0) {
      DAT_04843a18 = '\x01';
      __cxa_guard_release(&DAT_04842c78);
    }
  }
  pcVar1 = FUN_0229437c;
  if (DAT_04843a18 == '\0') {
    pcVar1 = (code *)0x0;
  }
  uVar2 = FUN_0228ee68(uVar4,pcVar1,0);
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


