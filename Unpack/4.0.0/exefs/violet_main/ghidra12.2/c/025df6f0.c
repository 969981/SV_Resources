/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025df6f0; name: FUN_025df6f0
 */


undefined8 FUN_025df6f0(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_025df7a0(param_1,1);
  if ((DAT_048538c0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_048538c0);
    if (iVar3 != 0) {
      DAT_04853928 = '\x01';
      __cxa_guard_release(&DAT_048538c0);
    }
  }
  puVar1 = PTR_FUN_047e0020;
  if (DAT_04853928 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_025df82c(uVar4,puVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


