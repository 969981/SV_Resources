/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c96d64; name: FUN_01c96d64
 */


void FUN_01c96d64(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 local_598;
  undefined2 local_58e;
  undefined1 local_58c;
  undefined1 local_58b;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 local_528;
  undefined2 local_51c;
  undefined1 local_51a;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined8 uStack_510;
  undefined8 local_508;
  char local_2b0 [8];
  undefined1 auStack_2a8 [632];
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar2 = FUN_01ed96ac();
  if ((lVar2 == 0) || (FUN_01eddc9c(local_2b0,lVar2,param_2), local_2b0[0] == '\0')) {
    *(undefined8 *)((long)param_1 + 6) = 0;
    *param_1 = 0;
  }
  else {
    memcpy(&local_528,auStack_2a8,0x278);
    local_598 = local_528;
    local_58b = 1;
    local_58e = local_51c;
    local_58c = local_51a;
    switch(local_51a) {
    case 0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("false","GetRecvHistoryViewData",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/network/net_contents/mystery_gift/mystery_gift_view_data.cpp"
                 ,0x98);
    case 1:
      FUN_01edd810(&local_588,&local_518);
      memcpy(param_1,&local_598,0x70);
      return;
    case 2:
      local_588 = CONCAT44(uStack_514,local_518);
      uStack_580 = uStack_510;
      local_578 = local_508;
      break;
    case 3:
    case 5:
      local_588 = CONCAT44(local_588._4_4_,local_518);
      break;
    case 4:
      memcpy(&local_588,&local_518,0x60);
    }
    memcpy(param_1,&local_598,0x70);
  }
  return;
}


