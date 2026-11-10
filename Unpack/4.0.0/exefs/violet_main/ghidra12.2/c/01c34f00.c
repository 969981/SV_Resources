/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c34f00; name: FUN_01c34f00
 */


undefined8 FUN_01c34f00(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_01c34fa0(param_1,1);
  if ((DAT_04811c20 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04811c20);
    if (iVar2 != 0) {
      DAT_04812358 = '\x01';
      __cxa_guard_release(&DAT_04811c20);
    }
  }
  puVar1 = PTR_LAB_047d5f08;
  if (DAT_04812358 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c3502c(uVar3,puVar1,0);
  return 0;
}


