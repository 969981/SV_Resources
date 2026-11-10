/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e92d0; name: FUN_004e92d0
 */


void FUN_004e92d0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar10;
  byte *pbVar9;
  long *plVar11;
  
  puVar1 = PTR_LAB_047cba48;
  pbVar10 = (byte *)param_2[1];
  lVar7 = (long)pbVar10 - *param_2 >> 3;
  uVar4 = param_1[2];
  bVar2 = uVar4 < (ulong)(lVar7 * -0x5555555555555555);
  lVar7 = uVar4 + lVar7 * 0x5555555555555555;
  if (bVar2 || lVar7 == 0) {
    if (bVar2) {
      pbVar8 = (byte *)(*param_2 + uVar4 * 0x18);
      if (pbVar8 != pbVar10) {
        do {
          pbVar9 = pbVar10 + -0x18;
          if ((*pbVar9 & 1) != 0) {
            FUN_0049e790(puVar1,*(undefined8 *)(pbVar10 + -8));
          }
          pbVar10 = pbVar9;
        } while (pbVar8 != pbVar9);
      }
      param_2[1] = (long)pbVar8;
    }
  }
  else {
    FUN_004e95d0(param_2,lVar7);
  }
  if ((long *)*param_1 != param_1 + 1) {
    lVar7 = 0;
    plVar11 = (long *)*param_1;
    do {
      FUN_001fcec0(*param_2 + lVar7 * 0x18,plVar11 + 4);
      lVar7 = lVar7 + 1;
      plVar3 = (long *)plVar11[1];
      if ((long *)plVar11[1] == (long *)0x0) {
        plVar3 = plVar11 + 2;
        plVar5 = (long *)*plVar3;
        if ((long *)*plVar5 != plVar11) {
          do {
            lVar6 = *plVar3;
            plVar3 = (long *)(lVar6 + 0x10);
            plVar5 = (long *)*plVar3;
          } while (*plVar5 != lVar6);
        }
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar11 = plVar5;
    } while (plVar5 != param_1 + 1);
  }
  return;
}


