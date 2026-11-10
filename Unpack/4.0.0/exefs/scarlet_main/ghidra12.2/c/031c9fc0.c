/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c9fc0; name: _INIT_1572
 */


void _INIT_1572(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar4 = PTR_DAT_047e59d8;
  puVar3 = PTR_DAT_047e59d0;
  puVar2 = PTR_DAT_047e59c8;
  puVar1 = PTR_DAT_047d3888;
  if ((*PTR_DAT_047e59c8 & 1) == 0) {
    *(undefined8 *)(PTR_DAT_047e59d0 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    uVar5 = *(ulong *)puVar1;
    *(undefined **)puVar1 = puVar3;
    *(undefined8 *)puVar2 = 1;
    *(ulong *)puVar3 = uVar5 & 0xfffffffffffffffc;
    *(undefined **)(puVar3 + 8) = puVar4;
  }
  return;
}


