/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0173fb30; name: FUN_0173fb30
 */


bool FUN_0173fb30(ulong *param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  
  lVar5 = ((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555;
  if (lVar5 == 4) {
    FUN_0173fd10(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_2 + -0xc);
  }
  else {
    switch(lVar5) {
    case 0:
    case 1:
      break;
    case 2:
      puVar12 = (ulong *)((long)param_2 + -0xc);
      if ((*puVar12 & 0xffff00000000) == 0) {
        return true;
      }
      if ((int)*puVar12 == 0) {
        return true;
      }
      if (*(int *)((long)param_2 + -4) <= (int)param_1[1]) {
        return true;
      }
      uVar6 = *param_1;
      uVar10 = param_1[1];
      uVar7 = *puVar12;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 + -4);
      *param_1 = uVar7;
      *(int *)((long)param_2 + -4) = (int)uVar10;
      *puVar12 = uVar6;
      break;
    case 3:
      FUN_0173f970(param_1,(long)param_1 + 0xc,(long)param_2 + -0xc);
      break;
    default:
      FUN_0173f970(param_1,(long)param_1 + 0xc,param_1 + 3);
      if ((ulong *)((long)param_1 + 0x24) != param_2) {
        lVar5 = 0;
        iVar9 = 0;
        puVar12 = (ulong *)((long)param_1 + 0x24);
        puVar13 = param_1 + 3;
        do {
          puVar8 = puVar12;
          uVar10 = *puVar8;
          iVar1 = (int)puVar8[1];
          bVar3 = (uVar10 & 0xffff00000000) == 0;
          bVar4 = (int)uVar10 == 0;
          if (((!bVar3 && !bVar4) && iVar1 != (int)puVar13[1]) &&
              ((bVar3 || bVar4) || (int)puVar13[1] <= iVar1)) {
            lVar2 = lVar5;
            do {
              lVar11 = lVar2;
              *(undefined8 *)((long)param_1 + lVar11 + 0x24) =
                   *(undefined8 *)((long)param_1 + lVar11 + 0x18);
              *(undefined4 *)((long)param_1 + lVar11 + 0x2c) =
                   *(undefined4 *)((long)param_1 + lVar11 + 0x20);
              if (lVar11 == -0x18) {
                puVar12 = param_1;
                goto LAB_0173fcdc;
              }
              lVar2 = lVar11 + -0xc;
            } while (*(int *)((long)param_1 + lVar11 + 0x14) < iVar1);
            puVar12 = (ulong *)((long)param_1 + lVar11 + 0x18);
LAB_0173fcdc:
            iVar9 = iVar9 + 1;
            *puVar12 = uVar10;
            *(int *)(puVar12 + 1) = iVar1;
            if (iVar9 == 8) {
              return (ulong *)((long)puVar8 + 0xc) == param_2;
            }
          }
          lVar5 = lVar5 + 0xc;
          puVar12 = (ulong *)((long)puVar8 + 0xc);
          puVar13 = puVar8;
          if ((ulong *)((long)puVar8 + 0xc) == param_2) {
            return true;
          }
        } while( true );
      }
      break;
    case 5:
      FUN_0173fe60(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_1 + 0x24,(long)param_2 + -0xc
                  );
    }
  }
  return true;
}


