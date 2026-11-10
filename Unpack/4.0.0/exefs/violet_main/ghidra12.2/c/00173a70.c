/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00173a70; name: FUN_00173a70
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00173a70(long *param_1)

{
  uint uVar1;
  byte *__src;
  void *__src_00;
  long lVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  size_t __n;
  long lVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  size_t __n_00;
  undefined4 *puVar18;
  float fVar19;
  float fVar20;
  size_t local_108;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  uint local_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  float local_68;
  float local_64;
  
  lVar17 = *(long *)param_1[6];
  lVar9 = FUN_00152510(*(undefined4 *)*param_1,(long)(int)param_1[9]);
  __src = (byte *)param_1[7];
  lVar2 = param_1[8];
  lVar12 = *param_1;
  lVar3 = param_1[1];
  lVar14 = param_1[4];
  iVar7 = (int)param_1[9];
  uVar1 = *(uint *)((long)param_1 + 0x4c);
  lVar15 = param_1[2];
  __n_00 = (size_t)iVar7;
  lVar16 = param_1[3];
  iVar4 = *(int *)(*(long *)(lVar12 + 0x10) + 0x20);
  local_90 = 0;
  local_88 = CONCAT44(iVar4,uVar1);
  local_98 = CONCAT44(*(undefined4 *)(lVar12 + 0x54),4);
  lVar10 = FUN_0015c610(&local_98,lVar17);
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = (ulong)(iVar7 - 1);
  iVar6 = FUN_0015cee0(__src,iVar7);
  if (iVar6 == 0) {
    iVar6 = FUN_0015cc30(lVar10,&local_98,iVar4,iVar7);
    local_64 = 1.0737418e+09;
    pvVar13 = (void *)(lVar10 + iVar6);
    local_108 = FUN_00173de0(lVar12,lVar3,lVar14,__src,iVar7,pvVar13,lVar17 + lVar9,lVar2,&local_64,
                             lVar15,lVar16);
    fVar20 = *(float *)(lVar12 + 0x44);
    fVar19 = (float)(**(code **)(*(long *)(lVar12 + 8) + 8))(__n_00);
    fVar5 = local_64;
    if (((long)__n_00 <= (long)local_108) || (fVar20 * fVar19 + (float)iVar7 + 3.0 <= local_64)) {
      local_b0 = 0x100000000;
      local_b8 = CONCAT44(*(undefined4 *)(lVar12 + 0x54),4);
      local_a8 = (ulong)uVar1;
      pvVar13 = (void *)FUN_0015c610(&local_b8,lVar17);
      memcpy(pvVar13,__src,__n_00);
      lVar10 = (long)pvVar13 + __n_00;
    }
    else {
      puVar18 = *(undefined4 **)(lVar12 + 0x80);
      if (puVar18 != (undefined4 *)0x0) {
        do {
          uVar11 = FUN_00152510(*puVar18,__n_00);
          FUN_00164c64(lVar3 + 0xe0,uVar11,lVar15);
          __src_00 = *(void **)(lVar3 + 0xe0);
          local_68 = 1.0737418e+09;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          local_b0 = 0;
          __n = FUN_00173de0(puVar18,lVar3,lVar14,__src,iVar7,__src_00,
                             (long)__src_00 + *(long *)(lVar3 + 0xe8),lVar2,&local_68,lVar15,lVar16)
          ;
          if (local_68 < fVar5) {
            memcpy(pvVar13,__src_00,__n);
            local_c8 = 0;
            local_d0 = 4;
            local_cc = puVar18[0x15];
            local_c0 = uVar1;
            iStack_bc = iVar4;
            lVar12 = FUN_0015c610(&local_d0,lVar17);
            if ((lVar12 != lVar10) &&
               (iVar6 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\newlz_vtable.cpp",0x273,
                                     "newlz_compress_vtable_block_outer",
                                     "after_blockHeaderPtr + packedQHLen == compPtr"), iVar6 != 0))
            {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            local_98 = local_b8;
            local_80 = uStack_a0;
            local_90 = local_b0;
            local_88 = local_a8;
            local_108 = __n;
          }
          puVar18 = *(undefined4 **)(puVar18 + 0x20);
        } while (puVar18 != (undefined4 *)0x0);
      }
      local_98 = CONCAT44(local_98._4_4_,(int)local_108);
      if (iVar4 != 0) {
        uVar8 = FUN_0015c990(pvVar13,local_108);
        local_98 = CONCAT44(uVar8,(undefined4)local_98);
      }
      FUN_0015cc30(lVar10,&local_98,iVar4,iVar7);
      lVar10 = (long)pvVar13 + local_108;
    }
  }
  else {
    local_98 = (ulong)*__src << 0x20;
    iVar7 = FUN_0015cc30(lVar10,&local_98,iVar4,iVar7);
    lVar10 = lVar10 + iVar7;
  }
  param_1[10] = lVar10;
  return;
}


