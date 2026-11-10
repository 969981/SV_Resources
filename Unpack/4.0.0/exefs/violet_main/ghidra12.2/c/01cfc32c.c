/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cfc32c; name: FUN_01cfc32c
 */


void FUN_01cfc32c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_170 [288];
  undefined1 auStack_50 [16];
  
  puVar1 = PTR_FUN_047d70a0;
  if (DAT_0482cc90 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01d015f4(param_3);
  FUN_01cfc570(auStack_170,param_4);
  FUN_01d01794(auStack_50,param_2,puVar1,0,uVar2,auStack_170);
  FUN_01cfc740(param_1,auStack_50);
  FUN_01cfc798(auStack_50);
  FUN_01cfc8a8(auStack_170);
  return;
}


