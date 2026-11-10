/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f9070; name: FUN_002f9070
 */


undefined8 *
FUN_002f9070(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x438);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[3] = param_2;
    puVar4[1] = param_3;
    puVar4[2] = param_1;
    puVar4[0xe] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    FUN_003670f0(puVar4 + 0x59,0x2000);
    FUN_003670f0(puVar4 + 0x5d,0x2000);
    *puVar4 = &PTR_LAB_04494180;
    FUN_0038db00(puVar4 + 4);
    puVar4[0xd] = 0;
    puVar4[0xb] = &LAB_002f9600;
    puVar4[0xc] = puVar4;
    FUN_00368450(puVar4 + 0xf);
    FUN_00368450(puVar4 + 0x34);
    if (param_5 != 0) {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)(param_4 + lVar6 * 0x20);
        if (((undefined8 *)*puVar1 != (undefined8 *)0x0) &&
           (plVar5 = *(long **)*puVar1, plVar5 != (long *)0x0)) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_58 = puVar1[1];
        local_60 = *puVar1;
        uStack_48 = puVar1[3];
        uStack_50 = puVar1[2];
        FUN_003686e0(puVar4 + 0x34,&local_60);
        lVar6 = lVar6 + 1;
      } while (lVar6 != param_5);
    }
    FUN_00368450(puVar4 + 0x61);
    FUN_0038da50(puVar4 + 0x86,1);
  }
  return puVar4;
}


