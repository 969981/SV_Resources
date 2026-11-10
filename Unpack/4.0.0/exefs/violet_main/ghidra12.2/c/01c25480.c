/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c25480; name: FUN_01c25480
 */


undefined8 FUN_01c25480(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_24;
  
  uVar5 = FUN_01c18fa0(param_1,1);
  uVar2 = FUN_00c92df0(param_1,2,0);
  if ((DAT_04811880 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_04811880);
    if (iVar4 != 0) {
      DAT_048121b8 = '\x01';
      __cxa_guard_release(&DAT_04811880);
    }
  }
  puVar1 = PTR_LAB_047d5cb8;
  if (DAT_048121b8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_24 = uVar2;
  uVar3 = FUN_01c25550(uVar5,puVar1,0,&local_24);
  FUN_00c419e0(param_1,uVar3 & 1);
  return 1;
}


