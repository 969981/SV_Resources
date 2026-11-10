/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016343a0; name: FUN_016343a0
 */


void FUN_016343a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((*(char *)(param_3[1] + 1) == '\0') &&
     (pbVar11 = (byte *)param_3[2], (uint)pbVar11[1] + (uint)*pbVar11 != 0)) {
    uVar7 = *param_3;
    uVar9 = param_3[3];
    uVar5 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),
                         *(undefined4 *)(pbVar11 + 8));
    FUN_01635060(*(undefined8 *)(param_1 + 0x38),uVar7,uVar5,uVar9);
    if (1 < (ulong)pbVar11[1] + (ulong)*pbVar11) {
      uVar5 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),
                           *(undefined4 *)(pbVar11 + 0x14));
      FUN_01635060(*(undefined8 *)(param_1 + 0x38),uVar7,uVar5,uVar9);
      if (2 < (ulong)pbVar11[1] + (ulong)*pbVar11) {
        uVar13 = 2;
        pbVar12 = pbVar11 + 0x20;
        do {
          uVar5 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),
                               *(undefined4 *)pbVar12);
          FUN_01635060(*(undefined8 *)(param_1 + 0x38),uVar7,uVar5,uVar9);
          uVar13 = uVar13 + 1;
          pbVar12 = pbVar12 + 0xc;
        } while (uVar13 < (ulong)pbVar11[1] + (ulong)*pbVar11);
      }
    }
  }
  pbVar11 = (byte *)param_3[2];
  if ((uint)pbVar11[1] + (uint)*pbVar11 != 0) {
    uVar5 = *param_3;
    uVar13 = 0;
    uVar7 = param_3[3];
    pbVar12 = pbVar11 + 8;
    do {
      uVar9 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*(undefined4 *)pbVar12)
      ;
      FUN_0163485c(*(undefined8 *)(param_1 + 0x38),uVar5,uVar9,uVar7);
      uVar13 = uVar13 + 1;
      pbVar12 = pbVar12 + 0xc;
    } while (uVar13 < (ulong)pbVar11[1] + (ulong)*pbVar11);
  }
  *(char *)(param_3[1] + 1) = *(char *)(param_3[1] + 1) + '\x01';
  pbVar11 = (byte *)param_3[2];
  bVar1 = *pbVar11;
  bVar2 = pbVar11[1];
  if ((uint)bVar2 + (uint)bVar1 != 0) {
    plVar8 = (long *)*param_3;
    if ((pbVar11[0xe] & 1) != 0) {
      uVar4 = (**(code **)(*plVar8 + 0x98))(plVar8);
      FUN_01249414(*(undefined8 *)(param_1 + 0x20),uVar4,0);
      bVar1 = *pbVar11;
      bVar2 = pbVar11[1];
    }
    uVar6 = (ulong)bVar2;
    uVar13 = (ulong)bVar1;
    if (1 < uVar13 + uVar6) {
      if ((pbVar11[0x1a] & 1) != 0) {
        uVar4 = (**(code **)(*plVar8 + 0x98))(plVar8);
        FUN_01249414(*(undefined8 *)(param_1 + 0x20),uVar4,0);
        uVar13 = (ulong)*pbVar11;
        uVar6 = (ulong)pbVar11[1];
      }
      if (2 < uVar13 + uVar6) {
        pbVar12 = pbVar11 + 0x26;
        uVar14 = 2;
        do {
          if ((*pbVar12 & 1) != 0) {
            uVar4 = (**(code **)(*plVar8 + 0x98))(plVar8);
            FUN_01249414(*(undefined8 *)(param_1 + 0x20),uVar4,0);
            uVar13 = (ulong)*pbVar11;
            uVar6 = (ulong)pbVar11[1];
          }
          uVar14 = uVar14 + 1;
          pbVar12 = pbVar12 + 0xc;
        } while (uVar14 < uVar13 + uVar6);
      }
    }
    pbVar11 = (byte *)param_3[2];
    if ((uint)pbVar11[1] + (uint)*pbVar11 != 0) {
      lVar10 = *(long *)(param_1 + 0x20);
      uVar4 = *(undefined4 *)(pbVar11 + 8);
      uVar3 = *(undefined2 *)(pbVar11 + 4);
      plVar8 = (long *)FUN_01021c94(*(undefined8 *)
                                     (*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x30),uVar4);
      (**(code **)(*plVar8 + 0x550))(plVar8,2,uVar3);
      FUN_0129aff0(*(undefined8 *)(lVar10 + 0x18),0x37,uVar4,2,uVar3);
      if ((pbVar11[0xe] >> 3 & 1) == 0) {
        lVar10 = *(long *)(param_1 + 0x20);
        plVar8 = (long *)FUN_01021c94(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x30),uVar4);
        (**(code **)(*plVar8 + 0x550))(plVar8,5,1);
        FUN_0129aff0(*(undefined8 *)(lVar10 + 0x18),0x37,uVar4,5,1);
      }
      if (1 < (ulong)pbVar11[1] + (ulong)*pbVar11) {
        lVar10 = *(long *)(param_1 + 0x20);
        uVar4 = *(undefined4 *)(pbVar11 + 0x14);
        uVar3 = *(undefined2 *)(pbVar11 + 0x10);
        plVar8 = (long *)FUN_01021c94(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x30),uVar4);
        (**(code **)(*plVar8 + 0x550))(plVar8,2,uVar3);
        FUN_0129aff0(*(undefined8 *)(lVar10 + 0x18),0x37,uVar4,2,uVar3);
        if ((pbVar11[0x1a] >> 3 & 1) == 0) {
          lVar10 = *(long *)(param_1 + 0x20);
          plVar8 = (long *)FUN_01021c94(*(undefined8 *)
                                         (*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x30),uVar4);
          (**(code **)(*plVar8 + 0x550))(plVar8,5,1);
          FUN_0129aff0(*(undefined8 *)(lVar10 + 0x18),0x37,uVar4,5,1);
        }
        if (2 < (ulong)pbVar11[1] + (ulong)*pbVar11) {
          pbVar12 = pbVar11 + 0x26;
          uVar13 = 2;
          do {
            lVar10 = *(long *)(param_1 + 0x20);
            uVar4 = *(undefined4 *)(pbVar12 + -6);
            uVar3 = *(undefined2 *)(pbVar12 + -10);
            plVar8 = (long *)FUN_01021c94(*(undefined8 *)
                                           (*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x30),uVar4
                                         );
            (**(code **)(*plVar8 + 0x550))(plVar8,2,uVar3);
            FUN_0129aff0(*(undefined8 *)(lVar10 + 0x18),0x37,uVar4,2,uVar3);
            if ((*pbVar12 >> 3 & 1) == 0) {
              lVar10 = *(long *)(param_1 + 0x20);
              plVar8 = (long *)FUN_01021c94(*(undefined8 *)
                                             (*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x30),
                                            uVar4);
              (**(code **)(*plVar8 + 0x550))(plVar8,5,1);
              FUN_0129aff0(*(undefined8 *)(lVar10 + 0x18),0x37,uVar4,5,1);
            }
            uVar13 = uVar13 + 1;
            pbVar12 = pbVar12 + 0xc;
          } while (uVar13 < (ulong)pbVar11[1] + (ulong)*pbVar11);
        }
      }
    }
  }
  return;
}


