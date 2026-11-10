/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f4180; name: FUN_003f4180
 */


undefined8 FUN_003f4180(long param_1,long param_2,uint param_3)

{
  char *__s;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  size_t sVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 auStack_70 [16];
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 != 0) {
    lVar5 = FUN_003f4a70(param_1,0,param_2);
    if (lVar5 != 0) goto LAB_003f41e4;
    if ((param_3 >> 5 & 1) == 0) goto LAB_003f455c;
  }
  lVar5 = FUN_003f4a70(param_1,0,"openssl_conf");
  if (lVar5 == 0) {
LAB_003f455c:
    FUN_004808e0(0,0);
    return 1;
  }
LAB_003f41e4:
  lVar5 = FUN_003f4a10(param_1);
  if (lVar5 == 0) {
    return 0;
  }
  iVar2 = FUN_0047e430();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      lVar6 = FUN_0047e450(lVar5,iVar2);
      __s = *(char **)(lVar6 + 8);
      uVar12 = *(undefined8 *)(lVar6 + 0x10);
      pcVar7 = strrchr(__s,0x2e);
      if (pcVar7 == (char *)0x0) {
        sVar8 = strlen(__s);
        iVar13 = (int)sVar8;
        iVar3 = FUN_0047e430(DAT_047f1818);
      }
      else {
        iVar13 = (int)pcVar7 - (int)__s;
        iVar3 = FUN_0047e430(DAT_047f1818);
      }
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          lVar6 = FUN_0047e450(DAT_047f1818,iVar3);
          iVar4 = strncmp(*(char **)(lVar6 + 8),__s,(long)iVar13);
          if (iVar4 == 0) {
            if (lVar6 != 0) goto LAB_003f4334;
            break;
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_0047e430(DAT_047f1818);
        } while (iVar3 < iVar4);
      }
      if ((param_3 >> 3 & 1) == 0) {
        pcVar7 = (char *)FUN_003f4a70(param_1,uVar12,&DAT_03c8f575);
        if (pcVar7 == (char *)0x0) {
          FUN_004808e0();
          pcVar7 = __s;
        }
        lVar9 = FUN_00402a70(0,pcVar7,0,0);
        if (lVar9 == 0) {
          uVar12 = 0x6e;
LAB_003f43cc:
          FUN_00402960(lVar9);
          FUN_004806c0(0xe,0x75,uVar12,"external/openssl/crypto/conf/conf_mod.c",0xe0);
          FUN_00481380(4,"module=",__s,", path=",pcVar7);
          goto LAB_003f440c;
        }
        lVar6 = FUN_00402cb0(lVar9,"OPENSSL_init");
        if (lVar6 == 0) {
          uVar12 = 0x70;
          goto LAB_003f43cc;
        }
        uVar10 = FUN_00402cb0(lVar9,"OPENSSL_finish");
        lVar6 = FUN_003f4750(lVar9,__s,lVar6,uVar10);
        if (lVar6 == 0) {
          uVar12 = 0;
          goto LAB_003f43cc;
        }
LAB_003f4334:
        plVar11 = (long *)FUN_00452c30(0x28,"external/openssl/crypto/conf/conf_mod.c",0x12a);
        if (plVar11 == (long *)0x0) {
LAB_003f44e0:
          if ((param_3 >> 2 & 1) == 0) {
            FUN_004806c0(0xe,0x76,0x6d,"external/openssl/crypto/conf/conf_mod.c",0xb1);
            FUN_003e7390(auStack_70,0xd,&DAT_03c4e520,0xffffffff);
            FUN_00481380(6,"module=",__s,", value=",uVar12,", retcode=",auStack_70);
          }
          goto LAB_003f4540;
        }
        *plVar11 = lVar6;
        lVar9 = FUN_0045abd0(__s,"external/openssl/crypto/conf/conf_mod.c",0x12f);
        plVar11[1] = lVar9;
        lVar9 = FUN_0045abd0(uVar12,"external/openssl/crypto/conf/conf_mod.c",0x130);
        plVar11[2] = lVar9;
        plVar11[4] = 0;
        if ((lVar9 == 0) || (plVar11[1] == 0)) {
LAB_003f44b0:
          FUN_00452f80(plVar11[1],"external/openssl/crypto/conf/conf_mod.c",0x158);
          FUN_00452f80(plVar11[2],"external/openssl/crypto/conf/conf_mod.c",0x159);
          FUN_00452f80(plVar11,"external/openssl/crypto/conf/conf_mod.c",0x15a);
          goto LAB_003f44e0;
        }
        if (*(code **)(lVar6 + 0x10) != (code *)0x0) {
          iVar13 = (**(code **)(lVar6 + 0x10))(plVar11,param_1);
          bVar1 = true;
          if (0 < iVar13) goto joined_r0x003f43b0;
LAB_003f449c:
          if ((bVar1) && (*(code **)(lVar6 + 0x18) != (code *)0x0)) {
            (**(code **)(lVar6 + 0x18))(plVar11);
          }
          goto LAB_003f44b0;
        }
        bVar1 = false;
joined_r0x003f43b0:
        if ((DAT_047f1820 == 0) && (DAT_047f1820 = FUN_0047dcc0(), DAT_047f1820 == 0)) {
          uVar10 = 0x142;
LAB_003f4488:
          FUN_004806c0(0xe,0x73,0x41,"external/openssl/crypto/conf/conf_mod.c",uVar10);
          goto LAB_003f449c;
        }
        iVar13 = FUN_0047e2f0(DAT_047f1820,plVar11);
        if (iVar13 == 0) {
          uVar10 = 0x148;
          goto LAB_003f4488;
        }
        *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
      }
      else {
LAB_003f440c:
        if ((param_3 >> 2 & 1) == 0) {
          FUN_004806c0(0xe,0x76,0x71,"external/openssl/crypto/conf/conf_mod.c",0xa5);
          FUN_00481380(2,"module=",__s);
        }
LAB_003f4540:
        if ((param_3 & 1) == 0) {
          return 0xffffffff;
        }
      }
      iVar2 = iVar2 + 1;
      iVar13 = FUN_0047e430(lVar5);
    } while (iVar2 < iVar13);
  }
  return 1;
}


