/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00377cc0; name: FUN_00377cc0
 */


void FUN_00377cc0(ulong param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_30 [32];
  
  FUN_003673f0(auStack_30,"Unallowed duplicate metadata");
  uVar3 = FUN_00351340("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x68
                       ,auStack_30,0,0);
  puVar6 = (undefined8 *)(param_1 & 0xfffffffffffffffc);
  if (((undefined8 *)*puVar6 != (undefined8 *)0x0) &&
     (plVar4 = *(long **)*puVar6, plVar4 != (long *)0x0)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar3 = FUN_00351fa0(uVar3,10,puVar6);
  puVar5 = (undefined8 *)puVar6[4];
  if ((puVar5 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar5, plVar4 != (long *)0x0)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_00351fa0(uVar3,0xb,puVar6 + 4);
  return;
}


