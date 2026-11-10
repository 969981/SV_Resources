/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a1554; name: FUN_028a1554
 */


undefined8 FUN_028a1554(long param_1,long param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long *local_18;
  
  plVar6 = (long *)(param_1 + 0x40);
  if (*plVar6 == 0) {
    if (param_2 != 0) {
      snprintf((char *)(param_1 + 0x48),0x100,"%s",param_2);
    }
    if (param_3 != 0) {
      snprintf((char *)(param_1 + 0x148),0x100,"%s",param_3);
    }
    *(undefined1 *)(param_1 + 0x248) = 0;
    FUN_01f7ba08(&local_18,*(undefined8 *)(param_1 + 8),&DAT_03d689f0);
    FUN_014eddf8(plVar6,&local_18);
    if (local_18 != (long *)0x0) {
      lVar7 = local_18[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
    lVar7 = *plVar6;
    if (lVar7 != 0) {
      pcVar5 = *(code **)(lVar7 + 0x368);
      if (pcVar5 != (code *)0x0) {
        *(undefined8 *)(lVar7 + 0x370) = 0;
        *(undefined8 *)(lVar7 + 0x378) = 0;
        *(undefined8 *)(lVar7 + 0x360) = 0;
        *(undefined8 *)(lVar7 + 0x368) = 0;
        (*pcVar5)(lVar7 + 0x380);
      }
      *(undefined1 **)(lVar7 + 0x360) = &LAB_028a16bc;
      *(undefined1 **)(lVar7 + 0x368) = &LAB_02c726d0;
      *(long *)(lVar7 + 0x380) = param_1;
      *(undefined1 **)(lVar7 + 0x370) = &LAB_02c726d4;
      *(undefined1 **)(lVar7 + 0x378) = &LAB_02c726e0;
      FUN_012e43f8(*(undefined8 *)(param_1 + 0x40),"WebViewThread",0xffffffff,0x10);
      return 1;
    }
  }
  return 0;
}


