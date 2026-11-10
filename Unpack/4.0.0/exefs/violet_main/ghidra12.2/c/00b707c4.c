/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b707c4; name: FUN_00b707c4
 */


/* WARNING: Removing unreachable block (ram,0x00b7083c) */

undefined8 FUN_00b707c4(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  
  puVar5 = PTR_DAT_047dabb0;
  plVar1 = (long *)(param_1 + 0x20);
  plVar2 = (long *)(param_1 + 0x28);
LAB_00b7080c:
  do {
    pbVar12 = (byte *)*param_2;
    if (pbVar12 < (byte *)param_2[1]) {
      bVar4 = *pbVar12;
      uVar9 = (ulong)(uint)bVar4;
      if ((char)bVar4 < '\x01') goto LAB_00b70844;
      *(uint *)(param_2 + 4) = (uint)bVar4;
      *param_2 = (ulong)(pbVar12 + 1);
LAB_00b70868:
      uVar7 = (uint)uVar9;
      switch((uint)(uVar9 >> 3) & 0x1fffffff) {
      case 1:
        if (uVar7 == 8) {
          pbVar12 = (byte *)*param_2;
          if (pbVar12 < (byte *)param_2[1]) {
            uVar9 = (ulong)*pbVar12;
            if ((char)*pbVar12 < '\0') goto LAB_00b708fc;
            *param_2 = (ulong)(pbVar12 + 1);
          }
          else {
            uVar9 = 0;
LAB_00b708fc:
            uVar9 = FUN_00c0944c(param_2,uVar9);
            if ((long)uVar9 < 0) {
              return 0;
            }
          }
          *(int *)(param_1 + 0x30) = (int)uVar9;
          pbVar12 = (byte *)*param_2;
          pbVar8 = (byte *)param_2[1];
          if ((pbVar12 < pbVar8) && (*pbVar12 == 0x10)) {
            pbVar12 = pbVar12 + 1;
            *param_2 = (ulong)pbVar12;
LAB_00b70930:
            if ((pbVar12 < pbVar8) && (-1 < (char)*pbVar12)) {
              uVar9 = (ulong)*pbVar12;
              *param_2 = (ulong)(pbVar12 + 1);
            }
            else {
              auVar13 = FUN_00c09268(param_2);
              uVar9 = auVar13._0_8_;
              if ((auVar13._8_8_ & 1) == 0) {
                return 0;
              }
            }
            *(ulong *)(param_1 + 0x18) = uVar9;
            pcVar3 = (char *)*param_2;
            if ((pcVar3 < (char *)param_2[1]) && (*pcVar3 == '\x1a')) {
              *param_2 = (ulong)(pcVar3 + 1);
LAB_00b70980:
              lVar11 = *(long *)puVar5;
              lVar10 = *plVar1;
              if (lVar10 == lVar11) {
                FUN_00b6eb88(plVar1,lVar11);
                lVar10 = *plVar1;
              }
              uVar9 = FUN_00c0d824(param_2,lVar10);
              if ((uVar9 & 1) == 0) {
                return 0;
              }
              pbVar12 = *(byte **)(param_1 + 0x20);
              if ((*pbVar12 & 1) == 0) {
                pbVar8 = pbVar12 + 1;
                uVar9 = (ulong)(*pbVar12 >> 1);
              }
              else {
                uVar9 = *(ulong *)(pbVar12 + 8);
                pbVar8 = *(byte **)(pbVar12 + 0x10);
              }
              uVar9 = FUN_00c0d914(pbVar8,uVar9,0,"SaturdayBleSendPrepProto.application_id");
              if ((uVar9 & 1) == 0) {
                return 0;
              }
              pcVar3 = (char *)*param_2;
              if ((pcVar3 < (char *)param_2[1]) && (*pcVar3 == '\"')) {
                *param_2 = (ulong)(pcVar3 + 1);
LAB_00b709f8:
                lVar11 = *(long *)puVar5;
                lVar10 = *plVar2;
                if (lVar10 == lVar11) {
                  FUN_00b6eb88(plVar2,lVar11);
                  lVar10 = *plVar2;
                }
                uVar9 = FUN_00c0d824(param_2,lVar10);
                if ((uVar9 & 1) == 0) {
                  return 0;
                }
                pbVar12 = *(byte **)(param_1 + 0x28);
                if ((*pbVar12 & 1) == 0) {
                  pbVar8 = pbVar12 + 1;
                  uVar9 = (ulong)(*pbVar12 >> 1);
                }
                else {
                  uVar9 = *(ulong *)(pbVar12 + 8);
                  pbVar8 = *(byte **)(pbVar12 + 0x10);
                }
                uVar9 = FUN_00c0d914(pbVar8,uVar9,0,"SaturdayBleSendPrepProto.nonce");
                if ((uVar9 & 1) == 0) {
                  return 0;
                }
                if ((*param_2 == param_2[1]) &&
                   ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5]))))
                {
                  *(undefined4 *)(param_2 + 4) = 0;
                  *(undefined1 *)((long)param_2 + 0x24) = 1;
                  return 1;
                }
              }
            }
          }
          goto LAB_00b7080c;
        }
        break;
      case 2:
        if (uVar7 == 0x10) {
          pbVar12 = (byte *)*param_2;
          pbVar8 = (byte *)param_2[1];
          goto LAB_00b70930;
        }
        break;
      case 3:
        if (uVar7 == 0x1a) goto LAB_00b70980;
        break;
      case 4:
        if (uVar7 == 0x22) goto LAB_00b709f8;
      }
    }
    else {
      uVar9 = 0;
LAB_00b70844:
      uVar7 = FUN_00c096d0(param_2,uVar9);
      bVar6 = uVar7 - 1 < 0x7f;
      *(uint *)(param_2 + 4) = uVar7;
      uVar9 = (ulong)CONCAT14(bVar6,uVar7);
      if (bVar6) goto LAB_00b70868;
    }
    if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
      return 1;
    }
    uVar9 = FUN_00c09bd4(param_2);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  } while( true );
}


