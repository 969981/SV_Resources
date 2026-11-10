/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035d860; name: FUN_0035d860
 */


void FUN_0035d860(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_00354f70();
  if ((uVar3 & 1) == 0) {
    do {
      lVar4 = DAT_047ef718;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x47ef718,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_047ef718 = DAT_047ef718 + 2;
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      lVar4 = FUN_003581b0();
      lVar4 = FUN_0038c7b0(lVar4 + 0x28);
      FUN_00358110(lVar4 + 0x28,lVar4);
      DAT_047ef720 = lVar4;
      *(code **)(lVar4 + 0x10) = FUN_0035e1f0;
      *(long *)(lVar4 + 0x18) = lVar4;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      FUN_003540d4(lVar4 + 8,0,0,1);
      FUN_00355090(lVar4 + 0x28,*(undefined8 *)(param_1 + 8));
    }
    else {
      do {
      } while (DAT_047ef720 == 0);
      FUN_00355090(DAT_047ef720 + 0x28,*(undefined8 *)(param_1 + 8));
      if (lVar4 != 0) {
        do {
          lVar4 = DAT_047ef718 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x47ef718,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            DAT_047ef718 = lVar4;
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
    }
  }
  FUN_00355060(*(undefined8 *)(param_1 + 8),param_1 + 0x1c8);
  return;
}


