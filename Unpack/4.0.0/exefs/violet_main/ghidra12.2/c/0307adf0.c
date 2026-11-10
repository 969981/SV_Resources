/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307adf0; name: FUN_0307adf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0307adf0(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,uint param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  int local_58 [2];
  int local_38 [2];
  
  lVar8 = *(long *)(param_2 + 0x20);
  if ((int)*(uint *)(param_1 + 0x40) < 1) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = 0;
    piVar11 = (int *)(*(long *)(param_1 + 0x38) + 0x1c);
    do {
      if (*piVar11 == *(int *)(lVar8 + 0x5c)) goto LAB_0307ae6c;
      uVar14 = uVar14 + 1;
      piVar11 = piVar11 + 0x40;
    } while (*(uint *)(param_1 + 0x40) != uVar14);
    uVar14 = 0xffffffff;
  }
LAB_0307ae6c:
  if (*(char *)(param_2 + 0x30) != '\x01') {
    lVar8 = FUN_00e0e904(param_2 + 0x20);
  }
  iVar13 = (int)uVar14;
  *(int *)(lVar8 + 0x60) = iVar13;
  lVar8 = *(long *)(param_1 + 0x38) + (long)iVar13 * 0x100;
  if (*(long *)(param_2 + 8) != 0) {
    plVar9 = (long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = *(long **)(lVar8 + 0x10);
  *(long *)(lVar8 + 0x10) = param_2;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar1 = plVar9 + 2;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  *(byte *)(lVar8 + 0xf0) = *(byte *)(lVar8 + 0xf0) | 4;
  uVar15 = DAT_03cab620;
  puVar12 = (undefined8 *)(lVar8 + 0x30);
  if ((param_5 & 1) == 0) {
    *(undefined8 *)(lVar8 + 0x38) = DAT_03cab628;
    *puVar12 = uVar15;
    uVar7 = _UNK_03cabe68;
    uVar6 = _DAT_03cabe60;
    uVar5 = _UNK_03caa5b8;
    uVar15 = _DAT_03caa5b0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(undefined8 *)(lVar8 + 0x78) = 0;
    *(undefined8 *)(lVar8 + 0x48) = uVar7;
    *(undefined8 *)(lVar8 + 0x40) = uVar6;
    *(undefined8 *)(lVar8 + 0x58) = uVar5;
    *(undefined8 *)(lVar8 + 0x50) = uVar15;
    uVar5 = _UNK_03cabe58;
    uVar15 = _DAT_03cabe50;
    *(undefined8 *)(lVar8 + 0x80) = 0;
    *(undefined8 *)(lVar8 + 0x88) = 0;
    *(undefined8 *)(lVar8 + 0x68) = uVar5;
    *(undefined8 *)(lVar8 + 0x60) = uVar15;
    uVar15 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(param_2 + 0x48);
    *puVar12 = uVar15;
    uVar15 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(lVar8 + 0x40) = uVar15;
    uVar15 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(lVar8 + 0x58) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(lVar8 + 0x50) = uVar15;
    uVar15 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(lVar8 + 0x60) = uVar15;
  }
  else {
    uVar15 = *puVar12;
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(lVar8 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = uVar15;
    uVar15 = *(undefined8 *)(lVar8 + 0x40);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar8 + 0x48);
    *(undefined8 *)(param_2 + 0x50) = uVar15;
    uVar15 = *(undefined8 *)(lVar8 + 0x50);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(lVar8 + 0x58);
    *(undefined8 *)(param_2 + 0x60) = uVar15;
    uVar15 = *(undefined8 *)(lVar8 + 0x60);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(lVar8 + 0x68);
    *(undefined8 *)(param_2 + 0x70) = uVar15;
  }
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    local_38[0] = iVar13;
    FUN_0307a574(param_1,local_38,*param_3);
  }
  lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0x68);
  iVar2 = *(int *)(lVar8 + 0x78);
  if (iVar2 != 0) {
    lVar10 = (long)iVar2 << 4;
    puVar12 = (undefined8 *)(*(long *)(lVar8 + 0x70) + 8);
    do {
      local_58[0] = iVar13;
      FUN_0307a574(param_1,local_58,*puVar12);
      lVar10 = lVar10 + -0x10;
      puVar12 = puVar12 + 2;
    } while (lVar10 != 0);
  }
  FUN_030879d4(param_2,param_1);
  return;
}


