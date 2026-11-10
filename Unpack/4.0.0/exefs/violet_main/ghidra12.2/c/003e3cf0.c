/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e3cf0; name: FUN_003e3cf0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_003e3cf0(long *******param_1,long *param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long *__base;
  void *pvVar9;
  uint uVar10;
  long *plVar11;
  long ******pppppplVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 local_80;
  long *******local_78;
  void *local_70;
  long local_68;
  
  uVar3 = *param_3;
  if ((uVar3 >> 0xc & 1) != 0) {
    local_78 = param_1;
    param_1 = (long *******)&local_78;
  }
  if ((uVar3 & 0x18) == 0) {
    uVar13 = 0;
    if (param_4 != 0xffffffff) {
      uVar13 = param_5 & 0xc0;
    }
  }
  else {
    if (param_4 != 0xffffffff) {
      return -1;
    }
    param_4 = param_3[2];
    uVar13 = uVar3 & 0xc0;
  }
  uVar1 = param_5 & uVar3 & 0x800;
  param_5 = param_5 & 0xffffff3f;
  uVar8 = 1;
  if (uVar1 != 0) {
    uVar8 = 2;
  }
  if ((uVar3 & 6) == 0) {
    if ((uVar3 >> 4 & 1) == 0) {
      iVar7 = FUN_003e3930(param_1,param_2,*(undefined8 *)(param_3 + 8),param_4,uVar13 | param_5);
      return iVar7;
    }
    iVar7 = FUN_003e3930(param_1,0,*(undefined8 *)(param_3 + 8),0xffffffff,param_5);
    if (iVar7 == 0) {
      return 0;
    }
    iVar5 = FUN_003def90(uVar8,iVar7,param_4);
    if (param_2 == (long *)0x0) {
      return iVar5;
    }
    if (iVar5 == -1) {
      return -1;
    }
    FUN_003dede0(param_2,uVar8,iVar7,param_4,uVar13);
    FUN_003e3930(param_1,param_2,*(undefined8 *)(param_3 + 8),0xffffffff,param_5);
  }
  else {
    pppppplVar12 = *param_1;
    if (pppppplVar12 == (long ******)0x0) {
      return 0;
    }
    uVar10 = 0x10;
    if ((uVar3 & 2) != 0) {
      uVar10 = 0x11;
    }
    uVar2 = uVar13;
    uVar4 = param_4;
    if ((uVar3 & 0x10) != 0 || param_4 == 0xffffffff) {
      uVar2 = 0;
      uVar4 = uVar10;
    }
    iVar5 = FUN_0047e430(pppppplVar12);
    iVar7 = 0;
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        local_80 = FUN_0047e450(pppppplVar12,iVar5);
        iVar6 = FUN_003e3930(&local_80,0,*(undefined8 *)(param_3 + 8),0xffffffff,param_5);
        if (iVar6 == -1 || 0x7fffffff - iVar6 < iVar7) {
          return -1;
        }
        iVar7 = iVar6 + iVar7;
        iVar5 = iVar5 + 1;
        iVar6 = FUN_0047e430(pppppplVar12);
      } while (iVar5 < iVar6);
    }
    iVar6 = FUN_003def90(uVar8,iVar7,uVar4);
    if (iVar6 == -1) {
      return -1;
    }
    if ((uVar3 >> 4 & 1) == 0) {
      iVar5 = iVar6;
      if (param_2 == (long *)0x0) {
        return iVar6;
      }
    }
    else {
      iVar5 = FUN_003def90(uVar8,iVar6,param_4);
      if ((param_2 == (long *)0x0) || (iVar5 == -1)) {
        return iVar5;
      }
      FUN_003dede0(param_2,uVar8,iVar6,param_4,uVar13);
    }
    FUN_003dede0(param_2,uVar8,iVar7,uVar4,uVar2);
    uVar14 = *(undefined8 *)(param_3 + 8);
    local_70 = (void *)0x0;
    if (((uVar3 >> 1 & 1) == 0) || (iVar6 = FUN_0047e430(pppppplVar12), iVar6 < 2)) {
      iVar7 = FUN_0047e430(pppppplVar12);
      if (0 < iVar7) {
        iVar7 = 0;
        do {
          local_68 = FUN_0047e450(pppppplVar12,iVar7);
          FUN_003e3930(&local_68,param_2,uVar14,0xffffffff,param_5);
          iVar7 = iVar7 + 1;
          iVar6 = FUN_0047e430(pppppplVar12);
        } while (iVar7 < iVar6);
      }
    }
    else {
      iVar6 = FUN_0047e430(pppppplVar12);
      __base = (long *)FUN_00452c30((long)iVar6 * 0x18,"external/openssl/crypto/asn1/tasn_enc.c",400
                                   );
      if (__base != (long *)0x0) {
        pvVar9 = (void *)FUN_00452c30((long)iVar7,"external/openssl/crypto/asn1/tasn_enc.c",0x193);
        if (pvVar9 == (void *)0x0) {
          FUN_00452f80(__base,"external/openssl/crypto/asn1/tasn_enc.c",0x195);
        }
        else {
          local_70 = pvVar9;
          iVar7 = FUN_0047e430(pppppplVar12);
          if (0 < iVar7) {
            iVar7 = 0;
            plVar11 = __base;
            do {
              local_68 = FUN_0047e450(pppppplVar12,iVar7);
              *plVar11 = (long)local_70;
              uVar8 = FUN_003e3930(&local_68,&local_70,uVar14,0xffffffff,param_5);
              *(undefined4 *)(plVar11 + 1) = uVar8;
              plVar11[2] = local_68;
              iVar7 = iVar7 + 1;
              iVar6 = FUN_0047e430(pppppplVar12);
              plVar11 = plVar11 + 3;
            } while (iVar7 < iVar6);
          }
          iVar7 = FUN_0047e430(pppppplVar12);
          qsort(__base,(long)iVar7,0x18,(__compar_fn_t)&LAB_003e4320);
          local_70 = (void *)*param_2;
          iVar7 = FUN_0047e430(pppppplVar12);
          if (0 < iVar7) {
            iVar7 = 0;
            plVar11 = __base;
            do {
              memcpy(local_70,(void *)*plVar11,(long)(int)plVar11[1]);
              iVar7 = iVar7 + 1;
              local_70 = (void *)((long)local_70 + (long)(int)plVar11[1]);
              iVar6 = FUN_0047e430(pppppplVar12);
              plVar11 = plVar11 + 3;
            } while (iVar7 < iVar6);
          }
          *param_2 = (long)local_70;
          if (((uVar3 >> 2 & 1) != 0) && (iVar7 = FUN_0047e430(pppppplVar12), 0 < iVar7)) {
            iVar7 = 0;
            plVar11 = __base + 2;
            do {
              FUN_0047e480(pppppplVar12,iVar7,*plVar11);
              iVar7 = iVar7 + 1;
              iVar6 = FUN_0047e430(pppppplVar12);
              plVar11 = plVar11 + 3;
            } while (iVar7 < iVar6);
          }
          FUN_00452f80(__base,"external/openssl/crypto/asn1/tasn_enc.c",0x1ba);
          FUN_00452f80(pvVar9,"external/openssl/crypto/asn1/tasn_enc.c",0x1bb);
        }
      }
    }
    if (uVar1 == 0) {
      return iVar5;
    }
    FUN_003def70(param_2);
    uVar1 = uVar3 >> 4 & 1;
  }
  if (uVar1 != 0) {
    FUN_003def70(param_2);
  }
  return iVar5;
}


