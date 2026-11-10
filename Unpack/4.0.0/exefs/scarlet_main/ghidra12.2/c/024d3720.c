/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d3720; name: FUN_024d3720
 */


undefined8 FUN_024d3720(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auVar2 [12];
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_024d2bf0(param_1,1);
  if ((DAT_0484d0d8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0484d0d8);
    if (iVar3 != 0) {
      DAT_0484e8b0 = '\x01';
      __cxa_guard_release(&DAT_0484d0d8);
    }
  }
  puVar1 = &LAB_02b9b738;
  if (DAT_0484e8b0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  auVar2 = FUN_024d37fc(uVar4,puVar1,0);
  FUN_00c46da0((double)auVar2._0_4_,param_1);
  FUN_00c46da0((double)auVar2._4_4_,param_1);
  FUN_00c46da0((double)auVar2._8_4_,param_1);
  return 3;
}


