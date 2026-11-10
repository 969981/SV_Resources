/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00497480; name: FUN_00497480
 */


int FUN_00497480(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *pvVar11;
  ulong uVar12;
  bool bVar13;
  undefined4 local_88 [2];
  uint *local_80;
  uint local_78 [2];
  void *local_70;
  undefined8 local_68;
  void *local_58;
  
  uVar9 = FUN_00483b40();
  local_78[1] = 0x16;
  local_80 = local_78;
  local_68 = 0;
  local_88[0] = 2;
  iVar6 = FUN_0048a3f0(uVar9,0xd,0xffffffff);
  if (iVar6 != -1) {
    do {
      FUN_0048a390(uVar9,iVar6);
      uVar10 = FUN_0048a380();
      uVar7 = FUN_003dd5a0(&local_58,uVar10);
      pvVar4 = local_58;
      if ((int)uVar7 < 0) {
        return 0x11;
      }
      uVar12 = (ulong)uVar7;
      do {
        uVar3 = uVar12 - 1;
        if ((long)uVar12 < 1) {
          uVar7 = 0;
          goto LAB_00497570;
        }
        iVar8 = (int)uVar12;
        uVar12 = uVar3;
      } while (*(char *)((long)local_58 + (ulong)(iVar8 - 1)) == '\0');
      uVar7 = (int)uVar3 + 1;
LAB_00497570:
      pvVar11 = memchr(local_58,0,(long)(int)uVar7);
      if (pvVar11 != (void *)0x0) {
        FUN_00452f80(pvVar4,"external/openssl/crypto/x509v3/v3_ncons.c",0x164);
        return 0x35;
      }
      if ((int)uVar7 < 1) {
LAB_004974f8:
        FUN_00452f80(pvVar4,"external/openssl/crypto/x509v3/v3_ncons.c",0x194);
      }
      else {
        uVar12 = 0;
        bVar13 = true;
        do {
          while (((bVar2 = *(byte *)((long)pvVar4 + uVar12), (byte)((bVar2 & 0xdf) + 0xbf) < 0x1a ||
                  (bVar2 == 0x5f)) || ((byte)(bVar2 - 0x30) < 10))) {
LAB_004975a4:
            uVar12 = uVar12 + 1;
            if (uVar7 == uVar12) {
              if (bVar13) goto LAB_004974f8;
              goto LAB_0049763c;
            }
          }
          if ((uVar12 == 0) || ((long)(int)(uVar7 - 1) <= (long)uVar12)) goto LAB_004974f8;
          if (bVar2 == 0x2d) goto LAB_004975a4;
          if (((bVar2 != 0x2e) || (cVar1 = *(char *)((long)pvVar4 + uVar12 + 1), cVar1 == '.')) ||
             ((cVar1 == '-' || (*(char *)((long)pvVar4 + (ulong)((int)uVar12 - 1)) == '-'))))
          goto LAB_004974f8;
          bVar13 = false;
          bVar5 = (ulong)uVar7 - 1 != uVar12;
          uVar12 = uVar12 + 1;
        } while (bVar5);
LAB_0049763c:
        if (uVar7 != 0) {
          local_70 = pvVar4;
          local_78[0] = uVar7;
          iVar8 = FUN_00497320(local_88,param_2);
          FUN_00452f80(pvVar4,"external/openssl/crypto/x509v3/v3_ncons.c",0x1be);
          if (iVar8 != 0) {
            return iVar8;
          }
        }
      }
      iVar6 = FUN_0048a3f0(uVar9,0xd,iVar6);
    } while (iVar6 != -1);
  }
  return 0;
}


