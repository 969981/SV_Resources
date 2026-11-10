/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e0ac24; name: FUN_00e0ac24
 */


void FUN_00e0ac24(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  *(undefined4 *)
   (*(long *)(*(long *)(param_1 + 0x50) + (long)*(int *)(param_1 + 0x58) * 8 + -8) + 0x108) =
       *(undefined4 *)(param_2 + 0x108);
  iVar2 = *(int *)(param_2 + 0x108);
  plVar5 = *(long **)(*(long *)(param_1 + 0x50) + (long)iVar2 * 8);
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar6 = (long)*(int *)(param_1 + 0x58) + -1;
  *(int *)(param_1 + 0x58) = (int)lVar6;
  if ((int)lVar6 != iVar2) {
    lVar8 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(lVar8 + (long)iVar2 * 8) = *(undefined8 *)(lVar8 + lVar6 * 8);
    *(undefined8 *)(lVar8 + lVar6 * 8) = 0;
  }
  if (*(char *)(param_2 + 0xf8) != '\0') {
    *(undefined4 *)
     (*(long *)(*(long *)(param_1 + 0x60) + (long)*(int *)(param_1 + 0x68) * 8 + -8) + 0x10c) =
         *(undefined4 *)(param_2 + 0x10c);
    iVar2 = *(int *)(param_2 + 0x10c);
    lVar6 = (long)*(int *)(param_1 + 0x68) + -1;
    iVar7 = (int)lVar6;
    *(int *)(param_1 + 0x68) = iVar7;
    if (iVar7 != iVar2) {
      *(undefined8 *)(*(long *)(param_1 + 0x60) + (long)iVar2 * 8) =
           *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar6 * 8);
    }
  }
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0xffffffffffffffff;
  FUN_0318235c(param_1 + 0x30,param_1,param_2);
  return;
}


