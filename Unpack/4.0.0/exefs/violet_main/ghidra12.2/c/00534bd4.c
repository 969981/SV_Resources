/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00534bd4; name: FUN_00534bd4
 */


byte * FUN_00534bd4(long param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  
  puVar6 = PTR_LAB_047cba90;
  puVar5 = PTR_FUN_047cba38;
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
          return param_2;
        }
        auVar13 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar13._0_8_;
        if ((auVar13._8_8_ & 1) != 0) {
          return param_2;
        }
      }
      bVar3 = *param_2;
      auVar13[8] = bVar3;
      auVar13._0_8_ = param_2 + 1;
      auVar13._9_7_ = 0;
      if ((char)bVar3 < '\0') {
        bVar2 = param_2[1];
        if ((char)bVar2 < '\0') {
          auVar13 = FUN_0052e560(param_2);
          if (auVar13._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          auVar13._8_4_ = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
          auVar13._0_8_ = param_2 + 2;
          auVar13._12_4_ = 0;
        }
      }
      param_2 = auVar13._0_8_;
      uVar8 = auVar13._8_4_;
      if (uVar8 == 10) break;
      if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar8 - 1;
        return param_2;
      }
      uVar9 = *(ulong *)(param_1 + 8);
      if ((uVar9 & 1) == 0) {
        lVar7 = FUN_00264e54((ulong *)(param_1 + 8));
      }
      else {
        lVar7 = (uVar9 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_00515960(auVar13._8_8_ & 0xffffffff,lVar7,param_2,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
    param_2 = param_2 + -1;
    do {
      piVar10 = *(int **)(param_1 + 0x20);
      if (piVar10 == (int *)0x0) {
        iVar11 = *(int *)(param_1 + 0x1c);
LAB_00534cec:
        FUN_00532334((long *)(param_1 + 0x10),iVar11 + 1);
        piVar10 = *(int **)(param_1 + 0x20);
        iVar11 = *piVar10;
LAB_00534d00:
        *piVar10 = iVar11 + 1;
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 == 0) {
          pbVar12 = (byte *)FUN_0049e770(puVar5,0x18);
          if (pbVar12 != (byte *)0x0) goto LAB_00534d44;
        }
        else {
          if (*(long *)(lVar7 + 0x70) != 0) {
            FUN_00520d08(lVar7,0,0x18);
          }
          pbVar12 = (byte *)FUN_00520544(lVar7,0x18,puVar6);
LAB_00534d44:
          pbVar12[0] = 0;
          pbVar12[1] = 0;
          pbVar12[2] = 0;
          pbVar12[3] = 0;
          pbVar12[4] = 0;
          pbVar12[5] = 0;
          pbVar12[6] = 0;
          pbVar12[7] = 0;
          pbVar12[8] = 0;
          pbVar12[9] = 0;
          pbVar12[10] = 0;
          pbVar12[0xb] = 0;
          pbVar12[0xc] = 0;
          pbVar12[0xd] = 0;
          pbVar12[0xe] = 0;
          pbVar12[0xf] = 0;
          pbVar12[0x10] = 0;
          pbVar12[0x11] = 0;
          pbVar12[0x12] = 0;
          pbVar12[0x13] = 0;
          pbVar12[0x14] = 0;
          pbVar12[0x15] = 0;
          pbVar12[0x16] = 0;
          pbVar12[0x17] = 0;
        }
        iVar11 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar11 + 1;
        *(byte **)(*(long *)(param_1 + 0x20) + (long)iVar11 * 8 + 8) = pbVar12;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x18);
        iVar11 = *piVar10;
        if (iVar11 <= iVar4) {
          if (iVar11 == *(int *)(param_1 + 0x1c)) goto LAB_00534cec;
          goto LAB_00534d00;
        }
        *(int *)(param_1 + 0x18) = iVar4 + 1;
        pbVar12 = *(byte **)(piVar10 + (long)iVar4 * 2 + 2);
      }
      param_2 = (byte *)FUN_0052e7f0(pbVar12,param_2 + 1,param_3);
      uVar9 = *(ulong *)(pbVar12 + 8);
      pbVar1 = *(byte **)(pbVar12 + 0x10);
      if ((*pbVar12 & 1) == 0) {
        pbVar1 = pbVar12 + 1;
        uVar9 = (ulong)(*pbVar12 >> 1);
      }
      uVar9 = FUN_0052e6b0(pbVar1,uVar9,"google.protobuf.FieldMask.paths");
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
      if ((uVar9 & 1) == 0) {
        return (byte *)0x0;
      }
    } while ((param_2 < (byte *)*param_3) && (*param_2 == 10));
  } while( true );
}


