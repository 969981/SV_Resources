/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f12b8; name: FUN_030f12b8
 */


undefined8 FUN_030f12b8(long *param_1,undefined4 *param_2,long *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  
  uVar6 = FUN_030f2c34();
  iVar8 = (int)uVar6;
  if ((int)param_1[1] == iVar8) {
    iVar2 = iVar8 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar8) {
      FUN_030f2d30(param_1,(long)iVar2);
      iVar8 = (int)param_1[1];
    }
    puVar1 = (undefined4 *)(*param_1 + (long)iVar8 * 0x10);
    *puVar1 = *param_2;
    lVar7 = *param_3;
    *(long *)(puVar1 + 2) = lVar7;
    if ((lVar7 != 0) && (*(long *)(lVar7 + 8) != 0)) {
      plVar3 = (long *)(lVar7 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = *plVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return uVar6;
}


