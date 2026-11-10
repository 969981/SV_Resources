/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00878d60; name: _INIT_112
 */


void _INIT_112(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_LAB_047d1da0;
  puVar2 = PTR_LAB_047d1d98;
  puVar1 = PTR_DAT_047d1d90;
  *(undefined4 *)(PTR_DAT_047d1d90 + 0x10) = 0xba;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  *(undefined **)(puVar1 + 0x20) = puVar3;
  puVar2 = PTR_DAT_047d1da8;
  uVar4 = *(undefined8 *)PTR_DAT_047d1da8;
  *(undefined8 *)(puVar1 + 0x28) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(undefined1 **)(puVar1 + 0x38) = &LAB_00874ab0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x68) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x50) = 0;
  *(undefined **)puVar2 = puVar1;
  *(undefined8 *)puVar1 = uVar4;
  *(undefined8 *)(puVar1 + 8) = 3;
  *(undefined8 *)(puVar1 + 0x58) = 0;
  *(undefined8 *)(puVar1 + 0x60) = 0;
  return;
}


