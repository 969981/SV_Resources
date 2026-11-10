/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007af7f4; name: FUN_007af7f4
 */


void FUN_007af7f4(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_047d0de0 + 0x10);
  puVar1 = PTR_DAT_047d0860;
  lVar2 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
  if (lVar2 != 0) {
    lVar2 = FUN_007f74c0(*(undefined8 *)puVar1);
    if (*(long *)(lVar2 + 0x10) != 0) {
      FUN_007ae4cc();
    }
    lVar2 = FUN_007f74c0(*(undefined8 *)puVar1);
    if (*(long *)(lVar2 + 8) != 0) {
      FUN_007a5444();
    }
  }
  puVar1 = PTR_DAT_047d0dc0;
  (**(code **)(**(long **)PTR_DAT_047d0dc0 + 0x18))();
  FUN_00799c28(*(undefined8 *)puVar1);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x248));
  FUN_007b4c08(param_1);
  return;
}


