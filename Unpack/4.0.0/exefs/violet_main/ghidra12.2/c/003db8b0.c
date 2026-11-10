/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003db8b0; name: FUN_003db8b0
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_003db8b0(long param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  bool bVar16;
  long lVar17;
  char *pcVar18;
  undefined8 in_stack_fffffffffffffeb8;
  long local_128;
  long local_118;
  ulong *local_108;
  ulong local_f8;
  ulong local_f0 [8];
  uint local_ac;
  uint local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0 [8];
  
  uVar14 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  local_f8 = 0;
  if (*(long *)(param_1 + 0x860) != 0) {
    local_f0[0] = 0;
    if ((param_2 >> 6 & 1) == 0) {
      lVar6 = FUN_003b0120(param_1);
      iVar4 = FUN_003acf80(param_1,1);
      if (iVar4 == 0) {
        return false;
      }
      iVar4 = FUN_003b5600(param_1,local_a0,0x40,local_f0);
      if (iVar4 == 0) {
        return false;
      }
      uVar5 = FUN_0043b720(lVar6);
      if ((int)uVar5 < 0) {
        FUN_003c3950(param_1,0x50,3000,6,"external/openssl/ssl/tls13_enc.c",0x21d);
        return false;
      }
      local_f0[0] = (ulong)uVar5;
      if (((param_2 & 0x11) != 0x11) && ((param_2 & 0x22) != 0x22)) {
        if ((param_2 >> 7 & 1) == 0) {
          iVar4 = FUN_003daff0(param_1,lVar6,param_1 + 0x1bc,"res master",10,local_a0,local_f0[0],
                               param_1 + 0x1fc,local_f0[0],CONCAT44(uVar14,1));
          if (iVar4 == 0) {
            return false;
          }
          uVar14 = 3;
        }
        else {
          uVar14 = 2;
        }
        if (*(int *)(param_1 + 0x38) == 0) {
          *(undefined4 *)(param_1 + 0x834) = uVar14;
          return true;
        }
        *(undefined4 *)(param_1 + 0x830) = uVar14;
        return true;
      }
LAB_003dbe34:
      if ((param_2 >> 7 & 1) == 0) {
        uVar12 = CONCAT44(uVar14,1);
        iVar4 = FUN_003daff0(param_1,lVar6,param_1 + 0x1bc,"c ap traffic",0xc,local_a0,local_f0[0],
                             param_1 + 0x33c,local_f0[0],uVar12);
        uVar14 = (undefined4)((ulong)uVar12 >> 0x20);
        if (iVar4 == 0) {
          return false;
        }
        iVar4 = FUN_003b5950(param_1,"CLIENT_TRAFFIC_SECRET_0",param_1 + 0x33c,local_f0[0]);
        if (iVar4 == 0) {
          return false;
        }
        iVar4 = FUN_003daff0(param_1,lVar6,param_1 + 0x1bc,"s ap traffic",0xc,local_a0,local_f0[0],
                             param_1 + 0x37c,local_f0[0],CONCAT44(uVar14,1));
        if (iVar4 == 0) {
          return false;
        }
        iVar4 = FUN_003b5950(param_1,"SERVER_TRAFFIC_SECRET_0",param_1 + 0x37c,local_f0[0]);
        if (iVar4 == 0) {
          return false;
        }
        uVar14 = 3;
      }
      else {
        lVar7 = param_1 + 0x3bc;
        uVar12 = CONCAT44(uVar14,1);
        iVar4 = FUN_003daff0(param_1,lVar6,param_1 + 0x17c,"c hs traffic",0xc,local_a0,local_f0[0],
                             lVar7,local_f0[0],uVar12);
        uVar14 = (undefined4)((ulong)uVar12 >> 0x20);
        if (iVar4 == 0) {
          return false;
        }
        iVar4 = FUN_003b5950(param_1,"CLIENT_HANDSHAKE_TRAFFIC_SECRET",lVar7,local_f0[0]);
        if (iVar4 == 0) {
          return false;
        }
        uVar12 = CONCAT44(uVar14,1);
        iVar4 = FUN_003daff0(param_1,lVar6,lVar7,"finished",8,0,0,param_1 + 0x23c,local_f0[0],uVar12
                            );
        if (iVar4 == 0) {
          return false;
        }
        lVar7 = param_1 + 0x3fc;
        uVar12 = CONCAT44((int)((ulong)uVar12 >> 0x20),1);
        iVar4 = FUN_003daff0(param_1,lVar6,param_1 + 0x17c,"s hs traffic",0xc,local_a0,local_f0[0],
                             lVar7,local_f0[0],uVar12);
        uVar14 = (undefined4)((ulong)uVar12 >> 0x20);
        if (iVar4 == 0) {
          return false;
        }
        iVar4 = FUN_003b5950(param_1,"SERVER_HANDSHAKE_TRAFFIC_SECRET",lVar7,local_f0[0]);
        if (iVar4 == 0) {
          return false;
        }
        iVar4 = FUN_003daff0(param_1,lVar6,lVar7,"finished",8,0,0,param_1 + 0x27c,local_f0[0],
                             CONCAT44(uVar14,1));
        if (iVar4 == 0) {
          return false;
        }
        uVar14 = 2;
      }
      iVar4 = FUN_003dc9d0(param_1,uVar14);
      if (iVar4 == 0) {
        return false;
      }
      if (*(int *)(param_1 + 0x38) == 0) {
        *(undefined4 *)(param_1 + 0x830) = uVar14;
        return true;
      }
      *(undefined4 *)(param_1 + 0x834) = uVar14;
      return true;
    }
    lVar6 = FUN_003b9d30(*(undefined8 *)(param_1 + 0x5d0));
    lVar7 = FUN_003e9560(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0),3,0,&local_a8);
    if (lVar7 < 1) {
      uVar12 = 0x14c;
      uVar13 = 0x1e1;
    }
    else {
      if (((*(int *)(param_1 + 0x84) == 2) && (*(int *)(param_1 + 0x1928) != 0)) &&
         (*(int *)(*(long *)(param_1 + 0x5d0) + 0x23c) == 0)) {
        if ((*(long *)(param_1 + 0x5d8) == 0) ||
           (*(int *)(param_1 + 0x1928) != *(int *)(*(long *)(param_1 + 0x5d8) + 0x23c))) {
          FUN_003c3950(param_1,0x50,3000,0x44,"external/openssl/ssl/tls13_enc.c",0x1f0);
          return false;
        }
        lVar6 = FUN_003b9d30();
      }
      if (lVar6 == 0) {
        uVar12 = 0xdb;
        uVar13 = 0x1f7;
      }
      else {
        lVar8 = FUN_0042bbc0();
        if (lVar8 != 0) {
          lVar6 = FUN_003b00f0(*(undefined4 *)(lVar6 + 0x40));
          if (((lVar6 == 0) || (iVar4 = FUN_0042bc40(lVar8,lVar6,0), iVar4 == 0)) ||
             ((iVar4 = FUN_0042bd60(lVar8,CONCAT44(uStack_a4,local_a8),lVar7), iVar4 == 0 ||
              (iVar4 = FUN_0042be20(lVar8,local_a0,&local_ac), iVar4 == 0)))) {
            FUN_003c3950(param_1,0x50,3000,0x44,"external/openssl/ssl/tls13_enc.c",0x20b);
            FUN_0042bbe0(lVar8);
            return false;
          }
          local_f0[0] = (ulong)local_ac;
          FUN_0042bbe0(lVar8);
          if (((param_2 & 0x11) != 0x11) && ((param_2 & 0x22) != 0x22)) {
            iVar4 = FUN_003daff0(param_1,lVar6,param_1 + 0x13c,"c e traffic",0xb,local_a0,
                                 local_f0[0],param_1 + 0x43c,local_f0[0],CONCAT44(uVar14,1));
            if (iVar4 == 0) {
              return false;
            }
            iVar4 = FUN_003b5950(param_1,"CLIENT_EARLY_TRAFFIC_SECRET",param_1 + 0x43c,local_f0[0]);
            if (iVar4 == 0) {
              return false;
            }
            iVar4 = FUN_003dc9d0(param_1,1);
            return iVar4 != 0;
          }
          goto LAB_003dbe34;
        }
        uVar12 = 0x41;
        uVar13 = 0x203;
      }
    }
    FUN_003c3950(param_1,0x50,3000,uVar12,"external/openssl/ssl/tls13_enc.c",uVar13);
    return false;
  }
  if ((param_2 & 1) != 0) {
    if (*(long *)(param_1 + 0x500) != 0) {
      FUN_00439d50();
      lVar6 = *(long *)(param_1 + 0x500);
LAB_003dbb58:
      lVar7 = param_1 + 0x508;
      FUN_003a4510(param_1 + 0x948);
      goto joined_r0x003dbb40;
    }
    lVar6 = FUN_00439de0();
    *(long *)(param_1 + 0x500) = lVar6;
    if (lVar6 != 0) goto LAB_003dbb58;
    uVar12 = 0x41;
    uVar13 = 0x2b6;
    goto LAB_003dc43c;
  }
  *(undefined4 *)(param_1 + 0x7c) = 1;
  if (*(long *)(param_1 + 0x530) == 0) {
    lVar6 = FUN_00439de0();
    *(long *)(param_1 + 0x530) = lVar6;
    if (lVar6 == 0) {
      uVar12 = 0x41;
      uVar13 = 0x2c6;
      goto LAB_003dc43c;
    }
  }
  else {
    FUN_00439d50();
    lVar6 = *(long *)(param_1 + 0x530);
  }
  lVar7 = param_1 + 0x538;
  FUN_003a4520(param_1 + 0x948);
