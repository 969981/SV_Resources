/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03535c94; name: FUN_03535c94
 */


undefined4 FUN_03535c94(long *param_1,int param_2,long param_3,long param_4)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  undefined *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((((param_3 == 0) || (param_4 == 0)) || (bVar5 = *(byte *)(param_3 + 0x14), (bVar5 & 6) != 2))
     || (*(int *)(param_4 + 0x10) == 0)) {
    if (param_2 == 0) {
      lVar7 = param_1[0x10];
      goto LAB_03535db0;
    }
    FUN_03531dd4(param_1);
    iVar6 = FUN_0352f828(param_1 + 0x13,param_2,param_4);
    if (iVar6 != 1) goto LAB_03535d98;
LAB_03535d70:
    lVar7 = FUN_035359a8(param_1,&local_50);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) == 0)) {
      FUN_03531dd4(param_1);
      lVar7 = 0;
    }
  }
  else {
    plVar2 = param_1 + 0x13;
    FUN_0352ef88(plVar2);
    local_40 = *(undefined8 *)(param_4 + 8);
    local_50 = PTR_DAT_047e7540 + 0x10;
    local_48 = *(undefined4 *)(param_4 + 0x10);
    local_38 = 0;
    iVar6 = FUN_03530ba8(plVar2,&local_50);
    if (iVar6 != 1) {
LAB_03535d98:
      lVar7 = (**(code **)(*param_1 + 0x120))(param_1);
      goto LAB_03535db0;
    }
    FUN_03531dd4(param_1);
    if ((char)param_1[0x18] != '\0') {
      iVar6 = (int)param_1[0x17];
      bVar5 = bVar5 & 7;
      if ((param_1[0xf] == 0) || (*(long *)(param_1[0xf] + 0x18) == 0)) {
        if ((bVar5 == 3) && (iVar6 != 0)) goto LAB_03535ddc;
joined_r0x03535e08:
        if (iVar6 != 0) goto LAB_03535d70;
      }
      else {
        if (bVar5 != 3) goto LAB_03535d70;
LAB_03535ddc:
        FUN_0352f528(plVar2);
        if ((char)param_1[0x18] != '\0') {
          iVar6 = (int)param_1[0x17];
          if (param_1[0xf] == 0) goto joined_r0x03535e08;
          if ((iVar6 != 0) || (*(long *)(param_1[0xf] + 0x18) != 0)) goto LAB_03535d70;
        }
      }
    }
    lVar7 = param_1[0xf];
    if (lVar7 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x78) + 0x18);
    }
    uVar3 = *(uint *)(param_1[0x12] + 0x138);
    uVar12 = (ulong)uVar3;
    puVar11 = *(undefined8 **)(param_1[0x12] + 0x130);
    if (0 < (int)uVar3) {
      do {
        uVar13 = uVar12 - 1 & 0xffffffff;
        puVar8 = puVar11 + uVar13 * 0xc;
        uVar3 = *(uint *)(puVar8 + 1);
        if (uVar3 != 0) {
          puVar14 = (uint *)*puVar8;
          if (*puVar14 != 0xffffffff) {
            puVar15 = puVar14;
            uVar16 = uVar3;
            do {
              puVar17 = puVar15 + (uVar16 >> 1);
              uVar4 = *puVar17;
              if (uVar4 == uVar10) goto LAB_03535ea4;
              puVar17 = puVar17 + 1;
              if (uVar4 >= uVar10) {
                puVar17 = puVar15;
              }
              uVar16 = uVar16 - (uVar4 < uVar10) >> 1;
              puVar15 = puVar17;
            } while (uVar16 != 0);
            puVar17 = puVar14 + uVar3;
LAB_03535ea4:
            if (puVar17 == puVar14 + uVar3) goto LAB_03535ef0;
          }
          uVar3 = *(uint *)(puVar11 + uVar13 * 0xc + 3);
          if (uVar3 != 0) {
            if (*(int *)puVar11[uVar13 * 0xc + 2] == -1) goto LAB_03535f00;
            uVar16 = uVar3;
            do {
              uVar16 = uVar16 >> 1;
              if (((int *)puVar11[uVar13 * 0xc + 2])[uVar16] == 0) {
                if (uVar16 != uVar3) goto LAB_03535f00;
                break;
              }
            } while (uVar16 != 0);
          }
        }
LAB_03535ef0:
        bVar1 = 1 < (long)uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
    }
    puVar8 = puVar11;
LAB_03535f00:
    lVar7 = FUN_035360ac(param_1,puVar8,lVar7,0,0);
  }
LAB_03535db0:
  uVar9 = 1;
  if (lVar7 == 0) {
    uVar9 = 2;
  }
  return uVar9;
}


