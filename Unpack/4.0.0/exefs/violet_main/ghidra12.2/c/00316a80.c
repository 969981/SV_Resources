/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00316a80; name: FUN_00316a80
 */


undefined8 FUN_00316a80(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar11 = (ulong *)param_1[0x2d];
  if (puVar11 == (ulong *)0x0) {
    lVar8 = *(long *)(param_2 & 0xfffffffffffffffc);
  }
  else {
    plVar12 = (long *)(param_2 & 0xfffffffffffffffc);
    do {
      puVar7 = (undefined8 *)(*puVar11 & 0xfffffffffffffffc);
      uStack_48 = puVar7[1];
      local_50 = *puVar7;
      uStack_38 = puVar7[3];
      uStack_40 = puVar7[2];
      lStack_68 = plVar12[1];
      local_70 = *plVar12;
      lStack_58 = plVar12[3];
      lStack_60 = plVar12[2];
      iVar5 = FUN_00368020(&local_50,&local_70);
      if (iVar5 != 0) {
        uVar1 = (uint)*puVar11 & 3;
        if (1 < uVar1) {
          uVar9 = *puVar11 & 0xfffffffffffffffc;
          plVar12 = (long *)(uVar9 + 0x40);
          do {
            lVar8 = *plVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 + -1 == 0) {
            FUN_00376de0(uVar1,uVar9,*(undefined4 *)(uVar9 + 0x48));
          }
        }
        *puVar11 = param_2;
        return 0;
      }
      puVar11 = (ulong *)puVar11[1];
    } while (puVar11 != (ulong *)0x0);
    lVar8 = *plVar12;
  }
  if (lVar8 == 0) {
    uVar9 = (ulong)*(byte *)((param_2 & 0xfffffffffffffffc) + 8);
    lVar8 = *(long *)((param_2 & 0xfffffffffffffffc) + 0x20);
  }
  else {
    uVar9 = *(ulong *)((param_2 & 0xfffffffffffffffc) + 8);
    lVar8 = *(long *)((param_2 & 0xfffffffffffffffc) + 0x20);
  }
  if (lVar8 == 0) {
    uVar10 = (ulong)*(byte *)((param_2 & 0xfffffffffffffffc) + 0x28);
  }
  else {
    uVar10 = *(ulong *)((param_2 & 0xfffffffffffffffc) + 0x28);
  }
  uVar2 = param_1[2];
  param_1[1] = uVar9 + uVar10 + param_1[1] + 0x20;
  if (uVar2 < 10) {
    param_1[2] = uVar2 + 1;
    puVar11 = param_1 + uVar2 * 4 + 3;
  }
  else {
    puVar11 = (ulong *)*param_1;
    do {
      uVar10 = *puVar11;
      uVar9 = uVar10 + 0x20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar11,0x10);
      if (bVar4) {
        *puVar11 = uVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar11[1] < uVar9) {
      puVar11 = (ulong *)FUN_0038e7c0(puVar11,0x20);
    }
    else {
      puVar11 = (ulong *)((long)puVar11 + uVar10 + 0x20);
    }
  }
  *puVar11 = param_2;
  uVar6 = FUN_00377370(param_1 + 0x2b);
  return uVar6;
}


