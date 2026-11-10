/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00523054; name: FUN_00523054
 */


undefined8 FUN_00523054(long *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  auVar4 = FUN_00524ad8();
  puVar1 = auVar4._0_8_;
  puVar1[2] = param_4;
  if ((auVar4._8_8_ & 0xff) == 0) goto LAB_005230d0;
  *(undefined1 *)(puVar1 + 1) = param_3;
  *(undefined1 *)((long)puVar1 + 9) = 0;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar2 != (undefined8 *)0x0) goto LAB_005230c4;
  }
  else {
    if (*(long *)(lVar3 + 0x70) != 0) {
      FUN_00520d08(lVar3,0,0x18);
    }
    puVar2 = (undefined8 *)FUN_00520544(lVar3,0x18,PTR_LAB_047cba90);
LAB_005230c4:
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  *puVar1 = puVar2;
LAB_005230d0:
  *(byte *)((long)puVar1 + 10) = *(byte *)((long)puVar1 + 10) & 0xf0;
  return *puVar1;
}


