/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045fab0; name: FUN_0045fab0
 */


/* WARNING: Removing unreachable block (ram,0x0045fcc4) */

undefined8
FUN_0045fab0(long param_1,int param_2,long param_3,int param_4,int param_5,int param_6,uint param_7,
            void *param_8,undefined8 param_9)

{
  bool bVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  void *__src;
  long lVar21;
  ulong uVar22;
  ulong __n;
  void *local_a8;
  uint local_94;
  void *local_70;
  undefined1 *local_68;
  
  lVar9 = FUN_0042bbc0();
  if (lVar9 == 0) {
    __src = (void *)0x0;
    lVar21 = 0;
    local_70 = (void *)0x0;
    local_68 = (undefined1 *)0x0;
    goto LAB_0045ff2c;
  }
  uVar10 = FUN_0043b700(param_9);
  __n = uVar10 & 0xffffffff;
  uVar6 = FUN_0043b720(param_9);
  __src = (void *)0x0;
  iVar8 = (int)uVar10;
  if (iVar8 < 1) {
    local_68 = (undefined1 *)0x0;
    local_70 = (void *)0x0;
    lVar21 = 0;
    goto LAB_0045ff2c;
  }
  uVar22 = (ulong)uVar6;
  local_68 = (undefined1 *)0x0;
  lVar21 = 0;
  local_70 = (void *)0x0;
  if ((int)uVar6 < 1) goto LAB_0045ff2c;
  local_70 = (void *)FUN_00452c30(__n,"external/openssl/crypto/pkcs12/p12_key.c",0x6a);
  __src = (void *)FUN_00452c30(uVar22,"external/openssl/crypto/pkcs12/p12_key.c",0x6b);
  lVar21 = FUN_00452c30((long)(iVar8 + 1),"external/openssl/crypto/pkcs12/p12_key.c",0x6c);
  iVar7 = 0;
  if (iVar8 != 0) {
    iVar7 = (iVar8 + -1 + param_2) / iVar8;
  }
  iVar15 = iVar8 + -1 + param_4;
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = iVar7 * iVar8;
  }
  iVar7 = 0;
  if (iVar8 != 0) {
    iVar7 = iVar15 / iVar8;
  }
  uVar4 = iVar7 * iVar8;
  lVar11 = (long)(int)(uVar3 + uVar4);
  local_68 = (undefined1 *)FUN_00452c30(lVar11,"external/openssl/crypto/pkcs12/p12_key.c",0x73);
  if ((((local_70 == (void *)0x0) || (__src == (void *)0x0)) || (lVar21 == 0)) ||
     (local_68 == (undefined1 *)0x0)) goto LAB_0045ff2c;
  memset(local_70,param_5,__n);
  puVar12 = local_68;
  if (0 < (int)uVar4) {
    if (iVar8 + param_4 + -2 == iVar15 - uVar4) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      do {
        iVar7 = 0;
        iVar15 = (int)lVar16;
        if (param_4 != 0) {
          iVar7 = iVar15 / param_4;
        }
        puVar12 = local_68 + lVar16;
        *puVar12 = *(undefined1 *)(param_3 + (ulong)(uint)(iVar15 - iVar7 * param_4));
        lVar16 = lVar16 + 2;
        iVar7 = 0;
        if (param_4 != 0) {
          iVar7 = (iVar15 + 1) / param_4;
        }
        puVar12[1] = *(undefined1 *)(param_3 + (ulong)(uint)((iVar15 + 1) - iVar7 * param_4));
      } while ((uVar4 & 0xfffffffe) != (uint)lVar16);
      puVar12 = local_68 + lVar16;
    }
    if ((uVar4 & 1) != 0) {
      iVar7 = 0;
      if (param_4 != 0) {
        iVar7 = (int)lVar16 / param_4;
      }
      *puVar12 = *(undefined1 *)(param_3 + (ulong)(uint)((int)lVar16 - iVar7 * param_4));
      puVar12 = puVar12 + 1;
    }
  }
  if (0 < (int)uVar3) {
    if (uVar3 == 1) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      do {
        iVar7 = 0;
        iVar15 = (int)lVar16;
        if (param_2 != 0) {
          iVar7 = iVar15 / param_2;
        }
        puVar2 = puVar12 + lVar16;
        *puVar2 = *(undefined1 *)(param_1 + (ulong)(uint)(iVar15 - iVar7 * param_2));
        lVar16 = lVar16 + 2;
        iVar7 = 0;
        if (param_2 != 0) {
          iVar7 = (iVar15 + 1) / param_2;
        }
        puVar2[1] = *(undefined1 *)(param_1 + (ulong)(uint)((iVar15 + 1) - iVar7 * param_2));
      } while ((uVar3 & 0xfffffffe) != (uint)lVar16);
      puVar12 = puVar12 + lVar16;
      if ((uVar3 & 1) == 0) goto LAB_0045fd1c;
    }
    iVar7 = 0;
    if (param_2 != 0) {
      iVar7 = (int)lVar16 / param_2;
    }
    *puVar12 = *(undefined1 *)(param_1 + (ulong)(uint)((int)lVar16 - iVar7 * param_2));
  }
