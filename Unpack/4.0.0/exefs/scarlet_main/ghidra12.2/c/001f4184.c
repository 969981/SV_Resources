/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4184; name: FUN_001f4184
 */


undefined8 FUN_001f4184(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_001f45a0(param_3,0x30);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    lVar2 = *param_1;
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    uVar3 = FUN_001f3fe0((undefined8 *)(lVar2 + 8),param_2,param_3);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    FUN_001f45b0(param_3,*param_1);
  }
  return 0xfffffc7b;
}


