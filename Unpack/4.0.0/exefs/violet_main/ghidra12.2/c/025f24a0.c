/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025f24a0; name: FUN_025f24a0
 */


undefined8 FUN_025f24a0(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_025f23b0(param_1,1);
  if ((DAT_04853f40 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04853f40);
    if (iVar3 != 0) {
      DAT_04854148 = '\x01';
      __cxa_guard_release(&DAT_04853f40);
    }
  }
  puVar1 = PTR_FUN_047e00a0;
  if (DAT_04854148 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_025f2548(uVar4,puVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


