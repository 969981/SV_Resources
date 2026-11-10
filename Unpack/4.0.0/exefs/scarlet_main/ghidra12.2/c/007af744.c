/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007af744; name: FUN_007af744
 */


void FUN_007af744(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_007b4b94();
  puVar1 = PTR_DAT_047d0de0;
  param_1[0x247] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0078cfe4(param_1 + 0x248,0x12);
  *(undefined2 *)(param_1 + 0x264) = 0x40;
  *(undefined1 *)(param_1 + 0x26b) = 0;
  param_1[0xfec] = 0;
  *(undefined4 *)(param_1 + 0xfed) = 0;
  memset(param_1 + 0x25c,0,0x40);
  FUN_00799bf4(*(undefined8 *)PTR_DAT_047d0dc0,param_1);
  puVar1 = PTR_DAT_047d0860;
  lVar2 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
  FUN_007a543c(*(undefined8 *)(lVar2 + 8),param_1);
  lVar2 = FUN_007f74c0(*(undefined8 *)puVar1);
  FUN_007ae4c4(*(undefined8 *)(lVar2 + 0x10),param_1);
  return;
}


