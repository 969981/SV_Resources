/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0326ca0c; name: FUN_0326ca0c
 */


void FUN_0326ca0c(long *param_1,long param_2,int param_3,long param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_48;
  
  *param_1 = (long)(PTR_DAT_047e6198 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = param_4;
  if ((param_4 != 0) && (*(long *)(param_4 + 8) != 0)) {
    plVar6 = (long *)(param_4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = PTR_DAT_047e61a0;
  param_1[4] = param_2;
  *param_1 = (long)(puVar4 + 0x10);
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar6 = (long *)(param_2 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = param_1 + 5;
  *plVar10 = 0;
  param_1[6] = 0;
  puVar4 = PTR_DAT_047d1a08;
  local_48 = 0xd98;
  plVar6 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(plVar6,"hkcdPlanarGeometryPolygonCollection");
  }
  plVar6[1] = 0xffffffff;
  plVar6[2] = 1;
  plVar6[3] = 0;
  puVar5 = PTR_DAT_047e61a8;
  plVar6[4] = -0x8000000000000000;
  *plVar6 = (long)(puVar5 + 0x10);
  FUN_02e9b320(plVar6 + 3,PTR_PTR_047d1a50,8);
  iVar1 = (int)plVar6[4];
  if (iVar1 < 8) {
    *(undefined4 *)(plVar6 + 4) = 8;
    memset((void *)(plVar6[3] + (long)iVar1 * 4),0,(ulong)(7 - iVar1) * 4 + 4);
  }
  else if (iVar1 != 8) {
    *(undefined4 *)(plVar6 + 4) = 8;
  }
  puVar8 = (uint *)plVar6[3];
  puVar8[1] = 0;
  puVar8[2] = 4;
  puVar8[5] = 0;
  puVar8[6] = 4;
  *puVar8 = *puVar8 & 0x60000000;
  puVar8[7] = puVar8[7] & 0x3fffffff | 0x40000000;
  puVar8[3] = puVar8[3] & 0x3fffffff | 0x40000000;
  puVar8[4] = puVar8[4] & 0x60000000;
  memset(plVar6 + 5,0,0xd6c);
  plVar7 = (long *)*plVar10;
  if (((plVar7 != plVar6) && (*plVar10 = (long)plVar6, plVar7 != (long *)0x0)) && (plVar7[1] != 0))
  {
    plVar6 = plVar7 + 2;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  local_48 = 0x28;
  plVar6 = (long *)(**(code **)puVar4)(0,&local_48,0);
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(plVar6,"VertexStorage");
  }
  plVar6[2] = 1;
  plVar6[3] = 0;
  plVar6[4] = -0x8000000000000000;
  *plVar6 = (long)&PTR_LAB_046c82c8;
  plVar6[1] = 0xffffffff;
  plVar7 = (long *)param_1[6];
  if (((plVar7 != plVar6) && (param_1[6] = (long)plVar6, plVar7 != (long *)0x0)) && (plVar7[1] != 0)
     ) {
    plVar6 = plVar7 + 2;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  if (param_3 != 0) {
    FUN_0326ccbc(*plVar10,param_3);
  }
  return;
}


