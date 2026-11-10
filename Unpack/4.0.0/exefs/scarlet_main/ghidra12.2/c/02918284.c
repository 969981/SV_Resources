/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02918284; name: FUN_02918284
 */


undefined8 FUN_02918284(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x16c);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
     (uVar3 & 1) != 0)) {
    return 0xfffffffe;
  }
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar5 = (uint)uVar1;
  if (uVar1 < 0x212) {
    if (uVar5 == 0xf7 || uVar1 < 0xf7) {
      if (((uVar5 != 0x8e) && (uVar5 != 0x9d)) && (uVar5 != 0xe6)) goto LAB_0291839c;
    }
    else if (((0x3e < uVar5 - 0x1a7) ||
             ((1L << ((ulong)(uVar5 - 0x1a7) & 0x3f) & 0x4001002000400001U) == 0)) &&
            ((uVar5 != 0xf8 && (uVar5 != 0x17e)))) goto LAB_0291839c;
  }
  else if (((0x35 < uVar5 - 0x251) ||
           ((1L << ((ulong)(uVar5 - 0x251) & 0x3f) & 0x20500000090001U) == 0)) && (uVar5 != 0x212))
  goto LAB_0291839c;
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32);
  if ((uVar3 & 1) != 0) {
    return 2;
  }
LAB_0291839c:
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xbc));
  if ((((((((((uVar2 == 0x268) || (uVar1 == 0x268)) || (uVar2 == 0x267)) ||
           ((uVar1 == 0x267 || (uVar2 == 0x266)))) ||
          ((uVar1 == 0x266 || ((uVar2 == 0x25d || (uVar1 == 0x25d)))))) ||
         ((uVar2 == 0x24f ||
          ((((((uVar1 == 0x24f || (uVar2 == 0x24a)) || (uVar1 == 0x24a)) ||
             (((uVar2 == 0x23c || (uVar1 == 0x23c)) ||
              ((uVar2 == 0x23a || ((uVar1 == 0x23a || (uVar2 == 0x22b)))))))) || (uVar1 == 0x22b))
           || (((uVar2 == 0x225 || (uVar1 == 0x225)) || (uVar2 == 0x223)))))))) ||
        (((uVar1 == 0x223 || (uVar2 == 0x221)) ||
         (((uVar1 == 0x221 || ((uVar2 == 0x1e5 || (uVar1 == 0x1e5)))) || (uVar2 == 0x1e2)))))) ||
       (((((((uVar1 == 0x1e2 || (uVar2 == 0x1b4)) || (uVar1 == 0x1b4)) ||
           ((uVar2 == 0x1b3 || (uVar1 == 0x1b3)))) || (uVar2 == 0x14a)) ||
         (((uVar1 == 0x14a || (uVar2 == 0x143)) ||
          ((uVar1 == 0x143 || (((uVar2 == 0x130 || (uVar1 == 0x130)) || (uVar2 == 0x101)))))))) ||
        ((uVar1 == 0x101 || (uVar2 == 0x9d)))))) ||
      ((uVar1 == 0x9d ||
       (((uVar2 == 0x59 || (uVar1 == 0x59)) ||
        (((uVar1 & 0xfffd) == 0x39 || ((uVar2 & 0xfffd) == 0x39)))))))) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32),
     (uVar3 & 1) != 0)) {
    return 2;
  }
  uVar4 = FUN_02916d24(param_1);
  return uVar4;
}


