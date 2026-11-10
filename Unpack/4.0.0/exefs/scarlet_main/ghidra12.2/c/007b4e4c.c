/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b4e4c; name: FUN_007b4e4c
 */


void FUN_007b4e4c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_20 [16];
  
  *(undefined1 *)((long)param_1 + 0x1231) = 0;
  FUN_007a255c();
  FUN_00cbd7c0(auStack_20,param_1 + 0x35);
  uVar1 = (**(code **)(*param_1 + 0x398))(param_1,auStack_20);
  if (((((uVar1 & 1) != 0) && (*(long *)PTR_DAT_047d0a08 != 0)) &&
      (lVar2 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0x10), lVar2 != 0)) &&
     ((*(long *)(lVar2 + 0xc0) != 0 && (uVar1 = FUN_0078cdf4(), (uVar1 & 1) != 0)))) {
    *(undefined4 *)((long)param_1 + 0x1c4) = 4;
  }
  return;
}


