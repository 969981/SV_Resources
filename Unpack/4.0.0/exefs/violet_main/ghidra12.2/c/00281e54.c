/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00281e54; name: FUN_00281e54
 */


void FUN_00281e54(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00281e54(param_1,*param_2);
  FUN_00281e54(param_1,param_2[1]);
  puVar6 = (undefined8 *)param_2[8];
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = puVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar6)(puVar6);
      FUN_0049e790(PTR_LAB_047cba48,puVar6);
      bVar2 = *(byte *)(param_2 + 4);
      goto joined_r0x00281ea0;
    }
  }
  bVar2 = *(byte *)(param_2 + 4);
joined_r0x00281ea0:
  if ((bVar2 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_2[6]);
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}


