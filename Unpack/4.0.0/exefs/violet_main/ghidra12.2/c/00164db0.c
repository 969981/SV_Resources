/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00164db0; name: FUN_00164db0
 */


/* WARNING: Control flow encountered bad instruction data */

int FUN_00164db0(undefined8 *param_1,undefined8 *param_2,uint *param_3,int param_4,
                undefined8 param_5,long param_6,undefined8 *param_7,long param_8,uint param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar5;
  uint uVar4;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  size_t __n;
  code *pcVar12;
  uint *__src;
  undefined8 *__src_00;
  undefined8 *__dest;
  undefined8 *local_70;
  size_t local_68;
  
  __src = param_3;
  if (param_1 < param_2) {
    puVar1 = (undefined8 *)((long)param_3 + (long)param_4);
    param_8 = (long)param_7 + param_8;
    __src_00 = param_7;
    __dest = param_1;
    do {
      while( true ) {
        __n = (long)param_2 - (long)__dest;
        if (0x1ffff < (long)__n) {
          __n = 0x20000;
        }
        if ((long)puVar1 - (long)__src < 4) {
          return -1;
        }
        uVar4 = (*__src & 0xff00ff00) >> 8 | (*__src & 0xff00ff) << 8;
        uVar5 = uVar4 >> 0x10 | uVar4 << 0x10;
        if (-1 < (int)uVar5) break;
        __src = (uint *)((long)__src + 3);
        uVar7 = (ulong)(uVar5 >> 8 & 0x7ffff);
        if ((long)puVar1 - (long)__src < (long)uVar7) {
          return -1;
        }
        uVar4 = (uVar4 & 0xffff) >> 0xb & 0xf;
        if ((long)uVar7 < (long)__n) {
          if ((long)__n < 0x80) {
            FUN_0015c3d0();
            pcVar12 = *(code **)PTR_PTR_047cb868;
            if (pcVar12 == (code *)0x0) goto LAB_00165120;
            pcVar11 = "OODLE ERROR : corruption : chunk_len >= 128\n";
            uVar10 = 0xae6;
          }
          else {
            lVar8 = FUN_00151010(8,__n);
            if (lVar8 <= param_8 - (long)__src_00) {
              lVar2 = (long)__dest + (param_6 - (long)param_1);
              puVar3 = (undefined8 *)((long)__src_00 + lVar8);
              if ((param_9 & 1) != 0) {
                FUN_0015cf00(__src_00,0x50);
                lVar8 = FUN_00165170(uVar4,__src,(long)__src + uVar7,__dest,__n,lVar2,__src_00 + 10,
                                     puVar3,__src_00);
                if (lVar8 < 0) {
                  *__src_00 = 0;
                  return -1;
                }
              }
              if ((param_9 >> 1 & 1) != 0) {
                if (1 < uVar4) {
                  return -1;
                }
                if ((undefined8 *)*__src_00 != __dest) {
                  return -1;
                }
                if (uVar4 == 0) {
                  uVar9 = FUN_0016e310(__src_00,__dest + (lVar2 == 0),__dest,(long)__dest + __n,
                                       (long)__dest - lVar2);
                }
                else {
                  if (uVar4 != 1) {
                    iVar6 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\newlz.cpp",0xa6c,
                                         "newLZ_decode_chunk_phase2","bad chunk_type");
                    if (iVar6 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    goto LAB_00164e3c;
                  }
                  uVar9 = FUN_0016dde0(__src_00,__dest + (lVar2 == 0),__dest,(long)__dest + __n,
                                       (long)__dest - lVar2);
                }
                if ((uVar9 & 1) == 0) {
                  return -1;
                }
              }
LAB_00164e3c:
              __src_00 = param_7;
              if (param_9 != 3) {
                __src_00 = puVar3;
              }
              goto LAB_00164e50;
            }
            FUN_0015c3d0();
            pcVar12 = *(code **)PTR_PTR_047cb868;
            if (pcVar12 == (code *)0x0) goto LAB_00165120;
            pcVar11 = "OODLE ERROR : decoder scratch too small\n";
            uVar10 = 0xaee;
          }
          (*pcVar12)(0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",uVar10,pcVar11);
LAB_00165120:
          FUN_0015c3f0();
          return -1;
        }
        if (uVar4 != 0) {
          return -1;
        }
        if ((long)__n < (long)uVar7) {
          return -1;
        }
        if ((param_9 & 1) != 0) {
          memmove(__dest,__src,__n);
        }
        __dest = (undefined8 *)((long)__dest + __n);
        __src = (uint *)((long)__src + uVar7);
        if (param_2 <= __dest) goto LAB_001650c4;
      }
      if ((param_9 & 1) == 0) {
        uVar7 = FUN_00174c80(__src,puVar1,&local_68,__n);
      }
      else if ((puVar1 < __dest) || ((uint *)((long)__dest + __n) < __src)) {
        local_70 = __dest;
        uVar7 = FUN_001655a0(&local_70,__src,puVar1,&local_68,__n,0,__src_00,param_8);
        if (local_70 != __dest) {
          return -1;
        }
      }
      else {
        local_70 = __src_00;
        uVar7 = FUN_001655a0(&local_70,__src,puVar1,&local_68,__n,0,__src_00,param_8);
        if (local_70 != __src_00) {
          return -1;
        }
        memcpy(__dest,__src_00,__n);
      }
      if ((long)uVar7 < 0) {
        return -1;
      }
      if ((long)__n <= (long)uVar7) {
        return -1;
      }
      if (local_68 != __n) {
        return -1;
      }
LAB_00164e50:
      __dest = (undefined8 *)((long)__dest + __n);
      __src = (uint *)((long)__src + uVar7);
    } while (__dest < param_2);
  }
LAB_001650c4:
  return (int)__src - (int)param_3;
}


