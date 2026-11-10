/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027c8a74; name: FUN_027c8a74
 */


void FUN_027c8a74(undefined8 param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  byte local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  long *plStack_f8;
  undefined1 auStack_f0 [16];
  byte local_e0;
  undefined7 uStack_df;
  undefined8 local_d0;
  long *plStack_c8;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_28;
  
  local_60 = 0x5f3a9f86b611a6e;
  pcStack_58 = "StartupSession";
  local_50 = 0xe;
  local_48 = (long *)0x0;
  FUN_027c20b8(&local_28,&local_60,*(undefined8 *)(param_2 + 0x70));
  plVar5 = local_28;
  local_80 = 0x4009dc70b1776ef1;
  pcStack_78 = "BrowseSession";
  local_70 = 0xd;
  local_68 = (long *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_027c2138(&local_90,param_2 + 0x78);
  FUN_027c5768(&local_110,param_3);
  FUN_027c585c(param_1,plVar5,&local_80,&local_90,&local_110);
  FUN_01e75064(auStack_b8);
  if ((local_e0 & 1) != 0) {
    (**(code **)(*plStack_c8 + 0x18))
              (plStack_c8,local_d0,CONCAT71(uStack_df,local_e0) & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(auStack_f0);
  if ((local_110 & 1) != 0) {
    (**(code **)(*plStack_f8 + 0x18))
              (plStack_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
  }
  FUN_027bfe38(&local_90);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


