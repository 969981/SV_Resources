/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045bce0; name: FUN_0045bce0
 */


undefined * FUN_0045bce0(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [16];
  uint local_38;
  undefined4 local_20 [2];
  undefined1 *local_18;
  
  if (0x4aa < param_1) {
    if (DAT_047f19f0 == 0) {
      return (undefined *)0x0;
    }
    local_20[0] = 3;
    local_18 = auStack_48;
    local_38 = param_1;
    lVar1 = FUN_00451a40(DAT_047f19f0,local_20);
    if (lVar1 != 0) {
      return (undefined *)**(undefined8 **)(lVar1 + 8);
    }
    uVar2 = 0x10c;
LAB_0045bda8:
    FUN_004806c0(8,0x68,0x65,"external/openssl/crypto/objects/obj_dat.c",uVar2);
    return (undefined *)0x0;
  }
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(&DAT_044aa1d8 + (ulong)param_1 * 0x28) == 0) {
      uVar2 = 0xfe;
      goto LAB_0045bda8;
    }
    uVar3 = (ulong)param_1;
  }
  return (&PTR_s_UNDEF_044aa1c8)[uVar3 * 5];
}


