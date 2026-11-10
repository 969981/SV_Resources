/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00100190; name: FUN_00100190
 */


undefined8 FUN_00100190(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar5 = 0xffffffff;
  if ((param_3 != 0) &&
     (uVar3 = ((long)PTR_DAT_047cb800 - (long)PTR_DAT_047cb7f8) / 0x18, DAT_047ec0d8 < uVar3)) {
    do {
      uVar4 = DAT_047ec0d8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x47ec0d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_047ec0d8 = DAT_047ec0d8 + 1;
      }
    } while (cVar1 != '\0');
    if (uVar3 <= uVar4) {
      return 0xffffffff;
    }
    puVar6 = (undefined8 *)(PTR_DAT_047cb7f8 + uVar4 * 0x18);
    uVar5 = 0;
    *puVar6 = param_1;
    puVar6[1] = param_2;
    puVar6[2] = param_3;
  }
  return uVar5;
}


