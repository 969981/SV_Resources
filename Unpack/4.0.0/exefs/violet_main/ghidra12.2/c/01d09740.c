/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d09740; name: FUN_01d09740
 */


undefined8 FUN_01d09740(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  uVar2 = FUN_01cf8240(param_1,1);
  if ((DAT_0481ccf8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0481ccf8);
    if (iVar1 != 0) {
      DAT_0482cc28 = PTR_FUN_047d7220;
      __cxa_guard_release(&DAT_0481ccf8);
    }
  }
  FUN_01d097e0(auStack_38,uVar2);
  FUN_01c2e550(param_1,auStack_38);
  FUN_01c0b580(auStack_38);
  return 1;
}


