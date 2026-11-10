/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c25c10; name: FUN_01c25c10
 */


undefined8 FUN_01c25c10(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  uVar2 = FUN_01c18fa0(param_1,1);
  if ((DAT_048118a8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048118a8);
    if (iVar1 != 0) {
      DAT_04812568 = 1;
      __cxa_guard_release(&DAT_048118a8);
    }
  }
  FUN_01c25cac(auStack_38,uVar2);
  FUN_01c1de10(param_1,auStack_38);
  FUN_01c1dee8(auStack_38);
  return 1;
}


