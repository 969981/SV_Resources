/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043e1f0; name: FUN_0043e1f0
 */


void FUN_0043e1f0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 8);
  do {
    iVar2 = *piVar1;
    iVar5 = iVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    DataMemoryBarrier(2,1);
  }
  else if (1 < iVar2) {
    return;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (pcVar6 = *(code **)(*(long *)(param_1 + 0x10) + 0xa8), pcVar6 != (code *)0x0)) {
    (*pcVar6)(param_1);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_0047e620(*(undefined8 *)(param_1 + 0x40));
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0x38),PTR_LAB_047cd348);
  FUN_00452f80(param_1,"external/openssl/crypto/evp/p_lib.c",0x262);
  return;
}