joined_r0x003dbb40:
  if ((((param_2 ^ 0xffffffff) & 0x12) == 0) || ((param_2 & 0x21) == 0x21)) {
    if ((param_2 >> 6 & 1) == 0) {
      if ((param_2 >> 7 & 1) == 0) {
        local_108 = (ulong *)(param_1 + 700);
        local_118 = 0;
        bVar16 = false;
        local_128 = 0;
        bVar1 = false;
        lVar17 = 0;
        bVar3 = 0;
        uVar12 = 0;
        lVar8 = param_1 + 0x1bc;
        pcVar18 = "c ap traffic";
        bVar2 = true;
        uVar13 = 0xc;
        pcVar15 = "CLIENT_TRAFFIC_SECRET_0";
      }
      else {
        local_118 = param_1 + 0x23c;
        lVar8 = param_1 + 0x17c;
        FUN_003b0120(param_1);
        iVar4 = FUN_0043b720();
        local_128 = (long)iVar4;
        local_108 = (ulong *)(param_1 + 0x2fc);
        bVar16 = false;
        bVar1 = false;
        bVar3 = 0;
        bVar2 = false;
        lVar17 = 0;
        uVar12 = 0;
        pcVar18 = "c hs traffic";
        uVar13 = 0xc;
        pcVar15 = "CLIENT_HANDSHAKE_TRAFFIC_SECRET";
      }
      goto LAB_003dbf64;
    }
    lVar8 = FUN_003b9d30(*(undefined8 *)(param_1 + 0x5d0));
    lVar9 = FUN_003e9560(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0),3,0,local_a0);
    if (lVar9 < 1) {
      uVar12 = 0x14c;
      uVar13 = 0x2e2;
LAB_003dc43c:
      FUN_003c3950(param_1,0x50,0x1b8,uVar12,"external/openssl/ssl/tls13_enc.c",uVar13);
    }
    else {
      if (((*(int *)(param_1 + 0x84) == 2) && (*(int *)(param_1 + 0x1928) != 0)) &&
         (*(int *)(*(long *)(param_1 + 0x5d0) + 0x23c) == 0)) {
        if ((*(long *)(param_1 + 0x5d8) == 0) ||
           (*(int *)(param_1 + 0x1928) != *(int *)(*(long *)(param_1 + 0x5d8) + 0x23c))) {
          uVar12 = 0x44;
          uVar13 = 0x2f3;
          goto LAB_003dc43c;
        }
        lVar8 = FUN_003b9d30();
      }
      if (lVar8 == 0) {
        uVar12 = 0xdb;
        uVar13 = 0x2fa;
        goto LAB_003dc43c;
      }
      lVar10 = FUN_0042bbc0();
      if (lVar10 == 0) {
        uVar12 = 0x41;
        uVar13 = 0x306;
        goto LAB_003dc43c;
      }
      FUN_003b1d60(lVar8);
      FUN_0045bce0();
      uVar12 = FUN_0043d0f0();
      lVar17 = FUN_003b00f0(*(undefined4 *)(lVar8 + 0x40));
      if (((lVar17 == 0) || (iVar4 = FUN_0042bc40(lVar10,lVar17,0), iVar4 == 0)) ||
         ((iVar4 = FUN_0042bd60(lVar10,local_a0[0],lVar9), iVar4 == 0 ||
          (iVar4 = FUN_0042be20(lVar10,local_f0,&local_a8), iVar4 == 0)))) {
        FUN_003c3950(param_1,0x50,0x1b8,0x44,"external/openssl/ssl/tls13_enc.c",0x30f);
        FUN_0042bbe0(lVar10);
      }
      else {
        local_f8 = (ulong)local_a8;
        lVar8 = param_1 + 0x13c;
        FUN_0042bbe0(lVar10);
        uVar13 = CONCAT44(uVar14,1);
        iVar4 = FUN_003daff0(param_1,lVar17,lVar8,"e exp master",0xc,local_f0,local_f8,
                             param_1 + 0x4bc,local_f8,uVar13);
        uVar14 = (undefined4)((ulong)uVar13 >> 0x20);
        if (iVar4 == 0) {
          uVar12 = 0x44;
          uVar13 = 0x31d;
          goto LAB_003dc43c;
        }
        iVar4 = FUN_003b5950(param_1,"EARLY_EXPORTER_SECRET",param_1 + 0x4bc,local_f8);
        if (iVar4 != 0) {
          local_108 = local_f0;
          bVar16 = false;
          bVar1 = false;
          local_118 = 0;
          bVar2 = false;
          pcVar18 = "c e traffic";
          local_128 = 0;
          uVar13 = 0xb;
          bVar3 = 1;
          pcVar15 = "CLIENT_EARLY_TRAFFIC_SECRET";
          goto LAB_003dbf64;
        }
      }
    }
  }
  else {
    if ((param_2 >> 7 & 1) == 0) {
      local_108 = local_f0;
      bVar1 = false;
      bVar3 = 0;
      bVar2 = false;
      lVar17 = 0;
      uVar12 = 0;
      lVar8 = param_1 + 0x1bc;
      local_118 = 0;
      pcVar18 = "s ap traffic";
      local_128 = 0;
      bVar16 = true;
      uVar13 = 0xc;
      pcVar15 = "SERVER_TRAFFIC_SECRET_0";
    }
    else {
      local_108 = local_f0;
      local_118 = param_1 + 0x27c;
      lVar8 = param_1 + 0x17c;
      FUN_003b0120(param_1);
      iVar4 = FUN_0043b720();
      local_128 = (long)iVar4;
      bVar16 = false;
      bVar3 = 0;
      bVar2 = false;
      lVar17 = 0;
      uVar12 = 0;
      pcVar18 = "s hs traffic";
      bVar1 = true;
      uVar13 = 0xc;
      pcVar15 = "SERVER_HANDSHAKE_TRAFFIC_SECRET";
    }
LAB_003dbf64:
    if ((param_2 >> 6 & 1) == 0) {
      lVar17 = FUN_003b0120(param_1);
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x278);
      iVar4 = FUN_003acf80(param_1,1);
      if ((iVar4 == 0) || (iVar4 = FUN_003b5600(param_1,local_f0,0x40,&local_f8), iVar4 == 0))
      goto LAB_003dc444;
    }
    if (bVar16) {
      memcpy((void *)(param_1 + 700),local_f0,local_f8);
    }
    if (bVar1) {
      memcpy((void *)(param_1 + 0x2fc),local_f0,local_f8);
    }
    if (bVar2) {
      uVar11 = FUN_003b0120(param_1);
      iVar4 = FUN_003daff0(param_1,uVar11,lVar8,"res master",10,local_f0,local_f8,param_1 + 0x1fc,
                           local_f8,CONCAT44(uVar14,1));
      if (iVar4 == 0) goto LAB_003dc444;
      pcVar18 = "c ap traffic";
    }
    iVar4 = FUN_003dc4c0(param_1,param_2 & 2,lVar17,uVar12,lVar8,local_108,pcVar18,uVar13,local_a0,
                         lVar7,lVar6);
    uVar14 = (undefined4)((ulong)lVar7 >> 0x20);
    if (iVar4 != 0) {
      if (bVar16) {
        memcpy((void *)(param_1 + 0x37c),local_a0,local_f8);
        uVar12 = FUN_003b0120(param_1);
        uVar13 = CONCAT44(uVar14,1);
        iVar4 = FUN_003daff0(param_1,uVar12,lVar8,"exp master",10,local_108,local_f8,param_1 + 0x47c
                             ,local_f8,uVar13);
        uVar14 = (undefined4)((ulong)uVar13 >> 0x20);
        if ((iVar4 == 0) ||
           (iVar4 = FUN_003b5950(param_1,"EXPORTER_SECRET",param_1 + 0x47c,local_f8), iVar4 == 0))
        goto LAB_003dc444;
      }
      else if (bVar2) {
        memcpy((void *)(param_1 + 0x33c),local_a0,local_f8);
      }
      iVar4 = FUN_003b5950(param_1,pcVar15,local_a0,local_f8);
      if (iVar4 != 0) {
        if (local_118 != 0) {
          uVar12 = FUN_003b0120(param_1);
          iVar4 = FUN_003daff0(param_1,uVar12,local_a0,"finished",8,0,0,local_118,local_128,
                               CONCAT44(uVar14,1));
          if (iVar4 == 0) goto LAB_003dc444;
        }
        uVar14 = 2;
        if (!(bool)(bVar3 & *(int *)(param_1 + 0x38) == 0)) {
          uVar14 = 0;
        }
        *(undefined4 *)(param_1 + 0x7c) = uVar14;
        bVar16 = true;
        goto LAB_003dc448;
      }
    }
  }
LAB_003dc444:
  bVar16 = false;
LAB_003dc448:
  FUN_00453300(local_a0,0x40);
  return bVar16;
}


