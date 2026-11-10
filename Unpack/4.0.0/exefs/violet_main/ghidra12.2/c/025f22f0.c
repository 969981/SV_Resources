/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025f22f0; name: FUN_025f22f0
 */


undefined8 FUN_025f22f0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_24 [4];
  
  uVar4 = FUN_025f23b0(param_1,1);
  iVar2 = FUN_00cc4dc0(param_1,2);
  if ((DAT_04853f18 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04853f18);
    if (iVar3 != 0) {
      DAT_04854140 = '\x01';
      __cxa_guard_release(&DAT_04853f18);
    }
  }
  local_24[0] = iVar2 != 0;
  puVar1 = PTR_FUN_047e0098;
  if (DAT_04854140 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_025f243c(uVar4,puVar1,0,local_24);
  return 0;
}


