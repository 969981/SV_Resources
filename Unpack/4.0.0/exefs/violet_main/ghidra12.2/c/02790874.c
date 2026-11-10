/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02790874; name: FUN_02790874
 */


void FUN_02790874(undefined8 *param_1,long param_2,byte param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long local_1a0 [2];
  char *pcStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  long local_178 [2];
  char *pcStack_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  byte local_140;
  undefined8 local_138;
  char *pcStack_130;
  undefined8 local_128;
  long *local_120;
  undefined1 auStack_118 [8];
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [104];
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_28;
  
  if ((((*(long *)(param_2 + 0x1c0) == 0) || (*(short *)(*(long *)(param_2 + 0x1c0) + 0x1a) == 0))
      || (*(long **)(param_2 + 0x1d0) == (long *)0x0)) ||
     (uVar7 = (**(code **)(**(long **)(param_2 + 0x1d0) + 0x70))(), (uVar7 & 1) == 0)) {
    *param_1 = 0;
  }
  else {
    local_50 = 0;
    uStack_48 = 0;
    FUN_02790ba0(&local_50,param_2 + 0x1c0);
    FUN_02790df0(&local_28,param_2 + 0x1d0);
    (**(code **)(*local_28 + 0x78))();
    local_88 = 0xdd5166043a538723;
    pcStack_80 = "CancelCurrentRunning";
    local_78 = 0x14;
    local_70 = (long *)0x0;
    FUN_02790df0(auStack_118,&local_28);
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    local_108 = (code *)0x0;
    FUN_02790e80(&local_110,auStack_118);
    FUN_01efd6a8(&local_68,&local_88,&local_110);
    plVar6 = local_68;
    local_138 = 0xc51cd822df8e33bd;
    pcStack_130 = "CleanupSession";
    local_128 = 0xe;
    local_120 = (long *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    FUN_02790ba0(&local_150,&local_50);
    local_140 = param_3 & 1;
    FUN_02790eec(&local_60,plVar6,&local_138,&local_150);
    local_178[1] = 0x96161285579aec1d;
    pcStack_168 = "StopBeaconError";
    local_160 = 0xf;
    local_158 = (long *)0x0;
    local_178[0] = param_2;
    FUN_027915f4(&local_58,local_60,local_178 + 1,local_1a0 + 5);
    local_1a0[1] = 0xd5f04862c3fcffd7;
    pcStack_190 = "StopBeaconCancel";
    local_188 = 0x10;
    uStack_180 = 0;
    local_1a0[0] = param_2;
    FUN_02791cd0(param_1,local_58,local_1a0 + 1,local_1a0);
    if (local_58 != (long *)0x0) {
      lVar8 = local_58[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_02790b7c;
    }
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x20))();
    }
    if (local_60 != (long *)0x0) {
      lVar8 = local_60[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_60 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_02790b7c;
    }
    FUN_0279064c(&local_150);
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      lVar8 = local_68[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_02790b7c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
    pcVar5 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      local_108 = (code *)0x0;
      (*pcVar5)(auStack_f0);
    }
    FUN_0186e214(auStack_118);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    FUN_0186e214(&local_28);
    FUN_0279064c(&local_50);
  }
  return;
}


