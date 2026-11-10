/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02968f90; name: FUN_02968f90
 */


undefined8 FUN_02968f90(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0293d690();
  uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,0);
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_0293f790(0), (uVar2 & 1) == 0)) {
    uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,1);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_0293f790(1), (uVar2 & 1) != 0)) {
      return 1;
    }
    uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,2);
    if ((((((((uVar2 & 1) == 0) || (uVar2 = FUN_0293f790(2), (uVar2 & 1) == 0)) &&
           ((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,3), (uVar2 & 1) == 0 ||
            (uVar2 = FUN_0293f790(3), (uVar2 & 1) == 0)))) &&
          (((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,4), (uVar2 & 1) == 0 ||
            (uVar2 = FUN_0293f790(4), (uVar2 & 1) == 0)) &&
           ((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,5), (uVar2 & 1) == 0 ||
            (uVar2 = FUN_0293f790(5), (uVar2 & 1) == 0)))))) &&
         ((((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,6), (uVar2 & 1) == 0 ||
            (uVar2 = FUN_0293f790(6), (uVar2 & 1) == 0)) &&
           ((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,7), (uVar2 & 1) == 0 ||
            (uVar2 = FUN_0293f790(7), (uVar2 & 1) == 0)))) &&
          ((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,8), (uVar2 & 1) == 0 ||
           (uVar2 = FUN_0293f790(8), (uVar2 & 1) == 0)))))) &&
        ((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,9), (uVar2 & 1) == 0 ||
         (uVar2 = FUN_0293f790(9), (uVar2 & 1) == 0)))) &&
       (((((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,10), (uVar2 & 1) == 0 ||
           (uVar2 = FUN_0293f790(10), (uVar2 & 1) == 0)) &&
          ((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,0xb), (uVar2 & 1) == 0 ||
           (uVar2 = FUN_0293f790(0xb), (uVar2 & 1) == 0)))) &&
         (((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,0xc), (uVar2 & 1) == 0 ||
           (uVar2 = FUN_0293f790(0xc), (uVar2 & 1) == 0)) &&
          (((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,0xd), (uVar2 & 1) == 0 ||
            (uVar2 = FUN_0293f790(0xd), (uVar2 & 1) == 0)) &&
           ((((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,0xe), (uVar2 & 1) == 0 ||
              (uVar2 = FUN_0293f790(0xe), (uVar2 & 1) == 0)) &&
             ((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,0xf), (uVar2 & 1) == 0 ||
              (uVar2 = FUN_0293f790(0xf), (uVar2 & 1) == 0)))) &&
            ((((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,0x10), (uVar2 & 1) == 0
               || (uVar2 = FUN_0293f790(0x10), (uVar2 & 1) == 0)) || ((param_3 & 1) == 0)) &&
             ((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,0x11), (uVar2 & 1) == 0 ||
              (uVar2 = FUN_0293f790(0x11), (uVar2 & 1) == 0)))))))))))) &&
        ((uVar2 = FUN_0294dda0(*(undefined8 *)(param_1 + 0x38),uVar1,0x12), (uVar2 & 1) == 0 ||
         (uVar2 = FUN_0293f790(0x12), (uVar2 & 1) == 0)))))) {
      return 0;
    }
  }
  return 1;
}


