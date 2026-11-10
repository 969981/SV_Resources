/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b5240; name: FUN_008b5240
 */


long FUN_008b5240(long param_1,long param_2)

{
  void *__s;
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  pbVar6 = *(byte **)(param_1 + 200);
  lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 0x68);
  uVar4 = lVar3 + 0x22fU & -lVar3;
  if ((*pbVar6 & 1) == 0) {
    lVar3 = *(long *)(pbVar6 + 0x40);
    *(ulong *)(pbVar6 + 0x40) = lVar3 + uVar4;
  }
  else {
    plVar7 = *(long **)(pbVar6 + 0x40);
    do {
      lVar3 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar3 + uVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar5 = *(long *)(*(long *)(param_1 + 200) + 0x38);
  if (lVar5 != 0) {
    __s = (void *)(lVar5 + lVar3);
    memset(__s,0,0x230);
    *(undefined8 *)((long)__s + 0x200) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x1d0) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x1d8) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x1e0) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x1e8) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x208) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x1f0) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x1f8) = 0x437f0000437f0000;
    uVar13 = *(undefined8 *)(param_2 + 0x98);
    uVar12 = *(undefined8 *)(param_2 + 0x90);
    uVar9 = *(undefined8 *)(param_2 + 0x78);
    uVar8 = *(undefined8 *)(param_2 + 0x70);
    uVar11 = *(undefined8 *)(param_2 + 0x88);
    uVar10 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)((long)__s + 0x70) = 0x3f800000;
    *(undefined8 *)((long)__s + 0x78) = 0;
    *(undefined8 *)((long)__s + 0x90) = 0x3f800000;
    *(undefined8 *)((long)__s + 0x98) = 0;
    *(undefined8 *)((long)__s + 0xb0) = 0x3f800000;
    *(undefined8 *)((long)__s + 0xb8) = 0;
    *(undefined8 *)((long)__s + 0x68) = uVar13;
    *(undefined8 *)((long)__s + 0x60) = uVar12;
    *(undefined8 *)((long)__s + 0x80) = 0xbf80000000000000;
    *(undefined8 *)((long)__s + 0x88) = 0x3f80000000000000;
    *(undefined8 *)((long)__s + 0xa0) = 0xbf80000000000000;
    *(undefined8 *)((long)__s + 0xa8) = 0x3f80000000000000;
    *(undefined8 *)((long)__s + 0xc0) = 0xbf80000000000000;
    *(undefined8 *)((long)__s + 200) = 0x3f80000000000000;
    *(undefined8 *)((long)__s + 0x48) = uVar9;
    *(undefined8 *)((long)__s + 0x40) = uVar8;
    *(undefined8 *)((long)__s + 0x58) = uVar11;
    *(undefined8 *)((long)__s + 0x50) = uVar10;
    *(undefined2 *)(param_1 + 0x188) = 0;
    *(undefined1 *)(param_1 + 0x18a) = 0;
    *(undefined8 *)((long)__s + 0xd0) = 0x3b8080813b808081;
    *(undefined8 *)((long)__s + 0xd8) = 0x3b8080813b808081;
    FUN_00892ec0(param_1,__s);
  }
  return lVar3;
}


