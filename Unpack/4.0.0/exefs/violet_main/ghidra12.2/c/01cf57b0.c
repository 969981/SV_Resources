/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cf57b0; name: FUN_01cf57b0
 */


undefined8 FUN_01cf57b0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_01cf5850(param_1,1);
  if ((DAT_0481be10 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0481be10);
    if (iVar2 != 0) {
      DAT_0482c980 = '\x01';
      __cxa_guard_release(&DAT_0481be10);
    }
  }
  puVar1 = PTR_LAB_047d6eb8;
  if (DAT_0482c980 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01cf58dc(uVar3,puVar1,0);
  return 0;
}


