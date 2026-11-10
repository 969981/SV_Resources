/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048cad0; name: FUN_0048cad0
 */


long FUN_0048cad0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  int local_54;
  
  if (*(long *)(param_1 + 0x100) != 0) {
    return *(long *)(param_1 + 0x100);
  }
  FUN_0047e5e0(*(undefined8 *)(param_1 + 0x150));
  if (*(long *)(param_1 + 0x100) != 0) goto LAB_0048cdec;
  puVar3 = (undefined8 *)FUN_00452c30(0x28,"external/openssl/crypto/x509v3/pcy_cache.c",0x5c);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_004806c0(0x22,0xaa,0x41,"external/openssl/crypto/x509v3/pcy_cache.c",0x5e);
    goto LAB_0048cdec;
  }
  puVar3[2] = 0xffffffffffffffff;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[3] = 0xffffffffffffffff;
  puVar3[4] = 0xffffffffffffffff;
  *(undefined8 **)(param_1 + 0x100) = puVar3;
  plVar4 = (long *)FUN_004843e0(param_1,0x191,&local_54,0);
  if (plVar4 == (long *)0x0) {
    if (local_54 != -1) goto LAB_0048cdcc;
LAB_0048cbc8:
    lVar6 = FUN_004843e0(param_1,0x59,&local_54,0);
    if (lVar6 == 0) {
      if (local_54 == -1) goto LAB_0048cdec;
      goto LAB_0048cdcc;
    }
    plVar11 = *(long **)(param_1 + 0x100);
    iVar1 = FUN_0047e430();
    if (iVar1 < 1) {
      lVar7 = 0;
      local_54 = 0;
LAB_0048cd0c:
      bVar9 = true;
LAB_0048cd10:
      FUN_0048cea0(lVar7);
      FUN_0047e3b0(lVar6,PTR_LAB_047cd5c8);
      if (bVar9) goto LAB_0048cd2c;
      local_54 = 1;
    }
    else {
      lVar7 = FUN_0047de20(&LAB_0048ce80);
      plVar11[1] = lVar7;
      if (lVar7 != 0) {
        iVar10 = 0;
        uVar5 = 0x2d;
        do {
          uVar8 = FUN_0047e450(lVar6,iVar10);
          lVar7 = FUN_0048cf00(uVar8,0,local_54);
          if (lVar7 == 0) goto LAB_0048ccc8;
          iVar2 = FUN_0045bea0(*(undefined8 *)(lVar7 + 8));
          if (iVar2 == 0x2ea) {
            if (*plVar11 != 0) goto LAB_0048ccfc;
            *plVar11 = lVar7;
          }
          else {
            iVar2 = FUN_0047e200(plVar11[1],lVar7);
            if (-1 < iVar2) {
LAB_0048ccfc:
              local_54 = -1;
              *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x800;
              goto LAB_0048cd0c;
            }
            iVar2 = FUN_0047e2f0(plVar11[1],lVar7);
            if (iVar2 == 0) {
              FUN_004806c0(0x22,0xa9,0x41,"external/openssl/crypto/x509v3/pcy_cache.c",0x3d);
              local_54 = 0;
              goto LAB_0048cd0c;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar1 != iVar10);
        lVar7 = 0;
        bVar9 = false;
        local_54 = 1;
        goto LAB_0048cd10;
      }
      uVar5 = 0x26;
LAB_0048ccc8:
      FUN_004806c0(0x22,0xa9,0x41,"external/openssl/crypto/x509v3/pcy_cache.c",uVar5);
      FUN_0047e3b0(lVar6,PTR_LAB_047cd5c8);
      local_54 = 0;
LAB_0048cd2c:
      FUN_0047e3b0(plVar11[1],PTR_FUN_047cd5c0);
      plVar11[1] = 0;
      if (local_54 < 1) goto LAB_0048cdec;
    }
    lVar6 = FUN_004843e0(param_1,0x2eb,&local_54,0);
    if (lVar6 == 0) {
      if (local_54 == -1) goto LAB_0048cd88;
      goto LAB_0048cdcc;
    }
    local_54 = FUN_0048d020(param_1,lVar6);
    if (local_54 < 1) goto LAB_0048cdcc;
LAB_0048cd88:
    lVar6 = FUN_004843e0(param_1,0x2ec,&local_54,0);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 4) != 0x102) {
        uVar5 = FUN_003e10b0(lVar6);
        puVar3[2] = uVar5;
        goto LAB_0048cddc;
      }
      goto LAB_0048cdd0;
    }
    if (local_54 != -1) goto LAB_0048cdd0;
  }
  else {
    if (*plVar4 == 0) {
      lVar6 = plVar4[1];
      if (lVar6 != 0) goto LAB_0048cbb4;
    }
    else if (*(int *)(*plVar4 + 4) != 0x102) {
      uVar5 = FUN_003e10b0();
      puVar3[3] = uVar5;
      lVar6 = plVar4[1];
      if (lVar6 == 0) goto LAB_0048cbc8;
LAB_0048cbb4:
      if (*(int *)(lVar6 + 4) != 0x102) {
        uVar5 = FUN_003e10b0();
        puVar3[4] = uVar5;
        goto LAB_0048cbc8;
      }
    }
LAB_0048cdcc:
    lVar6 = 0;
LAB_0048cdd0:
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x800;
  }
LAB_0048cddc:
  FUN_00498ad0(plVar4);
  thunk_FUN_003df2e0(lVar6);
LAB_0048cdec:
  FUN_0047e600(*(undefined8 *)(param_1 + 0x150));
  return *(long *)(param_1 + 0x100);
}


