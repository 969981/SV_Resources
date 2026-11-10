/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002dead0; name: FUN_002dead0
 */


undefined8 FUN_002dead0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *param_1;
  lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x28);
  if ((uVar1 & 0x808) == 8) {
    if (lVar2 != 0) {
      FUN_002e4418(lVar2,0xc,*param_1);
    }
  }
  else {
    if (lVar2 != 0) {
      FUN_002e4418(lVar2,0x14,uVar1 & 0x3ffe);
    }
    lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (lVar3 != 0) {
      FUN_002e6250(lVar3);
    }
    *(long *)(lVar2 + 0x20) = lVar3;
    FUN_002e626c(lVar3,0,9);
    FUN_002e626c(*(undefined8 *)(lVar2 + 0x20),0xb,param_1[0xb]);
  }
  FUN_002de558(param_1,lVar2);
  return 1;
}


