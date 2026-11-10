/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e34b0; name: FUN_026e34b0
 */


void FUN_026e34b0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  long *local_38;
  long local_30;
  undefined4 local_24;
  undefined8 local_8;
  
  if ((*(long *)(param_1 + 0x140) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x140) + 0x10), lVar2 != 0)) {
    local_24 = param_3;
    local_8 = param_2;
    FUN_015f9cf8(&local_30,*(undefined8 *)(param_1 + 8),&local_8,&local_24);
    if (local_30 != 0) {
      FUN_015f9df0(&local_38);
      plVar1 = (long *)PTR_DAT_047d8b70;
      if (local_38 != (long *)0x0) {
        plVar1 = local_38 + 6;
      }
      FUN_00d9ec44(auStack_50,2,*plVar1);
      FUN_026e3568(lVar2 + -0x28,auStack_50,&local_30);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
    }
    FUN_01751d6c(&local_30);
  }
  return;
}


