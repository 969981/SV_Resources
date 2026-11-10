/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00500e54; name: FUN_00500e54
 */


long FUN_00500e54(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (lVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(lVar1 + 0x18) = 0;
    FUN_004fe9d4(lVar1,param_2);
  }
  else {
    if (*(long *)(lVar1 + 0x70) != 0) {
      FUN_00520d08(lVar1,0,0x30);
    }
    lVar1 = FUN_00520c00(lVar1,0x30);
    lVar2 = *param_1;
    *(undefined4 *)(lVar1 + 0x18) = 0;
    FUN_004fe9d4(lVar1,param_2);
    FUN_005016dc(lVar2,lVar1);
  }
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return lVar1;
}


