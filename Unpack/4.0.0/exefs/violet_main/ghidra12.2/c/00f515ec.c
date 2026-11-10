/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f515ec; name: FUN_00f515ec
 */


ulong FUN_00f515ec(long *param_1,uint *param_2,int param_3,uint *param_4)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong uVar5;
  ushort uVar6;
  undefined1 uVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  
  uVar9 = *(uint *)((long)param_1 + 0x6c);
  if (*(uint *)(param_1 + 0xd) <= uVar9) {
    return 0xce;
  }
  while( true ) {
    uVar7 = *(undefined1 *)((long)param_1 + (ulong)uVar9 + 0x70);
    uVar4 = *(undefined1 *)((long)param_1 + (ulong)(uVar9 + 1) + 0x70);
    *(uint *)((long)param_1 + 0x6c) = uVar9 + 2;
    uVar6 = CONCAT11(uVar7,uVar4);
    uVar1 = (ulong)uVar6;
    if ((uVar6 != 0xd2) && (uVar6 != 0xcf)) break;
    uVar9 = uVar9 + *(byte *)((long)param_1 + (ulong)(uVar9 + 2) + 0x70) + 3;
    *(uint *)((long)param_1 + 0x6c) = uVar9;
    if (*(uint *)(param_1 + 0xd) <= uVar9) {
      return 0xce;
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar9;
  }
  switch(uVar6) {
  case 0xce:
    return uVar1;
  case 0xd0:
    uVar9 = *(uint *)((long)param_1 + 0x6c);
    *(uint *)((long)param_1 + 0x6c) = uVar9 + 1;
    bVar3 = *(byte *)((long)param_1 + (ulong)uVar9 + 0x70);
    if ((uint)bVar3 < param_3 - 1U) {
      uVar9 = (uint)bVar3;
      *param_2 = uVar9;
      if (uVar9 != 0) {
        uVar2 = *(uint *)((long)param_1 + 0x6c);
        *(uint *)((long)param_1 + 0x6c) = uVar2 + 1;
        param_2[1] = (uint)*(byte *)((long)param_1 + (ulong)uVar2 + 0x70);
        if (uVar9 != 1) {
          uVar2 = *(uint *)((long)param_1 + 0x6c);
          *(uint *)((long)param_1 + 0x6c) = uVar2 + 1;
          param_2[2] = (uint)*(byte *)((long)param_1 + (ulong)uVar2 + 0x70);
          if (uVar9 != 2) {
            uVar9 = *(uint *)((long)param_1 + 0x6c);
            *(uint *)((long)param_1 + 0x6c) = uVar9 + 1;
            param_2[3] = (uint)*(byte *)((long)param_1 + (ulong)uVar9 + 0x70);
            if (bVar3 != 3) {
              lVar11 = (ulong)bVar3 - 3;
              puVar8 = param_2 + 4;
              do {
                uVar9 = *(uint *)((long)param_1 + 0x6c);
                *(uint *)((long)param_1 + 0x6c) = uVar9 + 1;
                lVar11 = lVar11 + -1;
                *puVar8 = (uint)*(byte *)((long)param_1 + (ulong)uVar9 + 0x70);
                puVar8 = puVar8 + 1;
              } while (lVar11 != 0);
              return 0xd0;
            }
          }
        }
      }
    }
    return 0xd0;
  case 0xd1:
    *(int *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + 2;
    return 0xd1;
  case 0xd3:
    uVar9 = *(uint *)((long)param_1 + 0x6c);
    *(uint *)((long)param_1 + 0x6c) = uVar9 + 1;
    *param_2 = (uint)*(byte *)((long)param_1 + (ulong)uVar9 + 0x70);
    return 0xd3;
  case 0xd4:
    return 0xd4;
  }
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = (int)uVar10 - 1 & uVar1;
    }
    else {
      uVar13 = uVar1;
      if (uVar10 <= uVar1) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = uVar1 / uVar10;
        }
        uVar13 = uVar1 - uVar13 * uVar10;
      }
    }
    plVar14 = *(long **)(*param_1 + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == uVar1) {
            if (*(ushort *)(plVar14 + 2) == uVar6) goto LAB_00f51704;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar13) goto LAB_00f518ac;
          plVar14 = (long *)*plVar14;
          uVar7 = 0;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar14[1];
          if (uVar12 == uVar1) {
            if (*(ushort *)(plVar14 + 2) == uVar6) goto LAB_00f51704;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar5 * uVar10;
            }
            if (uVar12 != uVar13) goto LAB_00f518ac;
          }
          plVar14 = (long *)*plVar14;
          uVar7 = 0;
        } while (plVar14 != (long *)0x0);
      }
      goto LAB_00f51708;
    }
  }
LAB_00f518ac:
  uVar7 = 0;
LAB_00f51708:
  FUN_014048d0(param_1,uVar7,param_2);
  return uVar1;
LAB_00f51704:
  uVar7 = *(undefined1 *)((long)plVar14 + 0x12);
  goto LAB_00f51708;
}


