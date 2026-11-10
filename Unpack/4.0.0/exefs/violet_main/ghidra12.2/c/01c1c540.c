/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c1c540; name: FUN_01c1c540
 */


undefined8 FUN_01c1c540(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01c1c5f0(param_1,1);
  if ((DAT_04811648 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04811648);
    if (iVar3 != 0) {
      DAT_04812170 = '\x01';
      __cxa_guard_release(&DAT_04811648);
    }
  }
  puVar1 = PTR_LAB_047d5c48;
  if (DAT_04812170 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01c1c67c(uVar4,puVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


