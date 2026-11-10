/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00173de0; name: FUN_00173de0
 */


long FUN_00173de0(long param_1,long param_2,undefined8 param_3,void *param_4,int param_5,
                 byte *param_6,long param_7,long param_8,float *param_9,undefined8 param_10,
                 long param_11)

{
  void *pvVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  size_t sVar12;
  size_t __n;
  long *plVar13;
  byte *__dest;
  byte *pbVar14;
  void *__src;
  void *__src_00;
  size_t __n_00;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar19;
  float *pfVar18;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  
  if (param_5 < 0x80) {
LAB_00173e18:
    lVar10 = (long)(param_5 + 1);
  }
  else {
    pvVar1 = (void *)((long)param_4 + (long)param_5);
    pbVar14 = param_6;
    if (param_4 < pvVar1) {
      uVar2 = *(undefined4 *)(param_1 + 0x48);
      fVar16 = *(float *)(param_1 + 0x44);
      uVar3 = *(uint *)(param_1 + 0x18);
      lVar10 = *(long *)(param_1 + 8);
      fVar17 = 0.0;
      __src = param_4;
      do {
        if (param_11 != 0) {
          *(long *)(param_2 + 0x140) =
               param_11 + ((long)__src - (long)param_4) * (long)*(int *)(param_1 + 0x40) * 8;
        }
        uVar5 = (int)pvVar1 - (int)__src;
        if ((int)uVar3 <= (int)uVar5) {
          uVar5 = uVar3;
        }
        if (param_7 - (long)pbVar14 < (long)(int)(uVar5 + 3)) {
          FUN_0015c3d0();
          if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
            (**(code **)PTR_PTR_047cb868)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlz_vtable.cpp",0xd6,
                       "OODLE ERROR : newLZ_encode_block_vtable: not enough room for uncomp chunk.\n"
                      );
          }
          FUN_0015c3f0();
          goto LAB_00173e18;
        }
        __n_00 = (size_t)(int)uVar5;
        fVar15 = (float)(**(code **)(lVar10 + 8))(__n_00);
        fVar15 = fVar16 * fVar15 + (float)(int)uVar5 + 3.0;
        (**(code **)(lVar10 + 0xa8))(auStack_a8,__n_00);
        bVar4 = (byte)(uVar5 >> 8);
        bVar6 = (byte)(uVar5 >> 0x10);
        if ((int)uVar5 < 0x20) {
          *pbVar14 = bVar6 | 0x80;
          pbVar14[1] = bVar4;
          pbVar14[2] = (byte)uVar5;
          memcpy(pbVar14 + 3,__src,__n_00);
          pbVar14 = pbVar14 + 3 + __n_00;
        }
        else {
          iVar9 = FUN_0015cff0(__src,__n_00);
          if (iVar9 == 0) {
            local_ac = -NAN;
            local_b0 = 1.0737418e+09;
            pfVar18 = &local_ac;
            __dest = pbVar14 + 3;
            sVar12 = (**(code **)(param_1 + 0x58))
                               (param_1,param_2,param_3,__src,uVar5,__dest,param_7,
                                (param_8 - (long)param_4) + (long)__src,pfVar18,&local_b0,auStack_a8
                               );
            uVar19 = (undefined4)((ulong)pfVar18 >> 0x20);
            local_b0 = local_b0 + 3.0;
            if (*(char *)(param_1 + 0x51) == '\0') {
              __src_00 = (void *)0x0;
              __n = __n_00;
joined_r0x00174110:
              local_b4 = 1.0737418e+09;
              if ((long)__n_00 <= (long)sVar12) goto LAB_00174114;
LAB_001740bc:
              bVar7 = false;
              bVar8 = true;
              if (local_b0 < fVar15) {
                bVar7 = false;
                bVar8 = true;
                if (!NAN(local_b0) && !NAN(local_b4)) {
                  bVar7 = local_b0 == local_b4;
                  bVar8 = local_b4 <= local_b0;
                }
              }
              if (bVar8 && !bVar7) goto LAB_00174114;
              pbVar14[2] = (byte)sVar12;
              *pbVar14 = (byte)(sVar12 >> 0x10) | (byte)((uint)((int)local_ac << 0x13) >> 0x10) |
                         0x80;
              pbVar14[1] = (byte)(sVar12 >> 8);
              fVar15 = local_b0;
            }
            else {
              local_b4 = local_b0;
              if (fVar15 <= local_b0) {
                local_b4 = fVar15;
              }
              __src_00 = *(void **)(param_2 + 0x20);
              plVar13 = (long *)(param_2 + 0x28);
              if (__src_00 == (void *)0x0) {
                FUN_00164c64((long *)(param_2 + 0x38),(long)(int)(uVar5 + (uVar5 >> 4) + 0x100),
                             param_10);
                __src_00 = *(void **)(param_2 + 0x38);
                plVar13 = (long *)(param_2 + 0x40);
              }
              __n = FUN_00174a40(fVar16,local_a4,__src_00,(long)__src_00 + *plVar13,__src,__n_00,
                                 uVar2,lVar10,&local_b4,param_10,
                                 CONCAT44(uVar19,*(undefined4 *)(param_1 + 4)),0);
              if (((long)__n < 1) || ((long)__n_00 <= (long)__n)) goto joined_r0x00174110;
              if ((long)sVar12 < (long)__n_00) goto LAB_001740bc;
LAB_00174114:
              if (fVar15 <= local_b4) {
                local_ac = 0.0;
                memcpy(__dest,__src,__n_00);
                pbVar14[2] = (byte)uVar5;
                *pbVar14 = bVar6 | (byte)((uint)((int)local_ac << 0x13) >> 0x10) | 0x80;
                pbVar14[1] = bVar4;
                sVar12 = __n_00;
              }
              else {
                memcpy(pbVar14,__src_00,__n);
                sVar12 = __n;
                __dest = pbVar14;
                fVar15 = local_b4;
              }
            }
            pbVar14 = __dest + sVar12;
          }
          else {
            local_ac = 1.0737418e+09;
            lVar11 = FUN_00174800(fVar16,pbVar14,param_7,__src,__n_00,uVar2,lVar10,&local_ac,
                                  param_10);
            pbVar14 = pbVar14 + lVar11;
            fVar15 = local_ac;
          }
        }
        fVar17 = fVar17 + fVar15;
        if (pvVar1 <= (void *)((long)__src + __n_00)) goto LAB_001741b8;
        __src = (void *)((long)__src + __n_00);
      } while( true );
    }
    fVar17 = 0.0;
LAB_001741b8:
    *param_9 = fVar17;
    lVar10 = (long)pbVar14 - (long)param_6;
  }
  return lVar10;
}


