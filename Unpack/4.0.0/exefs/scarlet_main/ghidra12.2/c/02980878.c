/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02980878; name: FUN_02980878
 */


void FUN_02980878(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_d8;
  undefined1 auStack_d0 [176];
  undefined1 auStack_8 [8];
  
  FUN_01582534();
  uVar2 = FUN_0158253c();
  iVar1 = FUN_02980c28(uVar2,9);
  if (iVar1 == 1) {
    FUN_01243d84(auStack_d0);
    uVar3 = FUN_02980c54(param_1,auStack_d0);
    if ((uVar3 & 1) != 0) {
      FUN_02980d24(param_1,auStack_d0);
      FUN_01243d7c(auStack_d0);
      while (local_d8 = FUN_0168003c(auStack_d0), local_d8 != 0) {
        FUN_01461214(param_1);
        uVar2 = FUN_0297e380();
        FUN_0297e388(uVar2,auStack_8,&local_d8);
      }
    }
  }
  return;
}


