/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0228e820; name: FUN_0228e820
 */


undefined8 FUN_0228e820(undefined8 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0228e700(param_1,1);
  if ((DAT_04842c48 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04842c48);
    if (iVar3 != 0) {
      DAT_048439e8 = '\x01';
      __cxa_guard_release(&DAT_04842c48);
    }
  }
  puVar1 = &LAB_02293864;
  if (DAT_048439e8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  uVar2 = FUN_0228e78c(uVar4,puVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


