/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012bd6c4; name: FUN_012bd6c4
 */


void FUN_012bd6c4(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_DAT_047ddf68;
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x30) + 0x70);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = puVar4[1];
    uVar5 = puVar4[2];
    uVar2 = *(undefined4 *)(puVar4 + 3);
    *(undefined8 *)PTR_DAT_047ddf68 = *puVar4;
    *(undefined8 *)(puVar3 + 8) = uVar1;
    *(undefined8 *)(puVar3 + 0x10) = uVar5;
    *(undefined4 *)(puVar3 + 0x18) = uVar2;
  }
  return;
}


