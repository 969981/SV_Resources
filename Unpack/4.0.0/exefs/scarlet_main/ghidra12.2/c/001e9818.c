/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e9818; name: FUN_001e9818
 */


undefined4 FUN_001e9818(char *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  bool bVar9;
  char *pcVar10;
  undefined8 local_578;
  undefined1 auStack_570 [1024];
  undefined1 auStack_170 [256];
  char *local_70 [2];
  
  lVar8 = *param_2;
  local_70[0] = param_1;
  FUN_001e9bf0(param_2);
  bVar9 = false;
  bVar1 = false;
LAB_001e9884:
  do {
    cVar6 = *param_1;
    if (cVar6 != '\0') {
      do {
        iVar2 = FUN_001cb268(cVar6);
        if (iVar2 == 0) break;
        param_1 = param_1 + 1;
        cVar6 = *param_1;
      } while (cVar6 != '\0');
      local_70[0] = param_1;
    }
    uVar3 = FUN_001e9708(param_1,auStack_170,auStack_570,local_70);
    if ((uVar3 & 1) == 0) {
      if ((lVar8 != 0) && ((*(byte *)((long)param_2 + 0x3c) & 1) == 0)) {
        return 0x3d;
      }
      uVar7 = 0x3d;
      if (*param_2 != 0) {
        uVar7 = 0;
      }
      return uVar7;
    }
    iVar2 = FUN_001e0990(auStack_170,"nonce");
    if (iVar2 != 0) {
      FUN_001ec308(*param_2);
      lVar4 = FUN_001ec328(auStack_570);
      *param_2 = lVar4;
joined_r0x001e9ad8:
      if (lVar4 == 0) {
        return 0x1b;
      }
      goto LAB_001e98e4;
    }
    iVar2 = FUN_001e0990(auStack_170,"stale");
    if (iVar2 != 0) {
      iVar2 = FUN_001e0990(auStack_570,&DAT_03c38de7);
      if (iVar2 != 0) {
        *(byte *)((long)param_2 + 0x3c) = *(byte *)((long)param_2 + 0x3c) | 1;
        *(undefined4 *)(param_2 + 7) = 1;
      }
      goto LAB_001e98e4;
    }
    iVar2 = FUN_001e0990(auStack_170,"realm");
    if (iVar2 == 0) {
      iVar2 = FUN_001e0990(auStack_170,"opaque");
      if (iVar2 != 0) {
        FUN_001ec308(param_2[4]);
        lVar4 = FUN_001ec328(auStack_570);
        param_2[4] = lVar4;
        goto joined_r0x001e99c4;
      }
      iVar2 = FUN_001e0990(auStack_170,&DAT_03bd1dd0);
      if (iVar2 != 0) {
        local_578 = 0;
        lVar4 = FUN_001ec328(auStack_570);
        if (lVar4 == 0) {
          return 0x1b;
        }
        lVar5 = FUN_001e0c9c(lVar4,&DAT_03c16438,&local_578);
        if (lVar5 != 0) {
          do {
            iVar2 = FUN_001e0990(lVar5,&DAT_03c08164);
            if (iVar2 == 0) {
              iVar2 = FUN_001e0990(lVar5,"auth-int");
              bVar1 = (bool)(bVar1 | iVar2 != 0);
            }
            else {
              bVar9 = true;
            }
            lVar5 = FUN_001e0c9c(0,&DAT_03c16438,&local_578);
          } while (lVar5 != 0);
        }
        FUN_001ec308(lVar4);
        if (bVar9) {
          FUN_001ec308(param_2[5]);
          pcVar10 = "auth";
        }
        else {
          if (!bVar1) goto LAB_001e98e4;
          FUN_001ec308(param_2[5]);
          pcVar10 = "auth-int";
        }
        lVar4 = FUN_001ec328(pcVar10);
        param_2[5] = lVar4;
        goto joined_r0x001e9ad8;
      }
      iVar2 = FUN_001e0990(auStack_170,"algorithm");
      if (iVar2 == 0) {
        iVar2 = FUN_001e0990(auStack_170,"userhash");
        if ((iVar2 != 0) && (iVar2 = FUN_001e0990(auStack_570,&DAT_03c38de7), iVar2 != 0)) {
          *(byte *)((long)param_2 + 0x3c) = *(byte *)((long)param_2 + 0x3c) | 2;
        }
      }
      else {
        FUN_001ec308(param_2[6]);
        lVar4 = FUN_001ec328(auStack_570);
        param_2[6] = lVar4;
        if (lVar4 == 0) {
          return 0x1b;
        }
        iVar2 = FUN_001e0990(auStack_570,"MD5-sess");
        if (iVar2 == 0) {
          iVar2 = FUN_001e0990(auStack_570,&DAT_03c39308);
          if (iVar2 != 0) {
            *(undefined4 *)(param_2 + 3) = 0;
            goto LAB_001e98e4;
          }
          iVar2 = FUN_001e0990(auStack_570,"SHA-256");
          if (iVar2 == 0) {
            iVar2 = FUN_001e0990(auStack_570,"SHA-256-SESS");
            if (iVar2 == 0) {
              iVar2 = FUN_001e0990(auStack_570,"SHA-512-256");
              if (iVar2 == 0) {
                iVar2 = FUN_001e0990(auStack_570,"SHA-512-256-SESS");
                if (iVar2 == 0) {
                  return 0x3d;
                }
                uVar7 = 5;
              }
              else {
                uVar7 = 4;
              }
            }
            else {
              uVar7 = 3;
            }
          }
          else {
            uVar7 = 2;
          }
        }
        else {
          uVar7 = 1;
        }
        *(undefined4 *)(param_2 + 3) = uVar7;
      }
    }
    else {
      FUN_001ec308(param_2[2]);
      lVar4 = FUN_001ec328(auStack_570);
      param_2[2] = lVar4;
joined_r0x001e99c4:
      if (lVar4 == 0) {
        return 0x1b;
      }
    }
LAB_001e98e4:
    cVar6 = *local_70[0];
    param_1 = local_70[0];
    if (cVar6 != '\0') {
      do {
        pcVar10 = param_1 + 1;
        iVar2 = FUN_001cb268(cVar6);
        if (iVar2 == 0) {
          local_70[0] = param_1;
          if (*param_1 == ',') {
            param_1 = pcVar10;
            local_70[0] = pcVar10;
          }
          goto LAB_001e9884;
        }
        cVar6 = *pcVar10;
        param_1 = pcVar10;
      } while (cVar6 != '\0');
      local_70[0] = pcVar10;
    }
  } while( true );
}


