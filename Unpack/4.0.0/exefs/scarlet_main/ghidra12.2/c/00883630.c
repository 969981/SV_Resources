/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00883630; name: _INIT_113
 */


void _INIT_113(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_DAT_047d1e80;
  *(undefined4 *)(PTR_DAT_047d1e80 + 0x10) = 0x1fb;
  puVar1 = PTR_LAB_047d1e90;
  *(undefined **)(puVar2 + 0x18) = PTR_LAB_047d1e88;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  puVar1 = PTR_DAT_047d1da8;
  *(undefined8 *)puVar2 = *(undefined8 *)PTR_DAT_047d1da8;
  *(undefined8 *)(puVar2 + 8) = 7;
  puVar4 = PTR_LAB_047d1ea0;
  puVar3 = PTR_LAB_047d1e98;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined8 *)(puVar2 + 0x68) = 0;
  *(undefined **)(puVar2 + 0x38) = puVar3;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined **)puVar1 = puVar2;
  *(undefined **)(puVar2 + 0x48) = puVar4;
  *(undefined8 *)(puVar2 + 0x50) = 0;
  *(undefined8 *)(puVar2 + 0x58) = 0;
  *(undefined8 *)(puVar2 + 0x60) = 0;
  return;
}


