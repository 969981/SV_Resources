/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0044e0f0; name: FUN_0044e0f0
 */


undefined8 FUN_0044e0f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((DAT_047f19a0 & 1) != 0) {
    return 1;
  }
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar2 = param_1[1];
  }
  FUN_0044e170();
  FUN_004808e0();
  uVar1 = FUN_003f4590(uVar1,uVar2,0x30);
  DAT_047f19a0 = 1;
  return uVar1;
}


