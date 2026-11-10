/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00452820; name: FUN_00452820
 */


undefined8 FUN_00452820(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = param_2[0x16];
  uVar3 = (ulong)uVar2;
  puVar1 = param_2 + 6;
  *(undefined1 *)((long)puVar1 + uVar3) = 0x80;
  lVar4 = uVar3 + 1;
  if (0x37 < uVar2) {
    memset((void *)((long)puVar1 + lVar4),0,0x3f - uVar3);
    FUN_00451e00(param_2,puVar1,1);
    lVar4 = 0;
  }
  memset((void *)((long)puVar1 + lVar4),0,0x38 - lVar4);
  param_2[0x14] = param_2[4];
  param_2[0x15] = param_2[5];
  FUN_00451e00(param_2,puVar1,1);
  param_2[0x16] = 0;
  FUN_00453300(puVar1,0x40);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return 1;
}


