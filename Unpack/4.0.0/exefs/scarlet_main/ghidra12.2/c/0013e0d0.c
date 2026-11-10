/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013e0d0; name: FUN_0013e0d0
 */


void FUN_0013e0d0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x30);
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  puVar1[2] = *param_3;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_3 + 1);
  puVar1[4] = *param_4;
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_4 + 1);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x30;
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x3e) & 10) == 0) {
    FUN_00127d10(param_1,puVar1,1);
  }
  else {
    FUN_00127da0();
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + (param_5 - lVar2));
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar2 + -0x10;
  *puVar1 = *(undefined8 *)(lVar2 + -0x10);
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(lVar2 + -8);
  return;
}


