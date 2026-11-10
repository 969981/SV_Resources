/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003da7f0; name: FUN_003da7f0
 */


undefined8 FUN_003da7f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x660);
  if (lVar4 == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x938) = 0;
  *(undefined8 *)(param_1 + 0x930) = 0;
  *(undefined8 *)(param_1 + 0x928) = 0;
  *(undefined8 *)(param_1 + 0x920) = 0;
  *(undefined8 *)(param_1 + 0x918) = 0;
  *(undefined8 *)(param_1 + 0x910) = 0;
  *(undefined8 *)(param_1 + 0x908) = 0;
  *(undefined8 *)(param_1 + 0x900) = 0;
  *(undefined8 *)(param_1 + 0x8f8) = 0;
  *(undefined8 *)(param_1 + 0x8f0) = 0;
  *(undefined8 *)(param_1 + 0x8e8) = 0;
  *(undefined8 *)(param_1 + 0x8e0) = 0;
  uVar2 = *(undefined8 *)(lVar4 + 0x2c8);
  *(undefined8 *)(param_1 + 0x8c8) = *(undefined8 *)(lVar4 + 0x2d0);
  *(undefined8 *)(param_1 + 0x8c0) = uVar2;
  uVar2 = *(undefined8 *)(lVar4 + 0x2d8);
  *(undefined8 *)(param_1 + 0x8d8) = *(undefined8 *)(lVar4 + 0x2e0);
  *(undefined8 *)(param_1 + 0x8d0) = uVar2;
  *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(lVar4 + 0x338);
  if (*(long *)(lVar4 + 0x2f0) != 0) {
    lVar1 = FUN_003eb7a0();
    *(long *)(param_1 + 0x8e8) = lVar1;
    if (lVar1 != 0) goto LAB_003da854;
LAB_003da938:
    uVar3 = 0x62;
    uVar2 = 3;
LAB_003da950:
    FUN_004806c0(0x14,0x139,uVar2,"external/openssl/ssl/tls_srp.c",uVar3);
    FUN_00452f80(*(undefined8 *)(param_1 + 0x8e0),"external/openssl/ssl/tls_srp.c",0x73);
    FUN_00452f80(*(undefined8 *)(param_1 + 0x928),"external/openssl/ssl/tls_srp.c",0x74);
    FUN_003eb520(*(undefined8 *)(param_1 + 0x8e8));
    FUN_003eb520(*(undefined8 *)(param_1 + 0x8f0));
    FUN_003eb520(*(undefined8 *)(param_1 + 0x8f8));
    FUN_003eb520(*(undefined8 *)(param_1 + 0x900));
    FUN_003eb520(*(undefined8 *)(param_1 + 0x908));
    FUN_003eb520(*(undefined8 *)(param_1 + 0x910));
    FUN_003eb520(*(undefined8 *)(param_1 + 0x918));
    FUN_003eb520(*(undefined8 *)(param_1 + 0x920));
    *(undefined8 *)(param_1 + 0x928) = 0;
    *(undefined8 *)(param_1 + 0x920) = 0;
    *(undefined8 *)(param_1 + 0x938) = 0;
    *(undefined8 *)(param_1 + 0x930) = 0;
    *(undefined8 *)(param_1 + 0x908) = 0;
    *(undefined8 *)(param_1 + 0x900) = 0;
    *(undefined8 *)(param_1 + 0x918) = 0;
    *(undefined8 *)(param_1 + 0x910) = 0;
    *(undefined8 *)(param_1 + 0x8e8) = 0;
    *(undefined8 *)(param_1 + 0x8e0) = 0;
    *(undefined8 *)(param_1 + 0x8f8) = 0;
    *(undefined8 *)(param_1 + 0x8f0) = 0;
    *(undefined8 *)(param_1 + 0x8c8) = 0;
    *(undefined8 *)(param_1 + 0x8c0) = 0;
    *(undefined8 *)(param_1 + 0x8d8) = 0;
    *(undefined8 *)(param_1 + 0x8d0) = 0;
    return 0;
  }
LAB_003da854:
  if (*(long *)(lVar4 + 0x2f8) != 0) {
    lVar1 = FUN_003eb7a0();
    *(long *)(param_1 + 0x8f0) = lVar1;
    if (lVar1 == 0) goto LAB_003da938;
  }
  if (*(long *)(lVar4 + 0x300) != 0) {
    lVar1 = FUN_003eb7a0();
    *(long *)(param_1 + 0x8f8) = lVar1;
    if (lVar1 == 0) goto LAB_003da938;
  }
  if (*(long *)(lVar4 + 0x308) != 0) {
    lVar1 = FUN_003eb7a0();
    *(long *)(param_1 + 0x900) = lVar1;
    if (lVar1 == 0) goto LAB_003da938;
  }
  if (*(long *)(lVar4 + 0x310) != 0) {
    lVar1 = FUN_003eb7a0();
    *(long *)(param_1 + 0x908) = lVar1;
    if (lVar1 == 0) goto LAB_003da938;
  }
  if (*(long *)(lVar4 + 0x318) != 0) {
    lVar1 = FUN_003eb7a0();
    *(long *)(param_1 + 0x910) = lVar1;
    if (lVar1 == 0) goto LAB_003da938;
  }
  if (*(long *)(lVar4 + 0x328) != 0) {
    lVar1 = FUN_003eb7a0();
    *(long *)(param_1 + 0x920) = lVar1;
    if (lVar1 == 0) goto LAB_003da938;
  }
  if (*(long *)(lVar4 + 800) != 0) {
    lVar1 = FUN_003eb7a0();
    *(long *)(param_1 + 0x918) = lVar1;
    if (lVar1 == 0) goto LAB_003da938;
  }
  if (*(long *)(lVar4 + 0x2e8) != 0) {
    lVar1 = FUN_0045abd0(*(long *)(lVar4 + 0x2e8),"external/openssl/ssl/tls_srp.c",0x66);
    *(long *)(param_1 + 0x8e0) = lVar1;
    if (lVar1 == 0) {
      uVar2 = 0x44;
      uVar3 = 0x67;
      goto LAB_003da950;
    }
  }
  if (*(long *)(lVar4 + 0x330) != 0) {
    lVar1 = FUN_0045abd0(*(long *)(lVar4 + 0x330),"external/openssl/ssl/tls_srp.c",0x6b);
    *(long *)(param_1 + 0x928) = lVar1;
    if (lVar1 == 0) {
      uVar2 = 0x44;
      uVar3 = 0x6c;
      goto LAB_003da950;
    }
  }
  *(undefined8 *)(param_1 + 0x938) = *(undefined8 *)(lVar4 + 0x340);
  return 1;
}


