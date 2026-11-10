/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045d9a0; name: FUN_0045d9a0
 */


bool FUN_0045d9a0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,char *param_6,ulong param_7,code *param_8,char *param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *__s;
  size_t sVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  char *pcVar14;
  size_t sVar15;
  undefined1 *puVar16;
  undefined1 local_4c0 [16];
  undefined1 auStack_4b0 [64];
  char local_470 [1024];
  long local_70;
  undefined8 local_68;
  
  sVar15 = param_7 & 0xffffffff;
  local_68 = 0;
  if (param_5 == 0) {
    __s = (char *)0x0;
LAB_0045da5c:
    iVar1 = (*param_1)(param_4,0);
    if (0 < iVar1) {
      lVar11 = FUN_00452c30(iVar1 + 0x14,"external/openssl/crypto/pem/pem_lib.c",0x156);
      if (lVar11 == 0) {
        uVar9 = 0x41;
        uVar10 = 0x158;
LAB_0045db84:
        FUN_004806c0(9,0x69,uVar9,"external/openssl/crypto/pem/pem_lib.c",uVar10);
      }
      else {
        local_70 = lVar11;
        iVar2 = (*param_1)(param_4,&local_70);
        local_68 = CONCAT44(iVar2,(int)local_68);
        if (param_5 == 0) {
          lVar13 = 0;
          local_470[0] = '\0';
LAB_0045db94:
          iVar2 = FUN_0045de30(param_3,param_2,local_470,lVar11,(long)iVar2);
          bVar12 = 0 < iVar2;
          local_68 = CONCAT44(iVar2,(int)local_68);
          goto LAB_0045db04;
        }
        if (param_6 == (char *)0x0) {
          if (param_8 == (code *)0x0) {
            if (param_9 != (char *)0x0) {
              sVar15 = strlen(param_9);
              uVar5 = (uint)sVar15;
              if (0x3ff < (int)uVar5) {
                uVar5 = 0x400;
              }
              sVar15 = (size_t)uVar5;
              memcpy(local_470,param_9,(long)(int)uVar5);
              goto joined_r0x0045de0c;
            }
            pcVar8 = (char *)FUN_0045f070();
            pcVar14 = "Enter PEM pass phrase:";
            if (pcVar8 != (char *)0x0) {
              pcVar14 = pcVar8;
            }
            iVar2 = FUN_0045f090(local_470,4,0x400,pcVar14,1);
            if (iVar2 == 0) {
              sVar15 = strlen(local_470);
              uVar5 = (uint)sVar15;
              goto joined_r0x0045de0c;
            }
            FUN_004806c0(9,100,0x6d,"external/openssl/crypto/pem/pem_lib.c",0x3b);
            memset(local_470,0,0x400);
          }
          else {
            uVar7 = (*param_8)(local_470,0x400,1,param_9);
            sVar15 = uVar7 & 0xffffffff;
            uVar5 = (uint)uVar7;
joined_r0x0045de0c:
            if (0 < (int)uVar5) {
              param_6 = local_470;
              goto LAB_0045dbf0;
            }
          }
          uVar9 = 0x6f;
          uVar10 = 0x165;
          goto LAB_0045db84;
        }
LAB_0045dbf0:
        uVar3 = FUN_0043b690(param_5);
        iVar2 = FUN_00464f80(local_4c0,uVar3);
        if (0 < iVar2) {
          uVar9 = FUN_0043bf30();
          iVar2 = FUN_0045f180(param_5,uVar9,local_4c0,param_6,sVar15 & 0xffffffff,1,auStack_4b0,0);
          if (iVar2 != 0) {
            if (param_6 == local_470) {
              FUN_00453300(local_470,0x400);
            }
            local_470[0] = '\0';
            sVar15 = strlen(local_470);
            FUN_003e7390(local_470 + sVar15,0x400 - sVar15,"Proc-Type: 4,%s\n","ENCRYPTED");
            iVar4 = FUN_0043b690(param_5);
            sVar15 = strlen(local_470);
            pcVar14 = local_470 + sVar15;
            iVar2 = 0x400 - (int)sVar15;
            uVar5 = FUN_003e7390(pcVar14,(long)iVar2,"DEK-Info: %s,",__s);
            if (0 < (int)uVar5) {
              pcVar14 = pcVar14 + uVar5;
              iVar2 = iVar2 - uVar5;
              if (0 < iVar4) {
                lVar13 = (long)iVar4;
                puVar16 = local_4c0;
                do {
                  uVar5 = FUN_003e7390(pcVar14,(long)iVar2,&DAT_03c47e12,*puVar16);
                  if ((int)uVar5 < 1) goto LAB_0045dd1c;
                  pcVar14 = pcVar14 + uVar5;
                  iVar2 = iVar2 - uVar5;
                  puVar16 = puVar16 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              }
              if (1 < iVar2) {
                pcVar14[0] = '\n';
                pcVar14[1] = '\0';
              }
            }
LAB_0045dd1c:
            lVar13 = FUN_00439de0();
            if ((lVar13 != 0) &&
               (iVar2 = FUN_0043a990(lVar13,param_5,0,auStack_4b0,local_4c0), iVar2 != 0)) {
              iVar2 = FUN_0043a2c0(lVar13,lVar11,&local_68,lVar11,local_68._4_4_);
              if (iVar2 != 0) {
                iVar2 = FUN_0043a5d0(lVar13,lVar11 + (int)local_68,(long)&local_68 + 4);
                if (iVar2 != 0) {
                  iVar2 = local_68._4_4_ + (int)local_68;
                  local_68 = CONCAT44(iVar2,(int)local_68);
                  goto LAB_0045db94;
                }
              }
            }
            bVar12 = false;
            goto LAB_0045db04;
          }
        }
      }
      lVar13 = 0;
      bVar12 = false;
      goto LAB_0045db04;
    }
    uVar9 = 0xd;
    uVar10 = 0x150;
  }
  else {
    FUN_0043b630(param_5);
    __s = (char *)FUN_0045bce0();
    if (((__s != (char *)0x0) && (iVar1 = FUN_0043b690(param_5), iVar1 != 0)) &&
       (iVar1 = FUN_0043b690(param_5), iVar1 < 0x11)) {
      sVar6 = strlen(__s);
      iVar1 = FUN_0043b690(param_5);
      if (sVar6 + (long)(iVar1 << 1) + 0x24 < 0x401) goto LAB_0045da5c;
    }
    uVar9 = 0x71;
    uVar10 = 0x14a;
  }
  FUN_004806c0(9,0x69,uVar9,"external/openssl/crypto/pem/pem_lib.c",uVar10);
  lVar13 = 0;
  iVar1 = 0;
  bVar12 = false;
  lVar11 = 0;
LAB_0045db04:
  FUN_00453300(auStack_4b0,0x40);
  FUN_00453300(local_4c0,0x10);
  FUN_00439e00(lVar13);
  FUN_00453300(local_470,0x400);
  FUN_00453260(lVar11,iVar1,"external/openssl/crypto/pem/pem_lib.c",0x194);
  return bVar12;
}


