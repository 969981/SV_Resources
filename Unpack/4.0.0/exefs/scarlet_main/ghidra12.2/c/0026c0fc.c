/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026c0fc; name: FUN_0026c0fc
 */


char * FUN_0026c0fc(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  byte *local_78;
  undefined8 uStack_70;
  long *local_60 [4];
  
  if (param_2 < (char *)*param_3) {
LAB_0026c128:
    if (*param_2 == '\n') {
      if (param_2[1] < '\0') {
        auVar15 = FUN_0052e5f0();
        if (auVar15._0_8_ == 0) {
          return (char *)0x0;
        }
      }
      else {
        auVar15[8] = param_2[1];
        auVar15._0_8_ = param_2 + 2;
        auVar15._9_3_ = 0;
      }
      lVar5 = auVar15._0_8_;
      lVar9 = (long)auVar15._8_4_;
      pbVar1 = (byte *)(param_1 + 2);
      if ((param_3[1] - lVar5) + 0x10 < lVar9) {
        param_2 = (char *)FUN_0052ddec(param_3,lVar5,auVar15._8_4_,pbVar1);
      }
      else {
        FUN_0026c6b8(pbVar1,lVar5,lVar9);
        param_2 = (char *)(lVar5 + lVar9);
      }
      if (param_2 == (char *)0x0) {
        return (char *)0x0;
      }
      if ((*pbVar1 & 1) == 0) {
        lVar5 = (long)param_1 + 0x11;
        uVar8 = (ulong)(*pbVar1 >> 1);
      }
      else {
        uVar8 = param_1[3];
        lVar5 = param_1[4];
      }
      uVar8 = FUN_005347a4(lVar5,uVar8,0,"(stripped)");
      if ((uVar8 & 1) == 0) {
        return (char *)0x0;
      }
      if (param_2 < (char *)*param_3) {
LAB_0026c1e0:
        if (*param_2 != '\x12') {
LAB_0026c418:
          if (param_2 == (char *)0x0) {
            return (char *)0x0;
          }
          goto LAB_0026c41c;
        }
        lVar9 = param_1[1];
        plVar4 = *(long **)(lVar9 + 0x10);
        lVar11 = *plVar4;
        uStack_70 = 0;
        local_78 = pbVar1;
        FUN_00259dc4(local_60,plVar4,&local_78);
        plVar4 = local_60[0];
        lVar5 = local_60[0][1];
        if (lVar5 == 0) {
          lVar5 = FUN_00259ca4(lVar9,pbVar1);
          *plVar4 = lVar5;
          plVar4[1] = lVar5;
        }
        param_1[5] = lVar5 + 0x18;
        if (lVar11 == **(long **)(param_1[1] + 0x10)) goto LAB_0026c41c;
        param_2 = (char *)FUN_00269b74(param_3,lVar5 + 0x18,param_2 + 1);
        if (param_2 == (char *)0x0) {
          lVar5 = param_1[1];
          local_78 = pbVar1;
          FUN_0025998c(local_60,*(undefined8 *)(lVar5 + 0x10),&local_78,0);
          if (local_60[0] != (long *)0x0) {
            FUN_0026bba8(&local_78,lVar5,local_60);
          }
          return (char *)0x0;
        }
        if ((char *)*param_3 <= param_2) {
          if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
            return param_2;
          }
          auVar14 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
          param_2 = auVar14._0_8_;
          if ((auVar14._8_8_ & 1) != 0) {
            return param_2;
          }
          if (param_2 == (char *)0x0) {
            return (char *)0x0;
          }
        }
        lVar5 = FUN_0026afb0(*(undefined8 *)*param_1);
        param_1[6] = lVar5;
        uVar10 = param_1[5];
        *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) | 2;
        puVar6 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(lVar5 + 8) & 1) == 0) {
          lVar9 = *(long *)(lVar5 + 0x18);
        }
        else {
          puVar6 = (ulong *)*puVar6;
          lVar9 = *(long *)(lVar5 + 0x18);
        }
        if (lVar9 == 0) {
          lVar9 = FUN_0026ae18(puVar6);
          *(long *)(lVar5 + 0x18) = lVar9;
        }
        FUN_0026c4c4(uVar10,lVar9);
        lVar5 = param_1[1];
        local_78 = pbVar1;
        FUN_0025998c(local_60,*(undefined8 *)(lVar5 + 0x10),&local_78,0);
        if (local_60[0] != (long *)0x0) {
          FUN_0026bba8(&local_78,lVar5,local_60);
        }
        lVar5 = param_1[6];
      }
      else {
        if ((long)param_2 - param_3[1] != (long)*(int *)((long)param_3 + 0x1c)) {
          auVar14 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
          param_2 = auVar14._0_8_;
          if ((auVar14._8_8_ & 1) == 0) goto LAB_0026c1e0;
          goto LAB_0026c418;
        }
LAB_0026c41c:
        lVar5 = FUN_0026afb0(*(undefined8 *)*param_1);
        param_1[6] = lVar5;
      }
      *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) | 1;
      puVar2 = (undefined8 *)(lVar5 + 0x10);
      puVar6 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      pbVar12 = (byte *)*puVar2;
      if (pbVar12 == PTR_DAT_047cba80) {
        FUN_001fcdc8(puVar2,puVar6,PTR_DAT_047cba80);
        pbVar12 = (byte *)*puVar2;
        bVar3 = *pbVar12;
      }
      else {
        bVar3 = *pbVar12;
      }
      if ((bVar3 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar12 + 0x10));
      }
      uVar13 = param_1[3];
      uVar10 = *(undefined8 *)pbVar1;
      *(undefined8 *)(pbVar12 + 0x10) = param_1[4];
      *(undefined8 *)(pbVar12 + 8) = uVar13;
      *(undefined8 *)pbVar12 = uVar10;
      uVar10 = param_1[6];
      *(undefined2 *)(param_1 + 2) = 0;
      goto LAB_0026c350;
    }
  }
  else if ((long)param_2 - param_3[1] != (long)*(int *)((long)param_3 + 0x1c)) {
    auVar14 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar14._0_8_;
    if ((auVar14._8_8_ & 1) == 0) goto LAB_0026c128;
  }
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  uVar10 = FUN_0026afb0(*(undefined8 *)*param_1);
  param_1[6] = uVar10;
LAB_0026c350:
  pcVar7 = (char *)FUN_0026b4ac(uVar10,param_2,param_3);
  if (pcVar7 != (char *)0x0) {
    FUN_0026c5ec(param_1);
  }
  return pcVar7;
}


