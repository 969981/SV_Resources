/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003af090; name: FUN_003af090
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_003af090(long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)(param_2 + 0x140);
  if (param_1 != 0) {
    puVar9 = (undefined8 *)(param_1 + 0x550);
  }
  puVar9 = (undefined8 *)*puVar9;
  plVar8 = (long *)*puVar9;
  if (*plVar8 == 0) {
    FUN_004806c0(0x14,0x14c,0xb3,"external/openssl/ssl/ssl_cert.c",0x300);
    lVar6 = 0;
    lVar4 = 0;
    goto joined_r0x003af27c;
  }
  if ((param_3 >> 2 & 1) == 0) {
    lVar6 = puVar9[0x39];
    if (lVar6 == 0) {
      lVar4 = param_2;
      if (param_1 != 0) {
        lVar4 = *(long *)(param_1 + 0x660);
      }
      lVar6 = *(long *)(lVar4 + 0x20);
      if ((param_3 & 1) != 0) goto LAB_003af1f8;
LAB_003af198:
      lVar7 = 0;
      lVar4 = FUN_004879e0();
    }
    else {
      if ((param_3 & 1) == 0) goto LAB_003af198;
LAB_003af1f8:
      lVar7 = plVar8[2];
      lVar4 = FUN_004879e0();
    }
    if (lVar4 == 0) {
      FUN_004806c0(0x14,0x14c,0x41,"external/openssl/ssl/ssl_cert.c",0x31e);
joined_r0x003af27c:
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00487ac0(lVar4,lVar6,*plVar8,lVar7);
      if (iVar1 == 0) {
        FUN_004806c0(0x14,0x14c,0xb,"external/openssl/ssl/ssl_cert.c",0x322);
        goto joined_r0x003af27c;
      }
      FUN_00488880(lVar4,*(uint *)((long)puVar9 + 0x1c) & 0x30000);
      iVar1 = FUN_00486040(lVar4);
      if (((param_3 >> 3 & 1) == 0) || (0 < iVar1)) {
        if (iVar1 < 1) {
          FUN_004806c0(0x14,0x14c,0x86,"external/openssl/ssl/ssl_cert.c",0x333);
          iVar1 = FUN_004879b0(lVar4);
          uVar5 = FUN_00485ed0((long)iVar1);
          FUN_00481380(2,"Verify error:",uVar5);
          goto joined_r0x003af27c;
        }
        iVar1 = 0;
      }
      else {
        if ((param_3 >> 4 & 1) != 0) {
          FUN_004808e0();
        }
        iVar1 = 2;
      }
      lVar7 = FUN_004879d0(lVar4);
      FUN_0047e310();
      FUN_0048c830();
      if (((param_3 >> 1 & 1) != 0) && (iVar2 = FUN_0047e430(lVar7), 0 < iVar2)) {
        iVar2 = FUN_0047e430(lVar7);
        FUN_0047e450(lVar7,iVar2 + -1);
        uVar3 = FUN_00499a10();
        if ((uVar3 >> 0xd & 1) != 0) {
          FUN_0047e380(lVar7);
          FUN_0048c830();
        }
      }
      iVar2 = FUN_0047e430(lVar7);
      if (0 < iVar2) {
        iVar1 = 0;
        do {
          uVar5 = FUN_0047e450(lVar7,iVar1);
          iVar2 = FUN_003d9b20(param_1,param_2,uVar5,0,0);
          if (iVar2 != 1) {
            FUN_004806c0(0x14,0x14c,iVar2,"external/openssl/ssl/ssl_cert.c",0x34f);
            FUN_0047e3b0(lVar7,PTR_FUN_047cd0a0);
            iVar1 = 0;
            goto joined_r0x003af38c;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0047e430(lVar7);
        } while (iVar1 < iVar2);
        iVar1 = 1;
      }
      FUN_0047e3b0(plVar8[2],PTR_FUN_047cd0a0);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      plVar8[2] = lVar7;
    }
joined_r0x003af38c:
    if ((param_3 & 4) == 0) goto LAB_003af238;
  }
  else {
    lVar6 = FUN_00484450();
    if (lVar6 != 0) {
      iVar1 = FUN_0047e430(plVar8[2]);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          uVar5 = FUN_0047e450(plVar8[2],iVar1);
          iVar2 = FUN_00484b20(lVar6,uVar5);
          if (iVar2 == 0) goto LAB_003af178;
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0047e430(plVar8[2]);
        } while (iVar1 < iVar2);
      }
      iVar1 = FUN_00484b20(lVar6,*plVar8);
      if (iVar1 != 0) goto LAB_003af198;
    }
LAB_003af178:
    iVar1 = 0;
    lVar4 = 0;
  }
  FUN_00484650(lVar6);
LAB_003af238:
  FUN_00487a30(lVar4);
  return iVar1;
}


