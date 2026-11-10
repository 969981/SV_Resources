/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02793d88; name: FUN_02793d88
 */


void FUN_02793d88(undefined8 param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long local_c8;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  long *local_28;
  
  local_68 = 0xe185f6f6b840a887;
  pcStack_60 = "InitializeLdn";
  local_58 = 0xd;
  local_50 = (long *)0x0;
  FUN_01959f88(&local_48,&local_68);
  local_88 = 0x5f3a9f86b611a6e;
  pcStack_80 = "StartupSession";
  local_78 = 0xe;
  local_70 = (long *)0x0;
  FUN_0195b8bc(&local_28,local_48,&local_88,*(undefined8 *)(param_2 + 0x70));
  plVar5 = local_28;
  local_a8 = 0x4009dc70b1776ef1;
  pcStack_a0 = "BrowseSession";
  local_98 = 0xd;
  local_90 = (long *)0x0;
  FUN_027e3634(&local_c8,param_2,param_3);
  FUN_027e374c(param_1,plVar5,&local_a8,&local_c8);
  lVar6 = local_c8;
  local_c8 = 0;
  if (lVar6 != 0) {
    FUN_027e49a0(auStack_c0);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
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
    else if (sVar2 == 0) goto LAB_02793f54;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    lVar6 = local_48[6];
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
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_02793f54:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


