/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045c010; name: FUN_0045c010
 */


undefined ** FUN_0045c010(char *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  char *local_98;
  char *local_90;
  uint local_88;
  char *local_70;
  char **local_68;
  
  if (param_2 == 0) {
    local_98 = param_1;
    if (DAT_047f19f0 != 0) {
      local_70 = (char *)CONCAT44(local_70._4_4_,1);
      local_68 = &local_98;
      lVar7 = FUN_00451a40(DAT_047f19f0,&local_70);
      if (lVar7 == 0) goto LAB_0045c148;
      uVar1 = *(uint *)(*(long *)(lVar7 + 8) + 0x10);
      uVar11 = (ulong)uVar1;
      if (uVar1 == 0) goto LAB_0045c1bc;
LAB_0045c278:
      if ((uint)uVar11 < 0x4ab) {
        if (*(int *)(&DAT_044aa1d8 + uVar11 * 0x28) != 0) {
          return &PTR_s_UNDEF_044aa1c8 + uVar11 * 5;
        }
        uVar8 = 0x67;
        uVar9 = 0x65;
        uVar10 = 0xe3;
      }
      else {
        if (DAT_047f19f0 == 0) {
          return (undefined **)0x0;
        }
        local_70 = (char *)CONCAT44(local_70._4_4_,3);
        local_68 = &local_98;
        local_88 = (uint)uVar11;
        lVar7 = FUN_00451a40(DAT_047f19f0,&local_70);
        if (lVar7 != 0) {
          return *(undefined ***)(lVar7 + 8);
        }
        uVar8 = 0x67;
        uVar9 = 0x65;
        uVar10 = 0xf1;
      }
      goto LAB_0045c304;
    }
LAB_0045c148:
    pcVar5 = local_98;
    iVar2 = 0;
    iVar3 = 0x4a2;
    do {
      iVar12 = iVar2 + iVar3;
      if (iVar12 < 0) {
        iVar12 = iVar12 + 1;
      }
      iVar12 = iVar12 >> 1;
      uVar1 = *(uint *)(&DAT_03cfc9dc + (long)iVar12 * 4);
      iVar4 = strcmp(pcVar5,(&PTR_s_UNDEF_044aa1c8)[(ulong)uVar1 * 5]);
      if (-1 < iVar4) {
        if (iVar4 == 0) {
          uVar11 = (ulong)*(uint *)(&DAT_044aa1d8 + (ulong)uVar1 * 0x28);
          if (*(uint *)(&DAT_044aa1d8 + (ulong)uVar1 * 0x28) != 0) goto LAB_0045c278;
          break;
        }
        iVar2 = iVar12 + 1;
        iVar12 = iVar3;
      }
      iVar3 = iVar12;
    } while (iVar2 < iVar12);
LAB_0045c1bc:
    local_90 = param_1;
    if (DAT_047f19f0 != 0) {
      local_70 = (char *)CONCAT44(local_70._4_4_,2);
      local_68 = &local_98;
      lVar7 = FUN_00451a40(DAT_047f19f0,&local_70);
      if (lVar7 != 0) {
        uVar1 = *(uint *)(*(long *)(lVar7 + 8) + 0x10);
        uVar11 = (ulong)uVar1;
        if (uVar1 == 0) goto LAB_0045c034;
        goto LAB_0045c278;
      }
    }
    pcVar5 = local_90;
    iVar2 = 0;
    iVar3 = 0x4a2;
    do {
      iVar12 = iVar2 + iVar3;
      if (iVar12 < 0) {
        iVar12 = iVar12 + 1;
      }
      iVar12 = iVar12 >> 1;
      uVar1 = *(uint *)(&DAT_03cfb754 + (long)iVar12 * 4);
      iVar4 = strcmp(pcVar5,(&PTR_s_undefined_044aa1d0)[(ulong)uVar1 * 5]);
      if (-1 < iVar4) {
        if (iVar4 == 0) {
          uVar11 = (ulong)*(uint *)(&DAT_044aa1d8 + (ulong)uVar1 * 0x28);
          if (*(uint *)(&DAT_044aa1d8 + (ulong)uVar1 * 0x28) != 0) goto LAB_0045c278;
          break;
        }
        iVar2 = iVar12 + 1;
        iVar12 = iVar3;
      }
      iVar3 = iVar12;
    } while (iVar2 < iVar12);
  }
LAB_0045c034:
  iVar2 = FUN_003df570(0,0,param_1,0xffffffff);
  if (iVar2 < 1) {
    return (undefined **)0x0;
  }
  iVar3 = FUN_003def90(0,iVar2,6);
  if (iVar3 < 0) {
    return (undefined **)0x0;
  }
  pcVar5 = (char *)FUN_00452c30(iVar3,"external/openssl/crypto/objects/obj_dat.c",0x17b);
  if (pcVar5 != (char *)0x0) {
    local_98 = pcVar5;
    FUN_003dede0(&local_98,0,iVar2,6,0);
    FUN_003df570(local_98,iVar2,param_1,0xffffffff);
    local_70 = pcVar5;
    ppuVar6 = (undefined **)FUN_003dfb80(0,&local_70,iVar3);
    FUN_00452f80(pcVar5,"external/openssl/crypto/objects/obj_dat.c",0x188);
    return ppuVar6;
  }
  uVar8 = 0x6c;
  uVar9 = 0x41;
  uVar10 = 0x17c;
LAB_0045c304:
  FUN_004806c0(8,uVar8,uVar9,"external/openssl/crypto/objects/obj_dat.c",uVar10);
  return (undefined **)0x0;
}


