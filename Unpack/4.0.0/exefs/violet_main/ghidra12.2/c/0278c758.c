/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278c758; name: FUN_0278c758
 */


void FUN_0278c758(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  if ((*(long *)(param_1 + 8) == 0) || ((*(byte *)(*(long *)(param_1 + 8) + 0x24a) & 1) != 0)) {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0278c964();
      FUN_0278c970(param_1);
    }
    plVar5 = *(long **)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[6];
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
        (**(code **)(*plVar5 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
    FUN_0278c8d0(param_1 + 0x30);
    lVar6 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (lVar6 != 0) {
      FUN_0278c83c(param_1 + 0x58);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  return;
}


