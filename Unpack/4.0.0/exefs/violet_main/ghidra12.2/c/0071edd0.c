/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0071edd0; name: FUN_0071edd0
 */


char * FUN_0071edd0(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  ulong *puVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  byte *local_88;
  undefined8 uStack_80;
  long *local_70 [4];
  
  if (param_2 < (char *)*param_3) {
LAB_0071ee00:
    if (*param_2 == '\n') {
      if (param_2[1] < '\0') {
        auVar18 = FUN_0052e5f0();
        if (auVar18._0_8_ == 0) {
          return (char *)0x0;
        }
      }
      else {
        auVar18[8] = param_2[1];
        auVar18._0_8_ = param_2 + 2;
        auVar18._9_3_ = 0;
      }
      lVar6 = auVar18._0_8_;
      lVar13 = (long)auVar18._8_4_;
      pbVar1 = (byte *)(param_1 + 2);
      if ((param_3[1] - lVar6) + 0x10 < lVar13) {
        param_2 = (char *)FUN_0052ddec(param_3,lVar6,auVar18._8_4_,pbVar1);
      }
      else {
        FUN_0026c6b8(pbVar1,lVar6,lVar13);
        param_2 = (char *)(lVar6 + lVar13);
      }
      if (param_2 == (char *)0x0) {
        return (char *)0x0;
      }
      if ((*pbVar1 & 1) == 0) {
        lVar6 = (long)param_1 + 0x11;
        uVar10 = (ulong)(*pbVar1 >> 1);
      }
      else {
        uVar10 = param_1[3];
        lVar6 = param_1[4];
      }
      uVar10 = FUN_005347a4(lVar6,uVar10,0,"(stripped)");
      puVar4 = PTR_DAT_047cba80;
      if ((uVar10 & 1) == 0) {
        return (char *)0x0;
      }
      if (param_2 < (char *)*param_3) {
LAB_0071eec0:
        if (*param_2 != '\x12') {
LAB_0071f1c4:
          if (param_2 == (char *)0x0) {
            return (char *)0x0;
          }
          goto LAB_0071f1c8;
        }
        lVar13 = param_1[1];
        plVar5 = *(long **)(lVar13 + 0x10);
        lVar14 = *plVar5;
        uStack_80 = 0;
        local_88 = pbVar1;
        FUN_006eeb44(local_70,plVar5,&local_88);
        plVar5 = local_70[0];
        lVar6 = local_70[0][1];
        if (lVar6 == 0) {
          lVar6 = FUN_006ee9b0(lVar13,pbVar1);
          *plVar5 = lVar6;
          plVar5[1] = lVar6;
        }
        lVar6 = lVar6 + 0x18;
        param_1[5] = lVar6;
        if (lVar14 == **(long **)(param_1[1] + 0x10)) goto LAB_0071f1c8;
        if (param_2[1] < '\0') {
          auVar19 = FUN_0052e5f0();
          if (auVar19._0_8_ == 0) goto LAB_0071f0f0;
        }
        else {
          auVar19[8] = param_2[1];
          auVar19._0_8_ = param_2 + 2;
          auVar19._9_3_ = 0;
        }
        lVar13 = auVar19._0_8_;
        lVar14 = (long)auVar19._8_4_;
        if ((param_3[1] - lVar13) + 0x10 < lVar14) {
          param_2 = (char *)FUN_0052ddec(param_3,lVar13,auVar19._8_4_,lVar6);
        }
        else {
          FUN_0026c6b8(lVar6,lVar13,lVar14);
          param_2 = (char *)(lVar13 + lVar14);
        }
        if (param_2 == (char *)0x0) {
LAB_0071f0f0:
          lVar6 = param_1[1];
          local_88 = pbVar1;
          FUN_006eedc4(local_70,*(undefined8 *)(lVar6 + 0x10),&local_88,0);
          if (local_70[0] != (long *)0x0) {
            FUN_0071e3bc(&local_88,lVar6,local_70);
          }
          return (char *)0x0;
        }
        pbVar12 = (byte *)param_1[5];
        if ((*pbVar12 & 1) == 0) {
          pbVar7 = pbVar12 + 1;
          uVar10 = (ulong)(*pbVar12 >> 1);
        }
        else {
          uVar10 = *(ulong *)(pbVar12 + 8);
          pbVar7 = *(byte **)(pbVar12 + 0x10);
        }
        uVar10 = FUN_005347a4(pbVar7,uVar10,0,"(stripped)");
        if ((uVar10 & 1) == 0) goto LAB_0071f0f0;
        if ((char *)*param_3 <= param_2) {
          if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
            return param_2;
          }
          auVar17 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
          param_2 = auVar17._0_8_;
          if ((auVar17._8_8_ & 1) != 0) {
            return param_2;
          }
          if (param_2 == (char *)0x0) {
            return (char *)0x0;
          }
        }
        lVar6 = FUN_0071c9ac(*(undefined8 *)*param_1);
        param_1[6] = lVar6;
        puVar15 = (undefined8 *)param_1[5];
        *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 2;
        puVar2 = (undefined8 *)(lVar6 + 0x18);
        puVar11 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(lVar6 + 8) & 1) == 0) {
          pbVar12 = (byte *)*puVar2;
          if (pbVar12 == puVar4) goto LAB_0071f250;
LAB_0071f008:
          bVar3 = *pbVar12;
        }
        else {
          puVar11 = (ulong *)*puVar11;
          pbVar12 = (byte *)*puVar2;
          if (pbVar12 != puVar4) goto LAB_0071f008;
LAB_0071f250:
          FUN_001fcdc8(puVar2,puVar11,PTR_DAT_047cba80);
          pbVar12 = (byte *)*puVar2;
          bVar3 = *pbVar12;
        }
        if ((bVar3 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar12 + 0x10));
        }
        uVar16 = puVar15[1];
        uVar8 = *puVar15;
        *(undefined8 *)(pbVar12 + 0x10) = puVar15[2];
        *(undefined8 *)(pbVar12 + 8) = uVar16;
        *(undefined8 *)pbVar12 = uVar8;
        *(undefined2 *)puVar15 = 0;
        lVar6 = param_1[1];
        local_88 = pbVar1;
        FUN_006eedc4(local_70,*(undefined8 *)(lVar6 + 0x10),&local_88,0);
        if (local_70[0] != (long *)0x0) {
          FUN_0071e3bc(&local_88,lVar6,local_70);
        }
        lVar6 = param_1[6];
      }
      else {
        if ((long)param_2 - param_3[1] != (long)*(int *)((long)param_3 + 0x1c)) {
          auVar17 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
          param_2 = auVar17._0_8_;
          if ((auVar17._8_8_ & 1) == 0) goto LAB_0071eec0;
          goto LAB_0071f1c4;
        }
LAB_0071f1c8:
        lVar6 = FUN_0071c9ac(*(undefined8 *)*param_1);
        param_1[6] = lVar6;
      }
      *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 1;
      puVar2 = (undefined8 *)(lVar6 + 0x10);
      puVar11 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar6 + 8) & 1) == 0) {
        pbVar12 = (byte *)*puVar2;
        if (pbVar12 == puVar4) goto LAB_0071f1ec;
LAB_0071f0a0:
        bVar3 = *pbVar12;
      }
      else {
        puVar11 = (ulong *)*puVar11;
        pbVar12 = (byte *)*puVar2;
        if (pbVar12 != puVar4) goto LAB_0071f0a0;
LAB_0071f1ec:
        FUN_001fcdc8(puVar2,puVar11,PTR_DAT_047cba80);
        pbVar12 = (byte *)*puVar2;
        bVar3 = *pbVar12;
      }
      if ((bVar3 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar12 + 0x10));
      }
      uVar16 = param_1[3];
      uVar8 = *(undefined8 *)pbVar1;
      *(undefined8 *)(pbVar12 + 0x10) = param_1[4];
      *(undefined8 *)(pbVar12 + 8) = uVar16;
      *(undefined8 *)pbVar12 = uVar8;
      uVar8 = param_1[6];
      *(undefined2 *)(param_1 + 2) = 0;
      goto LAB_0071f0d0;
    }
  }
  else if ((long)param_2 - param_3[1] != (long)*(int *)((long)param_3 + 0x1c)) {
    auVar17 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar17._0_8_;
    if ((auVar17._8_8_ & 1) == 0) goto LAB_0071ee00;
  }
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  uVar8 = FUN_0071c9ac(*(undefined8 *)*param_1);
  param_1[6] = uVar8;
LAB_0071f0d0:
  pcVar9 = (char *)FUN_0071d718(uVar8,param_2,param_3);
  if (pcVar9 != (char *)0x0) {
    FUN_0071f270(param_1);
  }
  return pcVar9;
}


