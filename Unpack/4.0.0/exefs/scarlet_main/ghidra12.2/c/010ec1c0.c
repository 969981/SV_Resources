/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ec1c0; name: thunk_FUN_008b4520
 */


undefined8
thunk_FUN_008b4520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [48];
  
  lVar1 = FUN_00896ecc();
  uVar2 = FUN_00896ecc();
  FUN_0089a624(auStack_70,auStack_70 + -(lVar1 + 0xfU & 0xfffffffffffffff0),uVar2);
  FUN_00898348(auStack_70);
  FUN_008982c8(auStack_70,param_4,0);
  uVar2 = (**(code **)(**(long **)PTR_DAT_047d2138 + 0x20))
                    (*(long **)PTR_DAT_047d2138,param_1,param_2,param_3,param_4,auStack_70);
  uVar3 = FUN_008983b0(auStack_70);
  FUN_008983e0(param_4,uVar3);
  FUN_008986d0(auStack_70);
  FUN_00896f20(auStack_70,param_3);
  FUN_008970ac(auStack_70);
  FUN_0089a638(auStack_70);
  return uVar2;
}


