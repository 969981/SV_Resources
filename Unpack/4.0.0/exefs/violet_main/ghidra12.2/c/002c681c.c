/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c681c; name: FUN_002c681c
 */


long FUN_002c681c(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *local_38;
  
  lVar9 = FUN_0049e770(PTR_FUN_047cba38,0x80);
  if (lVar9 != 0) {
    local_38 = (long *)*param_1;
    *param_1 = 0;
    uVar2 = *(ulong *)(param_3 + 8);
    pbVar4 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar4 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    uVar3 = *(ulong *)(param_4 + 8);
    pbVar5 = *(byte **)(param_4 + 0x10);
    if ((*param_4 & 1) == 0) {
      pbVar5 = param_4 + 1;
      uVar3 = (ulong)(*param_4 >> 1);
    }
                    /* try { // try from 002c6894 to 002c689f has its CatchHandler @ 002c68fc */
    FUN_002cb8cc(lVar9,&local_38,*param_2,param_2[1],pbVar4,uVar2,pbVar5,uVar3);
    plVar8 = local_38;
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 1;
      do {
        lVar10 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*local_38 + 8))(local_38);
        FUN_0049e790(PTR_LAB_047cba48,plVar8);
      }
    }
  }
  return lVar9;
}


