/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ef5b58; name: FUN_02ef5b58
 */


void FUN_02ef5b58(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  void *__dest;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  void *__src;
  long *plVar11;
  undefined8 local_58;
  
  puVar5 = PTR_DAT_047d1a08;
  local_58 = 0x58;
  puVar6 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(puVar6,"hknpMaterialPaletteShapeTagCodec");
  }
  uVar2 = *(undefined1 *)((long)param_2 + 0x1c);
  puVar6[1] = 0xffffffff;
  puVar6[2] = 1;
  *puVar6 = &PTR_LAB_0460e398;
  *(undefined1 *)((long)puVar6 + 0x1c) = uVar2;
  *(undefined4 *)(puVar6 + 3) = 0;
  puVar10 = puVar6 + 4;
  *puVar10 = 0;
  puVar6[5] = 0x8000000000000000;
  plVar11 = puVar6 + 6;
  *plVar11 = 0;
  puVar6[7] = 0;
  puVar6[8] = 0xffffffff00000000;
  puVar6[9] = 0;
  puVar6[10] = 0xffffffff00000000;
  *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_2 + 3);
  if (param_2 == puVar6) {
    plVar7 = (long *)0x0;
  }
  else {
    iVar1 = *(int *)(param_2 + 5);
    __src = (void *)param_2[4];
    if (iVar1 < 1) {
      __dest = (void *)0x0;
    }
    else {
      FUN_02ef62a4(puVar10,(long)iVar1);
      __dest = (void *)*puVar10;
    }
    memcpy(__dest,__src,(long)iVar1 << 1);
    plVar7 = (long *)puVar6[6];
    *(int *)(puVar6 + 5) = iVar1;
  }
  plVar8 = (long *)param_2[6];
  if (plVar7 != plVar8) {
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar8 = plVar8 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7 = (long *)*plVar11;
      plVar8 = (long *)param_2[6];
    }
    *plVar11 = (long)plVar8;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar11 = plVar7 + 2;
      do {
        lVar9 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
  }
  *param_1 = puVar6;
  return;
}


