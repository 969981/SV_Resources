/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d8b64; name: FUN_001d8b64
 */


undefined8 FUN_001d8b64(long *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_2 = (int)param_1[0x4b];
  if (((*(uint *)(lVar3 + 0x1c0) & 0x22) == 2) || (iVar1 = FUN_001f32ac(param_1[0xaa]), iVar1 != 0))
  {
    uVar2 = 0x10001;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


