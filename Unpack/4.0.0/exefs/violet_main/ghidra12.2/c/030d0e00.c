/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d0e00; name: FUN_030d0e00
 */


ulong FUN_030d0e00(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_38;
  
  uVar7 = *(uint *)(param_1 + 0x20);
  uVar10 = (ulong)uVar7;
  plVar1 = (long *)(param_1 + 0x18);
  if (0 < (int)uVar7) {
    uVar9 = 0;
    do {
      if (*(long *)(*plVar1 + uVar9 * 8) == 0) {
        if ((~(uint)uVar9 & 0xff) != 0) goto LAB_030d0e90;
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
  }
  lVar8 = (long)(int)uVar7;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= (int)uVar7) {
    FUN_030d2684(plVar1,lVar8 + 1);
    uVar7 = *(uint *)(param_1 + 0x20);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar7 * 8) = 0;
  *(int *)(param_1 + 0x20) = (int)(lVar8 + 1);
  uVar9 = uVar10;
LAB_030d0e90:
  puVar4 = PTR_DAT_047d1a08;
  local_38 = 0x60;
  plVar5 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(plVar5,"hkaiPathRequestQueue");
  }
  plVar5[2] = 1;
  *plVar5 = (long)(PTR_DAT_047e5110 + 0x10);
  plVar5[1] = 0xffffffff;
  *(char *)(plVar5 + 3) = (char)uVar9;
  plVar5[4] = 0;
  plVar5[5] = -0x8000000000000000;
  plVar5[6] = 0;
  plVar5[7] = -0x8000000000000000;
  plVar5[8] = 0;
  plVar5[9] = -0x8000000000000000;
  plVar5[10] = 0;
  plVar5[0xb] = -0x8000000000000000;
  uVar9 = uVar9 & 0xff;
  plVar6 = *(long **)(*plVar1 + uVar9 * 8);
  *(long **)(*plVar1 + uVar9 * 8) = plVar5;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
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
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  return uVar9;
}