LAB_0045fd1c:
  iVar7 = FUN_0042bc40(lVar9,param_9,0);
  if (iVar7 != 0) {
    lVar16 = (long)iVar8;
    local_a8 = param_8;
    local_94 = param_7;
    do {
      iVar8 = FUN_0042bd60(lVar9,local_70,__n);
      if (((iVar8 == 0) || (iVar8 = FUN_0042bd60(lVar9,local_68,lVar11), iVar8 == 0)) ||
         (iVar8 = FUN_0042be20(lVar9,__src,0), iVar8 == 0)) break;
      iVar8 = param_6 + -1;
      if (1 < param_6) {
        do {
          iVar7 = FUN_0042bc40(lVar9,param_9,0);
          if (((iVar7 == 0) || (iVar7 = FUN_0042bd60(lVar9,__src,uVar22), iVar7 == 0)) ||
             (iVar7 = FUN_0042be20(lVar9,__src,0), iVar7 == 0)) goto LAB_0045ff2c;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar18 = local_94;
      if ((int)uVar6 <= (int)local_94) {
        uVar18 = uVar6;
      }
      memcpy(local_a8,__src,(long)(int)uVar18);
      if (local_94 - uVar6 == 0 || (int)local_94 < (int)uVar6) {
        uVar20 = 1;
        goto LAB_0045ff50;
      }
      if (__n - 1 < 3) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        do {
          iVar8 = 0;
          iVar7 = (int)uVar13;
          if (uVar6 != 0) {
            iVar8 = iVar7 / (int)uVar6;
          }
          puVar12 = (undefined1 *)(lVar21 + 3 + uVar13);
          puVar12[-3] = *(undefined1 *)((long)__src + (ulong)(iVar7 - iVar8 * uVar6));
          iVar8 = 0;
          if (uVar6 != 0) {
            iVar8 = (iVar7 + 1) / (int)uVar6;
          }
          puVar12[-2] = *(undefined1 *)((long)__src + (ulong)((iVar7 + 1) - iVar8 * uVar6));
          iVar8 = 0;
          if (uVar6 != 0) {
            iVar8 = (iVar7 + 2) / (int)uVar6;
          }
          puVar12[-1] = *(undefined1 *)((long)__src + (ulong)((iVar7 + 2) - iVar8 * uVar6));
          uVar13 = uVar13 + 4;
          iVar8 = 0;
          if (uVar6 != 0) {
            iVar8 = (iVar7 + 3) / (int)uVar6;
          }
          *puVar12 = *(undefined1 *)((long)__src + (ulong)((iVar7 + 3) - iVar8 * uVar6));
        } while ((uVar10 & 0xfffffffc) != uVar13);
      }
      if ((uVar10 & 3) != 0) {
        uVar17 = uVar10 & 3;
        do {
          iVar8 = 0;
          if (uVar6 != 0) {
            iVar8 = (int)uVar13 / (int)uVar6;
          }
          uVar17 = uVar17 - 1;
          *(undefined1 *)(lVar21 + uVar13) =
               *(undefined1 *)((long)__src + (ulong)((int)uVar13 - iVar8 * uVar6));
          uVar13 = uVar13 + 1;
        } while (uVar17 != 0);
      }
      local_a8 = (void *)((long)local_a8 + uVar22);
      if (0 < (int)(uVar3 + uVar4)) {
        lVar14 = 0;
        puVar12 = local_68 + -1;
        do {
          uVar18 = 1;
          lVar19 = lVar16;
          do {
            uVar18 = uVar18 + (byte)puVar12[lVar19] + (uint)*(byte *)(lVar21 + -1 + lVar19);
            puVar12[lVar19] = (char)uVar18;
            lVar5 = lVar19 + -1;
            uVar18 = uVar18 >> 8;
            bVar1 = 0 < lVar19;
            lVar19 = lVar5;
          } while (lVar5 != 0 && bVar1);
          lVar14 = lVar14 + lVar16;
          puVar12 = puVar12 + lVar16;
        } while (lVar14 < lVar11);
      }
      iVar8 = FUN_0042bc40(lVar9,param_9,0);
      local_94 = local_94 - uVar6;
    } while (iVar8 != 0);
  }
LAB_0045ff2c:
  FUN_004806c0(0x23,0x6f,0x41,"external/openssl/crypto/pkcs12/p12_key.c",0xa5);
  uVar20 = 0;
LAB_0045ff50:
  FUN_00452f80(__src,"external/openssl/crypto/pkcs12/p12_key.c",0xa8);
  FUN_00452f80(lVar21,"external/openssl/crypto/pkcs12/p12_key.c",0xa9);
  FUN_00452f80(local_70,"external/openssl/crypto/pkcs12/p12_key.c",0xaa);
  FUN_00452f80(local_68,"external/openssl/crypto/pkcs12/p12_key.c",0xab);
  FUN_0042bbe0(lVar9);
  return uVar20;
}


