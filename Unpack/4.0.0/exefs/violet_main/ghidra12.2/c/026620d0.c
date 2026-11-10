/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026620d0; name: FUN_026620d0
 */


undefined8 FUN_026620d0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_018d2000(param_1,1);
  if ((DAT_048555c8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048555c8);
    if (iVar2 != 0) {
      DAT_04855888 = '\x01';
      __cxa_guard_release(&DAT_048555c8);
    }
  }
  puVar1 = PTR_FUN_047e04b0;
  if (DAT_04855888 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  iVar2 = FUN_02662178(uVar3,puVar1,0);
  FUN_00c5d960(param_1,(long)iVar2);
  return 1;
}


