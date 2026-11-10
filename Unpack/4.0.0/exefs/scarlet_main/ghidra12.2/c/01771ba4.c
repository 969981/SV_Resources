/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01771ba4; name: FUN_01771ba4
 */


void FUN_01771ba4(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_01060ed0();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0x666666666666666;
  param_1[2] = 0;
  *param_1 = lVar2;
  return;
}


