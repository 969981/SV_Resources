/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00488e60; name: FUN_00488e60
 */


ulong FUN_00488e60(int param_1,long *param_2,long param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  size_t __n;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  undefined1 *__s1;
  uint local_b8;
  uint local_b4;
  uint local_ac;
  undefined1 auStack_a8 [64];
  undefined1 *local_68;
  
  uVar4 = 10;
  if (param_4 != 0) {
    uVar4 = 5;
  }
  local_ac = 0;
  if (param_1 <= param_4) {
    uVar4 = uVar4 & 3;
  }
  uVar1 = uVar4 & 0xc;
  if (*(int *)((long)param_2 + 0x2c) < 0) {
    uVar1 = uVar4;
  }
  if (((uVar1 & *(uint *)(param_2 + 5)) == 0) || (iVar3 = FUN_0047e430(param_2[1]), iVar3 < 1)) {
    puVar11 = (undefined1 *)0x0;
  }
  else {
    iVar14 = 0;
    __s1 = (undefined1 *)0x0;
    puVar11 = (undefined1 *)0x0;
    uVar4 = 0;
    uVar12 = 0x100;
    local_b8 = 0x100;
    local_b4 = 0x100;
    uVar10 = 0x100;
    do {
      pbVar6 = (byte *)FUN_0047e450(param_2[1],iVar14);
      bVar2 = *pbVar6;
      if ((uVar1 >> (ulong)(bVar2 & 0x1f) & 1) != 0) {
        if (local_b4 != bVar2) {
          uVar12 = 0x100;
          local_b8 = (uint)*(byte *)(*(long *)(*param_2 + 8) + (ulong)pbVar6[2]);
          local_b4 = (uint)bVar2;
        }
        bVar2 = pbVar6[1];
        if (uVar10 == bVar2) {
          uVar13 = (ulong)pbVar6[2];
          if ((uVar13 == 0) || (local_b8 <= *(byte *)(*(long *)(*param_2 + 8) + uVar13))) {
            if (uVar12 != pbVar6[2]) {
              lVar8 = *(long *)(*(long *)*param_2 + uVar13 * 8);
              local_ac = uVar4;
              if (lVar8 != 0) goto LAB_00489030;
LAB_00488f9c:
              uVar12 = (uint)uVar13;
              __s1 = puVar11;
              uVar4 = local_ac;
            }
            __n = (size_t)local_ac;
            if (*(ulong *)(pbVar6 + 0x10) == __n) goto LAB_00489068;
          }
        }
        else {
          FUN_00452f80(puVar11,"external/openssl/crypto/x509/x509_vfy.c",0xa98);
          local_68 = (undefined1 *)0x0;
          if (bVar2 == 1) {
            uVar7 = FUN_00485d40(param_3);
            uVar4 = FUN_0048c540(uVar7,&local_68);
          }
          else {
            if (bVar2 != 0) {
              uVar7 = 0x85;
              uVar9 = 0xa3b;
              goto LAB_0048913c;
            }
            uVar4 = FUN_0048c820(param_3,&local_68);
          }
          if (((int)uVar4 < 0) || (local_68 == (undefined1 *)0x0)) {
            uVar7 = 0x41;
            uVar9 = 0xa40;
LAB_0048913c:
            FUN_004806c0(0xb,0x6b,uVar7,"external/openssl/crypto/x509/x509_vfy.c",uVar9);
            return 0xffffffff;
          }
          uVar13 = (ulong)pbVar6[2];
          local_b8 = (uint)*(byte *)(((long *)*param_2)[1] + uVar13);
          lVar8 = *(long *)(*(long *)*param_2 + uVar13 * 8);
          puVar11 = local_68;
          local_ac = uVar4;
          uVar10 = (uint)bVar2;
          if (lVar8 == 0) goto LAB_00488f9c;
LAB_00489030:
          uVar4 = local_ac;
          __s1 = auStack_a8;
          iVar5 = FUN_0042c130(puVar11,local_ac,auStack_a8,&local_ac,lVar8,0);
          if (iVar5 == 0) {
            uVar13 = 0xffffffff;
            goto LAB_004890d0;
          }
          uVar12 = (uint)uVar13;
          __n = (size_t)local_ac;
          if (*(ulong *)(pbVar6 + 0x10) != __n) goto LAB_00488f00;
LAB_00489068:
          iVar5 = memcmp(__s1,*(void **)(pbVar6 + 8),__n);
          if (iVar5 == 0) {
            uVar4 = 1 << (ulong)(local_b4 & 0x1f) & 0xc;
            uVar13 = (ulong)(uVar4 != 0);
            if ((uVar4 != 0) || (*(int *)((long)param_2 + 0x2c) < 0)) {
              *(int *)((long)param_2 + 0x2c) = param_4;
              param_2[3] = (long)pbVar6;
              FUN_00452f80(param_2[4],"external/openssl/crypto/x509/x509_vfy.c",0xacc);
              param_2[4] = param_3;
              FUN_00485cf0();
              goto LAB_004890d0;
            }
            break;
          }
        }
      }
LAB_00488f00:
      iVar14 = iVar14 + 1;
    } while (iVar3 != iVar14);
  }
  uVar13 = 0;
LAB_004890d0:
  FUN_00452f80(puVar11,"external/openssl/crypto/x509/x509_vfy.c",0xad5);
  return uVar13;
}


