/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032180; name: _INIT_584
 */


void _INIT_584(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar4 = PTR_DAT_047e4c20;
  puVar3 = PTR_DAT_047e4c18;
  puVar2 = PTR_DAT_047e4c10;
  puVar1 = PTR_DAT_047d3888;
  if ((*PTR_DAT_047e4c10 & 1) == 0) {
    *(undefined8 *)(PTR_DAT_047e4c18 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    uVar5 = *(ulong *)puVar1;
    *(undefined **)puVar1 = puVar3;
    *(undefined8 *)puVar2 = 1;
    *(ulong *)puVar3 = uVar5 & 0xfffffffffffffffc;
    *(undefined **)(puVar3 + 8) = puVar4;
  }
  return;
}


