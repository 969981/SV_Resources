/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01be7040; name: FUN_01be7040
 */


undefined8 FUN_01be7040(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_019093d0(param_1,1);
  if ((DAT_0480f038 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0480f038);
    if (iVar2 != 0) {
      DAT_0480f1b8 = '\x01';
      __cxa_guard_release(&DAT_0480f038);
    }
  }
  puVar1 = PTR_FUN_047d56b0;
  if (DAT_0480f1b8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01be70d8(uVar3,puVar1,0);
  return 0;
}


