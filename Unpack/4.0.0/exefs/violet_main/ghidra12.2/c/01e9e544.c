/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9e544; name: FUN_01e9e544
 */


bool FUN_01e9e544(long *param_1,uint param_2,BigNum *param_3)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  ushort *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ushort *puVar13;
  uint uVar14;
  BigNum aBStack_1328 [8];
  long local_1320;
  undefined1 auStack_1308 [256];
  BigNum aBStack_1208 [8];
  long local_1200;
  undefined1 auStack_11e8 [8];
  Sha256Impl aSStack_11e0 [112];
  undefined4 local_1170;
  undefined4 local_1168;
  char local_1160;
  char local_115f;
  char local_115e;
  char local_115d [202];
  long local_1093;
  undefined3 local_108b;
  undefined5 uStack_1088;
  undefined3 uStack_1083;
  long local_1080;
  long local_1078;
  long local_1070;
  long local_1068;
  long local_1060;
  long local_1058;
  long local_1050;
  long local_1048;
  
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar9 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar9;
  if (lVar9 == 0) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = *(long **)(lVar9 + 0x50);
  }
  uVar12 = (ulong)*(byte *)(*param_1 + 0x90) * 0x148 | 4;
  puVar5 = (ushort *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar12,8);
  plVar6 = (long *)*param_1;
  puVar13 = puVar5;
  if ((char)plVar6[0x12] != '\0') {
    uVar14 = 0;
    do {
      uVar7 = (**(code **)(*plVar6 + 0x68))(plVar6,uVar14);
      FUN_021f1018(uVar7,puVar13);
      plVar6 = (long *)*param_1;
      uVar14 = uVar14 + 1;
      puVar13 = puVar13 + 0xa4;
    } while (uVar14 < *(byte *)(plVar6 + 0x12));
  }
  *puVar13 = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  puVar13[1] = 0x100;
  nn::crypto::detail::BigNum::BigNum(aBStack_1328);
  nn::crypto::detail::BigNum::ReserveStatic((uint *)aBStack_1328,(int)auStack_1308);
  nn::crypto::detail::BigNum::BigNum(aBStack_1208);
  nn::crypto::detail::BigNum::ReserveStatic((uint *)aBStack_1208,(int)auStack_11e8);
  local_1170 = 0;
  local_1168 = 0;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar9 = FUN_01e5f7a8();
  if (lVar9 != 0) {
    lVar10 = 0;
    iVar4 = 0;
    uVar8 = lVar9 + 0x144;
    do {
      lVar1 = lVar9 + lVar10;
      if ((*(char *)(lVar1 + 0x44) == '\0') && (iVar4 = iVar4 + 1, iVar4 == 3)) {
        uVar8 = lVar1 + 0x45;
        break;
      }
      if ((*(char *)(lVar1 + 0x45) == '\0') && (iVar4 = iVar4 + 1, iVar4 == 3)) {
        uVar8 = lVar1 + 0x46;
        break;
      }
      lVar10 = lVar10 + 2;
    } while ((int)lVar10 != 0x100);
    uVar2 = *(ushort *)(lVar9 + 0x42);
    nn::crypto::detail::Sha256Impl::Initialize();
    uVar8 = nn::crypto::detail::BigNum::Set(aBStack_1328,uVar8);
    if (((((uVar8 & 1) != 0) && (local_1320 != 0)) &&
        (uVar8 = nn::crypto::detail::BigNum::Set(aBStack_1208,lVar9 + (ulong)uVar2 + 0x41),
        (uVar8 & 1) != 0)) && (local_1200 != 0)) {
      local_1168 = 1;
    }
  }
  nn::crypto::detail::Sha256Impl::Update(aSStack_11e0,(ulong)puVar5);
  uVar8 = nn::crypto::detail::BigNum::ModExp
                    (aBStack_1328,&local_1160,param_3,(ulong)aBStack_1208,(uint *)0x100,
                     (ulong)&local_1060);
  bVar3 = false;
  if (((uVar8 & 1) != 0) && (local_1160 == '\0')) {
    if (local_115f == '\x01') {
      lVar9 = 0;
      do {
        if ((local_115e != -1) || (local_115d[lVar9] != -1)) goto LAB_01e9e814;
        local_115e = local_115d[lVar9 + 1];
        lVar9 = lVar9 + 2;
      } while (lVar9 != 0xca);
      if ((local_115e == '\0') &&
         ((local_1093 == *(long *)PTR_Asn1ObjectIdentifier_047da7b0 &&
          CONCAT53(uStack_1088,local_108b) == *(long *)(PTR_Asn1ObjectIdentifier_047da7b0 + 8)) &&
          CONCAT35(uStack_1083,uStack_1088) == *(long *)(PTR_Asn1ObjectIdentifier_047da7b0 + 0xb)))
      {
        nn::crypto::detail::Sha256Impl::GetHash(aSStack_11e0,(ulong)&local_1060);
        bVar3 = (local_1060 == local_1080 && local_1058 == local_1078) &&
                (local_1050 == local_1070 && local_1048 == local_1068);
        goto LAB_01e9e818;
      }
    }
LAB_01e9e814:
    bVar3 = false;
  }
LAB_01e9e818:
  local_1168 = 2;
  nn::crypto::detail::Sha256Impl::~Sha256Impl(aSStack_11e0);
  nn::crypto::detail::BigNum::Cleanse();
  nn::crypto::detail::BigNum::~BigNum(aBStack_1208);
  nn::crypto::detail::BigNum::~BigNum(aBStack_1328);
  if (puVar5 != (ushort *)0x0) {
    uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar5,uVar12,8);
    }
    else {
      FUN_00c48fe8(plVar11,puVar5,uVar12,8);
    }
  }
  return bVar3;
}


