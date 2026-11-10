/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e5150; name: FUN_003e5150
 */


int FUN_003e5150(long *param_1,int param_2,char *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  if ((*param_3 != '\x06' && *param_3 != '\x01') || (lVar5 = *(long *)(param_3 + 0x20), lVar5 == 0))
  {
    return 0;
  }
  if ((*(byte *)(lVar5 + 8) & 1) == 0) {
    iVar6 = 0;
  }
  else {
    lVar7 = *param_1;
    piVar1 = (int *)(lVar7 + *(int *)(lVar5 + 0xc));
    if (param_2 == 1) {
      do {
        iVar6 = *piVar1 + 1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      lVar5 = (long)*(int *)(lVar5 + 0x10);
      if (param_2 == 0) {
        iVar6 = 1;
        *piVar1 = 1;
        lVar4 = FUN_0047e540();
        *(long *)(lVar7 + lVar5) = lVar4;
        if (lVar4 == 0) {
          FUN_004806c0(0xd,0xe9,0x41,"external/openssl/crypto/asn1/tasn_utl.c",0x4f);
          return -1;
        }
      }
      else {
        if (param_2 != -1) {
          return -1;
        }
        do {
          iVar6 = *piVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          DataMemoryBarrier(2,1);
          FUN_0047e620(*(undefined8 *)(lVar7 + lVar5));
          *(undefined8 *)(lVar7 + lVar5) = 0;
          return 0;
        }
      }
    }
  }
  return iVar6;
}


