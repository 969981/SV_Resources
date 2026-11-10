/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ec848; name: FUN_012ec848
 */


void FUN_012ec848(undefined8 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_01060ed0();
  }
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = lVar2;
  return;
}


