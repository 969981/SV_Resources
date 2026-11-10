/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b53d8; name: FUN_033b53d8
 */


void FUN_033b53d8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = (long)(PTR_DAT_047e6908 + 0x10);
  puVar4 = PTR_DAT_047d1a08;
  if ((int)param_1[6] != 0) {
    lVar7 = param_1[5];
    lVar8 = (long)(int)param_1[6] << 4;
    do {
      uVar6 = *(ulong *)(lVar7 + lVar8 + -8);
      if ((uVar6 & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,uVar6 - 1,0);
      }
      uVar6 = *(ulong *)(lVar7 + lVar8 + -0x10);
      if ((uVar6 & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,uVar6 - 1,0);
      }
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) << 4);
  }
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  param_1[5] = 0;
  if ((param_1[4] & 1U) != 0) {
    (**(code **)(puVar4 + 8))(0,param_1[4] - 1,0);
  }
  plVar5 = (long *)param_1[3];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


