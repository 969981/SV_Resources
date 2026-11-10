/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047dcf0; name: FUN_0047dcf0
 */


int * FUN_0047dcf0(undefined8 param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  
  piVar1 = (int *)FUN_00452ce0(0x20,"external/openssl/crypto/stack/stack.c",0xd1);
  if ((piVar1 != (int *)0x0) && (*(undefined8 *)(piVar1 + 6) = param_1, 0 < param_2)) {
    if (param_2 <= 0x7fffffff - *piVar1) {
      uVar3 = *piVar1 + param_2;
      if ((int)uVar3 < 5) {
        uVar3 = 4;
      }
      if (*(long *)(piVar1 + 2) == 0) {
        lVar2 = FUN_00452ce0((ulong)uVar3 << 3,"external/openssl/crypto/stack/stack.c",0xb4);
        *(long *)(piVar1 + 2) = lVar2;
        if (lVar2 != 0) goto LAB_0047dde0;
        FUN_004806c0(0xf,0x81,0x41,"external/openssl/crypto/stack/stack.c",0xb5);
      }
      else {
        if (uVar3 == piVar1[5]) {
          return piVar1;
        }
        lVar2 = FUN_00452db0(*(long *)(piVar1 + 2),(ulong)uVar3 << 3,
                             "external/openssl/crypto/stack/stack.c",0xc6);
        if (lVar2 != 0) {
          *(long *)(piVar1 + 2) = lVar2;
LAB_0047dde0:
          piVar1[5] = uVar3;
          return piVar1;
        }
      }
    }
    FUN_00452f80(*(undefined8 *)(piVar1 + 2),"external/openssl/crypto/stack/stack.c",0x178);
    FUN_00452f80(piVar1,"external/openssl/crypto/stack/stack.c",0x179);
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


