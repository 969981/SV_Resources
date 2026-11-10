/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040c350; name: FUN_0040c350
 */


undefined8 FUN_0040c350(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    uVar2 = 0;
    if (lVar1 != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 == 0) {
        lVar3 = FUN_0040cf10();
        *(long *)(param_1 + 0x20) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        lVar1 = *(long *)(param_1 + 0x18);
      }
      uVar2 = FUN_0040f9d0(lVar1,lVar3,param_2,param_3,param_4);
      if ((int)uVar2 != 0) {
        if ((*(byte *)**(undefined8 **)(param_1 + 0x18) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x34) = *param_2 & 0xfe;
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


