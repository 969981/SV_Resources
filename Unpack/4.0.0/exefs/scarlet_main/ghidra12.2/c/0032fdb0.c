/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032fdb0; name: FUN_0032fdb0
 */


undefined8 FUN_0032fdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  undefined8 *puVar4;
  
  if (DAT_047ef4b8 == (long *)0x0) {
    DAT_047ef4b8 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (DAT_047ef4b8 != (long *)0x0) {
      *DAT_047ef4b8 = 0;
      DAT_047ef4b8[1] = 0;
      DAT_047ef4b8[2] = 0;
    }
    puVar2 = (undefined8 *)*DAT_047ef4b8;
    puVar4 = (undefined8 *)DAT_047ef4b8[1];
    if (puVar2 == puVar4) {
      return 0;
    }
  }
  else {
    puVar4 = (undefined8 *)DAT_047ef4b8[1];
    puVar2 = (undefined8 *)*DAT_047ef4b8;
    if ((undefined8 *)*DAT_047ef4b8 == puVar4) {
      return 0;
    }
  }
  do {
    puVar3 = puVar2 + 1;
    uVar1 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,param_1,param_2,param_3,param_4);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    puVar2 = puVar3;
  } while (puVar4 != puVar3);
  return 0;
}


