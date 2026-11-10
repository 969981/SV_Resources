/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049df20; name: FUN_0049df20
 */


undefined4 FUN_0049df20(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  long lVar6;
  int iVar7;
  BuiltInCertificateInfoBase *pBVar8;
  BuiltInCertificateInfoBase *pBVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 local_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80 [2];
  BuiltInCertificateInfoBase *local_70;
  uint local_64;
  
  local_64 = 0;
  local_70 = (BuiltInCertificateInfoBase *)0x0;
  nn::os::LockMutex((MutexType *)&DAT_047f44a0);
  if (DAT_047f4460 != 0 || DAT_047f4480 != (CaCertificateId *)0x0) {
    if (DAT_047f4468 == 0) {
      uVar11 = DAT_047f4460;
      if (DAT_047f4460 == 0xffffffff) {
        uVar11 = 1;
      }
                    /* try { // try from 0049dfc8 to 0049dfcf has its CatchHandler @ 0049e2ec */
      iVar3 = nn::ssl::BuiltInManager::GetBuiltInCertificateBufSize(&local_64,DAT_047f4480,uVar11);
                    /* try { // try from 0049e048 to 0049e057 has its CatchHandler @ 0049e2e4 */
      if ((iVar3 == 0) &&
         (puVar5 = (uchar *)FUN_00452c30(local_64,
                                         "external/openssl/nnsdk/nnsdk_LoadBuiltinCerts.cpp",0x1d5),
         puVar5 != (uchar *)0x0)) {
        uVar11 = DAT_047f4460;
        if (DAT_047f4460 == 0xffffffff) {
          uVar11 = 1;
        }
                    /* try { // try from 0049e074 to 0049e07f has its CatchHandler @ 0049e2e0 */
        iVar3 = nn::ssl::BuiltInManager::GetBuiltInCertificates
                          (&local_70,puVar5,local_64,DAT_047f4480,uVar11);
        if (iVar3 == 0) {
                    /* try { // try from 0049e090 to 0049e09f has its CatchHandler @ 0049e2e4 */
          FUN_00452f80(DAT_047f4480,"external/openssl/nnsdk/nnsdk_LoadBuiltinCerts.cpp",0x1e2);
          DAT_047f4480 = (CaCertificateId *)0x0;
          if ((DAT_047f4458 & 1) == 0) {
            if (DAT_047f4478 == (void *)0x0) {
              DAT_047f4478 = (void *)FUN_00452c30(0xf0000,
                                                  "external/openssl/nnsdk/nnsdk_LoadBuiltinCerts.cpp"
                                                  ,0x68);
              if ((DAT_047f4478 == (void *)0x0) ||
                 (DAT_047f4470 = nn::lmem::CreateExpHeap(DAT_047f4478,0xf0000,4), DAT_047f4470 != 0)
                 ) goto LAB_0049e0b4;
              if (DAT_047f4478 == (void *)0x0) goto LAB_0049e084;
            }
                    /* try { // try from 0049e0e0 to 0049e147 has its CatchHandler @ 0049e2d0 */
            FUN_00452f80(DAT_047f4478,"external/openssl/nnsdk/nnsdk_LoadBuiltinCerts.cpp",0x77);
            goto LAB_0049e084;
          }
LAB_0049e0b4:
          if ((DAT_047f4460 == 0xffffffff) || (0 < (int)DAT_047f4460)) {
            if (DAT_047f4460 == 0xffffffff) {
              if (*(int *)local_70 == -1) goto LAB_0049e0cc;
              uVar11 = 0;
              pBVar9 = local_70;
              do {
                pBVar8 = pBVar9 + 0x18;
                if (*(int *)(pBVar9 + 4) == 1) {
                  uVar11 = uVar11 + 1;
                }
                pBVar9 = pBVar8;
              } while (*(int *)pBVar8 != -1);
            }
            else {
              uVar11 = 0;
              uVar1 = DAT_047f4460;
              if ((int)DAT_047f4460 < 2) {
                uVar1 = 1;
              }
              uVar12 = (ulong)uVar1;
              pBVar9 = local_70 + 4;
              do {
                if (*(int *)(pBVar9 + -4) == -1) break;
                if (*(int *)pBVar9 == 1) {
                  uVar11 = uVar11 + 1;
                }
                uVar12 = uVar12 - 1;
                pBVar9 = pBVar9 + 0x18;
              } while (uVar12 != 0);
            }
          }
          else {
LAB_0049e0cc:
            uVar11 = 0;
          }
          DAT_047f445c = uVar11;
                    /* try { // try from 0049e1a8 to 0049e1cb has its CatchHandler @ 0049e2d4 */
          FUN_0049d970();
          DAT_047f4468 = FUN_00452c30((ulong)uVar11 << 3,
                                      "external/openssl/nnsdk/nnsdk_LoadBuiltinCerts.cpp",0x203);
          FUN_0049dab0();
          if ((DAT_047f4460 == 0xffffffff) || (0 < (int)DAT_047f4460)) {
            lVar13 = 0;
            iVar3 = 0;
            iVar4 = 1;
            do {
              iVar7 = iVar4;
              pBVar9 = local_70 + lVar13;
              uStack_88 = *(ulong *)(pBVar9 + 8);
              local_90 = *(undefined8 *)pBVar9;
              local_80[0] = *(undefined8 *)(pBVar9 + 0x10);
              bVar2 = (int)local_90 == -1;
              if (bVar2) break;
              local_90._4_4_ = (int)((ulong)local_90 >> 0x20);
              bVar2 = local_90._4_4_ == 1;
              if (bVar2) {
                if (iVar7 == 1) {
                    /* try { // try from 0049e23c to 0049e24b has its CatchHandler @ 0049e2dc */
                  local_98 = local_80[0];
                  FUN_0048c810(0,&local_98,uStack_88 & 0xffffffff);
                  FUN_0048c830();
                }
                    /* try { // try from 0049e24c to 0049e24f has its CatchHandler @ 0049e2d8 */
                FUN_0049d970();
                    /* try { // try from 0049e254 to 0049e28f has its CatchHandler @ 0049e2e8 */
                lVar6 = FUN_0048c810(0,local_80,uStack_88 & 0xffffffff);
                if (lVar6 == 0) {
                  iVar4 = 0;
                }
                else {
                  *(long *)(DAT_047f4468 + (long)iVar3 * 8) = lVar6;
                  iVar4 = FUN_00484b20(param_1,lVar6);
                  iVar3 = iVar3 + 1;
                }
                FUN_0049dab0();
                if ((lVar6 == 0) || (iVar4 == 0)) goto LAB_0049e084;
              }
              lVar13 = lVar13 + 0x18;
              iVar4 = iVar7 + 1;
            } while ((DAT_047f4460 == 0xffffffff) || (iVar7 < (int)DAT_047f4460));
          }
          bVar2 = true;
        }
        else {
LAB_0049e084:
          bVar2 = false;
        }
                    /* try { // try from 0049e2b8 to 0049e2cb has its CatchHandler @ 0049e2f0 */
        FUN_00452f80(puVar5,"external/openssl/nnsdk/nnsdk_LoadBuiltinCerts.cpp",0x23e);
      }
      else {
        bVar2 = false;
      }
    }
    else {
                    /* try { // try from 0049df7c to 0049df7f has its CatchHandler @ 0049e2f4 */
      FUN_0049d970();
      if (DAT_047f445c != 0) {
        uVar12 = 0;
        do {
                    /* try { // try from 0049df9c to 0049dfa3 has its CatchHandler @ 0049e2f8 */
          if ((*(long *)(DAT_047f4468 + uVar12 * 8) == 0) ||
             (iVar3 = FUN_00484b20(param_1), iVar3 == 0)) {
            bVar2 = false;
            goto LAB_0049dfe0;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < DAT_047f445c);
      }
      bVar2 = true;
LAB_0049dfe0:
                    /* try { // try from 0049dfe0 to 0049dfe3 has its CatchHandler @ 0049e2f4 */
      FUN_0049dab0();
    }
    if (DAT_047f4480 != (CaCertificateId *)0x0) {
                    /* try { // try from 0049dfec to 0049dffb has its CatchHandler @ 0049e2f0 */
      FUN_00452f80(DAT_047f4480,"external/openssl/nnsdk/nnsdk_LoadBuiltinCerts.cpp",0x244);
      DAT_047f4480 = (CaCertificateId *)0x0;
    }
    if (!bVar2) {
      DAT_047f4460 = 0;
      uVar10 = 0;
      goto LAB_0049e014;
    }
  }
  uVar10 = 1;
LAB_0049e014:
  nn::os::UnlockMutex((MutexType *)&DAT_047f44a0);
  return uVar10;
}


