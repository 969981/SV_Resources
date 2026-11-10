/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02671a60; name: FUN_02671a60
 */


undefined8 FUN_02671a60(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_24 [4];
  
  uVar4 = FUN_02671b20(param_1,1);
  iVar2 = FUN_00cc4dc0(param_1,2);
  if ((DAT_048560e0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_048560e0);
    if (iVar3 != 0) {
      DAT_04857e58 = '\x01';
      __cxa_guard_release(&DAT_048560e0);
    }
  }
  local_24[0] = iVar2 != 0;
  puVar1 = PTR_FUN_047e0660;
  if (DAT_04857e58 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_02671bac(uVar4,puVar1,0,local_24);
  return 0;
}


