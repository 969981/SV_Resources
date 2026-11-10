/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017dda10; name: FUN_017dda10
 */


long FUN_017dda10(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_017dda64();
  uVar2 = FUN_017ddac0(param_1);
  FUN_017de3b0(&DAT_0483ada8,uVar2);
  lVar1 = 0;
  if (DAT_0483ada8 != 0) {
    lVar1 = DAT_0483ada8 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_0483ada8;
}


