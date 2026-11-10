/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b6e9ec; name: FUN_00b6e9ec
 */


void FUN_00b6e9ec(undefined2 *param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                 ulong param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  BigNum aBStack_320 [8];
  long local_318;
  undefined1 auStack_300 [256];
  BigNum aBStack_200 [8];
  long local_1f8;
  undefined1 auStack_1e0 [256];
  Sha256Impl aSStack_e0 [112];
  undefined4 local_70;
  undefined4 local_68;
  
  nn::crypto::detail::BigNum::BigNum(aBStack_320);
  nn::crypto::detail::BigNum::ReserveStatic((uint *)aBStack_320,(int)auStack_300);
  nn::crypto::detail::BigNum::BigNum(aBStack_200);
  nn::crypto::detail::BigNum::ReserveStatic((uint *)aBStack_200,(int)auStack_1e0);
  local_70 = 0;
  local_68 = 0;
  nn::crypto::detail::Sha256Impl::Initialize();
  uVar3 = nn::crypto::detail::BigNum::Set(aBStack_320,param_2);
  if (((((uVar3 & 1) != 0) && (local_318 != 0)) &&
      (uVar3 = nn::crypto::detail::BigNum::Set(aBStack_200,param_3), (uVar3 & 1) != 0)) &&
     (local_1f8 != 0)) {
    local_68 = 1;
    nn::crypto::detail::Sha256Impl::Update(aSStack_e0,param_4);
    *param_1 = 0x100;
    memset(param_1 + 1,0xff,0xca);
    *(undefined1 *)(param_1 + 0x66) = 0;
    uVar1 = *(undefined8 *)(PTR_Asn1ObjectIdentifier_047da7b0 + 8);
    uVar2 = *(undefined4 *)(PTR_Asn1ObjectIdentifier_047da7b0 + 0xf);
    *(undefined8 *)((long)param_1 + 0xcd) = *(undefined8 *)PTR_Asn1ObjectIdentifier_047da7b0;
    *(undefined8 *)((long)param_1 + 0xd5) = uVar1;
    *(undefined4 *)(param_1 + 0x6e) = uVar2;
    nn::crypto::detail::Sha256Impl::GetHash(aSStack_e0,(ulong)(param_1 + 0x70));
    uVar3 = nn::crypto::detail::BigNum::ModExp
                      (aBStack_320,param_1,(BigNum *)param_1,(ulong)aBStack_200,(uint *)0x100,
                       param_6);
    if ((uVar3 & 1) == 0) {
      memset(param_1,0,0x100);
    }
    else {
      local_68 = 2;
    }
  }
  nn::crypto::detail::Sha256Impl::~Sha256Impl(aSStack_e0);
  nn::crypto::detail::BigNum::Cleanse();
  nn::crypto::detail::BigNum::~BigNum(aBStack_200);
  nn::crypto::detail::BigNum::~BigNum(aBStack_320);
  return;
}


