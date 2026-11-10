/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045cb20; name: FUN_0045cb20
 */


undefined4 FUN_0045cb20(undefined8 param_1,char *param_2,char *param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  undefined4 local_98 [2];
  char **local_90;
  char *local_88;
  char *local_80;
  
  if (param_2 != (char *)0x0) {
    local_88 = param_2;
    if (DAT_047f19f0 != 0) {
      local_98[0] = 1;
      local_90 = &local_88;
      lVar6 = FUN_00451a40(DAT_047f19f0,local_98);
      if (lVar6 != 0) {
        iVar4 = *(int *)(*(long *)(lVar6 + 8) + 0x10);
joined_r0x0045cc14:
        if (iVar4 != 0) goto LAB_0045cce4;
        goto joined_r0x0045cb8c;
      }
    }
    pcVar2 = local_88;
    iVar4 = 0;
    iVar8 = 0x4a2;
    do {
      iVar9 = iVar4 + iVar8;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      iVar9 = iVar9 >> 1;
      uVar1 = *(uint *)(&DAT_03cfc9dc + (long)iVar9 * 4);
      iVar3 = strcmp(pcVar2,(&PTR_s_UNDEF_044aa1c8)[(ulong)uVar1 * 5]);
      if (-1 < iVar3) {
        if (iVar3 == 0) {
          iVar4 = *(int *)(&DAT_044aa1d8 + (ulong)uVar1 * 0x28);
          goto joined_r0x0045cc14;
        }
        iVar4 = iVar9 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
    } while (iVar4 < iVar9);
  }
joined_r0x0045cb8c:
  if (param_3 != (char *)0x0) {
    local_80 = param_3;
    if (DAT_047f19f0 != 0) {
      local_98[0] = 2;
      local_90 = &local_88;
      lVar6 = FUN_00451a40(DAT_047f19f0,local_98);
      if (lVar6 != 0) {
        iVar4 = *(int *)(*(long *)(lVar6 + 8) + 0x10);
joined_r0x0045cc60:
        if (iVar4 != 0) {
LAB_0045cce4:
          FUN_004806c0(8,100,0x66,"external/openssl/crypto/objects/obj_dat.c",0x2ba);
          return 0;
        }
        goto LAB_0045cd08;
      }
    }
    pcVar2 = local_80;
    iVar4 = 0;
    iVar8 = 0x4a2;
    do {
      iVar9 = iVar4 + iVar8;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      iVar9 = iVar9 >> 1;
      uVar1 = *(uint *)(&DAT_03cfb754 + (long)iVar9 * 4);
      iVar3 = strcmp(pcVar2,(&PTR_s_undefined_044aa1d0)[(ulong)uVar1 * 5]);
      if (-1 < iVar3) {
        if (iVar3 == 0) {
          iVar4 = *(int *)(&DAT_044aa1d8 + (ulong)uVar1 * 0x28);
          goto joined_r0x0045cc60;
        }
        iVar4 = iVar9 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
    } while (iVar4 < iVar9);
  }
LAB_0045cd08:
  plVar7 = (long *)FUN_0045c010(param_1,1);
  if (plVar7 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    iVar4 = FUN_0045bea0();
    if (iVar4 == 0) {
      iVar4 = DAT_044aa1c0 + 1;
      *(int *)(plVar7 + 2) = DAT_044aa1c0;
      DAT_044aa1c0 = iVar4;
      *plVar7 = (long)param_2;
      plVar7[1] = (long)param_3;
      uVar5 = FUN_0045b9b0(plVar7);
      *plVar7 = 0;
      plVar7[1] = 0;
    }
    else {
      FUN_004806c0(8,100,0x66,"external/openssl/crypto/objects/obj_dat.c",0x2c5);
      uVar5 = 0;
    }
    FUN_003dffa0(plVar7);
  }
  return uVar5;
}


