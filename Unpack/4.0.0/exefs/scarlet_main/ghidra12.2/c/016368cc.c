/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016368cc; name: FUN_016368cc
 */


void FUN_016368cc(long param_1,long *param_2,undefined2 *param_3,uint param_4,undefined8 *param_5,
                 byte *param_6,undefined2 *param_7)

{
  uint uVar1;
  byte bVar2;
  undefined2 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  long lVar13;
  undefined2 *puVar14;
  long *plVar15;
  
  if (param_4 == 0) {
    cVar9 = '\0';
    cVar4 = '\0';
  }
  else {
    plVar15 = (long *)*param_5;
    uVar3 = *param_7;
    uVar6 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = (**(code **)(*plVar15 + 0x98))(plVar15);
    FUN_014fced4(uVar10,uVar7,uVar3,3,uVar6);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = (**(code **)(*plVar15 + 0x98))(plVar15);
    FUN_0129aff0(uVar10,2,uVar7,uVar6,uVar3,3);
    cVar4 = *param_6 < 7;
    cVar9 = 7 < *param_6;
    if (param_4 != 1) {
      plVar15 = (long *)param_5[1];
      uVar3 = param_7[1];
      uVar6 = (**(code **)(*param_2 + 0x98))(param_2);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = (**(code **)(*plVar15 + 0x98))(plVar15);
      FUN_014fced4(uVar10,uVar7,uVar3,3,uVar6);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      uVar7 = (**(code **)(*plVar15 + 0x98))(plVar15);
      FUN_0129aff0(uVar10,2,uVar7,uVar6,uVar3,3);
      if (7 < param_6[1]) {
        cVar9 = cVar9 + '\x01';
      }
      if (param_6[1] < 7) {
        cVar4 = cVar4 + '\x01';
      }
      if (param_4 != 2) {
        lVar13 = (ulong)param_4 - 2;
        puVar14 = param_7 + 2;
        pbVar12 = param_6 + 2;
        puVar11 = param_5 + 2;
        do {
          plVar15 = (long *)*puVar11;
          uVar3 = *puVar14;
          uVar6 = (**(code **)(*param_2 + 0x98))(param_2);
          uVar10 = *(undefined8 *)(param_1 + 0x20);
          uVar7 = (**(code **)(*plVar15 + 0x98))(plVar15);
          FUN_014fced4(uVar10,uVar7,uVar3,3,uVar6);
          uVar10 = *(undefined8 *)(param_1 + 0x18);
          uVar7 = (**(code **)(*plVar15 + 0x98))(plVar15);
          FUN_0129aff0(uVar10,2,uVar7,uVar6,uVar3,3);
          if (7 < *pbVar12) {
            cVar9 = cVar9 + '\x01';
          }
          if (*pbVar12 < 7) {
            cVar4 = cVar4 + '\x01';
          }
          lVar13 = lVar13 + -1;
          puVar14 = puVar14 + 1;
          pbVar12 = pbVar12 + 1;
          puVar11 = puVar11 + 1;
        } while (lVar13 != 0);
      }
    }
  }
  lVar8 = *(long *)(param_1 + 0x18);
  lVar13 = lVar8 + 0x70;
  uVar1 = *(uint *)(lVar8 + 0x68);
  *(undefined1 *)(lVar13 + (ulong)uVar1) = 0;
  *(undefined1 *)(lVar13 + (ulong)(uVar1 + 1)) = 0xd0;
  *(uint *)(lVar8 + 0x68) = uVar1 + 3;
  *(char *)(lVar13 + (ulong)(uVar1 + 2)) = (char)(param_4 << 1);
  lVar13 = *(long *)(param_1 + 0x18);
  if (param_4 != 0) {
    uVar5 = (**(code **)(*(long *)*param_5 + 0x98))();
    uVar1 = *(uint *)(lVar13 + 0x68);
    *(uint *)(lVar13 + 0x68) = uVar1 + 1;
    *(undefined1 *)(lVar13 + (ulong)uVar1 + 0x70) = uVar5;
    lVar13 = *(long *)(param_1 + 0x18);
    uVar1 = *(uint *)(lVar13 + 0x68);
    bVar2 = *param_6;
    *(uint *)(lVar13 + 0x68) = uVar1 + 1;
    *(byte *)(lVar13 + (ulong)uVar1 + 0x70) = bVar2;
    lVar13 = *(long *)(param_1 + 0x18);
    if (param_4 != 1) {
      uVar5 = (**(code **)(*(long *)param_5[1] + 0x98))();
      uVar1 = *(uint *)(lVar13 + 0x68);
      *(uint *)(lVar13 + 0x68) = uVar1 + 1;
      *(undefined1 *)(lVar13 + (ulong)uVar1 + 0x70) = uVar5;
      lVar13 = *(long *)(param_1 + 0x18);
      uVar1 = *(uint *)(lVar13 + 0x68);
      bVar2 = param_6[1];
      *(uint *)(lVar13 + 0x68) = uVar1 + 1;
      *(byte *)(lVar13 + (ulong)uVar1 + 0x70) = bVar2;
      lVar13 = *(long *)(param_1 + 0x18);
      if (param_4 != 2) {
        lVar8 = (ulong)param_4 - 2;
        puVar11 = param_5 + 2;
        pbVar12 = param_6 + 2;
        do {
          uVar5 = (**(code **)(*(long *)*puVar11 + 0x98))();
          uVar1 = *(uint *)(lVar13 + 0x68);
          *(uint *)(lVar13 + 0x68) = uVar1 + 1;
          *(undefined1 *)(lVar13 + (ulong)uVar1 + 0x70) = uVar5;
          lVar13 = *(long *)(param_1 + 0x18);
          bVar2 = *pbVar12;
          uVar1 = *(uint *)(lVar13 + 0x68);
          *(uint *)(lVar13 + 0x68) = uVar1 + 1;
          *(byte *)(lVar13 + (ulong)uVar1 + 0x70) = bVar2;
          lVar13 = *(long *)(param_1 + 0x18);
          lVar8 = lVar8 + -1;
          puVar11 = puVar11 + 1;
          pbVar12 = pbVar12 + 1;
        } while (lVar8 != 0);
      }
    }
  }
  uVar6 = 3;
  if (cVar4 == '\0') {
    uVar6 = 1;
  }
  if (cVar9 != '\0') {
    uVar6 = 2;
  }
  FUN_0129aff0(lVar13,0x8e,param_4 & 0xff,uVar6,*param_3);
  return;
}


