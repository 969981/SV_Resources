/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ce6fc; name: FUN_001ce6fc
 */


undefined8 * FUN_001ce6fc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001ec338(1,0x1e8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0xbab1e;
    iVar1 = FUN_001c9704(puVar2 + 0x10);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_001c8880(puVar2 + 0x17,param_1,&LAB_001d1500,&LAB_001d1510,&LAB_001d1524),
        iVar1 == 0)) && (iVar1 = FUN_001c6d7c(puVar2 + 0x1f,param_2), iVar1 == 0)) {
      FUN_001cb57c(puVar2 + 4,&DAT_001ce808);
      FUN_001cb57c(puVar2 + 8,&DAT_001ce808);
      puVar2[0x2d] = 5;
      puVar2[0x1d] = 2;
      puVar2[0x2a] = 0xffffffffffffffff;
    }
    else {
      FUN_001c8b94(puVar2 + 0x17);
      FUN_001c8b94(puVar2 + 0x10);
      FUN_001c6df8(puVar2 + 0x1f);
      FUN_001cb68c(puVar2 + 4,0);
      FUN_001cb68c(puVar2 + 8,0);
      FUN_001ec308(puVar2);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}


