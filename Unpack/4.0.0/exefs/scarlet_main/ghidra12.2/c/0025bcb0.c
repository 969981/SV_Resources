/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025bcb0; name: FUN_0025bcb0
 */


undefined8 FUN_0025bcb0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_60 [8];
  undefined4 local_58 [10];
  ulong local_30;
  undefined8 local_28;
  
  if (DAT_0448ba90 != '\0') {
    if (((DAT_047ee4e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047ee4e0), iVar1 != 0)) {
      DAT_047ee4f0 = 0;
      DAT_047ee4f8 = FUN_01cf7e20();
      DAT_047ee500 = 0;
      DAT_047ee4e8 = &DAT_047ee4f0;
      DAT_047ee508 = 0;
      DAT_047ee510 = 0;
      DAT_047ee518 = 0;
      DAT_047ee520 = FUN_01cf7e20();
      FUN_0025cf78(local_58,"_npln");
      iVar1 = FUN_0025d088(local_58);
      if (iVar1 == 0) {
        memset(&DAT_047ed4d8,0x20,0x1000);
        iVar1 = nn::fs::OpenFile((FileHandle *)&local_28,"_npln:/npln_config.json",1);
        if (iVar1 == 0) {
          nn::fs::GetFileSize(&local_30,local_28);
          if (0xfff < local_30) {
            local_30 = 0x1000;
          }
          iVar1 = nn::fs::ReadFile(auStack_60,local_28,0,&DAT_047ed4d8,local_30);
          nn::fs::CloseFile(local_28);
        }
        if (iVar1 == 0) {
          FUN_0025cd68(&DAT_047ee4e8,&DAT_047ed4d8,0x1000);
        }
      }
      FUN_0025d02c(local_58);
      DAT_047ee4d8 = 1;
      FUN_00100190(FUN_0025be60,&DAT_047ee4e8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_047ee4e0);
    }
    uVar2 = FUN_0025bef8(&DAT_047ee4e8,param_1);
    if ((uVar2 & 1) == 0) {
      local_58[0] = 0x80341;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0,(Result *)local_58,"");
    }
    param_1 = FUN_0025bffc(&DAT_047ee4e8,param_1);
  }
  return param_1;
}


